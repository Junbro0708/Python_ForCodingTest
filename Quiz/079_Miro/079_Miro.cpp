#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int N, cnt = 0;
int arr[21][21];
int check[21][21];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y){
  if(x == N && y == N){
    cnt++;
    return;
  }else{
    for(int i = 0; i < 4; ++i){
      int xx = x + dx[i];
      int yy = y + dy[i];
      if(arr[xx][yy] != 1 && xx > 0 && xx < N + 1 && yy > 0 && yy < N + 1 && check[xx][yy] == 0){
        check[xx][yy] = 1;
        dfs(xx, yy);
        check[xx][yy] = 0;
      }
    }
  }
}

int main(){
  cin >> N;
  for(int i = 1; i <= N; ++i){
    for(int j = 1; j <= N; ++j){
      cin >> arr[i][j];
    }
  }

  check[1][1] = 1;
  dfs(1, 1);
  cout << cnt << "\n";
  return 0;
}

/*
0 0 0 0 0 0 0 
0 1 1 1 1 1 0 
0 0 0 1 0 0 0 
1 1 0 1 0 1 1 
1 1 0 0 0 0 1 
1 1 0 1 1 0 0 
1 0 0 0 0 0 0
*/