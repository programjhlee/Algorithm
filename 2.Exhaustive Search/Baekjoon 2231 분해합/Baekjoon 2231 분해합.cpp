/*

Baekjoon 2231 ������

https://www.acmicpc.net/problem/2231

2025 -04 -21 ù��° ����

�ڿ����� 1000000���� �����ϹǷ� ��� ���� �� �����ص� �ð����⵵�� �ɸ����ʴ´�.
���Ʈ ������ �̿��ϱ�.


���� �ڵ�



for(i = 1 to 1000000){

if( merge(i) == target) )// merge()�������� ���ϴ� �Լ�, target = ��ǥ��
cout << i;
return;
}

cout << 0; // ���� for���� ���� ���Ƽ� return�� ���� �ʾ��� ��� 0 ���



}



*/



#include <iostream>
#include <vector>
#include <string> // ������ �ڸ����� ���ϱ� ���� ���Ǹ� ���� string ���

using namespace std;

int merge(int i); // �������� ���ϱ� ���� merge�Լ�


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


