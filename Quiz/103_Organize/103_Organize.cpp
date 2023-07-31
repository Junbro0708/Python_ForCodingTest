#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer = {51, 51, 0, 0};
    
    for(int i = 0; i < wallpaper.size(); ++i){
        for(int j = 0; j < wallpaper[i].size(); ++j){
            int sx = i, sy = j, ex = i + 1, ey = j + 1;
            if(wallpaper[i][j] == '#'){
                answer[0] = min(sx, answer[0]);
                answer[1] = min(sy, answer[1]);
                answer[2] = max(ex, answer[2]);
                answer[3] = max(ey, answer[3]);
            }
        }
    }
    return answer;
}