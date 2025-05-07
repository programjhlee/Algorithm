/*

Baekjoon 2309 일곱난쟁이
https://www.acmicpc.net/problem/2309

2025 04 23 첫번째 접근

9난쟁이의 배열중 범위 7개를 지정하여 그 배열의 합이 100이되면 break후 출력한다.
슬라이드 윈도우 + 완전탐색의 문제



슈도코드

imp// 난쟁이키 배열
int startidx; // 시작 인덱스
for(0 to 8){
startidx =  0// 0~ 9 // 시작인덱스를 0부터 8사이로 지정
int sum = 0;
	for(7 times) // 7번 반복
		sum += imp[startIdx];
		startIdx = (startIdx + 1)%9;
	if(sum == 100){
		break;
	}

for(7times){
	cout << imp[startIdx] << endl;
	startIdx = (startIdx + 1)%9;
}


아 잘못생각했다... 인접한 난쟁이만 검사하기때문에
정답 인덱스가 0 1 3 4 5 6 8 이런식으로 떨어져있으면.. 슬라이드 윈도우 방법은 정답이 안될 수도 있다..

정말로 전부다 검사해야 하는문제...

9난쟁이의 합을 전부 구하고 for문을 돌면서
그 인덱스값의 합을 9난쟁이의 합을 빼준다
만약그 값이 100이 되면 그 인덱스값 두개를 저장한후 break해준다.

그후 그 인덱스값을 제외한 나머지 값을 출력한다.

슈도코드

sumImp // 9난쟁이의 키합
int idx1;
int idx2;
for(0to 7){
	int sum = 0;
	bool find = false;
	for (ito7) // i = startIdx 시작값
	{
		sum = imp[i] + imp[j]
		if(sumImp - sum ==100){
			idx1 = i;
			idx2 = j;
			find = true;
			break;
		}
	}
	if(find){
		break;
	}
}

for(int i = 0; i < 9 ; i++){
	if(i != idx1 && i != idx2){
		cout << imp[i] << endl;
	}
}

chatGPT에게 코드를 검수 받은 결과 
굳이 find와 sum을 만들필요가 없다고 한다..
아래는 수정코드

*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
	int impSum = 0;
	vector <int> imp(9, 0);
	for (int i = 0; i < 9;i++) {
		cin >> imp[i];
		impSum += imp[i];
	}

	sort(imp.begin(), imp.end());

	for (int i = 0; i < 8;i++) {
		bool find = false;
		for (int j = 1; j < 9;j++) {
			if ((impSum - imp[i] - imp[j]) == 100) {
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j) {
						cout << imp[k] << endl;
					}
				}
				return 0;
			}
		}
	}
}