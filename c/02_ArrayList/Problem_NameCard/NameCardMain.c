#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "NameCard.h"

int main(void){
    List list;
    NameCard *nameCard;

    ListInit(&list);

    nameCard = MakeNameCard("사람A", "010-1111-2222");
    LInsert(&list, nameCard);

    nameCard = MakeNameCard("사람B", "010-2222-3333");
    LInsert(&list, nameCard);

    nameCard = MakeNameCard("사람C", "010-3333-4444");
    LInsert(&list, nameCard);

    if(LFirst(&list, &nameCard)){
        if(!NameCompare(nameCard, "사람B")){
            ShowNameCardInfo(nameCard);
        }
        if(!NameCompare(nameCard, "사람C")){
            nameCard = LRemove(&list);
            free(nameCard);
        }
        while(LNext(&list, &nameCard)){
            if(!NameCompare(nameCard, "사람B")){
                ShowNameCardInfo(nameCard);

                // update phoneNumber
                ChangePhoneNum(nameCard, "010-9999-9999");
                ShowNameCardInfo(nameCard);
            }
            if(!NameCompare(nameCard, "사람C")){
                nameCard = LRemove(&list);
                free(nameCard);
            }
        }
    }
    printf("전체 출력 \n");
    if(LFirst(&list, &nameCard)){
        ShowNameCardInfo(nameCard);
        while(LNext(&list, &nameCard)){
            ShowNameCardInfo(nameCard);
        }
    }

}