#include <vector>
#include <iostream>

using namespace std;

int main(){
  int answer = 0;
  string str;
  cin >> str;

  for(int i = 0; i < str.length(); ++i){
    if(str[i] == 'C'){
      int idx = i + 1, cnt = 1;
      string temp = "";
      while(str[idx] != 'H'){
        temp += str[idx];
        idx++;
      }
      if(temp != "") cnt *= stoi(temp);
      answer += cnt * 12;
    }else if(str[i] == 'H'){
      int idx = i + 1, cnt = 1;
      string temp = "";
      while(str[idx] != '\0'){
        temp += str[idx];
        idx++;
      }
      if(temp != "") cnt *= stoi(temp);
      answer += cnt;
    }
  }
  cout << answer << "\n";
  return 0;
}