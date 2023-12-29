#include <stddef.h>
#include "ex10_ll_cycle.h"

int ll_has_cycle(node *head) {
  node *fast_ptr = head;
  node *slow_ptr = head;
  
  for (;;) {
    if (fast_ptr == NULL) {
      return 0;
    }
    fast_ptr = fast_ptr->next;
    if (fast_ptr == NULL) {
      return 0;
    }
    fast_ptr = fast_ptr->next;
    slow_ptr = slow_ptr->next;

    if (fast_ptr == slow_ptr) {
      return 1;
    }
  }
}
