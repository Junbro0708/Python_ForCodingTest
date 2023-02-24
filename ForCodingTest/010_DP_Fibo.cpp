////
////  010_DP_Fibo.cpp
////  ForCodingTest
////
////  Created by MAS on 2023-02-23.
////
//
//#include <iostream>
//
//using namespace std;
//
//#define MAX_N 40
//
//int n, cnt = 0;
//int solve[MAX_N];
//
//void fibo(int num){
//    solve[1] = 1;
//    solve[2] = 1;
//    
//    for(int i = 3; i <= num; ++i){
//        solve[i] = solve[i-1] + solve[i-2];
//        cnt++;
//    }
//    
//    cout << solve[num] << " " << cnt << "\n";
//}
//
//int main(){
//    cin >> n;
//    fibo(n);
//}
