#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> A;

	// ����
	A.push_back(1);				// �������� 1 �߰�
	A.insert(A.begin(), 7);		// �� �տ� 7 ����
	A.insert(A.begin() + 2, 10);// index 2��ġ�� 10����

	// ����
	A[4] = -5;					// index 4�� ���� -5�� ����

	// ����
	A.pop_back();				// ������ �� ����
	A.erase(A.begin() + 3);		// index 3�� �ش��ϴ� �� ����
	A.clear();					// ��� �� ����

	// ���� ��������
	A.size();					// �����ͼ�
	A.front();					// ó�� ��
	A.back();					// ������ ��
	A[3];						// 3�� index ��
	A.at(5);					// 5�� index ��
	A.begin();					// ù��° ������ ��ġ
	A.end();					// ������ ������ ���� ��ġ

	return 0;
}