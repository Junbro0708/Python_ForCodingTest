#include <string>
#include <vector>
#include <queue>

using namespace std;

#define MAX_ 1000001

int solution(int x, int y, int n) {
    int answer, check[1000001] = {0,};
    
    queue<pair<int, int>> list;
    list.push({x, 0});
    check[x] = 1;
    
    while(!list.empty()){
        int num = list.front().first;
        int cnt = list.front().second;
        list.pop();
        
        if(num == y) return cnt;
        else{
            if(num > y) continue;
            if(num + n >= MAX_ || num * 2 >= MAX_ || num * 3 >= MAX_) continue;
            if(check[num + n] == 1 || check[num * 2] == 1 || check[num * 3] == 1) continue;
            
            list.push({num + n, cnt+1});
            check[num + n] = 1;
            
            list.push({num * 2, cnt+1});
            check[num * 2] = 1;
            
            list.push({num * 3, cnt+1});
            check[num * 3] = 1;
        }
    }
    return -1;
}