/*

Baekjoon 24267 - �˰��� ���� �˰����� ���� �ð� 6

https://www.acmicpc.net/problem/24267


2025 04 18 ù��° ����

MenOfPassion(A[], n) {
	sum <- 0;
	for i <- 1 to n - 2
		for j <- i + 1 to n - 1
			for k <- j + 1 to n
				sum <- sum + A[i] �� A[j] �� A[k]; # �ڵ�1
	return sum;
}

O(N^3)�� ����ð��� ���´�.
���� ����ð��� �����ε�..

����ó�� 7�� �ִ´ٰ� �����ϸ�..
�ι�° for���� n-2�� ��ŭ ���ϱ� (2 - 6) (3 - 6) .... (6 ....6) 5 + 4 + 3 + 2 + 1 
����° for���� j�� ��ŭ �� ���ϱ� 3 - 7 4 - 7 5 -7 6 -7 7 -7 = 5 + 4  + 3 + 2 + 1  + 4 + 3 + 2 +1  + 3 + 2 + 1 +2 +1 + 1 = 35...

������ ������ �ʿ��� �����ΰ� ���� ������ ã�Ҵ�.

(n - 2) * (n - 1) * n / 6 �հ���..



*/

#include <iostream>

using namespace std;

int main(){
	long n;
	cin >> n;

	cout << ((n - 2) * (n - 1) * n )/ 6 << endl;
	cout << 3;
}