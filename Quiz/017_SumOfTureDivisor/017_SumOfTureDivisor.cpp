#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N, answer = 0;
  vector<int> list;

  cin >> N;

  for(int i = 1; i < N; ++i){
    if(N % i == 0) list.push_back(i);
  }

  for(int i = 0; i < list.size(); ++i){
    cout << list[i];
    if(i != list.size() - 1) cout << "+";
    else cout << "=";
    answer += list[i];
  }
  cout << answer;
}