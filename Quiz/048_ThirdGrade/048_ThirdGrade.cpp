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

  for(int i = 0; i < N - 1; ++i){
    int temp = i;
    for(int j = i + 1; j < N; ++j){
      if(list[temp] < list[j])
        temp = j;
    }
    int num = list[temp];
    list[temp] = list[i];
    list[i] = num;
  }

  int cnt = 0;
  for(int i = 1; i < N; ++i){
    if(list[i - 1] != list[i]){
      cnt++;
    }
    if(cnt == 2){
      cout << list[i] << "\n";
      break;
    }
  }
  return 0;
}