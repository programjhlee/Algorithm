/*

Baekjoon 2839 �������


2025 04 21 

���Ʈ ������ Ǫ�°� ����...
5�� ��������������� ������ 3kg�� Ǫ�� 

���� �ڵ�
int N; // ������ ����
int remain = 0; // ���� ������ ��
int answer = 0; //����

while(N % 5 != 0 && N >= 3){ 5�� ������ �������ų� ������ �����Ҷ� ����  
	N -= 3;
	answer += 1;
}

if(N < 3){ 
	cout << -1;
}else if(N==0){
	cout << answer;
}else{
	answer += N/5;
	cout << answer;
}

*/
#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	int answer = 0;

	while (N % 5 != 0 && N >= 3) {
		N -= 3;
		answer += 1;
	}

	if (N == 0) {
		cout << answer;
	}
	else if (N < 3) {
		cout << -1;
	}
	else {
		answer += N / 5;
		cout << answer;
	}

}