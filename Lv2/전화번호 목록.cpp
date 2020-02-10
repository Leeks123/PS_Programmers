#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
bool solution(vector<string> phone_book) { 
    bool answer = true;
    sort(phone_book.begin(),phone_book.end());
    for(int i=0;i<phone_book.size();i++){
        for(int j=0;j<phone_book.size();j++){
            if(i==j) continue;
            if(phone_book[j].find(phone_book[i],0)<phone_book[j].size()){
                if(phone_book[j].find(phone_book[i],0)==0){
                    return false;
                }
            }
        }
    }
    return answer;
}
int main(){
    cout<<solution({"97674223", "1195524421","119"});
    cout<<solution({"123","456","789"});
    cout<<solution({"12357","123","1235","567","88"});

    return 0;
}
