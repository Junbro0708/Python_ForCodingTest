#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int N;
int arr[11];

void dfs(int x){
  if(x == N + 1){
    for(int i = 1; i <= N; ++i){
      if(arr[i] == 1) cout << i << " ";
    }
    cout << "\n";
    return;
  }else{
    arr[x] = 1;
    dfs(x+1);
    arr[x] = 0;
    dfs(x+1);
  }
}

int main(){  
  cin >> N;
  dfs(1);
  return 0;
}