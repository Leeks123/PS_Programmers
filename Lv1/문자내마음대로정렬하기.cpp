#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    vector<pair<string,char>> v;
    for(auto i:strings){
        v.push_back(pair<string,char>(i,i[n]));
    }
    sort(v.begin(),v.end());
    
    multimap<char,string> m;
    for(auto i : v){
        m.insert(pair<char,string>(i.second,i.first));
    }
//    for(auto i : m){
//        cout<<i.first<<" "<<i.second<<endl;
//    }
    for(auto i:m){
        answer.push_back(i.second);
    }
    return answer;
}
int main(){
    solution({"abce","abcd","cdx"},2);
}
