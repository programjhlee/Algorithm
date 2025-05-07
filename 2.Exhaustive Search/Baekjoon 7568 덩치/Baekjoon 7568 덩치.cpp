/*

Baekjoon 7568 덩치
https://www.acmicpc.net/problem/7568

2025 04 23 - 첫번째 접근

등수 k를 지정하고 
키와 몸무게를 전부 탐색하여, 현재 target의 키와 몸무게가 검사한 키와 몸무게보다 둘다 낮다면
등수 k++를 해준다


슈도 코드
int k = 1;
answerArr [] = 정답 배열
for(target in student)// student 학생의 키와 몸무게가 들어있는 배열)
if(target < student.height,weigth){
	k++; // k = 등수
}
answer.push(k);


*/


#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<pair<int, int>>student(N, { 0,0 });
	
	for (int i = 0; i < N; i++) {
		cin >> student[i].first >> student[i].second;
	}
	vector<int> answer(N, 0);
	for (int i = 0; i < N; i++) {
		int k =1;
		for (int j = 0; j < N; j++) {
			if (student[i].first < student[j].first && student[i].second < student[j].second) {
				k++;
			}
		}
		answer[i] = k;
	}

	for (int i = 0; i < N; i++) {
		cout << answer[i] << " ";
	}
}