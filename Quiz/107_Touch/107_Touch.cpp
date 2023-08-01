#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

#define MAX_ 100001
int res[MAX_], check[MAX_];

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, K;
  cin >> N >> K;

  queue<int> map;
  map.push(N);
  check[N] = 1;
  res[N] = 0;

  while(!map.empty()){
    int loc = map.front();
    map.pop();
    if(loc < 0 || loc >= MAX_) continue;
    if(loc == K){
      break;
    }else{
      if(loc-1 < 0 || check[loc-1] != 0 || res[loc-1] != 0) {}
      else{
        map.push(loc-1);
        check[loc-1] = 1;
        res[loc-1] = res[loc] + 1;
      }
      
      if(loc+1 >= MAX_ || check[loc+1] != 0 || res[loc+1] != 0) {}
      else{
        map.push(loc+1);
        check[loc+1] = 1;
        res[loc+1] = res[loc] + 1;
      }

      if(loc*2 >= MAX_ || check[loc*2] != 0 || res[loc*2] != 0) {}
      else{
        map.push(loc*2);
        check[loc*2] = 1;
        res[loc*2] = res[loc] + 1;
      }
    }
  }
  cout << res[K] << "\n";
  return 0;
}