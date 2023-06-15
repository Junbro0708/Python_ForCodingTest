#include <iostream>

using namespace std;

int main(){
  int A, B, answer = 0;

  cin >> A >> B;
  
  for(int i = A; i <= B; ++i){
    cout << i;
    if(i != B) cout << "+";
    else cout << "=";
    answer += i;
  }
  cout << answer;
}