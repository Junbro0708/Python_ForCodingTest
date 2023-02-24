//
//  013_DP_INT.cpp
//  ForCodingTest
//
//  Created by MAS on 2023-02-23.
//

#include <iostream>

#define MAX_N 501

using namespace std;

int N;
int tri[MAX_N][MAX_N];

int main(){
    scanf("%d",&N);
    
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < i+1; ++j){
            scanf("%d",&tri[i][j]);
        }
    }
    
    for(int i = N-1; i >= 1; --i){
        for(int j = 0; j < i; ++j){
            tri[i-1][j] += max(tri[i][j], tri[i][j+1]);
        }
    }
    
    printf("%d", &tri[0][0]);
}
