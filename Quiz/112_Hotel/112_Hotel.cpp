#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> book_time) {
    int answer = 0, time[2400] = {0,};
    
    for(int i = 0; i < book_time.size(); ++i){
        int start = stoi(book_time[i][0].substr(0, 2)) * 100 + stoi(book_time[i][0].substr(3));
        int end = stoi(book_time[i][1].substr(0, 2)) * 100 + stoi(book_time[i][1].substr(3)) + 10;
        if(end % 100 >= 60) end += 40;
        
        for(int j = start; j < end; ++j) time[j]++;
    }
    
    for(int i = 0; i < 2400; ++i) answer = max(answer, time[i]);
    return answer;
}