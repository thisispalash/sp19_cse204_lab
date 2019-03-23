// First Come First Serve
#include "consts.h"

double fcfs(Process *p, int n) {
  int time = 0, wait = 0;
  for(int i=0; i<n; i++) {
    wait += time - p[i].arrival;
    time += p[i].burst;
  }
  return (wait / (double) n);
}