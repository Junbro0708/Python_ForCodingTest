#include <iostream>

using namespace std;

int main(){
  int cnt = 0;
  string str;
  getline(cin, str);

  for(int i = 0; i < str.length(); i++){
    if((i == 0 || i == str.length() - 1) && str[i] == ' ') continue;
    else if(str[i] == ' ') cnt++;
  }
  
  if(str.length() == 1 && str[0] == ' ') cout << cnt;
  else cout << cnt + 1;
}