#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main(){
  int N, j; 
  cin >> N;

  vector<int> list(N);
  for(int i = 0; i < N; ++i)
    cin >> list[i];

  for(int i = 1; i < N; ++i){
    int temp = list[i];
    for(j = i - 1; j >= 0; --j){
      if(list[j] > temp) list[j+1] = list[j];
      else break;
    }
    list[j+1] = temp;
  }

  for(int i = 0; i < N; ++i)
    cout << list[i] << " ";
  return 0;
}