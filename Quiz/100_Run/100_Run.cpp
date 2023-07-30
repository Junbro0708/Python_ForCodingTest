#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>

using namespace std;

// 시간 초과
vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string>::iterator it;
    
    for(int i = 0; i < callings.size(); ++i){
        it = find(players.begin(), players.end(), callings[i]);
        swap(players[it - players.begin()], players[it - players.begin() - 1]);
    }
    return players;
}

// 두 개의 map을 이용해서 풀이
vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    
    map<int, string> m1;
    map<string, int> m2;
    for(int i = 0; i < players.size(); ++i){
        m1[i] = players[i];
        m2[players[i]] = i;
    }
    
    for(int i = 0; i < callings.size(); ++i){
        int curr_idx = m2[callings[i]];
        string front_player = m1[curr_idx - 1];
        
        m1[curr_idx - 1] = callings[i];
        m2[callings[i]] = curr_idx - 1;
        
        m1[curr_idx] = front_player;
        m2[front_player] = curr_idx;
    }
    
    for(auto iter = m1.begin(); iter != m1.end(); iter++){
        answer.push_back(iter->second);
    }
    return answer;
}