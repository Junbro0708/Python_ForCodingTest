#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

void Recursion(int x){
  if(x == 0) return;
  else{
    Recursion(x - 1);
    cout << x << " ";
  }
}

int main(){
  int N;
  cin >> N;
  Recursion(N);
  return 0;
}