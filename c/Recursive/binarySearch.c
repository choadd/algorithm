#include <stdio.h>

/*
    재귀함수 이진탐색 (재귀함수를 익히기 위함)
    - 순차적으로 정렬된 배열이 필수조건
    - 중간값 기준으로 왼쪽, 오른쪽 처음 인덱스부터 탐색
*/

int bSearch(int arr[], int first, int last, int target)
{
    int mid;
    if (first > last) // 탐색 실패
        return -1;

    mid = (first+last)/2;

    printf(" mid value : %d\n", mid);

    if(target == arr[mid])
        return mid;
    else if(target < arr[mid])
        return bSearch(arr, first, mid-1, target);
    else
        return bSearch(arr, mid+1, last, target);
}

int main(void)
{
    int idx;
    int target = 7;

    int arr[] = {1,3,5,7,9};

    idx = bSearch(arr, 0, sizeof(arr)/sizeof(int)-1, target);
    printf("search target index : %d \n", idx);

    idx = bSearch(arr, 0, sizeof(arr)/sizeof(int)-1, 4);
    printf("search target index : %d \n", idx);

    return 0;
}