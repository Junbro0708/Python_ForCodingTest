#include <string>
#include <vector>
#include <map>

using namespace std;

int answer = 2147000000;
int list[3][3] = {
    {1, 1, 1},
    {5, 1, 1},
    {25, 5, 1}
};

map<string, int> mineral = {{"diamond", 0}, {"iron", 1}, {"stone", 2}};

void dfs(vector<int> picks, vector<string> minerals, int cnt, int sum){
    int sumList[3] = {0,};
    int savePoint = cnt;
    if(cnt == minerals.size() || (picks[0] + picks[1] + picks[2]) == 0){ // 광물 캐기를 끝내는 조건
        answer = min(answer, sum);
    }else{
        for(int i = cnt; i < cnt + 5; ++i){
            if(i > minerals.size() - 1){
                savePoint = i - 1;
                break;
            }
            
            sumList[0] += list[0][mineral[minerals[i]]];
            sumList[1] += list[1][mineral[minerals[i]]];
            sumList[2] += list[2][mineral[minerals[i]]];
            
            savePoint = i;
        }
        
        for(int i = 0; i < 3; ++i){
            if(picks[i] != 0){
                picks[i] -= 1;
                dfs(picks, minerals, savePoint + 1, sum + sumList[i]);
                picks[i] += 1;
            }
        }
    }
}

int solution(vector<int> picks, vector<string> minerals) {
    dfs(picks, minerals, 0, 0);
    return answer;
}