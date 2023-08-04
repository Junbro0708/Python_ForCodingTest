#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int N, min_ = 2147000000, max_ = -2147000000;
vector<int> nums;
int oper[4];

void dfs(int idx, int answer){
  if(idx == N - 1){
    min_ = min(min_, answer);
    max_ = max(max_, answer);
    return;
  }else{
    for(int i = 0; i < 4; ++i){
      if(oper[i] != 0){
        switch(i){
          case 0:
            oper[i]--;
            dfs(idx + 1, answer + nums[idx + 1]);
            oper[i]++;
            break;
          case 1:
            oper[i]--;
            dfs(idx + 1, answer - nums[idx + 1]);
            oper[i]++;
            break;
          case 2:
            oper[i]--;
            dfs(idx + 1, answer * nums[idx + 1]);
            oper[i]++;
            break;
          case 3:
            oper[i]--;
            dfs(idx + 1, answer / nums[idx + 1]);
            oper[i]++;
            break;
        }
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> N;
  for(int i = 0; i < N; ++i){
    int temp;
    cin >> temp;
    nums.push_back(temp);
  }

  for(int i = 0; i < 4; ++i){
    cin >> oper[i];
  }

  dfs(0, nums[0]);

  cout << max_ << "\n" << min_;
  return 0;
}