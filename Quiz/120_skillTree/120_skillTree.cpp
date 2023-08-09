#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    map<char, int> list;
    for(int i = 0; i < skill.length(); ++i)
        list[skill[i]] = i;
    
    for(int i = 0; i < skill_trees.size(); ++i){
        bool flag = true;
        int idx = 0;
        for(int j = 0; j < skill_trees[i].length(); ++j){
            if(list.find(skill_trees[i][j]) != list.end()){
                if(idx == list[skill_trees[i][j]]) idx++;
                else{
                    flag = false;
                    break;
                }
            }
        }
        if(flag) answer++;
    }
    return answer;
}