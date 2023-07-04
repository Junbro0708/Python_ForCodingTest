#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> list(N);
  for(int i = 0; i < N; ++i)
    cin >> list[i];

  for(int i = 0; i < N; ++i){
    for(int j = 0; j < N - i - 1; ++j){
      if(list[j] > 0 && list[j+1] < 0){
        int temp = list[j];
        list[j] = list[j+1];
        list[j+1] = temp;
      }
    }
  }

  for(int i = 0; i < N; ++i)
    cout << list[i] << " ";
  return 0;
}