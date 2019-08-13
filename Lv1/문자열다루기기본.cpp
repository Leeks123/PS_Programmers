//문자열 다루기 기본
/*
문제 설명
문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수, solution을 완성하세요. 
예를 들어 s가 a234이면 False를 리턴하고 1234라면 True를 리턴하면 됩니다.

제한 사항
s는 길이 1 이상, 길이 8 이하인 문자열입니다.
*/

#include <string>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <iostream>
using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.length()==4 || s.length()==6){
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])) {answer=false;}
        }
        try{
            int num = atoi(s.c_str());
            if(num==0)
                throw num;
        }catch(int num){
            answer = false;
        }
        
    }else{
        answer = false;
    }
    return answer;
}
// isdigit()이라는 함수를 이용하는 것이 더 간결 
int main(){
    cout<<solution("a123");
}
