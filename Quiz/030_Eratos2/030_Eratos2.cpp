#include <iostream>

#define NUM 1000001

using namespace std;

bool nums[NUM];

int main(){
  int M, N;
  cin >> M >> N;

  for(int i = 2; i <= N; ++i){
    nums[i] = true;
  }

  for(int i = 2; i*i <= N; ++i){
    if(nums[i]){
      for(int j = i*i; j <= N; j+=i){
        nums[j] = false;
      }
    }
  }

  for(int i = M; i <= N; ++i){
    if(nums[i]) cout << i << "\n";
  }
  return 0;
}