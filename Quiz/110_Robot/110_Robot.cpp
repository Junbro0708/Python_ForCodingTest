#include <string>
#include <vector>
#include <queue>

using namespace std;

int ry[4] = {0, 1, 0, -1};
int rx[4] = {1, 0, -1, 0};
bool check[101][101];

int solution(vector<string> board) {
    int answer = 0;
    int x, y;
    
    for(int i = 0; i < board.size(); ++i){
        bool flag = false;
        for(int j = 0; j < board[i].size(); ++j){
            if(board[i][j] == 'R'){
                y = i;
                x = j;
                flag = true;
                break;
            }
            if(flag) break;
        }
    }
    
    queue<pair<pair<int, int>, int>> list;
    list.push({{y, x}, 0});
    while(!list.empty()){
        int idx_y = list.front().first.first;
        int idx_x = list.front().first.second;
        int cnt = list.front().second;
        list.pop();
        
        if(board[idx_y][idx_x] == 'G'){
            return cnt;
        }else{
            for(int i = 0; i < 4; ++i){
                int dy = idx_y + ry[i];
                int dx = idx_x + rx[i];
                
                if(dy < 0 || dx < 0 || dy > board.size() - 1 || dx > board[0].size() - 1) continue;
                if(board[dy][dx] == 'D') continue;
                
                while(true){
                    if(dy < 0 || dx < 0 || dy > board.size() - 1 || dx > board[0].size() - 1 || board[dy][dx] == 'D'){
                        break;
                    }
                    dy += ry[i];
                    dx += rx[i];
                }
                
                if(check[dy - ry[i]][dx - rx[i]] == true) continue;
                list.push({{dy - ry[i], dx - rx[i]}, cnt+1});
                check[dy - ry[i]][dx - rx[i]] = true;
            }
        }
    }
    return -1;
}