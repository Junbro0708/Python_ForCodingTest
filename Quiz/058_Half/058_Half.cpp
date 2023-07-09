#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main(){
  int N, M;
  cin >> N >> M;

  vector<int> nums(N);
  for(int i = 0; i < N; ++i)
    cin >> nums[i];

  sort(nums.begin(), nums.end());

  int start = 0, end = N - 1;
  while(start<=end){
    int idx = (start + end) / 2;
    if(nums[idx] == M){
      cout << idx + 1 << "\n";
      return 0;
    }else if(nums[idx] > M){
      end = idx - 1;
    }else{
      start = idx + 1;
    }
  }
  return 0;
}