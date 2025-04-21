/*

Baekjoon 2978 블랙잭

https://www.acmicpc.net/problem/2798



2025-04-21 첫번째 접근


카드 개수가 100개고 제한시간 1초 즉 약 1억번 연산까지 가능하므로
O(N^3)의 시간복잡도로도 충분히 해결 가능하다.

3중 for문으로 값을 다돌면서 답 후보 arr에 넣고 정렬후 제일 마지막 값을 정답으로 제출한다.




*/




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	int N, M;
	cin >> N >> M;

	vector<int> arr(N, 0);
	vector <int> answer;

	for (int i = 0; i < N;i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < N - 2;i++) {
		for (int j = i + 1; j < N - 1;j++) {
			for (int k = j + 1; k < N; k++) {
				if (arr[i] + arr[j] + arr[k] <= M) {
					answer.push_back(arr[i] + arr[j] + arr[k]);
				}
			}
		}
	}

	sort(answer.begin(), answer.end());

	cout << answer[answer.size() - 1];

}