#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int S, N;
  cin >> S >> N;

  vector<int> list(S), data(N);
  for(int i = 0; i < N; ++i)
    cin >> data[i];
  
  for(int i = 0; i < N; ++i){
    int temp = data[i], pos = -1;
    for(int j = 0; j < S; ++j){
      if(temp == list[j]){
        pos = j;
        break;
      }
    }
    int w;
    if(pos == -1){
      // Cache Miss
      for(w = S - 1; w >= 1; --w){
        list[w] = list[w-1];
      }
      list[0] = temp;
    }else{
      // Cache Hit
      for(w = pos; w >= 1; --w){
        list[w] = list[w-1];
      }
      list[0] = temp;
    }
  }
  for(int i = 0; i < S; ++i)
    cout << list[i] << " ";
  return 0;
}