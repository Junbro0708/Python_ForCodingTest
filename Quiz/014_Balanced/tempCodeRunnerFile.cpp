#include <iostream>
#include <stack>

using namespace std;

int main(){
  while(true){
    stack<char> list;
    string str;
    bool flag = true;

    getline(cin, str);
    if(str == ".") break;

    for(int i = 0; i < str.length(); ++i){
      if(str[i] == '(' || str[i] == '['){
        list.push(str[i]);
      }

      if(str[i] == ')'){
        if(list.empty() || list.top() != '(') flag != flag;
        else list.pop();
      }
      if(str[i] == ']'){
        if(list.empty() || list.top() != '[') flag != flag;
        else list.pop();
      }
    }

    if(list.empty() && flag) cout << "yes" << "\n";
    else cout << "no" << "\n";
    cout << str << "\n";
  }
}