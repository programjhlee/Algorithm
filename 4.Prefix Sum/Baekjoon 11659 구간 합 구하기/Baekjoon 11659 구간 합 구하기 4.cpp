/*

Baekjoon 구간합 구하기 4
https://www.acmicpc.net/problem/11659


2025 05 07 

누적합 prefix sum을 이용하면 간단히 구현 할 수 있다

각각의 원소를 arr[i]라 하고
0 부터 i 까지의 누적합을 p[i] 라하자

누적합을 구하는 공식은 
p[i] = p[i-1] + arr[i]; 이고
i 부터 j까지의 구간합 은 p[j] - p[i - 1] 이다 (i <= j)
p[j] 는 0부터 j까지의 합이고 p[i-1]은 0부터 i - 1 까지 이기 때문

슈도코드

p[] // 누적합이 담길 배열
for(0 to p.length()){
	cin >> int n;
	p[i] = p[i-1] + arr[i];
}

input >> i >> j

p[j] - p[i];


*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<int> p(N + 1, 0);

	for(int i = 1 ; i <= N; i++){
		int n = 0;
		cin >> n;
		p[i] = p[i - 1] + n;
	}

	for (int i = 0; i < M; i++) {
		int start = 0;
		int end = 0;
		cin >> start >> end;
		cout << p[end] - p[start - 1] << "\n";
	}
}