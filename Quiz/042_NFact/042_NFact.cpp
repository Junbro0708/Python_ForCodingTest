#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> list(N + 1, 0);

  for(int i = 2; i <= N; ++i){
    int temp = i, num = 2;
    while(temp > 1){
      if(temp % num == 0){
        list[num]++;
        temp /= num;
      }else{
        num++;
      }
    }
  }

  cout << N << "! = ";
  for(int i = 0; i < list.size(); ++i){
    if(list[i] != 0) cout << list[i] << " ";
  }
  return 0;
}