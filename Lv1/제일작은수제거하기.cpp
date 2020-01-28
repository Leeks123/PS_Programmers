#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    vector<int> tmp=arr;
    sort(tmp.begin(),tmp.end());
    arr.erase(find(arr.begin(),arr.end(),tmp[0]));
    answer = arr;
    if(answer.size()==0) answer.push_back(-1);
    return answer;
}
int main(){
    solution({4,3,2,1});
    return 0;
}
