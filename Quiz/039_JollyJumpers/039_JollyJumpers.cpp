#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> list, check(N);

  for(int i = 0; i < N; ++i){
    int temp;
    cin >> temp;
    list.push_back(temp);
  }

  for(int i = 0; i < N - 1; ++i){
    int num = abs(list[i] - list[i+1]);
    if(check[num] == 0) check[num] = 1;
  }

  bool flag = true;
  for(int i = 1; i < N; ++i){
    if(check[i] == 0){
      flag = false;
      break;
    }
  }
  if(flag) cout << "Jolly" << "\n";
  else cout << "NO" << "\n";
  return 0;
}