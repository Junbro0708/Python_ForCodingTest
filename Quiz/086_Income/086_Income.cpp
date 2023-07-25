#include <queue>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

struct Schedule{
  int fee, day;

  Schedule(int a, int b){
    fee = a;
    day = b;
  }

  bool operator<(const Schedule &s)const{
    if(day != s.day) return day<s.day;
    return fee<s.fee;
  }
};

int main(){
  ios_base::sync_with_stdio(false);
  int N, sum = 0;
  cin >> N;

  priority_queue<Schedule> pq;
  for(int i = 0; i < N; ++i){
    int temp1, temp2;
    cin >> temp1 >> temp2;
    pq.push(Schedule(temp1, temp2));
  }

  int day = 2147000000;
  while(!pq.empty()){
    Schedule temp = pq.top();
    pq.pop();

    if(day > temp.day){
      day = temp.day;
      sum += temp.fee;
    }
  }
  cout << sum;
  return 0;
}

/*
6
50 2 
20 1 
40 2 
60 3 
30 3 
30 1
*/