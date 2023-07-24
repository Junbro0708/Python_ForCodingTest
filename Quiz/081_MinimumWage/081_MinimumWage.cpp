#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int N, M, min_ = 2147000000;
int check[21];
vector<pair<int, int> > map[21];

void dfs(int v, int wage){
  if(v == N){
    if(wage < min_) min_ = wage;
    return;
  }else{
    for(int i = 0; i < map[v].size(); ++i){
      if(check[map[v][i].first] == 0){
        check[map[v][i].first] = 1;
        dfs(map[v][i].first, wage + map[v][i].second);
        check[map[v][i].first] = 0;
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin >> N >> M;

  for(int i = 0; i < M; ++i){
    int temp1, temp2, wage;
    cin >> temp1 >> temp2 >> wage;
    map[temp1].push_back(make_pair(temp2, wage));
  }

  check[1] = 1;
  dfs(1, 0);
  cout << min_ << "\n";
  return 0;
}

/*
5 8
1 2 12 
1 3 6 
1 4 10 
2 3 2 
2 5 2 
3 4 3 
4 2 2 
4 5 5
*/