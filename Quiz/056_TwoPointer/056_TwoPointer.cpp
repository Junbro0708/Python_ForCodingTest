#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> N_list(N);
  for(int i = 0; i < N; ++i)
    cin >> N_list[i];

  int M;
  cin >> M;
  vector<int> M_list(M);
  for(int i = 0; i < M; ++i)
    cin >> M_list[i];

  sort(N_list.begin(), N_list.end());
  sort(M_list.begin(), M_list.end());
  vector<int> answer;
  int np = 0, mp = 0;

  while(np < N && mp < M){
    if(N_list[np] == M_list[mp]){
      answer.push_back(M_list[mp]);
      np++;
      mp++;
    }else if(N_list[np] < M_list[mp]) np++;
    else mp++;
  }

  for(int i = 0; i < answer.size(); ++i)
    cout << answer[i] << " ";
  return 0;
}