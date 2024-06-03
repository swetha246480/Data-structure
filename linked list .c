#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Creating a node
struct node {
  int roll;
  char studentName[101] ;
  char teacher[101];
  struct node *next;
};

// print the linked list value
void printLinkedlist(struct node *p) {
  while (p != NULL) {
    printf("%d %s %s ", p->roll,p->studentName,p->teacher);
    p = p->next;
  }
}

int main() {
  // Initialize nodes
  struct node *head;
  struct node *one  = NULL;
  struct node *two  = NULL;
  struct node *three = NULL;

  // Allocate memory
  one = malloc(sizeof(struct node));
  two= malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));

  // Assign value values
  one->roll = 1;
  strcpy(one->teacher, "Mrs. Smith");
  strcpy(one->studentName, "John Doe");
  two->roll = 2;
  strcpy(two->teacher, "Mr. Johnson");
  strcpy(two->studentName, "Jane Doe");
  three->roll = 3;
  strcpy(three->teacher, "Ms. Lee");
  strcpy(three->studentName, "Jim Beam");

  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;

  // printing node-value
  head= one;
  printLinkedlist(head);
}
  

linked list inserting at beg 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Creating a node
struct node {
  int roll;
  char studentName[101] ;
  char teacher[101];
  struct node *next;
};

// print the linked list value
void printLinkedlist(struct node *p) {
  while (p != NULL) {
    printf("%d %s %s ", p->roll,p->studentName,p->teacher);
    p = p->next;
  }
}
void insertStart(struct node **head , int roll , const char *studentName , const char *teacher )
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->roll=roll;
    strcpy(newnode->studentName,studentName);
    strcpy(newnode->teacher,teacher);
    newnode->next=*head;
    
    *head=newnode;
}

int main() {
  // Initialize nodes
  struct node *head;
  struct node *one  = NULL;
  struct node *two  = NULL;
  struct node *three = NULL;

  // Allocate memory
  one = malloc(sizeof(struct node));
  two= malloc(sizeof(struct node));
  three = malloc(sizeof(struct node));

  // Assign value values
  one->roll = 1;
  strcpy(one->teacher, "Smith");
  strcpy(one->studentName, "John");
  two->roll = 2;
  strcpy(two->teacher, "Johnson");
  strcpy(two->studentName, "Jane");
  three->roll = 3;
  strcpy(three->teacher, "Lee");
  strcpy(three->studentName, "Jim");

  // Connect nodes
  one->next = two;
  two->next = three;
  three->next = NULL;

  // printing node-value
  head=one ;
  insertStart(&head,4,"cool","good");
  printLinkedlist(head);
}