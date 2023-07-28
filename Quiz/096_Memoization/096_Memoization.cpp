#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int N, M, cnt_ = 0;
int check[21];
// vector<int> list;

void DFS(int v, int cnt){
  if(cnt == M){
    cnt_++;
    // for(int i = 0; i < list.size(); ++i) 
    //   cout << list[i] << " ";
    // puts("");
    return;
  }else{
    for(int i = v; i <= N; ++i){
      if(check[i] == 0){
        // list.push_back(i);
        check[i] = 1;
        DFS(i+1, cnt+1);
        check[i] = 0;
        // list.pop_back();
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin >> N >> M;

  DFS(1, 0);

  cout << cnt_;
  return 0;
}