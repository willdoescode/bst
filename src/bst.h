#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <stdlib.h>

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

void insert(struct Node **head, int value)
{
  if (*head == NULL)
  {
    *head = init(value);
    return;
  }

  if ((*head)->value > value)
  {
    insert(&(*head)->left, value);
    return;
  }

  insert(&(*head)->right, value);
}

void invert(struct Node *head)
{
  if (head == NULL)
    return;

  invert(head->left);
  invert(head->right);

  struct Node *temp = head->left;
  head->left = head->right;
  head->right = temp;
}

void print(struct Node *head)
{
  if (head == NULL)
    return;

  print(head->left);
  printf(" %d ", head->value);
  print(head->right);
}

#endif // !BST_H
