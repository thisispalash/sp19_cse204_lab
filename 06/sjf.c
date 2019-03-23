// Shortest Job First
#include "consts.h"
#include <stdlib.h>

int shortest_burst(const void *a, const void *b) {
  Process *A = (Process *) a;
  Process *B = (Process *) b;
  return (A->burst - B->burst);
}

double sjf(Process *p, int n) {
  int time = 0, wait = 0;
  qsort(p, n, sizeof(Process), shortest_burst);
  for(int i=0; i<n; i++) {
    wait += time - p[i].arrival;
    time += p[i].burst;
  }
  return (wait / (double) n);
}