#include <iostream>

using namespace std;

int digits[10];

int main(){
  int max = 0, num = 0;
  string str;
  cin >> str;

  for(int i = 0; i < str.length(); ++i){
    digits[int(str[i])-48]+=1;
  }
  for(int i = 0; i < 10; ++i){
    if(max <= digits[i]){
      max = digits[i];
      num = i;
    }
  }
  cout << num;
  return 0;
}