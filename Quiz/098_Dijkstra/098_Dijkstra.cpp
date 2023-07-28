#include <vector>
#include <algorithm>
#include <iostream>
#include <queue>

#define MAX_ 2147000000

using namespace std;

struct Edge{
  int v, dis;
  Edge(int a, int b){
    v = a;
    dis = b;
  }

  bool operator<(const Edge &e)const{
    return dis > e.dis;
  }
};

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, M;
  cin >> N >> M;
  priority_queue<Edge> Q;
  vector<pair<int, int> > graph[30];
  vector<int> arr(N+1, MAX_);

  for(int i = 1; i <= M; ++i){
    int temp1, temp2, temp3;
    cin >> temp1 >> temp2 >> temp3;
    graph[temp1].push_back(make_pair(temp2, temp3));
  }

  Q.push(Edge(1, 0));
  arr[1] = 0;

  while(!Q.empty()){
    int v = Q.top().v;
    int cost = Q.top().dis;
    Q.pop();
    if(cost > arr[v]) continue;
    for(int i = 0; i<graph[v].size(); ++i){
      int next = graph[v][i].first;
      int nextDis = cost + graph[v][i].second;
      if(arr[next] > nextDis){
        arr[next] = nextDis;
        Q.push(Edge(next, nextDis));
      }
    }
  }

  for(int i = 2; i <= N; ++i){
    if(arr[i] != MAX_) cout << i << " : " << arr[i] << "\n";
    else cout << i << " : impossible" << "\n"; 
  }
  return 0;
}

/*
6 9
1 2 12 
1 3 4 
2 1 2 
2 3 5 
2 5 5 
3 4 5 
4 2 2 
4 5 5 
6 4 5
*/