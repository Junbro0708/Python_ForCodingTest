#include <stack>
#include <iostream>
#include <vector>

using namespace std;

int arr[31];

int main(){
  int N;
  cin >> N;

  for(int i = 0; i < N; ++i){
    cin >> arr[i];
  }

  int curr = 1;
  stack<int> list;
  vector<char> answer;
  for(int i = 0; i < N; ++i){
    list.push(arr[i]);
    answer.push_back('P');

    while(list.top() == curr){
      list.pop();
      answer.push_back('O');
      curr++;

      if(list.empty()) break;
    }
  }

  if(list.empty()) 
    for(int i = 0; i < answer.size(); ++i) 
      cout << answer[i];
  else cout << "impossible";
  return 0;
}