#include <iostream>
#include <vector>
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

  vector<int> answer(N+M);

  int p1 = 0, p2 = 0, p3 = 0;
  while(p1 < N && p2 < M){
    if(N_list[p1] < M_list[p2]){
      answer[p3++] = N_list[p1++];
    }else{
      answer[p3++] = M_list[p2++];
    }
  }
  while(p1<N) answer[p3++] = N_list[p1++];
  while(p2<M) answer[p3++] = M_list[p2++];

  for(int i = 0; i < N+M; ++i){
    cout << answer[i] << " ";
  }
  return 0;
}