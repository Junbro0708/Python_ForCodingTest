#include <iostream>

using namespace std;

int main(){
  int N, M;
  int max = -1, cnt = 0;
  cin >> N >> M;

  for(int i = 0; i < N; ++i){
    int temp;
    cin >> temp;

    if(temp > M){
      cnt++;
      if(cnt > max) max = cnt;
    }else{
      if(cnt != 0) cnt = 0;
    }
  }
  cout << max << "\n";
  return 0;
}