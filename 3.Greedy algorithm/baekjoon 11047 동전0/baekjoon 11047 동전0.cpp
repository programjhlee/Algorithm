/*

baekjoon 11047 동전 0
https://www.acmicpc.net/problem/11047

2025 04 22 첫번째 접근

동전 금액만큼 나눠서 그 몫을 더해준다.

슈도코드

int N; //금액
int answer = 0; // 정답
coinArr[];//입력된 동전이 들어있는 arr

for i in coinArr[];

int coins = N/coinArr[i];
answer += coins;
N -= coins * coinArr[i];


return answer;

*추가
while로 수정했음
이유 = K=0이 되면 굳이 더 검사 할 필요가 없기 때문



*/

#include <iostream>
#include <vector>

using namespace std;


int main() {
	int N, K;
	cin >> N >> K;

	int answer = 0;
	vector<int>coinArr(N, 0);
	
	for (int i = 0; i < N;i++) {
		cin >> coinArr[i];
	}
	int i = N-1;
;	while(K!=0 && i >=0){
		int coins = K / coinArr[i];
		answer += coins;
		K -= coins * coinArr[i];
		i--;
	}

	cout << answer;

}