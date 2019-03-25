#include "consts.h"

double srt(Process *p, int n) {
  qsort(p, n, sizeof(Process), shortest_job_first);
  int wait = 0, time = 0;
  for(int i=0; i<n; i++) {
    wait += time - p[i].arrival;
    time += p[i].burst;
  } // Same as SJF lol; No alteration inbetween execution
  return (wait / (double) n);
}