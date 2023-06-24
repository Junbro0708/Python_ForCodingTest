#include <vector>
#include <iostream>

using namespace std;

int main(){
  int N, scr_A = 0, scr_B = 0;
  char lastWin;
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
    if(A[i] > B[i]){
      lastWin = 'A';
      scr_A += 3;
    }else if(A[i] < B[i]){
      lastWin = 'B';
      scr_B += 3;
    }else{
      scr_A++;
      scr_B++;
    }
  }
  if(scr_A == scr_B) cout << lastWin;
  else if(scr_A > scr_B) cout << "A";
  else cout << "B";
  return 0;
}