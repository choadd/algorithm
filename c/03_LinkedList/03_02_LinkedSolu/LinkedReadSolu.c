#include <stdio.h>
#include <stdlib.h>

/*
    03_01의 LinkedRead.c를 개선한 버전
*/

typedef struct _node 
{
    int data;
    struct _node * next;
} Node;

int main(void){
    Node *head = NULL;
    Node *tail = NULL;
    Node *cur = NULL;

    Node *newNode;
    int readData;

    // add : tail이 더미노드를 가리킴
    head = (Node *)malloc(sizeof(Node));
    tail = head;

    while(1){
		printf("자연수 입력: ");
		scanf("%d", &readData);
        if(readData < 1)
            break;

        newNode = (Node *)malloc(sizeof(Node));
        newNode->data = readData;
        newNode->next = NULL;

        // if(head==NULL){
        //     head = newNode;
        // }else{
        //     tail->next = newNode;            
        // }
        tail->next = newNode;
        tail = newNode;
    }

    if(head == NULL){
        return 0;
    }else{
        cur = head;
        // printf("head : %d\n",cur->data);
        while(cur->next != NULL){
            cur = cur->next;
            printf("data : %d\n",cur->data);
        }
    }

    if(head == NULL){
        return 0;
    }else{
        Node *delNode = head;
        Node *delNextNode = head->next;
        // printf("%d을(를) 삭제합니다.\n", delNode->data);
        // free(delNode);
        while(delNextNode != NULL){
            delNode = delNextNode;
            delNextNode = delNextNode->next;
            
            printf("%d을(를) 삭제합니다.\n", delNode->data);
            free(delNode);
        }
    }

}