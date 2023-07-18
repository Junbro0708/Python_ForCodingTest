#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
int arr[1501];
int main(){
  int N;
  cin >> N;

  int p2, p3, p5;
  int min = 214700000;
  arr[1] = 1;
  p2=p3=p5 = 1;

  for(int i = 2; i <= N; ++i){
    if(arr[p2] * 2 < arr[p3] * 3) min = arr[p2] * 2;
    else min = arr[p3] * 3;
    if(arr[p5] * 5 < min) min = arr[p5] * 5;

    if(arr[p2] * 2 == min) p2++;
    if(arr[p3] * 3 == min) p3++;
    if(arr[p5] * 5 == min) p5++;

    arr[i] = min;
  }
  cout << arr[N] << "\n";
  return 0;
}