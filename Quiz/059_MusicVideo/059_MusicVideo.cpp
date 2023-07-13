#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int N, M;
  cin >> N >> M;

  vector<int> list(N);
  for(int i = 0; i < N; ++i)
    cin >> list[i];

  int answer = N*(N+1)/2;
  int start = 0, end = N*(N+1)/2;
  while(start < end){
    cout << "start : " << start << " end : " << end << "\n";
    int mid = (start + end) / 2;

    int temp = M, sum = 0;
    for(int i = 0; i < N-1; ++i){
      sum += list[i];

      if(sum + list[i+1] > mid){
        if(i+1 == N-1) temp -= 2;
        else temp--;
        sum = 0;
      }
    }
    if(temp < 0){
      start = mid + 1;
    }else{
      if(mid < answer) answer = mid;
      end = mid - 1;
    }
  }
  cout << answer << "\n";
  return 0;
}