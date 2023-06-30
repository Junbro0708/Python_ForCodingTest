#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int N, two = 0, five = 0;
  cin >> N;

  for(int i = 2; i <= N; ++i){
    int temp = i;
    while(1){
      if(temp % 2 == 0 || temp % 5 == 0){
        if(temp % 2 == 0){
          temp /= 2;
          two++;
        }else{
          temp /= 5;
          five++;
        }
      }else{
        break;
      }
    }
  }

  cout << five << "\n";
  return 0;
}