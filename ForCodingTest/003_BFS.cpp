////
////  003_BFS.cpp
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
//int N, E;
//int Graph[MAX_N][MAX_N];
//
//void bfs(int node){
//    bool visited[MAX_N] = { false };
//    
//    queue<int> myqueue;
//    visited[node] = true;
//    myqueue.push(node);
//    
//    while(!myqueue.empty()){
//        int curr = myqueue.front();
//        myqueue.pop();
//        
//        cout << curr << " ";
//        
//        for(int next = 0; next < N; ++next){
//            if(!visited[next] && Graph[curr][next]){
//                visited[next] = true;
//                myqueue.push(next);
//            }
//        }
//    }
//}
//
//int main() {
//    cin >> N >> E;
//    memset(Graph, 0, sizeof(Graph));
//    
//    for(int i = 0; i < E; i++){
//        int u, v;
//        cin >> u >> v;
//        Graph[u][v] = Graph[v][u] = 1;
//    }
//    bfs(0);
//    return 0;
//}
//
