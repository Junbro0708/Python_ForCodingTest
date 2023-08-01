#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for(int i = 0; i < babbling.size(); ++i){
        int flag = -1;
        while(true){
            bool check = false;
            if(babbling[i].substr(0, 3) == "aya" && flag != 1){
                babbling[i].replace(0, 3, "");
                flag = 1;
                check = true;
            }else if(babbling[i].substr(0, 2) == "ye" && flag != 2){
                babbling[i].replace(0, 2, "");
                flag = 2;
                check = true;
            }else if(babbling[i].substr(0, 3) == "woo" && flag != 3){
                babbling[i].replace(0, 3, "");
                flag = 3;
                check = true;
            }else if(babbling[i].substr(0, 2) == "ma" && flag != 4){
                babbling[i].replace(0, 2, "");
                flag = 4;
                check = true;
            }
            if(!check) break;
            if(babbling[i] == "") break;
        }
        if(babbling[i] == "") answer++;
    }
    return answer;
}

int main(){
  vector<string> babbling;
  babbling.push_back("aya");
  babbling.push_back("yee");
  babbling.push_back("u");
  babbling.push_back("maa");
  
  cout << solution(babbling);
  return 0;
}