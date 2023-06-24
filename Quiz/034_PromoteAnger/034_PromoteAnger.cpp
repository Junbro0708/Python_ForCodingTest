#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N, cnt = 0;
  vector<int> list;
  cin >> N;

  for(int i = 0; i < N; ++i){
    int temp;
    cin >> temp;
    list.push_back(temp);
  }

  int max = list[list.size()-1];
  for(int i = list.size()-1; i >= 0; --i){
    if(max < list[i]){
      max = list[i];
      cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}