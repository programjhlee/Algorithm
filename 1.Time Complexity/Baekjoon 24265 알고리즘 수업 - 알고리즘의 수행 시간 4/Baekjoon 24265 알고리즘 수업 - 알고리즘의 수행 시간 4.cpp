/*

Baekjoon 24265 알고리즘 수업 - 알고리즘의 수행 시간 4

https://www.acmicpc.net/problem/24265


2025-04-18 -첫번째 접근

MenOfPassion(A[], n) {
	sum <- 0;
	for i <- 1 to n - 1
		for j <- i + 1 to n
			sum <- sum + A[i] × A[j]; # 코드1
	return sum;
}


일단 최고차항의 계수는 2로 고정이다 (O(N^2) 수행시간을 갖기 때문에..)

그런데 수행 횟수는 약간의 계산이 필요 할 것 같다.

10을 넣었다고 가정하면
두번째 for문을 첫번째 for문의 조건 범위 만큼 반복한단 의미.
즉 
2부터 10까지 9번 3부터10까지 8번 4부터 10까지 7번 ..... 1번 

즉 n(n-1)/2이다.

예제의 7을 넣었다고 헀을때 21이 나온다.



*/

#include <iostream>

using namespace std;


int main() {
	long long n;
	cin >> n;

	cout << (n * (n - 1)) / 2 << endl;
	cout << 2 << endl;
}