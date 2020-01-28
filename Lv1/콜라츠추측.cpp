#include <string>
#include <vector>
#include <iostream>

using namespace std;

long collatz(long num){
    if(num%2==0){
        return num/2;
    }else{
        return num*3+1;
    }
}
int solution(int num) {
    int answer = 0;
    long tmp=num;
    if(num==1) return 0;
    while(true){
        tmp=collatz(tmp);
        answer++;
        if(tmp==1) break;
        if(answer==500) return -1;
    }
    return answer;
}
int main(){
    cout<<solution(1);
    return 0;
}
