#include "consts.h"

double sjf(Process *p, int n) {
  int time = 0, wait = 0;
  qsort(p, n, sizeof(Process), shortest_job_first);
  for(int i=0; i<n; i++) {
    wait += time - p[i].arrival;
    time += p[i].burst;
  }
  return (wait / (double) n);
}