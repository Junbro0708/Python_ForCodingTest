#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N, answer = 0;
  cin >> N;
  vector<int> list, td(N);

  for(int i = 0; i < N; ++i){
    int temp;
    cin >> temp;
    list.push_back(temp);
  }

  td[0] = list[0];
  for(int i = 1; i < list.size(); ++i){
    td[i] = max(list[i], list[i] + td[i-1]);
  }

  for(int i = 0; i < td.size(); ++i)
    answer = max(answer, td[i]);
  
  cout << answer;
}