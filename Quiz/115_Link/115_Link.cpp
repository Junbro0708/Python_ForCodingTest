#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, min_ = 2147000000;
int arr[21][21];
bool check[21];

void dfs(int v, int cnt){
  if(cnt == N / 2){
    int start = 0, link = 0;
    for(int x = 1; x <= N; ++x){
      for(int y = 1; y <= N; ++y){
        if(check[x] && check[y]){
          start += arr[x][y];
        }
        if(!check[x] && !check[y]){
          link += arr[x][y];
        }
      }
    }
    min_ = min (min_, abs(start - link));
    return;
  }else{
    for(int i = v; i <= N; ++i){
      check[i] = true;
      dfs(i + 1, cnt + 1);
      check[i] = false;
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> N;

  for(int i = 1; i <= N; ++i){
    for(int j = 1; j <= N; ++j){
      cin >> arr[i][j];
    }
  }

  dfs(1, 0);

  cout << min_;
  return 0;
}