#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int N, cnt = 0;
  cin >> N;

  for(int i = 3; i <= N; ++i){
    string str = to_string(i);
    for(int j = 0; j < str.length(); ++j){
      if(str[j] == '3') cnt++;
    }
  }
  cout << cnt << "\n";
  return 0;
}