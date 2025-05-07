/*

Baekjoon 7568 ��ġ
https://www.acmicpc.net/problem/7568

2025 04 23 - ù��° ����

��� k�� �����ϰ� 
Ű�� �����Ը� ���� Ž���Ͽ�, ���� target�� Ű�� �����԰� �˻��� Ű�� �����Ժ��� �Ѵ� ���ٸ�
��� k++�� ���ش�


���� �ڵ�
int k = 1;
answerArr [] = ���� �迭
for(target in student)// student �л��� Ű�� �����԰� ����ִ� �迭)
if(target < student.height,weigth){
	k++; // k = ���
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