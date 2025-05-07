/*

Baekjoon 11660 구간합 구하기 5
https://www.acmicpc.net/problem/11660

숫자가 담긴 2차원 배열을 a 라 하고
구간합이 담긴 2차원 s 배열이라고 하자

구간합p[i][j]를 구하는 방법은 

p[i][j] = p[i-1][j] + p[i][j-1] - p[i-1][j-1] + s[i][j]; 이다

그후 x1y1부터 x2y2 까지의 구간합을 구하는 방법은

p[x2][y2] - p[x1-1][y2] - p[x2][y2-1] + p[x1-1][y1-1] 이다


슈도코드

p[][] // 구간합을 담는 2차원배열

for(i to p.row){
	for(j to p.col){
		p[i][j] = p[i-1][j] + p[i][j-1] - p[i-1][j-1] + s[i][j]; // s = 숫자가 들어있는 배열 구간합 구하기
	}
}

print (p[x2][y2] - p[x1-1][y2] - p[x2][y2-1] + p[x1-1][y1-1]) // x1,y1 부터 x2 y2 까지의 구간합 구하기 



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
