#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    vector<int> td(priorities.size());
    
    vector<int> list;
    for(int i = 0; i < priorities.size(); ++i){
        list.push_back(priorities[i]);
    }
    sort(list.begin(), list.end(), greater<int>());
    
    int idx = 0, cnt = 0;
    while(cnt != td.size()){
        if(list[cnt] == priorities[idx]){
            td[idx] = cnt + 1;
            cnt += 1;
        }
        
        idx++;
        if(idx == td.size()) idx = 0;
    }
    return td[location];
}