#include <stack>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
  string temp;
  cin >> temp;

  stack<char> list;
  for(int i = 0; i < temp.length(); ++i){
    if(temp[i] == '(')
      list.push(temp[i]);
    else if(temp[i] == ')'){
      if(list.empty()){
        list.push(temp[i]);
        break;
      }
      if(list.top() == '(')
        list.pop();
    }
  }

  if(list.empty()) cout << "YES" << "\n";
  else cout << "NO" << "\n";
  return 0;
}