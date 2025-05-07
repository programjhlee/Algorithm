/*

Baekjoon 1026 ����
https://www.acmicpc.net/problem/1026

2025 04 22 �ذ���

�����ϴ�. ���� ���� A�迭�� ���ڿ� ����ū �迭�� ���ڸ� ���� ���� ���ϸ�
�ּҰ��̴�.


���� �ڵ�

sort(arrA);
reverseSort(arrB)l
int sum = 0;
for(int i = 0; i < N; i++){
	sum += arrA[i] * arrB[i];

}


*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {

	int N;
	cin >> N;

	vector<int> A(N, 0);
	vector<int> B(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> B[i];
	}
	sort(A.begin(), A.end());
	sort(B.rbegin(), B.rend());

	int answer = 0;

	for (int i = 0; i < N; i++) {

		answer += (A[i] * B[i]);
	}

	cout << answer;

}