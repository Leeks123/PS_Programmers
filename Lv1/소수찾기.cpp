#include <cmath>
#include <iostream>
using namespace std;
// 효율성테스트를 통과하지 못함
bool isPrimary_eratos(int n){
    if (n <= 1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
        else continue;
    }
    return true;
}
bool isPrimary(int n){ //전체 검사 (비효율)
    if(n==2) return true;
    for(int i=2;i<n;i++){
        if(n%i!=0){
            if(i==n-1) return true;
            continue;
        }else break;
    }
    return true;
}
int solution(int n) {
    int answer = 0;
    for(int i=2;i<=n;i++){
        cout<<isPrimary_eratos(i)<<" ";
        if(isPrimary_eratos(i)) answer++;
    }
    return answer;
}
int main(){
    cout<<solution(2);
}
