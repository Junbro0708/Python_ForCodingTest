#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N, K, max = -1000;
  cin >> N >> K;
  vector<int> list(N);

  for(int i = 0; i < N; ++i){
    cin >> list[i];
  }

  for(int i = 0; i < N - 1; ++i){
    int temp = list[i] + list[i + 1];
    if(temp > max) max = temp;
  }
  cout << max;
  return 0;
}