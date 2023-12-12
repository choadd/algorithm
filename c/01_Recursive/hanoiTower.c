#include <stdio.h>

/*
    하노이탑 문제
    - from에 꽂혀있는 num개의 원반을 by를 거쳐서 to로 이동
    - 단, 낮은숫자의 원반위에 큰숫자의 원반이 올 수 없음

    Tips
    - from에서 by로 큰원판을 제외하고 이동
    - 큰원판만 from에서 to로 이동
    - by에 있는 작은원판들을 to로 이동
*/

void hanoiTowerMove(int num, char from, char by, char to)
{
    if(num == 1)
    {
        printf("원반 1을 %c 에서 %c로 이동\n", from, to);
    }
    else
    {
        hanoiTowerMove(num-1, from, to, by);
        printf("원반 %d를 %c에서 %c로 이동\n", num, from, to);
        hanoiTowerMove(num-1, by, from, to);
    }
}

int main(void)
{
    int num = 3;
    char towerName[] = {'A', 'B', 'C'};
    hanoiTowerMove(num, towerName[0], towerName[1], towerName[2]);

    return 0;
}