/*

Baekjoon 2309 �ϰ�������
https://www.acmicpc.net/problem/2309

2025 04 23 ù��° ����

9�������� �迭�� ���� 7���� �����Ͽ� �� �迭�� ���� 100�̵Ǹ� break�� ����Ѵ�.
�����̵� ������ + ����Ž���� ����



�����ڵ�

imp// ������Ű �迭
int startidx; // ���� �ε���
for(0 to 8){
startidx =  0// 0~ 9 // �����ε����� 0���� 8���̷� ����
int sum = 0;
	for(7 times) // 7�� �ݺ�
		sum += imp[startIdx];
		startIdx = (startIdx + 1)%9;
	if(sum == 100){
		break;
	}

for(7times){
	cout << imp[startIdx] << endl;
	startIdx = (startIdx + 1)%9;
}


�� �߸������ߴ�... ������ �����̸� �˻��ϱ⶧����
���� �ε����� 0 1 3 4 5 6 8 �̷������� ������������.. �����̵� ������ ����� ������ �ȵ� ���� �ִ�..

������ ���δ� �˻��ؾ� �ϴ¹���...

9�������� ���� ���� ���ϰ� for���� ���鼭
�� �ε������� ���� 9�������� ���� ���ش�
����� ���� 100�� �Ǹ� �� �ε����� �ΰ��� �������� break���ش�.

���� �� �ε������� ������ ������ ���� ����Ѵ�.

�����ڵ�

sumImp // 9�������� Ű��
int idx1;
int idx2;
for(0to 7){
	int sum = 0;
	bool find = false;
	for (ito7) // i = startIdx ���۰�
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

chatGPT���� �ڵ带 �˼� ���� ��� 
���� find�� sum�� �����ʿ䰡 ���ٰ� �Ѵ�..
�Ʒ��� �����ڵ�

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