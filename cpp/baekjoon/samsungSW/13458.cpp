#include <iostream>

/*
	1개의 시험장 응시자 <= 총감독관 + N명 x 부감독관 

	실패 원인 : target을 0으로 초기화를 안해줌
*/

int main() {
	int testRoomCnt;			// 시험장 개수
	
	int chiefSupervisorCnt;		// 총감독관 응시자 감독 인원
	int subSupervisorCnt;		// 부감독관 응시자 감독 인원

	std::cin >> testRoomCnt;

	int* testerCnt = new int[testRoomCnt];	// 시험장별 응시자수
	int testRoomTester = 0;

	for (int i = 0; i < testRoomCnt; i++) {
		std::cin >> testerCnt[i];
	}

	std::cin >> chiefSupervisorCnt >> subSupervisorCnt;

	long long answer = 0;		// 답
	int target = 0;				// 부감독관 인원

	for (int i = 0; i < testRoomCnt; i++) {
		testerCnt[i] -= chiefSupervisorCnt;
		answer++;
		target = 0;
		if ( testerCnt[i] > 0) {
			if (testerCnt[i] % subSupervisorCnt == 0) {
				target = testerCnt[i] / subSupervisorCnt;
			}
			else {
				target = (testerCnt[i] / subSupervisorCnt) + 1;
			}
		}
		answer += target;
	}
	std::cout << answer;

	return 0;
}
