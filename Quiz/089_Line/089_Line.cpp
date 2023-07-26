#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, answer = 0;
  cin >> N;

  vector<int> list(N+1), dy(N+1);
  for(int i = 1; i <= N; ++i)
    cin >> list[i];

  dy[1] = 1;
  for(int i = 2; i <= N; ++i){
    int max = 0;
    for(int j = i - 1; j >= 1; --j){
      if(list[i] > list[j] && max < dy[j]){
        max = dy[j];
      }
    }
    dy[i] = max + 1;
    if(answer < max + 1) answer = max + 1;
  }
  cout << answer;
  return 0;
}