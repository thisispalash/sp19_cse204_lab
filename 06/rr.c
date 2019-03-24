#include "consts.h"
#include <stdio.h>
#include <stdlib.h>

double rr(Process* p, int n) {
  qsort(p, n, sizeof(Process), priority_first);
  printf("Using time quantum %d\n", QUANTUM);
  int wait = 0, index = 0, left = n, q = QUANTUM;
  while (left != 0) {
    if (p[index].burst < QUANTUM)
      q = p[index].burst;
    p[index].burst -= q;
    wait += q * (left-1); // running process is not waiting
    if (p[index].burst == 0)
      left--;
    if (++index == n) 
      index = 0;
  }
  return (wait / (double) n);
}