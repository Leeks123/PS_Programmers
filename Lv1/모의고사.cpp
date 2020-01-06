#include <string>
#include <vector>

using namespace std;
// 1234512345
// 21232425
// 3311224455
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int mem1 = 0,mem1ans[] = {1,2,3,4,5};
    int mem2 = 0,mem2ans[] = {2,1,2,3,2,4,2,5};
    int mem3 = 0,mem3ans[] = {3,3,1,1,2,2,4,4,5,5};
    vector<int>::iterator it;
    int cnt = 0;
    for(it=answers.begin();it!=answers.end();it++){
        if(*it==mem1ans[cnt%5]) mem1++;
        if(*it==mem2ans[cnt%8]) mem2++;
        if(*it==mem3ans[cnt%10]) mem3++;
        cnt++;
    }
    
    if(mem1>=mem2 && mem1>=mem3){
        answer.push_back(1);
        if(mem1==mem2) answer.push_back(2);
        if(mem1==mem3) answer.push_back(3);
    }else if(mem2>=mem1 && mem2>=mem3){
        answer.push_back(2);
        if(mem2==mem1) answer.push_back(1);
        if(mem2==mem3) answer.push_back(3);
    }else if(mem3>mem1 && mem3>mem2){
        answer.push_back(3);
        if(mem3==mem1) answer.push_back(1);
        if(mem3==mem2) answer.push_back(2);
    }
            
    return answer;
}