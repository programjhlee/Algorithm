/*

Baekjoon ������ ���ϱ� 4
https://www.acmicpc.net/problem/11659


2025 05 07 

������ prefix sum�� �̿��ϸ� ������ ���� �� �� �ִ�

������ ���Ҹ� arr[i]�� �ϰ�
0 ���� i ������ �������� p[i] ������

�������� ���ϴ� ������ 
p[i] = p[i-1] + arr[i]; �̰�
i ���� j������ ������ �� p[j] - p[i - 1] �̴� (i <= j)
p[j] �� 0���� j������ ���̰� p[i-1]�� 0���� i - 1 ���� �̱� ����

�����ڵ�

p[] // �������� ��� �迭
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