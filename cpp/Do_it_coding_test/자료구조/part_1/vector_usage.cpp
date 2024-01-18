#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> A;

	// 삽입
	A.push_back(1);				// 마지막에 1 추가
	A.insert(A.begin(), 7);		// 맨 앞에 7 삽입
	A.insert(A.begin() + 2, 10);// index 2위치에 10삽입

	// 변경
	A[4] = -5;					// index 4의 값을 -5로 변경

	// 삭제
	A.pop_back();				// 마지막 값 삭제
	A.erase(A.begin() + 3);		// index 3에 해당하는 값 삭제
	A.clear();					// 모든 값 삭제

	// 정보 가져오기
	A.size();					// 데이터수
	A.front();					// 처음 값
	A.back();					// 마지막 값
	A[3];						// 3번 index 값
	A.at(5);					// 5번 index 값
	A.begin();					// 첫번째 데이터 위치
	A.end();					// 마지막 데이터 다음 위치

	return 0;
}