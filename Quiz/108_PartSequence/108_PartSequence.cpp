#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer(2);
    
    int start_idx = 0, end_idx = 0;
    int sum = sequence[0];
    vector<pair<int, int>> list;
    while(start_idx <= end_idx){
        if(end_idx >= sequence.size() || start_idx >= sequence.size()) break;
        if(sum < k){
            end_idx++;
            sum += sequence[end_idx];
        }else if(sum > k){
            sum -= sequence[start_idx];
            start_idx++;
        }else{
            list.push_back({start_idx, end_idx});
            end_idx++;
            sum += sequence[end_idx];
        }
    }
    int min = 2147000000;
    for(int i = 0; i < list.size(); ++i){
        if(list[i].second - list[i].first < min){
            min = list[i].second - list[i].first;
            answer[1] = list[i].second;
            answer[0] = list[i].first;
        }
    }
    return answer;
}