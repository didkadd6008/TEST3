#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;
} node_t;

struct node* last = NULL;

void push(node_t** head, int val){
    node_t* element = malloc(sizeof(node_t));

    if (last == NULL) {
        element->value = val;
        element->next = val;
        last = val;
    } else {
        element->value = val;
        element->next = last->next;
        last->next = val;
    }
}

void print(){
    node_t* current = last->next;
    while (current != last->next){
        printf("%d ", current->value);
        current = current->next;
    }
    putchar('\n');
}
int main(){
node_t* head = NULL;
int number;
int nums;

scanf("%d",number);

for (int i = 0; i < number; i++)
{
  scanf("%d",nums);
  push(&head,nums);
}

print();

}