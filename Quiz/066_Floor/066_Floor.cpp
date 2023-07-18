#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int num1, int num2) {
  float num = float(num1) / float(num2) * 1000;
  int answer = num;
  return answer;
}

int main(){
  cout << solution(1, 16) << "\n";
  return 0;
}