//������ �������� ���� �迭
/*
���� ����
array�� �� element �� divisor�� ������ �������� ���� ������������ ������ �迭�� ��ȯ�ϴ� �Լ�, solution�� �ۼ����ּ���.
divisor�� ������ �������� element�� �ϳ��� ���ٸ� �迭�� -1�� ��� ��ȯ�ϼ���.

���ѻ���
arr�� �ڿ����� ���� �迭�Դϴ�.
���� i, j�� ���� i �� j �̸� arr[i] �� arr[j] �Դϴ�.
divisor�� �ڿ����Դϴ�.
array�� ���� 1 �̻��� �迭�Դϴ�.//
*/
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    vector<int>::iterator it;
    for(it=arr.begin();it!=arr.end();){
        int n = *it;
        if(n%divisor!=0){
            it=arr.erase(it);
        }else{
            it++;
        }
    }
    answer = arr;
    sort(answer.begin(),answer.end());
    if(answer.size()==0){
        answer.push_back(-1);
    }
    return answer;
}

