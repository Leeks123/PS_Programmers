#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;
bool isSquare(long long n){
    if(sqrt(n)==(long long)sqrt(n)) return true;
    else return false;
}
long long solution(long long n) {
    long long answer = 0;
    if(isSquare(n)){
        answer = pow(sqrt(n)+1,2);
    }else answer = -1;
    return answer;
}
int main(){
    cout<<solution(121);
}
