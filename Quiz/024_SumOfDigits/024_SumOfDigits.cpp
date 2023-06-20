#include <iostream>
#include <vector>

using namespace std;

int digit_sum(int x){
  int nums = 0;
  while(x > 0){
    nums += x % 10;
    x /= 10;
  }
  return nums;
}

int main(){
  int N, max = 0, num = 0;
  vector<int> list;

  cin >> N;

  for(int i = 0; i < N; ++i){
    int temp;
    cin >> temp;
    list.push_back(temp);
  }

  for(int j = 0; j < list.size(); ++j){
    if(digit_sum(list[j]) > max){
      max = digit_sum(list[j]);
      num = list[j];
    }else if(digit_sum(list[j]) > max){
      if(num < list[j]) num = list[j];
    }
  }
  cout << num;
  return 0;
}