#include <iostream>

using namespace std;

int main(){
  int N, cnt = 0;
  cin >> N;

  for(int i = 2; i <= N; ++i){
    bool flag = true;
    for(int j = 2; j * j <= i; ++j){
      if(i % j == 0){
        flag = false;
        break;
      }
    }
    if(flag) cnt++;
  }
  cout << cnt;
  return 0;
}