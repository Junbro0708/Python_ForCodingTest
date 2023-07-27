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
    for(int j = M; j >= ps; --j){
      dt[j] = max(dt[j - ps] + pt, dt[j]);
    }
  }

  cout << dt[M];
  return 0;
}

/*
4 7
6 13
4 8
3 6
5 12
*/