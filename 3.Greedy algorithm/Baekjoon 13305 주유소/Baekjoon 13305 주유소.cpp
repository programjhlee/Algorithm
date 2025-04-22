/*

Baekjoon 13305 ������
https://www.acmicpc.net/problem/13305


2025 04 22 ù��° ����

���������� �⸧������ ���ݵ��ú��ٽδٸ� 
�� �Ÿ���ŭ �Ÿ��� ���ϰ� �� ���÷� �Ѿ��.


�����ڵ�

city[]// ���� �迭
road[]// �Ÿ� �迭
int result = 0;
present = 0;
remainRoad = 0;
city Idx = 0;
while (cityIdx < road[].size() - 1){
	if city[cityIdx] <= city[present]{
		remainRoad += road[citIdx];
		cityIdx++;
	}else{
		result += remainRoad * city[present];
		present = cityIdx;
		remainRoad = 0;
	}
}
result += remainRoad * city[present]

�߰�.

�ڷ��� ����..! ������ �� ������ longlong�� �����ʾ� ó���� 58���� ���Դ�..

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int N;
	cin >> N;
	
	vector<long long> road(N - 1, 0);
	for (int i = 0; i < N - 1; i++) {
		cin >> road[i];
	}
	vector<int> city(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> city[i];
	}
	int present = 0;
	int cityIdx = 0;
	long long remainRoad = 0;
	long long result = 0;
	while (cityIdx < N - 1) {
		if (city[present] <= city[cityIdx]) {
			remainRoad += road[cityIdx];
			cityIdx++;
		}
		else {
			result += remainRoad * city[present];
			present = cityIdx;
			remainRoad = 0;
		}

	}
	result += remainRoad * city[present];

	cout << result << endl;

}