#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    for(int i = 0; i < s.length(); ++i){
      int cnt = 0;
      char temp = s[i];
      while(cnt < index){
        temp += 1;
        if(temp > 122) temp = 97;
        if(find(skip.begin(), skip.end(), temp) == skip.end())
          cnt++;
      }
      answer += temp;
    }
    return answer;
}
// 프로그래머스 둘만의 암호 
int main(){
  cout << solution("zzzzz", "a", 1) << "\n";
  cout << int('a');
  return 0;
}