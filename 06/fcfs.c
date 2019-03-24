#include "consts.h"

double fcfs(Process *p, int n) {
  qsort(p, n, sizeof(Process), first_come_first_serve);
  int time = p[0].burst, wait = 0;
  for(int i=1; i<n; i++) {
    wait += time - p[i].arrival;
    time += p[i].burst;
  }
  return (wait / (double) n);
}