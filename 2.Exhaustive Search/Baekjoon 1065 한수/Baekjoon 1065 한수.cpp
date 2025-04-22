/*

Baekjoon 1065 �Ѽ�
https://www.acmicpc.net/problem/1065

2025 04 21 ù��° ����

���� N�� �ִٰ� �������� 
100 �̸��� ���� ��δ� �Ѽ��̴�.����  100�̸��� ���� �׼��� ��ȯ�Ѵ�

100�̸��� �ƴ϶�� for���� ���鼭 ���ڸ����� ���̰� �������� �˻��ϰ�
�´ٸ� ������� 1�� ���ϰ� �ƴϸ� �������� �Ѿ��.



���� �ڵ�

int N // �Է¼� 
int answer = 0; // �����

if (N < 100)//100 �̸��� �Էµƴٸ�
cout << N // �� �� �״�� ���

else( N < 111){
cout << 99 << //���� ���� �Ѽ��� 111 �̸��̸� 99�����̹Ƿ� 99�� ���
}

else{
 for(i = 111 ; i <=N ;i++){
	if (isHanNumber(i)){
		answer += 1;
	}

 }


 bool isHanNumber(i){

	string s = to_string(i) // ���� �ڸ��� ����� ���� ��ȯ
	
	int gap = (i.at(1)- '0') - (i.at(0) - '0'); // ���̰��

	for(int k = 1;k < s.length()-1;k++){ //���� �˻��
		if(gap != (s.at(k+1) - '0') - (s.at(k) - '0')){
		return false;
		}
	}
	return true;

 }


*/

#include <iostream>
#include <string>

using namespace std;


bool isHanNumber(int number);

int main() {
	int N;
	cin >> N;
	int answer = 99;

	if (N < 100) {
		cout << N << endl;
	}
	else if (N < 111) {
		cout << 99 << endl;
	}
	else {
		for (int i = 111; i <= N; i++) {
			if (isHanNumber(i)) {
				answer++;
			}
		}
		cout << answer;
	}

}

bool isHanNumber(int number) {
	string s = to_string(number);

	int gap = (s[1] - '0') - (s[0] - '0');

	for (int i = 1; i < s.length() - 1; i++) {
		if (gap != ((s[i + 1] - '0') - (s[i] - '0'))) {
			return false;
		}
	}
	return true;

}