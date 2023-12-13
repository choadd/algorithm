#include <stdio.h>
#include "DLinkedList.h"

int main(void){
    List list;
    int data;

    ListInit(&list);

    LInsert(&list, 3);
    LInsert(&list, 4);
    LInsert(&list, 5);

    if(LFirst(&list, &data)){
        printf("first : %d\n", data);
        while(LNext(&list, &data)){
            printf("data : %d\n", data);
        }
    }
}
