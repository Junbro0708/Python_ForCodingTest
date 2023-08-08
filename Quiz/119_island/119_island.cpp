#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};
bool check[101][101];

vector<int> solution(vector<string> maps) {
    vector<int> answer;
    
    queue<pair<int, int>> q;
    for(int i = 0; i < maps.size(); ++i){
        for(int j = 0; j < maps[0].size(); ++j){
            if(maps[i][j] != 'X' && check[i][j] != true){
                int sum = 0;
                
                q.push({i, j});
                check[i][j] = true;
                sum = (maps[i][j] - 48);
                
                while(!q.empty()){
                    int y = q.front().first;
                    int x = q.front().second;
                    q.pop();
                    
                    for(int z = 0; z < 4; ++z){
                        int ry = y + dy[z];
                        int rx = x + dx[z];
                        
                        if(ry < 0 || rx < 0 || ry > maps.size() - 1 || rx > maps[0].size() - 1) continue;
                        if(check[ry][rx] == true) continue;
                        if(maps[ry][rx] == 'X') continue;
                        
                        q.push({ry, rx});
                        check[ry][rx] = true;
                        sum += (maps[ry][rx] - 48);
                    }
                }
                answer.push_back(sum);
            }
        }
    }
    if(answer.size() == 0) answer.push_back(-1);
    else sort(answer.begin(), answer.end());
    return answer;
}