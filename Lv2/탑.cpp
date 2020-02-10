#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    reverse(heights.begin(),heights.end());
    for(int i=0;i<heights.size();i++){
        int send = heights[i];
        for(int j=i+1;j<heights.size();j++){
            if(send<heights[j]){
                answer.push_back((int)heights.size()-j);
                break;
            }else if(j==heights.size()-1) answer.push_back(0);
        }
        if(i==heights.size()-1) answer.push_back(0);
    }
    reverse(answer.begin(),answer.end());
    return answer;
}
int main(){
    for(int i=0;i<solution({1,5,3,6,7,6,5}).size();i++){
        cout<<solution({1,5,3,6,7,6,5})[i]<<' ';
    }
    return 0;
}
