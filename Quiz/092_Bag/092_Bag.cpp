#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int N, M;
  cin >> N >> M;

  vector<int> dt(M+1, 0);
  for(int i = 1; i <= N; ++i){
    int w, v;
    cin >> w >> v;

    for(int j = w; j <= M; ++j){
      int sum = dt[j - w] + v;
      if(dt[j] < sum) dt[j] = sum;
    }
  }

  cout << dt[M];
  return 0;
}

/*
4 11
5 12
3 8
6 14
4 8
*/