#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int arr[8][52];

int main(){
  int H, W;
  cin >> H >> W;

  for(int i = 1; i <= H; ++i){
    for(int j = 1; j <= W; ++j){
      cin >> arr[i][j];
    }
  }

  int N, M, max = 0;
  cin >> N >> M;
  for(int i = 1; i <= H - N; ++i){
    for(int j = 1; j <= W - M; ++j){
      int temp = 0;
      for(int k = i; k < i + N; ++k){
        for(int x = j; x < j + M; ++x){
          temp += arr[k][x];
        }
      }
      if(max < temp) max = temp;
    }
  }
  cout << max;
  return 0;
}