#include "consts.h"
#include <stdlib.h>

int priority_first(const void *a, const void *b) {
  Process *A = (Process *) a;
  Process *B = (Process *) b;
  if (A->priority > B->priority)
    return 1;
  if (A->priority < B->priority)
    return -1;
  return (A->arrival - B->arrival);
}

double prior(Process *p, int n) {
  qsort(p, n, sizeof(Process), priority_first);
  int time = p[0].burst, wait = 0;
  for(int i=1; i<n; i++) {
    wait += time - p[i].arrival;
    time += p[i].burst;
  }
  return (wait / (double) n);
}