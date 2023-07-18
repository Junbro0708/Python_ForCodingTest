#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    for(int i = 0; i < t.length() - p.length(); ++i){
      string temp = "";
      for(int j = i; j < p.length() + i; ++j){
        temp += t[j];
      }
      if(long(temp) <= long(p)) answer++;
    }
    return answer;
}

int main(){
  cout << solution("10203", "15");
  return 0;
}