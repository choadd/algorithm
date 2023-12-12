#include <stdio.h>
#include "ArrayList.h"

void ListInit(List *plist){
    (plist->numOfData) = 0;
    (plist->curPostion) = -1;
}

void LInsert(List *plist, LData data){
    if(plist->numOfData >= LIST_LEN){
        printf("List의 범위(%d)를 초과했습니다\n",LIST_LEN);
        return;
    }

    plist->arr[plist->numOfData] = data;
    (plist->numOfData)++;
}

int LFirst(List *plist, LData *pdata){
    if(plist->numOfData == 0){
        return FALSE;
    }
    (plist->curPostion) = 0;
    *pdata = plist->arr[plist->curPostion];
    return TRUE;
}

int LNext(List *plist, LData *pdata){
    if(plist->curPostion >= plist->numOfData-1)
        return FALSE;
    
    (plist->curPostion)++;
    *pdata = plist->arr[plist->curPostion];
    return TRUE;
}

LData LRemove(List *plist){
    int rpos = plist->curPostion;
    int num = plist->numOfData;
    int i;
    LData rdata = plist->arr[rpos];

    for(i = rpos; i < num - 1; i++){
        plist->arr[i] = plist->arr[i+1];
    }
    (plist->curPostion)--;
    (plist->numOfData)--;

    return rdata;
}

int LCount(List *plist){
    return plist->numOfData;
}