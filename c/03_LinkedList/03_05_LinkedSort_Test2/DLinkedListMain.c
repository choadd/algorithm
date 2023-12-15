#include <stdio.h>
#include "DLinkedList.h"

int WhoIsPrecede(int d1, int d2){
    if(d1 < d2)
        return 0;
    else   
        return 1;
}

int main(void){
    List list;
    int data;
    ListInit(&list);

    SetSortRule(&list, WhoIsPrecede);

    LInsert(&list, 8);
    LInsert(&list, 5);
    LInsert(&list, 2);
    LInsert(&list, 9);

    printf("data count : %d\n", LCount(&list));

    if(LFirst(&list, &data)){
        printf("first : %d\n", data);
        while(LNext(&list, &data)){
            printf("next : %d\n", data);            
        }
    }

    if(LFirst(&list, &data)){
        data = LRemove(&list);
        printf("delete first data %d\n", data);
        while(LNext(&list, &data)){
            data = LRemove(&list);
            printf("delete next data %d\n", data);
        }
    }

    if(LFirst(&list, &data)){
        printf("first : %d\n", data);
        while(LNext(&list, &data)){
            printf("next : %d\n", data);            
        }
    }
    

}
