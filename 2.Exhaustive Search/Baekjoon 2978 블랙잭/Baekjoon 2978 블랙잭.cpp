/*

Baekjoon 2978 ����

https://www.acmicpc.net/problem/2798



2025-04-21 ù��° ����


ī�� ������ 100���� ���ѽð� 1�� �� �� 1��� ������� �����ϹǷ�
O(N^3)�� �ð����⵵�ε� ����� �ذ� �����ϴ�.

3�� for������ ���� �ٵ��鼭 �� �ĺ� arr�� �ְ� ������ ���� ������ ���� �������� �����Ѵ�.




*/




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	int N, M;
	cin >> N >> M;

	vector<int> arr(N, 0);
	vector <int> answer;

	for (int i = 0; i < N;i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < N - 2;i++) {
		for (int j = i + 1; j < N - 1;j++) {
			for (int k = j + 1; k < N; k++) {
				if (arr[i] + arr[j] + arr[k] <= M) {
					answer.push_back(arr[i] + arr[j] + arr[k]);
				}
			}
		}
	}

	sort(answer.begin(), answer.end());

	cout << answer[answer.size() - 1];

}