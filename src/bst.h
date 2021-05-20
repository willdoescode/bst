#ifndef BST_H
#define BST_H

struct Node
{
  int value;
  struct Node *right;
  struct Node *left;
};

struct Node *init(int value)
{
  struct Node *ret = (struct Node *)malloc(sizeof(struct Node));
  ret->value = value;
  ret->left = NULL;
  ret->right = NULL;

  return ret;
}

void deinit(struct Node *head)
{
  if (head == NULL)
    return;

  deinit(head->left);
  deinit(head->right);

  free(head);
}

#endif // !BST_H
