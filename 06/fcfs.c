// First Come First Serve
#include "consts.h"

double fcfs(int *p, int n) {
  int time = 0, wait = 0;
  for(int i=0; i<n*PROPS; i+=PROPS) {
    time += p[i]; // Change to wait time not burst
  }
  return (wait / (double) n);
}