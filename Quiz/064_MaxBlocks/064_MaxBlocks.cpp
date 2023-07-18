#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
  int N, cnt = 0;
  cin >> N;

  vector<int> width(N);
  for(int i = 0; i < N; ++i)
    cin >> width[i];

  vector<int> height(N);
  for(int i = 0; i < N; ++i)
    cin >> height[i];

  for(int i = 0; i < N; ++i){
    for(int j = 0; j < N; ++j){
      if(width[i] < height[j])
        cnt += width[i];
      else cnt += height[j];
    }
  }
  cout << cnt << "\n";
  return 0;
}