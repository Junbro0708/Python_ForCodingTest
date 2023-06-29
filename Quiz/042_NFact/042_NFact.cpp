#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N;
  cin >> N;
  vector<int> list(N, 0);

  for(int i = N; i > 1; --i){
    for(int j = 2; j <= i; ++j){
      
    }
  }
  cout << N << "! = ";
  for(int i = 0; i < list.size(); ++i){
    if(list[i] != 0) cout << list[i] << " ";
  }
  return 0;
}