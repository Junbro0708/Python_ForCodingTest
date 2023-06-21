#include <iostream>

using namespace std;

int main(){
  int N, cnt = 1, digit = 9, sum = 0, res = 0;
  cin >> N;

  // for(int i = 1; i <= N; ++i){
  //   cnt += to_string(i).length();
  // }

  // cout << cnt;

  while(sum + digit < N){
    res += (cnt * digit);
    sum += digit;
    digit *= 10;
    cnt++;
  }
  res += (N - sum) * cnt;
  cout << res;
  return 0;
}