/*

baekjoon 11047 ���� 0
https://www.acmicpc.net/problem/11047

2025 04 22 ù��° ����

���� �ݾ׸�ŭ ������ �� ���� �����ش�.

�����ڵ�

int N; //�ݾ�
int answer = 0; // ����
coinArr[];//�Էµ� ������ ����ִ� arr

for i in coinArr[];

int coins = N/coinArr[i];
answer += coins;
N -= coins * coinArr[i];


return answer;

*�߰�
while�� ��������
���� = K=0�� �Ǹ� ���� �� �˻� �� �ʿ䰡 ���� ����



*/

#include <iostream>
#include <vector>

using namespace std;


int main() {
	int N, K;
	cin >> N >> K;

	int answer = 0;
	vector<int>coinArr(N, 0);
	
	for (int i = 0; i < N;i++) {
		cin >> coinArr[i];
	}
	int i = N-1;
;	while(K!=0 && i >=0){
		int coins = K / coinArr[i];
		answer += coins;
		K -= coins * coinArr[i];
		i--;
	}

	cout << answer;

}