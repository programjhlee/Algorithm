/*

Baekjoon 1026 보물
https://www.acmicpc.net/problem/1026

2025 04 22 해결방안

간단하다. 가장 작은 A배열의 숫자와 가장큰 배열의 숫자를 곱한 것을 더하면
최소값이다.


슈도 코드

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