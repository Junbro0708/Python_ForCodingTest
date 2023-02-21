////
////  004_BFS_1.cpp
////  ForCodingTest
////
////  Created by MAS on 2023-02-20.
////
//
//#include <iostream>
//#include <queue>
//#include <cstring>
//
//using namespace std;
//
//#define MAX_N 10
//
//struct Point{
//    int row, col, dist;
//};
//int D[4][2] = {
//    {-1, 0},
//    {1, 0},
//    {0, -1},
//    {0, 1}
//};
//int N, Board[MAX_N][MAX_N];
//
//int bfs(int srcRow, int srcCol, int dstRow, int dstCol){
//    bool visited[MAX_N][MAX_N] = { false };
//    queue<Point> myqueue;
//    visited[srcRow][srcCol] = true;
//    myqueue.push({srcRow, srcCol, 0});
//    
//    while(!myqueue.empty()){
//        Point curr = myqueue.front();
//        myqueue.pop();
//        if(curr.row == dstRow && curr.col == dstCol){
//            return curr.dist;
//        }
//        
//        for(int i = 0; i < 4; ++i){
//            int nr = curr.row + D[i][0], nc = curr.col + D[i][1];
//            if(nr < 0 || nr > N - 1 || nc < 0 || nc > N -1) continue;
//            if(visited[nr][nc]) continue;
//            if(Board[nr][nc]) continue;
//            visited[nr][nc] = true;
//            myqueue.push({nr, nc, curr.dist + 1});
//        }
//    }
//    return -1;
//}
//
//int main(){
//    cin >> N;
//    for(int i = 0; i < N; ++i)
//        for(int j = 0; j < N; ++j)
//            cin >> Board[i][j];
//    
//    int srcRow, srcCol, dstRow, dstCol;
//    cin >> srcRow >> srcCol >> dstRow >> dstCol;
//    
//    cout << bfs(srcRow, srcCol, dstRow, dstCol);
//    return 0;
//}
