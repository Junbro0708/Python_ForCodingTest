#include <iostream>
#include <limits.h>

using namespace std;

int main(){
  int N, min = INT_MAX, max = INT_MIN;
  cin >> N;

  for(int i = 0; i < N; ++i){
    int temp;
    // scanf("%d", &temp);
    cin >> temp;

    if(temp > max) max = temp;
    if(temp < min) min = temp;
  }
  cout << max - min;
}