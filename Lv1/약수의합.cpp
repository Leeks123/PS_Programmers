//약수의 합
/*
문제 설명
자연수 n을 입력받아 n의 약수를 모두 더한 값을 리턴하는 함수, solution을 완성해주세요.

제한 사항
n은 0 이상 3000이하인 자연수입니다.
*/ 
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    vector<int>::iterator it;
    for(int i=1;i<=n;i++){
        if(n%i==0) v.push_back(i);
    }
    for(it=v.begin();it!=v.end();it++){
        answer+=*it;
    }
    return answer;
}
int main(){
    cout<<solution(12);
} 
