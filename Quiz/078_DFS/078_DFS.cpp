#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int N, M, cnt = 0;
int arr[21][21];
bool check[21];

void dfs(int x){
  if(x == N){
    cnt++;
  }else{
    for(int i = 1; i <= N; ++i){
      if(arr[x][i] == 1 && check[i] == false){
        check[i] = true;
        dfs(i);
        check[i] = false;
      }
    }
  }
}

int main(){
  cin >> N >> M;

  for(int i = 0; i < M; ++i){
    int temp1, temp2;
    cin >> temp1 >> temp2;
    arr[temp1][temp2] = 1;
  }

  check[1] = true;
  dfs(1);

  cout << cnt;
  return 0;
}

/*
5 9
1 2
1 3
1 4
2 1
2 3
2 5
3 4
4 2
4 5
*/