//��� ���ϱ�
/*
-���� ����
������ ��� �ִ� �迭 arr�� ��հ��� return�ϴ� �Լ�, solution�� �ϼ��غ�����.

-���ѻ���
arr�� ���� 1 �̻�, 100 ������ �迭�Դϴ�.
arr�� ���Ҵ� -10,000 �̻� 10,000 ������ �����Դϴ�.
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for(int i=0;i<arr.size();i++){
        answer +=arr[i];
    }
    answer = answer/arr.size();
    return answer;
}

int main(){
    int arr[]={1,2,3,4,5};
    vector<int> v{arr,arr+5};
    
    cout<<solution(v);
}
