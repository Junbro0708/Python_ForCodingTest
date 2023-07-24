#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int N, M, cnt = 0;
int check[21];
vector<int> map[21];

void dfs(int v){
  if(v == N){
    cnt++;
    return;
  }else{
    for(int i = 0; i < map[v].size(); ++i){
      if(check[map[v][i]] == 0){
        check[map[v][i]] = 1;
        dfs(map[v][i]);
        check[map[v][i]] = 0;
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin >> N >> M;

  for(int i = 1; i <= M; ++i){
    int temp1, temp2;
    cin >> temp1 >> temp2;
    map[temp1].push_back(temp2);
  }

  check[1] = 1;
  dfs(1);
  cout << cnt;
  return 0;
}

/*
5 9
1 2
1 3
1 4
2 1
2 3
2 5
3 4
4 2
4 5
*/