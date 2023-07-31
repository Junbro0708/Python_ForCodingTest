#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) { 
    for(int i = 0; i < goal.size(); ++i){
        if(goal[i] != cards2[0] && goal[i] != cards1[0]) return "No";
        if(goal[i] == cards1[0]){
            cards1.erase(cards1.begin());
        }
        if(goal[i] == cards2[0]){
            cards2.erase(cards2.begin());
        }
    }
    return "Yes";
}