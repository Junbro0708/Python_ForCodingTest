#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int N, M;
  cin >> N >> M;

  vector<int> dt(M+1, 0);
  for(int i = 0; i < N; ++i){
    int ps, pt;
    cin >> ps >> pt;
    for(int j = M; j >= pt; --j){
      dt[j] = max(dt[j - pt] + ps, dt[j]);
    }
  }

  cout << dt[M];
  return 0;
}

/*
5 20
10 5
25 12
15 8
6 3
7 4
*/