/*

Baekjoon 24267 - 알고리즘 수업 알고리즘의 수행 시간 6

https://www.acmicpc.net/problem/24267


2025 04 18 첫번째 접근

MenOfPassion(A[], n) {
	sum <- 0;
	for i <- 1 to n - 2
		for j <- i + 1 to n - 1
			for k <- j + 1 to n
				sum <- sum + A[i] × A[j] × A[k]; # 코드1
	return sum;
}

O(N^3)의 수행시간을 갖는다.
역시 수행시간이 문제인데..

예제처럼 7을 넣는다고 가정하면..
두번째 for문은 n-2번 만큼 더하기 (2 - 6) (3 - 6) .... (6 ....6) 5 + 4 + 3 + 2 + 1 
세번째 for문은 j수 만큼 또 더하기 3 - 7 4 - 7 5 -7 6 -7 7 -7 = 5 + 4  + 3 + 2 + 1  + 4 + 3 + 2 +1  + 3 + 2 + 1 +2 +1 + 1 = 35...

수학적 공식이 필요한 문제인거 같아 공식을 찾았다.

(n - 2) * (n - 1) * n / 6 합공식..



*/

#include <iostream>

using namespace std;

int main(){
	long n;
	cin >> n;

	cout << ((n - 2) * (n - 1) * n )/ 6 << endl;
	cout << 3;
}