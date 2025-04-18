/*

Baekjoon 24263 - 알고리즘 수업 - 알고리즘의 수행 시간2

https://www.acmicpc.net/problem/24263



2025 - 04 - 18 첫번째 접근 [해결]-

MenOfPassion(A[], n) {
	sum <- 0;
	for i <- 1 to n
		sum <- sum + A[i]; # 코드1
	return sum;
}

코드에 따르면  1 ~ n 즉 n번동안 다음 연산을 수행한다는 의미이다.

n을 입력하면 n번수행을 하고 이는 빅 오 표기법으로 적자면
O(N)의 수행시간을 갖게 된다.
따라서 최고차항  N의 계수는 1 이다.



*/


#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	cout << n << endl;
	cout << 1 << endl;
}