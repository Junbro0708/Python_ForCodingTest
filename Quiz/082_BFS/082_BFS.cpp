#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N, M;
int check[30], dis[30];
vector<int> map[30];
queue<int> Q;

int main(){
  cin >> N >> M;
  for(int i = 1; i <= M; ++i){
    int temp1, temp2;
    cin >> temp1 >> temp2;
    map[temp1].push_back(temp2);
  }
  Q.push(1);
  check[1] = 1;

  while(!Q.empty()){
    int v = Q.front();
    Q.pop();
    for(int i = 0; i < map[v].size(); ++i){
      if(check[map[v][i]] == 0){
        check[map[v][i]] = 1;
        Q.push(map[v][i]);
        dis[map[v][i]] = dis[v] + 1;
      }
    }
  }

  for(int i = 2; i <= N; ++i){
    cout << i << ": " << dis[i] << "\n";
  }
  return 0;
}

/*
6 9 
1 3 
1 4 
2 1 
2 5 
3 4 
4 5 
4 6 
6 2 
6 5
*/