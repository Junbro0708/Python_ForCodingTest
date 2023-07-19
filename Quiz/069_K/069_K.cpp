#include <stack>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
  int N, K;
  string list ="0123456789ABCDEF";
  cin >> N >> K;

  stack<int> answer;
  while(true){
    int rest;
    rest = N % K;
    answer.push(rest);

    if(N / K == 0) break;
    else N /= K;
  }
  while(!answer.empty()){
    int temp = answer.top();
    cout << list[temp];
    answer.pop();
  }
  return 0;
}