#include <iostream>

using namespace std;

int main(){
  string str, answer = "";

  getline(cin, str);

  for(int i = 0; i < str.length(); ++i){
    char temp;
    if(str[i] >= 65 && str[i] <= 90){
      temp = str[i] + 32;
      answer += temp;
    }else if(str[i] >= 97 && str[i] <= 122){
      answer += str[i];
    }
  }

  cout << answer;
}