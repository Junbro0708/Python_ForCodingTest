#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> list(N), grade(N, 1);
  for(int i = 0; i < N; ++i)
    cin >> list[i];
  
  for(int i = 1; i < N; ++i){
    for(int j = 0; j <= i; ++j){
      if(list[j] >= list[i]) grade[i]++;
    }
  }

  for(int i = 0; i < N; ++i)
    cout << grade[i] << " ";
  return 0;
}