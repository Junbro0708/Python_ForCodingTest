#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    
    set<int> list;
    for(int i = 0; i < elements.size(); ++i){
        list.insert(elements[i]);
    }
    
    for(int i = 1; i < elements.size(); ++i){
        int sum = 0;
        for(int j = 0; j <= i; ++j)
            sum += elements[j];
        list.insert(sum);
        
        int start = 0, end = i;
        while(true){
            sum -= elements[start];
            start++;
            
            end++;
            if(end == elements.size()) end = 0;
            sum += elements[end];
            
            list.insert(sum);
            if(end == i || start == elements.size()) break;
        }
    }
    return list.size();
}