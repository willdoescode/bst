#include <stdlib.h>
#include <stdio.h>
#include "bst.h"

int main()
{
  struct Node *head = init(4);
  insert(&head, 1);
  insert(&head, 2);
  insert(&head, 3);
  insert(&head, 5);
  insert(&head, 6);
  insert(&head, 7);
  insert(&head, 8);

  invert(head);

  print(head);

  deinit(head);
  return 0;
}
