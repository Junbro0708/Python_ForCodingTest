#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void Recursion(int x){
  if(x == 0) return;
  else{
    Recursion(x / 2);
    cout << x % 2;
  }
}

int main(){
  int N;
  cin >> N;
  Recursion(N);
  return 0;
}