#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int arr[10001];

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;
  
  arr[1] = 1;
  arr[2] = 2;

  for(int i = 3; i <= N; ++i){
    arr[i] = arr[i-1] + arr[i-2];
  }
  cout << arr[N];
  return 0;
}