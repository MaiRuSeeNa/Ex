#include<stdio.h>
#include<stdlib.h>

// 9. Jhompon Chomannee Sec 2 (wednesday)
// 65543206047-4
// https://youtu.be/s-_WTz1w96A

struct Node{
    int data;
    Node *next;
};


void display(struct Node* node){
    while(node!=NULL){
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n");
}

void UpdateNode(struct Node* node, int newData){
    node->data = newData;
}

void ShowBack(struct Node* node){
    if(node == NULL){
        return;
	}
    ShowBack(node->next);
    printf("%d ",node->data);
}

void SwapNode(struct Node* node1, struct Node* node2){
    int temp = node1->data;
    node1->data = node2->data;
    node2->data = temp;
}

int main()
{

    struct Node* node1 = NULL; 
    struct Node* node2 = NULL; 
    struct Node* node3 = NULL; 
    struct Node* node4 = NULL; 

    node1 =  (struct Node*)malloc(sizeof(struct Node)); 
    node2 = (struct Node*)malloc(sizeof(struct Node)); 
    node3 = (struct Node*)malloc(sizeof(struct Node)); 
    node4 = (struct Node*)malloc(sizeof(struct Node)); 

   
    node1->data = 10;
    node1->next = node2;
    
    node2->data = 20; 
    node2->next = node3; 

    node3->data = 30;
    node3->next = node4; 

    node4->data = 40;
    node4->next = NULL;
    
    printf("Linklist : ");
    display(node1);
    
    UpdateNode(head, 99);
	printf("Linklist Update : ");
	display(node1);	
    UpdateNode(node1, 10); 
    
    printf("Linklist ShowBack : ");
    ShowBack(node1);
    printf("\n");
    
    SwapNode(node2, node3);
    SwapNode(node4, head);
    printf("Linklist SwapNode : ");
    display(node1);



    return 0; 
}
