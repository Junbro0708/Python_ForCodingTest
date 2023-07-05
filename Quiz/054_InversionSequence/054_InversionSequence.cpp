#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> answer(N), nums(N);
  for(int i = 0; i < N; ++i)
    cin >> nums[i];

  for(int i = N - 1; i >= 0; --i){
    int cnt = nums[i];
    answer[i] = i + 1;
    for(int j = i; j < N - 1; ++j){
      if(cnt > 0){
        int temp = answer[j];
        answer[j] = answer[j + 1];
        answer[j+1] = temp;
        cnt--;
      }else break;
    }
  }
  for(int i = 0; i < N; ++i)
    cout << answer[i] << " ";
  return 0;
}              