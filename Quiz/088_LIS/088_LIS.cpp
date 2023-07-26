#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

#define NUM 101

int answer = 0;
int arr[NUM], dy[NUM];

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int N;
  cin >> N;

  for(int i = 1; i <= N; ++i){
    cin >> arr[i];
  }

  dy[1] = 1;
  for(int i = 2; i <= N; ++i){
    int max = 0;
    for(int j = i-1; j >= 1; --j){
      if(arr[i] > arr[j]){
        if(max < dy[j]) max = dy[j];
      }
    }
    dy[i] = max + 1;
    if(answer < max + 1) answer = max + 1;
  }

  cout << answer;
  return 0;
}