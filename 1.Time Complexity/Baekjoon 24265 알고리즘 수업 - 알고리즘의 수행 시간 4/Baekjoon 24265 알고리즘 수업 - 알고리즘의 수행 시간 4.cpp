/*

Baekjoon 24265 �˰��� ���� - �˰����� ���� �ð� 4

https://www.acmicpc.net/problem/24265


2025-04-18 -ù��° ����

MenOfPassion(A[], n) {
	sum <- 0;
	for i <- 1 to n - 1
		for j <- i + 1 to n
			sum <- sum + A[i] �� A[j]; # �ڵ�1
	return sum;
}


�ϴ� �ְ������� ����� 2�� �����̴� (O(N^2) ����ð��� ���� ������..)

�׷��� ���� Ƚ���� �ణ�� ����� �ʿ� �� �� ����.

10�� �־��ٰ� �����ϸ�
�ι�° for���� ù��° for���� ���� ���� ��ŭ �ݺ��Ѵ� �ǹ�.
�� 
2���� 10���� 9�� 3����10���� 8�� 4���� 10���� 7�� ..... 1�� 

�� n(n-1)/2�̴�.

������ 7�� �־��ٰ� ������ 21�� ���´�.



*/

#include <iostream>

using namespace std;


int main() {
	long long n;
	cin >> n;

	cout << (n * (n - 1)) / 2 << endl;
	cout << 2 << endl;
}