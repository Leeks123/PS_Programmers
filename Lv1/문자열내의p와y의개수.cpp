//���ڿ� �� p�� y�� ����
/*
���� ����
�빮�ڿ� �ҹ��ڰ� �����ִ� ���ڿ� s�� �־����ϴ�.
 s�� 'p'�� ������ 'y'�� ������ ���� ������ True, �ٸ��� False�� return �ϴ� solution�� �ϼ��ϼ���. 
 'p', 'y' ��� �ϳ��� ���� ���� �׻� True�� �����մϴ�. 
 ��, ������ ���� �� �빮�ڿ� �ҹ��ڴ� �������� �ʽ��ϴ�.

������� s�� pPoooyY�� true�� return�ϰ� Pyy��� false�� return�մϴ�.

���ѻ���
���ڿ� s�� ���� : 50 ������ �ڿ���
���ڿ� s�� ���ĺ����θ� �̷���� �ֽ��ϴ�.
*/

#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    int y=0,p=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='y'||s[i]=='Y') y++;
        if(s[i]=='p'||s[i]=='P') p++;
    }
    if(y!=p) answer = false;
    return answer;
}
int main(){
    cout<<solution("poyy");
} 
