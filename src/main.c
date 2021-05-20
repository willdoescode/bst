#include <stdlib.h>
#include <stdio.h>
#include "bst.h"

int main()
{
  struct Node *head = init(4);
  insert(&head, 2);
  insert(&head, 7);

  print(head);

  deinit(head);
  return 0;
}
