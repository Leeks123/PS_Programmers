//�ϻ��� ��
/*
���� ����
���� ���� x�� �ϻ��� ���̷��� x�� �ڸ����� ������ x�� ���������� �մϴ�. 
���� ��� 18�� �ڸ��� ���� 1+8=9�̰�, 18�� 9�� ������ �������Ƿ� 18�� �ϻ��� ���Դϴ�. 
�ڿ��� x�� �Է¹޾� x�� �ϻ��� ������ �ƴ��� �˻��ϴ� �Լ�, solution�� �ϼ����ּ���.

���� ����
x�� 1 �̻�, 10000 ������ �����Դϴ�.
*/
#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int tmp = x;
    bool answer = true;
    vector<int> v;
    vector<int>::iterator it;
    while(true){
        v.push_back(tmp%10);
        tmp=tmp/10;
        if(tmp==0) break;
    }
    int hashad=0;
    for(it=v.begin();it!=v.end();it++){
        hashad+=*it;
    }
    if(x%hashad==0) return true;
    else return false;
}
