#include <stdlib.h>
#include <stdio.h>

struct link_List_creation
{
    int data;
    struct link_List_creation * next; 
};

void traversal(struct link_List_creation*head){
    while (head !=NULL)
    {
      printf("%d \n",head->data);
      head = head->next;
    }
}
struct link_List_creation * delete(struct link_List_creation * head){
    
    struct link_List_creation *ptr = head; // new pointer 
    head = head->next;
    free(ptr); // ptr free
    return head;

};


int main()
{
    struct link_List_creation * head; //head is first node hold potinter of first node
    struct link_List_creation *second;

    head = (struct link_List_creation *)malloc(sizeof(struct link_List_creation));
    second = (struct link_List_creation *)malloc(sizeof(struct link_List_creation));
    
    head ->data = 10;
    head ->next = second;

    second->data = 20;
    second->next = NULL;
    printf("before deletion \n");
    traversal(head);
    printf("after deletion \n");
    head= delete(head);
    traversal(head);

    return 0;
}
