#include <iostream>

using namespace std;

int main(){
  int N;
  cin >> N;

  for(int i = 0; i < N; ++i){
    int num, sum;
    cin >> num >> sum;

    if((num * (num + 1) / 2) == sum) cout << "YES" << "\n";
    else cout << "NO" << "\n";
  }
  return 0;
}