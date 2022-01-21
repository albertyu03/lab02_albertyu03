#include <cassert>
#include "linkedList.h"
#include "linkedListFuncs.h"



void addIntToEndOfList(LinkedList *list, int value) {
  assert(list!=NULL); // if list is NULL, we can do nothing.
  Node *p; // temporary pointer
  p = new Node;
  p->data = value;
  p->next = NULL;
  if (list->head == NULL) {
        list->head = p;
        list->tail = p;
  } else {
        list->tail->next = p;
        list->tail = p;
  }
}
void addIntToStartOfList(LinkedList *list, int value) {
  assert(list!=NULL); // if list is NULL, we can do nothing.
  Node *p = new Node;
  p->data = value;
  p->next = NULL;
  if(list->head == NULL) {
          list->head = p;
          list->tail = p;
  } else {
          p->next = list->head;
          list->head = p;
  }
}
Node * pointerToMax(LinkedList *list) {
  assert(list!=NULL);
  assert(list->head != NULL);
  Node* iter = list->head;
  Node* cMaxNode = list->head;
  while(iter != NULL) {
        if(iter->data > cMaxNode->data) {
               cMaxNode = iter;
        }
        if(iter->next == NULL) {
                break;
        }
        iter = iter->next;
  }
  return cMaxNode;
}

Node * pointerToMin(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   value of pointer to min element 
  //   (first one such value that occurs if there are ties.)

  return NULL; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the largest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int largestValue(LinkedList *list) {

  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   largest value in list (which may not be unique).

  return -42; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the smallest value in the list.
// This value may be unique, or may occur more than once
// You may assume list has at least one element

int smallestValue(LinkedList *list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);
  assert(list->head != NULL);

  // TODO: Insert code here to calculate and return
  //   smallest value in list (which may not be unique).

  return -42; // STUB!  Replace this line with correct code

}

// list: ptr to a linked list of Node (each with int data, and Node * next)
// Return the sum of all values in the list.
// You may assume that list is not NULL
// However, the list may be empty (i.e. list->head may be NULL)
//  in which case your code should return 0.

int sum(LinkedList * list) {
  // Code may assume that these assertions are true;
  //  so does not need to do error checking for these conditions.

  assert(list!=NULL);

  // TODO: Insert code here to calculate and return
  //   sum of all values in list (0 if there are none).

  return -42; // STUB!  Replace this line with correct code

}

