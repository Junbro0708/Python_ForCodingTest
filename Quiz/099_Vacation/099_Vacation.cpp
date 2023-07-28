#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int N, answer = 0;
int check[16];
vector<pair<int, int> > list(16);

void dfs(int day, int cost){
  if(day > N){
    if(answer < cost){
      answer = cost;
    }
  }else{
    for(int i = day; i <= N; ++i){
      if(check[i] == 0){
        check[i] = 1;
        dfs(i + list[i].first, cost + list[i].second);
        check[i] = 0;
      }
    }
  }
}

int main(){
  cin >> N;
  for(int i = 1; i <= N; ++i){
    int temp1, temp2;
    cin >> temp1 >> temp2;
    list[i] = make_pair(temp1, temp2);
  }

  dfs(1, 0);

  cout << answer;
  return 0;
}

/*
7
4 20
2 10
3 15
3 20 
2 30 
2 20 
1 10
*/