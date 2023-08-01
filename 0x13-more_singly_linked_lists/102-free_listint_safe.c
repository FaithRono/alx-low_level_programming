#include "lists.h"
  2 #include <stdio.h>
  3 
  4 size_t looped_listint_y(const listint_t *head);
  5 size_t print_listint_safe(const listint_t *head);
  6 /**
  7   * looped_listint_y - functions that counts unique nodes
  8   * @ head: head the node
  9   * Return: number of unique nodes
 10   */
 11 size_t looped_listint_y(const listint_t *head)
 12 {
 13         const listint_t *a, *b;
 14         size_t x = 1;
 15 
 16         if(head == NULL || head->next ==NULL)
 17                 return (0);
 18         a = head->next;
 19         b = (head->next)->next;
 20          while (b)
 21          {
 22                  if (a == b)
 23                  {
 24                          a = head;
 25                          while (a != b)
 26                          {
 27                                  x++;
 28                                  a = a->next;
 29                                  b = b->next;
 30                          }
 31  
 32                          a = a->next;
 33                          while (a != b)
 34                          {
 35                                  x++;
 36                                  a = a->next;
 37                          }
 38                          return (x);
 39                  }
 40                          a = a->next;
 41                          b = (b->next)->next;
 42          }
 43  
