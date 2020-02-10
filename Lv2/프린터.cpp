#include <string>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int,int>> q;
    int cnt=0;
    for(int i=0;i<priorities.size();i++){
        q.push(make_pair(priorities[i],i));
    }
    while(!q.empty()){
        pair<int,int> tmp = q.front();
        if(tmp.first>=*max_element(priorities.begin(),priorities.end())){
            if(tmp.second==location){
                return cnt+1;
            }
            cnt++;q.pop();
            for(vector<int>::iterator it=priorities.begin();it!=priorities.end();it++){
                if(tmp.first==*it){
                    priorities.erase(it);break;
                }
            }
        }else{
            q.pop();q.push(tmp);
        }
    }
    return answer;
}
int main(){
    cout<<solution({1, 1, 9, 1, 1, 1},0);
    return 0;
}
