/*

Baekjoon 2231 분해합

https://www.acmicpc.net/problem/2231

2025 -04 -21 첫번째 접근

자연수가 1000000까지 가능하므로 모든 수를 다 대입해도 시간복잡도에 걸리지않는다.
브루트 포스를 이용하기.


슈도 코드



for(i = 1 to 1000000){

if( merge(i) == target) )// merge()분해합을 구하는 함수, target = 목표값
cout << i;
return;
}

cout << 0; // 만약 for문을 전부 돌아서 return이 되지 않았을 경우 0 출력



}



*/



#include <iostream>
#include <vector>
#include <string> // 각각의 자릿수를 구하기 위해 편의를 위해 string 사용

using namespace std;

int merge(int i); // 분해합을 구하기 위한 merge함수


int main() {
	int N;
	cin >> N;

	vector<int> answer;

	for (int i = 1; i <= 1000000;i++){
		if (N == merge(i)) {
			cout << i << endl;
			return 0;
		}
	}
	cout << 0;

}



int merge(int i) {
	string s = to_string(i);

	switch (s.length()) {

	case 1:
		return stoi(s) + (s[0] -'0');
	case 2:
		return stoi(s) + (s[0] - '0') + (s[1] - '0');
	case 3:
		return stoi(s) + (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
	case 4:
		return stoi(s) + (s[0] - '0') + (s[1] - '0') + (s[2] - '0') + (s[3] - '0');
	case 5:
		return stoi(s) + (s[0] - '0') + (s[1] - '0') + (s[2] - '0') + (s[3] - '0') + (s[4] - '0');
	case 6:
		return stoi(s) + (s[0] - '0') + (s[1] - '0') + (s[2] - '0') + (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
	case 7:
		return stoi(s) + (s[0] - '0') + (s[1] - '0') + (s[2] - '0') + (s[3] - '0') + (s[4] - '0') + (s[5] - '0') + (s[6] - '0');
	}

}


