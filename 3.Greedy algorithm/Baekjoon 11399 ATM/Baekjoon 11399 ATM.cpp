/*

Baekjoon 11399 ATM
https://www.acmicpc.net/problem/11399


2025 04 22 첫번째 접근

탐욕기법으로 풀면된다

가장 적은 시간이 걸리는 사람이 앞에있을수록 기다리는 시간이 짧아지므로 총 걸리는 시간 또한 줄어든다

슈도 코드

arr[]; // 사람의 소요시간 배열
int sumArr[] // 합배열 저장 배열
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