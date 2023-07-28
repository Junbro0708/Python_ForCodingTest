#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int arr[21][21];

int dfs(int n, int r){
  if(arr[n][r] != 0) return arr[n][r];
  if(n==r || r==0) return 1;
  else return arr[n][r] = dfs(n-1, r-1) + dfs(n-1, r);
}

int main(){
  int n, r;
  cin >> n >> r;
  cout << dfs(n, r);
  return 0;
}