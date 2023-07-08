#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int N, cnt = 0;
  cin >> N;

  for(int i = N - 1; i > 0; --i){
    vector<int> list;
    int sum = 0, temp = i;

    while(sum < N){
      list.push_back(temp);
      sum += temp;
      temp++;
    }
    if(sum == N){
      for(int i = 0; i < list.size(); ++i){
        cout << list[i];
        if(i != list.size() - 1) cout << " + ";
        else cout << " = ";
      }
      cout << N << "\n";
      cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}