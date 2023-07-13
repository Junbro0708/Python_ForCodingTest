#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int N, C;
  cin >> N >> C;

  vector<int> list(N);
  for(int i = 0; i < N; ++i)
    cin >> list[i];

  sort(list.begin(), list.end());
  int start = 0, end = list[list.size()-1], answer = 0;
  while(start < end){
    int mid = (end + start) / 2;
    int curr = list[0], temp = C - 1;

    for(int i = 1; i < N; ++i){
      if(list[i] - curr >= mid){
        temp--;
        curr = list[i];
      }
    }
    cout << "start: " << start << " end: " << end << "\n";
    cout << "mid: " << mid << " temp: " << temp << "\n";
    if(temp > 0){
      end = mid;
    }else if(temp == 0){
      if(mid >= answer){
        answer = mid;
      }
      start = mid + 1;
    }else{
      start = mid + 1;
    }
  }
  cout << answer << "\n";
  return 0;
}