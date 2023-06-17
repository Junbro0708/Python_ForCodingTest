#include <iostream>

using namespace std;

int main(){
  string str, answer = "";
  cin >> str;

  for(int i = 0; i < str.length(); ++i){
    int temp = str[i];
    if(temp >= 48 && temp <= 57) answer += str[i];
  }

  int num, cnt = 0;
  num = stoi(answer);

  // for(int i = 0; i < num)
  
  cout << num;
}