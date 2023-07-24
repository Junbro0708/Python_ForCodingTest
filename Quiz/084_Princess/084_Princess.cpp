#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
  int N, K, cnt = 0;
  cin >> N >> K;

  queue<int> list;
  for(int i = 1; i <= N; ++i){
    list.push(i);
  }

  while(list.size() != 1){
    cnt++;
    if(cnt == K){
      list.pop();
      cnt = 0;
    }else{
      int temp = list.front();
      list.pop();
      list.push(temp);
    }
  }

  cout << list.front() << "\n";
  return 0;
}