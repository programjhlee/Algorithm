/*

Baekjoon 11399 ATM
https://www.acmicpc.net/problem/11399


2025 04 22 ù��° ����

Ž�������� Ǯ��ȴ�

���� ���� �ð��� �ɸ��� ����� �տ��������� ��ٸ��� �ð��� ª�����Ƿ� �� �ɸ��� �ð� ���� �پ���

���� �ڵ�

arr[]; // ����� �ҿ�ð� �迭
int sumArr[] // �չ迭 ���� �迭
sort(arr[]);

sumArr[0] = sumArr[0]
for(1 to arr.size()){
	sumArr[i] = sumArr[i-1] + arr[i];
}

cout << sumArr[arr.size() - 1];

*/


#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> arr(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	vector<int>sumArr(N, 0);
	sumArr[0] = arr[0];

	for (int i = 1; i < N; i++) {
		sumArr[i] = sumArr[i - 1] + arr[i];
	}

	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += sumArr[i];
	}
	cout << sum;
}