//���ڿ� �ٷ�� �⺻
/*
���� ����
���ڿ� s�� ���̰� 4 Ȥ�� 6�̰�, ���ڷθ� �������ִ��� Ȯ�����ִ� �Լ�, solution�� �ϼ��ϼ���. 
���� ��� s�� a234�̸� False�� �����ϰ� 1234��� True�� �����ϸ� �˴ϴ�.

���� ����
s�� ���� 1 �̻�, ���� 8 ������ ���ڿ��Դϴ�.
*/

#include <string>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <iostream>
using namespace std;

bool solution(string s) {
    bool answer = true;
    if(s.length()==4 || s.length()==6){
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])) {answer=false;}
        }
        try{
            int num = atoi(s.c_str());
            if(num==0)
                throw num;
        }catch(int num){
            answer = false;
        }
        
    }else{
        answer = false;
    }
    return answer;
}
// isdigit()�̶�� �Լ��� �̿��ϴ� ���� �� ���� 
int main(){
    cout<<solution("a123");
}
