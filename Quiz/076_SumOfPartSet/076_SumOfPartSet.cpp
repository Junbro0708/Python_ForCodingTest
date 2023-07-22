#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool flag = false;
int N;
int arr[11], list[11];
vector<int> sums;

void dfs(int x){
  if(x == N){
    int sum = 0;
    for(int i = 0; i < N; ++i)
      if(arr[i] == 1) sum += list[i];

    if(find(sums.begin(), sums.end(), sum) != sums.end()){
      flag = true;
      return;
    }else{
      sums.push_back(sum);
    }
  }else{
    arr[x] = 1;
    dfs(x+1);
    arr[x] = 0;
    dfs(x+1);
  }
}

int main(){
  cin >> N;

  for(int i = 0; i < N; ++i)
    cin >> list[i];

  dfs(0);
  if(flag) cout << "YES";
  else cout << "NO";
  return 0;
}