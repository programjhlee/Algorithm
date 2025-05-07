/*

Baekjoon 11660 ������ ���ϱ� 5
https://www.acmicpc.net/problem/11660

���ڰ� ��� 2���� �迭�� a �� �ϰ�
�������� ��� 2���� s �迭�̶�� ����

������p[i][j]�� ���ϴ� ����� 

p[i][j] = p[i-1][j] + p[i][j-1] - p[i-1][j-1] + s[i][j]; �̴�

���� x1y1���� x2y2 ������ �������� ���ϴ� �����

p[x2][y2] - p[x1-1][y2] - p[x2][y2-1] + p[x1-1][y1-1] �̴�


�����ڵ�

p[][] // �������� ��� 2�����迭

for(i to p.row){
	for(j to p.col){
		p[i][j] = p[i-1][j] + p[i][j-1] - p[i-1][j-1] + s[i][j]; // s = ���ڰ� ����ִ� �迭 ������ ���ϱ�
	}
}

print (p[x2][y2] - p[x1-1][y2] - p[x2][y2-1] + p[x1-1][y1-1]) // x1,y1 ���� x2 y2 ������ ������ ���ϱ� 



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

	vector<vector<int>> n(N + 1, vector<int>(N + 1, 0));
	vector<vector<int>> s(N + 1, vector<int>(N + 1, 0));

	for (int i = 1; i <= N; i++){
		for (int j = 1; j <= N; j++) {
			cin >> n[i][j];
			s[i][j] = s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1] + n[i][j];
		}
	}
	for (int i = 0; i < M; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << s[x2][y2] - s[x1 - 1][y2] - s[x2][y1 - 1] + s[x1 - 1][y1 - 1]  << "\n";
	}
}
