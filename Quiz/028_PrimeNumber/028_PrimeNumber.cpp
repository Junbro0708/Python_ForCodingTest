#include <iostream>
#include <algorithm>

using namespace std;

int reverse(int x){
  string str = to_string(x);
  reverse(str.begin(), str.end());
  return stoi(str);
}

bool isPrime(int x){
  if(x == 1) return false;
  for(int i = 2; i * i <= x; ++i){
    if(x % i == 0) return false;
  }
  return true;
}

int main(){
  int N;
  cin >> N;

  for(int i = 0; i < N; ++i){
    string temp;
    cin >> temp;

    int num = reverse(stoi(temp));
    if(isPrime(num)){
      cout << num << " ";
    }
  }
}