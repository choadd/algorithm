#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
    int data;
    struct _node *next;
} Node;

int main(void){
    Node *head = NULL;
    Node *tail = NULL;
    Node *cur = NULL;

    Node *newNode;
    int data;

    while(1){
        printf("숫자를 입력하세요(0입력시 종료) : ");
        scanf("%d",&data);

        if(data == 0){
            break;
        }

        newNode = (Node *)malloc(sizeof(Node));
        newNode->data = data;
        newNode->next = NULL;

        if(head==NULL){
            head = newNode;
        }else{
            tail->next = newNode;
        }
        tail = newNode;
    }

    if(head == NULL){
        return 0;
    }else{
        cur = head;
        printf("head : %d\n", cur->data);
        while(cur->next != NULL){
            cur = cur->next;            
            printf("next : %d\n", cur->data);            
        }
    }

    if(head == NULL){
        return 0;
    }else{
        Node *delNode = head;
        Node *delNodeNext = head->next;
        printf("delete head : %d\n",delNode->data);
        free(delNode);
        while(delNodeNext != NULL){
            delNode = delNodeNext;
            delNodeNext = delNode->next;
            printf("delete next : %d\n",delNode->data);
            free(delNode);
        }
    }

}