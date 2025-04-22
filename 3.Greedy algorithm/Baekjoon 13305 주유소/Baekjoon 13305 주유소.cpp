/*

Baekjoon 13305 주유소
https://www.acmicpc.net/problem/13305


2025 04 22 첫번째 접근

다음도시의 기름가격이 지금도시보다싸다면 
그 거리만큼 거리를 더하고 그 도시로 넘어간다.


슈도코드

city[]// 도시 배열
road[]// 거리 배열
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

추가.

자료형 조심..! 범위를 잘 못봐서 longlong을 쓰지않아 처음에 58점이 나왔다..

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