#include <vector>
#include <iostream>

using namespace std;

int main(){
  int N, cnt = 0;
  cin >> N;

  int lt = N / 10, rt = 0, cur = N % 10, k = 1;
  while(lt != 0){
    if(cur < 3){
      cnt += lt * k;
    }else if(cur == 3){
      cnt += (lt * k) + (rt + 1);
    }else{
      cnt += (lt + 1) * k;
    }
    rt = rt + (k * cur);
    k *= 10;
    cur = lt % 10;
    lt /= 10;
  }
  cout << cnt << "\n";
  return 0;
}