////
////  005_BFS_2.cpp
////  ForCodingTest
////
////  Created by MAS on 2023-02-20.
////
//
//#include <iostream>
//#include <queue>
//
//#define MAX_N 102
//
//using namespace std;
//
//int N, M;
//int Board[MAX_N][MAX_N];
//int D[4][2] = {
//    {-1, 0},
//    {1, 0},
//    {0, -1},
//    {0, 1}
//};
//struct Point{
//    int row, col, dist;
//};
//
//int bfs(){
//    int visited[MAX_N][MAX_N] = { false };
//    visited[0][0] = true;
//    queue<Point> myqueue;
//    myqueue.push({0, 0, 1});
//    
//    while(!myqueue.empty()){
//        Point curr = myqueue.front();
//        myqueue.pop();
//        if(curr.row == N - 1 && curr.col == M - 1){
//            cout << curr.dist << "\n";
//        }
//        
//        for(int i = 0; i < 4; ++i){
//            int nr = curr.row + D[i][0], nc = curr.col + D[i][1];
//            if(nr < 0 || nr > N - 1 || nc < 0 || nc > M - 1) continue;
//            if(visited[nr][nc]) continue;
//            if(Board[nr][nc] == 0) continue;
//            visited[nr][nc] = true;
//            myqueue.push({nr, nc, curr.dist + 1});
//        }
//    }
//    
//    return -1;
//}
//
//int main(){
//    cin >> N >> M;
//    for(int i = 0; i < N; ++i)
//        for(int j = 0; j < M; ++j)
//            scanf("%1d", &Board[i][j]);
//    bfs();
//}
//
//
