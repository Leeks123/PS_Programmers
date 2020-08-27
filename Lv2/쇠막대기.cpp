#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string arrangement) {
    int answer = 0;
    vector<int> stack;
    for(int i=0;i<arrangement.length();i++){
        if(arrangement[i]=='('){
            stack.push_back(i);
        }else{
            if(arrangement[i-1]=='('){
                stack.pop_back();
                answer+=stack.size();
            }else{
                stack.pop_back();
                answer++;
            }
        }
    }
    return answer;
}
int main(){
    cout<<solution("()(((()())(())()))(())");
    return 0;
}
