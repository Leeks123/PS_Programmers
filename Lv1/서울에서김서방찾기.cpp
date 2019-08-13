//���￡�� �輭�� ã��
/*
���� ����
String�� �迭 seoul�� element�� Kim�� ��ġ x�� ã��, �輭���� x�� �ִٴ� String�� ��ȯ�ϴ� �Լ�, solution�� �ϼ��ϼ���. seoul�� Kim�� ���� �� ���� ��Ÿ���� �߸��� ���� �ԷµǴ� ���� �����ϴ�.

���� ����
seoul�� ���� 1 �̻�, 1000 ������ �迭�Դϴ�.
seoul�� ���Ҵ� ���� 1 �̻�, 20 ������ ���ڿ��Դϴ�.
Kim�� �ݵ�� seoul �ȿ� ���ԵǾ� �ֽ��ϴ�.
*/

#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    vector<string>::iterator it;
    int cnt = 0;
    for(it=seoul.begin();it!=seoul.end();it++,cnt++){
        if((*it).compare("Kim")==0)
            break;
    }
    answer = "�輭���� "+std::to_string(cnt)+"�� �ִ�";
    return answer;
}
int main(){
    string a[]={"jane","Kim"};
    vector<string> seoul{a,a+1};
    cout<<solution(seoul);
}
