#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    
    int temp = 0;
    bool flag = false;
    for(int i = section[0]; i <= section[section.size()-1]; ++i){
        if(i == section[0]){
            flag = true;
            section.erase(section.begin());
        }
        
        if(temp == 0 && flag){
            temp = m;
            answer++;
        }
        
        if(flag) temp--;
        if(temp == 0) flag = false;
    }
    return answer;
}