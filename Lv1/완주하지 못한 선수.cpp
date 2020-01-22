#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
// 효율성 fail
string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    vector<string>::iterator p;
    vector<string>::iterator c;
    p=participant.begin();
    while(true){
        c = find(completion.begin(),completion.end(),*p);
        if(c!=completion.end()){
            completion.erase(c);
            participant.erase(p);
            p=participant.begin();
        }else{
            answer=*p;
            break;
        }
    }
    return answer;
}
int main(){
    //[mislav, stanko, mislav, ana]    [stanko, ana, mislav]    mislav
    cout<<solution({"mislav", "stanko", "mislav", "ana"},{"stanko", "ana","mislav"});
    return 0;
}
