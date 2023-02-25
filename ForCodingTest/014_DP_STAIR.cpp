////
////  014_DP_STAIR.cpp
////  ForCodingTest
////
////  Created by MAS on 2023-02-24.
////
//
//#include <iostream>
//
//#define MAX_N 301
//
//using namespace std;
//
//int N;
//int stairs[MAX_N];
//int dp[MAX_N];
//
//int main(){
//    cin >> N;
//    for(int i = 0; i < N; ++i){
//        cin >> stairs[i];
//    }
//    
//    dp[0] = stairs[0];
//    dp[1] = max(stairs[0]+stairs[1], stairs[1]);
//    dp[2] = max(stairs[0]+stairs[2], stairs[1]+stairs[2]);
//    
//    for(int i = 3; i < N; ++i){
//        dp[i] = max(dp[i-2]+stairs[i], stairs[i-1]+stairs[i]+dp[i-3]);
//    }
//    
//    cout << dp[N-1];
//}
