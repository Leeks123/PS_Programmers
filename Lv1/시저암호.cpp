#include <string>
#include <vector>
#include <iostream>

using namespace std;
char caesar(char c,int n){
    if(c>=97){
        if(c+n>122) c+=n-26;
        else c+=n;
    }else{
        if(c+n>90) c+=n-26;
        else c+=n;
    }
    return c;
}
string solution(string s, int n) {//65~90 A 97~122 a
    string answer="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            answer+=s[i];
            continue;
        }
        answer+=caesar(s[i],n);
    }
    return answer;
}
int main(){
    cout<<solution("a B z",1);
    return 0;
}
