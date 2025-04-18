/*

Baekjoon 24266 �˰��� ���� - �˰����� ���� �ð� 5

https://www.acmicpc.net/problem/24266



2025-04-18 - ù��° ����[�ذ�]



MenOfPassion(A[], n) {
	sum <- 0;
	for i <- 1 to n
		for j <- 1 to n
			for k <- 1 to n
				sum <- sum + A[i] �� A[j] �� A[k]; # �ڵ�1
	return sum;
}

�� �Ҹ��� ����. O(N^3)�� ����ð��� ���´�..

���� n�� ���� Ƚ���� n^3�̴�.





*/



#include <iostream>

using namespace std;

int main() {
	long long n;
	cin >> n;
	cout << n * n * n << endl;
	cout << 3 << endl;
}

