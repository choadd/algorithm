#include <iostream>
#include <vector>
#include <cstdlib> 
#include <windows.h>

void snakeMovePrint(std::vector<std::vector<int>>& snakeVector, int mapSize) {
	std::string arr[10][10];
	int xpos, ypos;


	for (int i = 0; i < mapSize; i++) {
		for (int j = 0; j < mapSize; j++) {
			arr[i][j] = "*";
		}
	}

	for (int i = 0; i < snakeVector.size(); i++) {
		int xpos = snakeVector[i][0];
		int ypos = snakeVector[i][1];

		arr[xpos][ypos] = "S";
	}

	for (int i = 0; i < mapSize; i++) {
		for (int j = 0; j < mapSize; j++) {
			std::cout << arr[i][j];
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;
	//for (const auto& row : snakeVector) {
	//	for (int num : row) {
	//		std::cout << num << " ";
	//	}
	//	std::cout << std::endl;
	//}

}

void snakeAddYpos(std::vector<std::vector<int>> &snakeVector, int num) {
	for (int i = 0; i < snakeVector.size(); i++) {
		snakeVector[i][1] += num;
	}
}

void snakeAddXpos(std::vector<std::vector<int>> &snakeVector, int num) {
	for (int i = 0; i < snakeVector.size(); i++) {
		snakeVector[i][0] += num;
	}
}

int main() {

	int target = 0;	// 총 걸린시간
	std::string moveList[] = {"N","E","S","W"};					// 방향 리스트
	
	int curIdx = 1;												// 방향 동쪽 INDEX값
	std::string curMove = moveList[curIdx];						// 현재 움직이는 방향

	std::vector<std::vector<int>> snakeVector = { {0,0}, };		// 1,1 좌표에 머리를 가지는 뱀
	std::vector<std::vector<int>> appleVector;					// 사과 저장 공간
	std::vector<std::pair<int, std::string>> moveVector;		// 이동명령 저장공간

	int mapSize;				// map 가로, 세로 좌표
	int appleVectorSize;		// 사과 벡터 크기
	int moveVectorSize;			// moveVector 크기

	std::cin >> mapSize;
	std::cin >> appleVectorSize;

	for (int i = 0; i < appleVectorSize; i++) {
		int xpos, ypos;
		std::cin >> xpos >> ypos;
		appleVector.push_back({ xpos, ypos });
	}

	std::cin >> moveVectorSize;

	for (int i = 0; i < moveVectorSize; i++) {
		int time;
		std::string direction;
		std::cin >> time >> direction;
		moveVector.push_back({ time, direction });
	}


	while (1) {
		if (curMove == "N") {		// 모든 인텍스에 y값 감소
			snakeAddXpos(snakeVector, -1);
		}
		else if (curMove == "E") {	// 모든 인덱스에 x값 증가
			snakeAddYpos(snakeVector, 1);
		}
		else if (curMove == "S") {	// 모든 인덱스에 y값 증가
			snakeAddXpos(snakeVector, 1);
		}
		else if (curMove == "W") {	// 모든 인덱스에 x값 감소
			snakeAddYpos(snakeVector, -1);
		}

		if (snakeVector.size() > 1) {
			int xpos, ypos;
			for (const auto& row : appleVector) {
				xpos = row[0];
				ypos = row[1];
			}
			if (xpos == snakeVector[0][0] && ypos == snakeVector[0][1]) {
				snakeVector.push_back({ xpos, ypos });
			}
		}

		for (const auto& row : appleVector) {
			int xpos, ypos;
			for (int num : row) {
				xpos = row[0];
				ypos = row[1];
			}
			if (xpos == 0 || ypos == 0) {
				continue;
			}

			if (xpos == snakeVector[0][0] && ypos == snakeVector[0][1]) { 		// 사과 발견
				snakeVector.push_back({ xpos, ypos });
			}
			else { // 사과를 발견하지 못했을때
				if (snakeVector.size() > 1) {
					snakeVector.pop_back();
				}
			}
		}

		// 맵사이즈 초과했을 경우
		if(snakeVector[0][0] > mapSize || snakeVector[0][1] > mapSize ) {
			std::cout << "target : " << target << std::endl;
			return target;
		}

		if (snakeVector[0][0] < 0 || snakeVector[0][1] < 0) {
			std::cout << "target : " << target << std::endl;
			return target;
		}

		target++;
		system("cls");
		snakeMovePrint(snakeVector, mapSize);
		Sleep(1000);

		for (const auto& pair : moveVector) {
			if (target == pair.first) { // 특정시간이 되었을 때
				if (pair.second == "L") { // 왼쪽 방향으로 전환
					if (curIdx == 0) { 
						curIdx = 3;
					}
					else {
						curIdx -= 1;
					}
				}
				else {					  // 오른쪽 방향으로 전환
					if (curIdx == 3) {
						curIdx = 0;
					}
					else {
						curIdx += 1;
					}
				}
				curMove = moveList[curIdx];
				std::cout << "change move" + curMove << std::endl;
			}
		}
	}

	// apple vector print
	for (const auto& row : appleVector) {
		std::cout << "apple vector" << std::endl;
		for (int num : row) {
			std::cout << num << " ";
		}
		std::cout << std::endl;
	}

	// move vector print
	for (const auto& pair : moveVector) {
		std::cout << "move vector" << std::endl;
		std::cout << pair.first << " " << pair.second << std::endl;
	}

	// snake vector print

	for (const auto& row : snakeVector) {
		for (int num : row) {
			std::cout << num << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
