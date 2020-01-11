#include <vector>
#include <cmath>
#include <iostream>

using namespace std;
int getGCD(int a,int b){
    //   유클리드 호제법
    if(b==0) return a;
    else{
        return a>b?getGCD(b,a%b):getGCD(a,b%a);
    }
}
vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd = 0,lcm=0;
    int a,b;

    gcd = getGCD(n,m);
    a = n>m?n/gcd:m/gcd;
    b = n<m?n/gcd:m/gcd;
    
    if(a/b==0) lcm = gcd*a;
    else lcm = gcd*a*b;
    // => lcm = n*m/gcd;
    
    answer.push_back(gcd);
    answer.push_back(lcm);
    return answer;
}
int main(){
//    cout<<getG
}
