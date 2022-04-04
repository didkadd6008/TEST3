#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <string.h>

#define CNT 3

int point (double price);

typedef struct 
{
    double x;
    double y;
}point_t;

typedef struct
{
    point_t A;
    point_t B;
}rectangle_t;

typedef struct node {
    rectangle_t value;
    struct node* next;
} node_t;


void push(node_t** head, rectangle_t val){
    node_t* element = malloc(sizeof(node_t));
    element->value = val; 
    element->next = *head;
    *head = element;
}

node_t *arrayToList(rectangle_t rec[], int n)
{
    node_t *head = NULL;
    for (int i = 0; i < n; i++)
        push(&head, rec[i]);
   return head;
}

double areaRects(node_t*);

int main(){
rectangle_t rec[CNT];
for (int i = 0; i < CNT; i++)
{
    scanf("%lf",&rec[i].A.x);
    if (point(rec[i].A.x) != 0)
    {
        printf("Invalid input");
        break;
    }
    
     scanf("%lf",&rec[i].A.y);
    if (point(rec[i].A.y) != 0)
    {
        printf("Invalid input");
        break;
    }

     scanf("%lf",&rec[i].B.x);
    if (point(rec[i].B.x) != 0)
    {
        printf("Invalid input");
  
    }
     
      scanf("%lf",&rec[i].B.y);
    if (point(rec[i].B.y) != 0)
    {
        printf("Invalid input");
        break;
    }

    arrayToList(rec,CNT);

}


}

int point (double point){
 double min = -10.0;
 double max = 10.0;
 if(point < min || point > max){
 return 1;
 }else{
 return 0;
 }
}

double areaRects(node_t* list){

}