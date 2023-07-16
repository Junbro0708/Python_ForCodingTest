#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> food_times, long long k) {
    int answer = 0;
    int pos = 0, cnt = 0;
    while(true){
      if(pos > food_times.size() - 1) pos = 0;

      if(food_times[pos] != 0){
        if(k == 0){
          return pos + 1;
        }
        food_times[pos]--;
        k--;
      }
      pos++;
    }
}

int main(){
    vector<int> food_times;
    food_times.push_back(3);
    food_times.push_back(1);
    food_times.push_back(2);
  cout << solution(food_times, 5) << "\n";
  return 0;
}