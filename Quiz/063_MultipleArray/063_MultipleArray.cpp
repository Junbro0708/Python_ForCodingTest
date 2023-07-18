#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int arr[52][52];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
  int N, cnt = 0;
  cin >> N;
  for(int i = 1; i <= N; ++i){
    for(int j = 1; j <= N; ++j){
      cin >> arr[i][j];
    }
  }

  for(int i = 1; i <= N; ++i){
    for(int j = 1; j <= N; ++j){
      int temp = arr[i][j];

      bool flag = true;
      for(int k = 0; k < 4; ++k){
        if(temp < arr[i + dx[k]][j + dy[k]]){
          flag = false;
          break;
        }
      }
      if(flag) cnt++;
    }
  }

  cout << cnt << "\n";
  return 0;
}