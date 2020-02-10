#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> row;
    for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr1[0].size();j++){
            row.push_back(arr1[i][j]+arr2[i][j]);
        }
        answer.push_back(row);
        row.clear();
    }
    return answer;
}

int main(){
//    cout<<solution([[1,2],[2,3]]    [[3,4],[5,6]]    [[4,6],[7,9]]);
    return 0;
}
