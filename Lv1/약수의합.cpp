//����� ��
/*
���� ����
�ڿ��� n�� �Է¹޾� n�� ����� ��� ���� ���� �����ϴ� �Լ�, solution�� �ϼ����ּ���.

���� ����
n�� 0 �̻� 3000������ �ڿ����Դϴ�.
*/ 
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> v;
    vector<int>::iterator it;
    for(int i=1;i<=n;i++){
        if(n%i==0) v.push_back(i);
    }
    for(it=v.begin();it!=v.end();it++){
        answer+=*it;
    }
    return answer;
}
int main(){
    cout<<solution(12);
} 
