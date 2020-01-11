#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    vector<char> v(s.begin(),s.end());
    sort(v.begin(),v.end(),greater<char>()); // 벡터로 변환안해도 바로 정렬가능
    for(auto i:v){
        answer.push_back(i);
    }
    return answer;
}
int main(){
    cout<<solution("Zzxvwe");
}
