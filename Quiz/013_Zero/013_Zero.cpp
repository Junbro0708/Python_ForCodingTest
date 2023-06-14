#include <vector>
#include <iostream>

using namespace std;

int main(){
  int K, answer = 0;
  vector<int> list;

  cin >> K;

  for(int i = 0; i < K; i++){
    int temp;
    cin >> temp;

    if(temp != 0) list.push_back(temp);
    else list.pop_back();
  }

  for(int i = 0; i < list.size(); i++)
    answer += list[i];

  cout << answer;
}