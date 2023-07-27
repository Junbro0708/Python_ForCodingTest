#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
  int N, M;
  cin >> N;
  vector<int> coin(N);
  for(int i = 0; i < N; ++i)
    cin >> coin[i];

  cin >> M;
  vector<int> dt(M+1, 500);
  dt[0] = 0;
  for(int i = 0; i < N; ++i){
    for(int j = coin[i]; j <= M; ++j){
      dt[j] = min(dt[j-coin[i]]+1, dt[j]);
    }
  }

  cout << dt[M];
  return 0;
}