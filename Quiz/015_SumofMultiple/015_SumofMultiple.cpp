#include <iostream>

using namespace std;

int main(){
  int answer = 0;
  int N, M;

  cin >> N >> M;

  for(int i = 1; i <= N; ++i){
    if(i % M == 0) answer += i;
  }

  cout << answer << "\n";
}