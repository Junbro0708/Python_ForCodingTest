////
////  015_Greedy_ATM.cpp
////  ForCodingTest
////
////  Created by MAS on 2023-02-24.
////  BAEK 11399
//
//#include <iostream>
//#include <vector>
//
//#define MAX_N 1000
//
//using namespace std;
//vector<int> people;
//
//int main(){
//    int N, cnt = 0;
//    cin >> N;
//
//    for(int i = 0; i < N; ++i){
//        int temp;
//        cin >> temp;
//        people.push_back(temp);
//    }
//
//    sort(people.begin(), people.end());
//
//    for(int j = 0; j < N; ++j){
//        cnt += people[j] * (N - j);
//    }
//
//    cout << cnt << "\n";
//    return 0;
//}
