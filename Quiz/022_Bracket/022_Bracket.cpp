#include <stack>
#include <iostream>

using namespace std;

int main(){
  stack<int> list;
  string str;

  cin >> str;

  for(int i = 0; i < str.length(); ++i){
    if(str[i] == '(') list.push(str[i]);
    else if(str[i] == ')'){
      if(list.empty()){
        list.push(str[i]);
        break;
      }else if(list.top() == '(') list.pop();
    }
  }

  if(!list.empty()) cout << "NO";
  else cout << "YES";
  return 0;
}