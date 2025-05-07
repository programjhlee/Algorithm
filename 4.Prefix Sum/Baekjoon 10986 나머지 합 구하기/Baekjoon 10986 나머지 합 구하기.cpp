/*

Baekjoon 10986 나머지 합 구하기
https://www.acmicpc.net/problem/10986

2025 05 07 첫번째접근

수의개수가 100개 언저리기 때문에 연산량이 n^3까지는 가능해 보인다
그렇다고 for문 돌때마다 다더하고 비교하고 이런식으로 하기에는 너무 많기때문에
구간합을 이용해야한다

구간합 s[]를 구했다고 가정한다

구간합 i부터 j까지를 구하는 공식은 s[j]- s[i]이다 
즉 2중 for문을 돌면서 각각의 구간합에 따른 나머지를 전부 고려하면된다.

슈도 코드

int result  = 0;

for(0 to i){
	for(i+1 to j){
		if(s[j]-s[i] % M == 0){ M // 나누어야 할 수
			result++;
		}
}

----- 위의 방법은 시간초과로 실패가 되었다. -----





*/

/*
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector <int> n(N + 1, 0);
	vector <int> s(N + 1, 0);
	for (int i = 1; i <= N;i++) {
		cin >> n[i];
		s[i] = s[i - 1] + n[i];
		cout << s[i] << " ";
	}

	int result = 0;

	for (int i = 0; i < N;i++) {
		for (int j = i + 1; j <= N;j++) {
			if ((s[j] - s[i]) % M == 0) {
				result++;
			}
		}
	}
	cout << result;
}

---- - 위의 방법은 시간초과로 실패가 되었다. ----- 


*/


/*

해결방법이 떠오르지않아 구글링을 참고했다

핵심 아이디어

(A+B)%C 와 (A%C + B%C) % C 와 같다
그렇단 의미는
A %C 와 B %C가 같으면  (A + B) %C 0 이므로 
A % C 와 B%C가 같은 경우를 모두 더해주면된다.

먼저 구간합을 모두 구한후 % M을 한 나머지를 배열에 담아준다
이때 0이 된 수 만큼 result에 더해주고

같은 숫자들끼리의 집합에서 같은 숫자를 뽑는 경우의 수 공식을  사용하여 result 에 더해준다


******* 수학적인 방식으로 시간복잡도를 줄이자는 아이디어.****
https://gliver.tistory.com/5 << 위의 핵심 아이디어인 모듈러 연산
*/