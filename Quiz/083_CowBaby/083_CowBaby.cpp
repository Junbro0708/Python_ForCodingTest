#include <queue>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int check[10001], dis[10001];
int mtd[3] = {5, 1, -1};

int main(){
  int S, E, cnt = 0;
  cin >> S >> E;

  queue<int> list;

  list.push(S);
  check[S] = 1;

  while(true){
    if(dis[E] != 0) break;

    int v = list.front();
    list.pop();

    for(int i = 0; i < 3; ++i){
      int vv = v + mtd[i];
      if(vv <= 0 || vv > 10000) continue;
      if(check[vv] == 0){
        check[vv] = 1;
        list.push(vv);
        dis[vv] = dis[v] + 1;
      }
    }
  }
  cout << dis[E];
  return 0;
}