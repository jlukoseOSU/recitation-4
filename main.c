/*
 * This program implements a simple loop through a small linked list, but it
 * is broken.  When you try to compile this file using the provided Makefile,
 * you will see several errors that say something like "incomplete type" or
 * "incomplete definition of type".  This happens because the linked list
 * is implemented in such a way as not to expose its inner implementation
 * details.  In this recitation exercise, you'll explore how to fix this
 * broken loop without exposing the implementation details of the list.
 */

#include <stdio.h>

#include "list.h"

int main() {
  struct list* list = list_setup();

  // needs head of linked list
  // struct link* curr = list->head;  /* This line generates a compiler error. */
  struct link* curr = get_head(list);
  int i = 0;

  while (curr != NULL) {
    /*
     * The next two lines each generate a compiler error.
     */

    // needs link->val
    // printf("== list[%2d]: %d\n", i, curr->val);
    printf("== list[%2d]: %d\n", i, get_val(curr));

    // needs link->next
    // curr = curr->next;
    curr = get_next(curr);
    i++;
  }

  return 0;
}
