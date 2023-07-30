#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for(int i = 0; i < photo.size(); ++i){
        int sum = 0;
        for(int j = 0; j < photo[i].size(); ++j){
            for(int x = 0; x < name.size(); ++x){
                if(photo[i][j] == name[x]) sum += yearning[x];
            }
        }
        answer.push_back(sum);
    }
    return answer;
}