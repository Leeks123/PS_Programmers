#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> sarr;
    
    for(int i=0;i<commands.size();i++){
        
    // array slice
        sarr = vector<int>(array.begin()+commands[i][0]-1,array.begin()+commands[i][1]);
    // sarr sort
        sort(sarr.begin(),sarr.end());
    // sarr pick and add answer
        answer.push_back(sarr[commands[i][2]-1]);
    }
    return answer;
}
int main(){
    //solution({1, 5, 2, 6, 3, 7, 4},{{2, 5, 3},{4, 4, 1},{1, 7, 3}},{5, 6, 3})
    vector<int> v =solution({1, 5, 2, 6, 3, 7, 4},{{2, 5, 3},{4, 4, 1},{1, 7, 3}});
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" "<<endl;
    }
    return 0;
}
