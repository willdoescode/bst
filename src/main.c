#include <stdlib.h>
#include "bst.h"

int main()
{
  struct Node *head = init(4);

  deinit(head);
  return 0;
}
