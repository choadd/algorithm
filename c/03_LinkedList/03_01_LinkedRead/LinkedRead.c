#include <stdio.h>
#include <stdlib.h>

/*
    연결리스트의 깔끔하지 못한 코드때문에 dummy linked list를 다음에 학습할 예정
*/

typedef struct _node {
	int data;
	struct _node *next;
} Node;

int main(void) {
	Node *head = NULL;
	Node *tail = NULL;
	Node *cur = NULL;

	Node *newNode = NULL;
	int readData;

	while(1) {
		printf("자연수 입력: ");
		scanf("%d", &readData);
		if(readData < 1)
			break;

		newNode = (Node *)malloc(sizeof(Node));
		newNode->data = readData;
		newNode->next = NULL;
		
		if(tail == NULL) 
			head = newNode; // 처음일때는 head, tail이 모두 newnode
		else 
			tail->next = newNode;

		tail = newNode;
	}
	printf("\n");

	printf("입력받은 데이터의 전체 출력!\n");
	if(head == NULL) {
		printf("저장된 자연수가 존재하지 않습니다.\n");	
	}
	else {
		cur = head;
		printf("%d ", cur->data);

		while(cur->next != NULL) {
			cur = cur->next;
			printf("%d ", cur->data);
		}
	}
	printf("\n\n");

	if(head == NULL) {
		return 0;
	}
	else {
		Node *delNode = head;
		Node *delNextNode = delNode->next;

		printf("%d을(를) 삭제합니다.\n", delNode->data);
		free(delNode);

		while(delNextNode != NULL) {
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			printf("%d을(를) 삭제합니다.\n", delNode->data);
			free(delNode);
		}
	}
	return 0;
}