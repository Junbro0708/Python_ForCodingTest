#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N, max = 0, cnt = 0;
  cin >> N;

  vector<int> list(N);
  for(int i = 0; i < N; ++i) 
    cin >> list[i];

  for(int i = 0; i < N - 1; ++i){
    if(list[i + 1] - list[i] >= 0){
      cnt++;
    }else{
      if(max < cnt){
        max = cnt;
      }
      cnt = 0;
    }
  }
  cout << max + 1;
  return 0;
}