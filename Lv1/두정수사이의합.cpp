//�� ���� ������ �� 
/*
���� ����
�� ���� a, b�� �־����� �� a�� b ���̿� ���� ��� ������ ���� �����ϴ� �Լ�, solution�� �ϼ��ϼ���. 
���� ��� a = 3, b = 5�� ���, 3 + 4 + 5 = 12�̹Ƿ� 12�� �����մϴ�.

���� ����
a�� b�� ���� ���� �� �� �ƹ� ���� �����ϼ���.
a�� b�� -10,000,000 �̻� 10,000,000 ������ �����Դϴ�.
a�� b�� ��Ұ���� ���������� �ʽ��ϴ�.
*/

#include <string>
#include <vector>
#include <iostream> 
using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int max = a>b?a:b;
    int min = a<b?a:b;
    
    for(int i = min;i<=max;i++){
        answer+=i;
    }
    return answer;
}
int main(){
    cout<<solution(3,5);
}
