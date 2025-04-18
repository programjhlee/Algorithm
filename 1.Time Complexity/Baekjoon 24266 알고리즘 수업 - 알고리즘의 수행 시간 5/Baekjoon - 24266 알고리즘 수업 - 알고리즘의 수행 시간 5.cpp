/*

Baekjoon 24266 알고리즘 수업 - 알고리즘의 수행 시간 5

https://www.acmicpc.net/problem/24266



2025-04-18 - 첫번째 접근[해결]



MenOfPassion(A[], n) {
	sum <- 0;
	for i <- 1 to n
		for j <- 1 to n
			for k <- 1 to n
				sum <- sum + A[i] × A[j] × A[k]; # 코드1
	return sum;
}

더 할말이 없다. O(N^3)의 수행시간을 갖는다..

따라서 n의 수행 횟수도 n^3이다.





*/



#include <iostream>

using namespace std;

int main() {
	long long n;
	cin >> n;
	cout << n * n * n << endl;
	cout << 3 << endl;
}

