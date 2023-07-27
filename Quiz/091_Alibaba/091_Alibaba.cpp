#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int arr[21][21];
int dt[21][21];

int main(){
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  for(int i = 1; i <= N; ++i){
    for(int j = 1; j <= N; ++j){
      cin >> arr[i][j];
    }
  }

  dt[1][1] = arr[1][1];
  for(int i = 2; i <= N; ++i) dt[1][i] = dt[1][i-1] + arr[1][i];
  for(int i = 2; i <= N; ++i) dt[i][1] = dt[i-1][1] + arr[i][1];

  for(int i = 2; i <= N; ++i){
    for(int j = 2; j <= N; ++j){
      int min_ = min(dt[i-1][j], dt[i][j-1]);
      dt[i][j] = min_ + arr[i][j];
    }
  }

  cout << dt[N][N];
  return 0;
}

/*
3
3 3 5
2 3 4
6 5 2
*/