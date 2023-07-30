#include <string>
#include <vector>
#include <sstream>

using namespace std;

pair<string, int> split(string input, char delimiter){
    vector<string> answer;
    stringstream ss(input);
    string temp;
    
    while(getline(ss, temp, delimiter)){
        answer.push_back(temp);
    }
    
    return make_pair(answer[0], stoi(answer[1]));
}

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    
    int idx_y, idx_x;
    for(int i = 0; i < park.size(); ++i){
        bool temp = false;
        for(int j = 0; j < park[0].size(); ++j){
            if(park[i][j] == 'S'){
                idx_y = i;
                idx_x = j;
                temp = true;
                break;
            }
        }
        if(temp) break;
    }
    
    for(int i = 0; i < routes.size(); ++i){
        int cur_y = idx_y;
        int cur_x = idx_x;
        bool flag = true;
        
        pair<string, int> info = split(routes[i], ' ');
        
        while(info.second != 0){
            if(info.first == "E"){
                cur_x += 1;
                info.second--;
            }else if(info.first == "S"){
                cur_y += 1;
                info.second--;
            }else if(info.first == "W"){
                cur_x -= 1;
                info.second--;
            }else if(info.first == "N"){
                cur_y -= 1;
                info.second--;
            }
            
            if(cur_y < 0 || cur_x < 0 || cur_y > park.size() - 1 || cur_x > park[0].size() - 1 || park[cur_y][cur_x] == 'X'){
                flag = false;
                break;
            }
        }
        if(flag){
            idx_y = cur_y;
            idx_x = cur_x;
        }
    }
    
    answer.push_back(idx_y);
    answer.push_back(idx_x);
    return answer;
}