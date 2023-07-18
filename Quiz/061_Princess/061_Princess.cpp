#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int N, K;
  cin >> N >> K;

  vector<int> list(N);
  int cnt = 0, pos = 0, res = N;
  while(res != 1){
    if(pos > N - 1) pos = 0;

    if(list[pos] == 0){
      cnt++;
      if(cnt == K){
        cnt = 0;
        list[pos] = 1;
        res--;
      }
    }

    pos++;
  }
  for(int i = 0; i < N; ++i)
    if(list[i] == 0) cout << i+1 << "\n";
  return 0;
}