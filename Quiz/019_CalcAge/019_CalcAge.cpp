#include <iostream>

using namespace std;

int main(){
  string str, age = "", gender;
  cin >> str;

  for(int i = 0; i < str.length(); i++){
    if(i == 0 || i == 1) age += str[i];
    if(str[i] == '-') gender = str[i+1];
  }
  
  if(str[7] == '3' || str[7] == '4') cout << 20 - stoi(age) << " ";
  else cout << 100 - stoi(age) + 20 << " ";

  if(gender == "1" || gender == "3") cout << 'M';
  else cout << "W";
}