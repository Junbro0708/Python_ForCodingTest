#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void recur(int x, int N){
  if(x > N) return;
  else{
    recur(x*2, N);
    cout << x << " ";
    recur(x*2+1, N);
  }
}

int main(){
  int N;
  cin >> N;
  recur(1, N);
  return 0;
}