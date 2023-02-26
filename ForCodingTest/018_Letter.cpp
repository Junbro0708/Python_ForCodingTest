////
////  018_Letter.cpp
////  ForCodingTest
////
////  Created by MAS on 2023-02-24.
////
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> solution(string s) {
//    vector<int> answer;
//    vector<char> letters;
//    
//    for(int i = 0; i < s.size(); ++i){
//        if(find(letters.begin(), letters.end(), s[i]) == letters.end()){
//            letters.push_back(s[i]);
//            answer.push_back(-1);
//        }else{
//            for(int j = i - 1; j >= 0; --j){
//                if(s[i] == s[j]){
//                    answer.push_back(i - j);
//                    break;
//                }
//            }
//        }
//    }
//    return answer;
//}
//
//int main(){
//    vector<int> solve = solution("ss");
//    for(int i = 0; i < solve.size(); ++i){
//        cout << solve[i] << " ";
//    }
//    cout << "\n";
//}
