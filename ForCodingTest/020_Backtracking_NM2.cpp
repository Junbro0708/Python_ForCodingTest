////
////  020_Backtracking_NM2.cpp
////  ForCodingTest
////
////  Created by MAS on 2023-02-24.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//#define MAX_N 9
//
//int N, M;
//vector<int> arr;
//bool checked[MAX_N] = { false };
//
//void dfs(int cnt, int num){
//    if(cnt == M){
//        for(int i = 0; i < arr.size(); ++i){
//            cout << arr[i] << " ";
//        }
//        cout << "\n";
//        return;
//    }else{
//        for(int j = num; j <= N; ++j){
////            if(!checked[j]){
////                checked[j] = true;
//                arr.push_back(j);
//                dfs(cnt + 1, j);
//                arr.pop_back();
////                checked[j] = false;
////            }
//        }
//    }
//}
//
//int main(){
//    cin >> N >> M;
//    dfs(0, 1);
//}
//
