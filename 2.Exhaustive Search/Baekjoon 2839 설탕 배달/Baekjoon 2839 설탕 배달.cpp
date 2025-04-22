/*

Baekjoon 2839 설탕배달


2025 04 21 

브루트 포스로 푸는게 쉽다...
5로 나누어떨어질떄까지 설탕을 3kg씩 푸고 

슈도 코드
int N; // 제시한 설탕
int remain = 0; // 남은 설탕의 양
int answer = 0; //정답

while(N % 5 != 0 && N >= 3){ 5로 나누어 떨어지거나 설탕이 부족할때 까지  
	N -= 3;
	answer += 1;
}

if(N < 3){ 
	cout << -1;
}else if(N==0){
	cout << answer;
}else{
	answer += N/5;
	cout << answer;
}

*/
#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	int answer = 0;

	while (N % 5 != 0 && N >= 3) {
		N -= 3;
		answer += 1;
	}

	if (N == 0) {
		cout << answer;
	}
	else if (N < 3) {
		cout << -1;
	}
	else {
		answer += N / 5;
		cout << answer;
	}

}