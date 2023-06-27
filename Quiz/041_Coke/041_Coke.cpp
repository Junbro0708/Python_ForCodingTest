#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;

    while(n >= a){
      answer += (n / a) * b;
      n = (n / a) * b + (n % a);
    }
    return answer;
}

int main(){
  cout << solution(3, 1, 20) << "\n";
}