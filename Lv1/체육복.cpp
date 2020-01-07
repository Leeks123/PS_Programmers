
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n-lost.size();
    vector<int>::iterator it;
    vector<int>::iterator ite;
    
    //중복제거
    for(it=lost.begin();it!=lost.end();it++){
        ite=find(reserve.begin(),reserve.end(),*it);
        if(ite!=reserve.end()){
            reserve.erase(ite);
            lost.erase(it);
            answer++;
            it--;
        }
    }
    for(int i=0;i<lost.size();i++){
        //작은거 빌리기
        if(lost[i]-1>0){
            it=find(reserve.begin(),reserve.end(),lost[i]-1);
            if(it!=reserve.end()){
                answer++;reserve.erase(it);
                continue;
            }
        }
        //큰거 빌리기
        it=find(reserve.begin(),reserve.end(),lost[i]+1);
        if(it!=reserve.end()){
            answer++;reserve.erase(it);
        }
    }
    return answer;
}

int main(){
    cout<<solution(7,{2,3,4},{1,2,3,5,6})<<endl;
    cout<<"hello";
}
