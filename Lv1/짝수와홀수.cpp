//¦���� Ȧ��
/*
-���� ����
���� num�� ¦���� ��� Even�� ��ȯ�ϰ� Ȧ���� ��� Odd�� ��ȯ�ϴ� �Լ�, solution�� �ϼ����ּ���.

-���� ����
num�� int ������ �����Դϴ�.
0�� ¦���Դϴ�.
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    if(num%2==0) return "Even";
    else return "Odd";
}
int main(){
    cout<<solution(3);
}
