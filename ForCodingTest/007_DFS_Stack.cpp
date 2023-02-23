////
////  007_DFS_Stack.cpp
////  ForCodingTest
////
////  Created by MAS on 2023-02-21.
////
//
//#include <iostream>
//#include <stack>
//
//#define MAX_N 10
//
//using namespace std;
//
//int N, E;
//int Graph[MAX_N][MAX_N];
//
//void dfs(int node){
//    bool visited[MAX_N] = { false };
//    stack<int> mystack;
//    mystack.push(node);
//    
//    while(!mystack.empty()){
//        int curr = mystack.top();
//        mystack.pop();
//        
//        if(visited[curr]) continue;
//        
//        cout << curr << " ";
//        visited[curr] = true;
//        
//        for(int next = 0; next < N; ++next){
//            if(!visited[next] && Graph[curr][next]){
//                mystack.push(next);
//            }
//        }
//    }
//}
//
//int main(){
//    cin >> N >> E;
//    memset(Graph, 0, sizeof(Graph));
//    
//    for(int i = 0; i < E; ++i){
//        int u, v;
//        cin >> u >> v;
//        Graph[u][v] = Graph[v][u] = 1;
//    }
//    
//    dfs(0);
//}
