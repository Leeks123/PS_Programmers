//��� ���� ��������
/*
���� ����
�ܾ� s�� ��� ���ڸ� ��ȯ�ϴ� �Լ�, solution�� ����� ������. �ܾ��� ���̰� ¦����� ��� �α��ڸ� ��ȯ�ϸ� �˴ϴ�.

���ѻ���
s�� ���̰� 1 �̻�, 100������ ��Ʈ���Դϴ�.
*/

#include <iostream>
#include <string>
using namespace std;

string solution(string s) {
	string answer = "";
	if (s.length() % 2 == 0) {
		answer = s.substr((s.length() / 2) - 1,1)+
		s.substr(s.length() / 2,1);
		
	}
	else {
		answer = s[s.length() / 2];
	}
	return answer;
}
int main() {
	string s;
	cin >> s;
	cout << solution(s) << endl;
}
