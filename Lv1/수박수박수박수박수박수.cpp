//���ڼ��ڼ��ڼ��ڼ��ڼ�?
/*
���� ����
���̰� n�̰�, ���ڼ��ڼ��ڼ�....�� ���� ������ �����ϴ� ���ڿ��� �����ϴ� �Լ�, solution�� �ϼ��ϼ���. 
������� n�� 4�̸� ���ڼ����� �����ϰ� 3�̶�� ���ڼ��� �����ϸ� �˴ϴ�.

���� ����
n�� ���� 10,000������ �ڿ����Դϴ�.
*/
#include <iostream> 
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string su="��",bak="��";
    for(int i=1;i<=n;i++){
        if(i%2==0){
            answer+=bak;
        }else{
            answer+=su;
        }
    }
    return answer;
}
int main(){
    cout<<solution(5);
}
