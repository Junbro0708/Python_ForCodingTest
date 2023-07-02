#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> list(N);
  for(int i = 0; i < N; ++i)
    cin >> list[i];
  
  for(int i = 0; i < N; ++i){
    int idx = i;
    for(int j = i + 1; j < N; ++j){
      if(list[idx] > list[j]){
        idx = j;
      }
    }
    if(idx != i){
      int temp = list[idx];
      list[idx] = list[i];
      list[i] = temp;
    }
  }

  for(int i = 0; i < N; ++i){
    cout << list[i] << " ";
  }
  return 0;
}