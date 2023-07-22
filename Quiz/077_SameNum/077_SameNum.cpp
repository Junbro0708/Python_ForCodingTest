#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, M, cnt = 0;
int arr[11];
vector<int> list(11);

void dfs(int x){
  if(x == N + 1){
    int sum = 0;
    for(int i = 1; i <= N; ++i){
      sum += list[i] * arr[i];
    }
    if(sum == M){
      cnt++;
      return;
    }
  }else{
    // 더할 때
    arr[x] = 1;
    dfs(x + 1);
    // 사용하지 않을 때
    arr[x] = 0;
    dfs(x + 1);
    // 뺄 때
    arr[x] = -1;
    dfs(x + 1);
  }
}

int main(){
  cin >> N >> M;

  for(int i = 1 ; i <= N; ++i)
    cin >> list[i];

  dfs(1);

  cout << cnt;
  return 0;
}