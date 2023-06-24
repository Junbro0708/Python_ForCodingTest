// 가위 1 바위 2 보 3 비기면 D
#include <iostream>
#include <vector>

using namespace std;

int main(){
  int N;
  vector<int> A, B;
  cin >> N;

  for(int i = 0; i < N; ++i){
    int temp;
    cin >> temp;
    A.push_back(temp);
  }
  for(int i = 0; i < N; ++i){
    int temp;
    cin >> temp;
    B.push_back(temp);
  }
  for(int i = 0; i < N; ++i){
    switch(A[i] - B[i]){
      case 0:
        cout << "D" << "\n";
        break;
      case 1:
        cout << "A" << "\n";
        break;
      case -2:
        cout << "A" << "\n";
        break;
      default:
        cout << "B" << "\n";
    }
  }
  return 0;
}