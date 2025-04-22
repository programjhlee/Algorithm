/*

Baekjoon 1065 한수
https://www.acmicpc.net/problem/1065

2025 04 21 첫번째 접근

숫자 N이 있다고 가정하자 
100 미만의 수는 모두다 한수이다.따라서  100미만의 수는 그수를 반환한다

100미만이 아니라면 for문을 돌면서 각자릿수의 차이가 같은지를 검사하고
맞다면 정답수에 1을 더하고 아니면 다음으로 넘어간다.



슈도 코드

int N // 입력수 
int answer = 0; // 정답수

if (N < 100)//100 미만이 입력됐다면
cout << N // 그 수 그대로 출력

else( N < 111){
cout << 99 << //가장 작은 한수인 111 미만이면 99개뿐이므로 99개 출력
}

else{
 for(i = 111 ; i <=N ;i++){
	if (isHanNumber(i)){
		answer += 1;
	}

 }


 bool isHanNumber(i){

	string s = to_string(i) // 편한 자릿수 계산을 위한 변환
	
	int gap = (i.at(1)- '0') - (i.at(0) - '0'); // 차이계산

	for(int k = 1;k < s.length()-1;k++){ //차이 검사기
		if(gap != (s.at(k+1) - '0') - (s.at(k) - '0')){
		return false;
		}
	}
	return true;

 }


*/

#include <iostream>
#include <string>

using namespace std;


bool isHanNumber(int number);

int main() {
	int N;
	cin >> N;
	int answer = 99;

	if (N < 100) {
		cout << N << endl;
	}
	else if (N < 111) {
		cout << 99 << endl;
	}
	else {
		for (int i = 111; i <= N; i++) {
			if (isHanNumber(i)) {
				answer++;
			}
		}
		cout << answer;
	}

}

bool isHanNumber(int number) {
	string s = to_string(number);

	int gap = (s[1] - '0') - (s[0] - '0');

	for (int i = 1; i < s.length() - 1; i++) {
		if (gap != ((s[i + 1] - '0') - (s[i] - '0'))) {
			return false;
		}
	}
	return true;

}