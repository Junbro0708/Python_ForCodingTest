#include <iostream>
#include <stack>

using namespace std;

int main(){
  while(true){
    stack<char> list;
    string str;

    getline(cin, str);
    if(str == ".") break;

    // for(int i = 0; i < str.length(); ++i){
    //   if(str[i] == '(' || str[i] == '['){
    //     list.push(str[i]);
    //   }

    //   if(str[i] == ')' || list.top() == '(') list.pop();
    //   else break;

    //   if(str[i] == ']' || list.top() == '[') list.pop();
    //   else break;
    // }

    // if(list.empty()) cout << "yes" << "\n";
    // else cout << "no" << "\n";
    cout << str << "\n";
  }
}