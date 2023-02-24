////
////  012_DP_RGB.cpp
////  ForCodingTest
////
////  Created by MAS on 2023-02-23.
////
//
//#include <iostream>
//
//#define MAX_N 1001
//
//using namespace std;
//
//int N;
//int house[MAX_N][3];
//
//int main(){
//    cin >> N;
//    for(int i = 1; i <= N; ++i){
//        int temp1, temp2, temp3;
//        cin >> temp1 >> temp2 >> temp3;
//        
//        house[i][0] = temp1;
//        house[i][1] = temp2;
//        house[i][2] = temp3;
//    }
//    
//    for(int j = 2; j <= N; ++j){
//        house[j][0] += min(house[j-1][1], house[j-1][2]);
//        house[j][1] += min(house[j-1][0], house[j-1][2]);
//        house[j][2] += min(house[j-1][0], house[j-1][1]);
//    }
//    
//    cout << min(house[N][0], min(house[N][1], house[N][2]));
//}
