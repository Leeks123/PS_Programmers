//�ڸ��� ���ϱ�
/*
���� ����
�ڿ��� N�� �־�����, N�� �� �ڸ����� ���� ���ؼ� return �ϴ� solution �Լ��� ����� �ּ���.
������� N = 123�̸� 1 + 2 + 3 = 6�� return �ϸ� �˴ϴ�.

���ѻ���
N�� ���� : 100,000,000 ������ �ڿ���
*/
#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
    while(true){
        answer+=n%10;
        n=n/10;
        if(n==0) break;
    }
    return answer;
}
