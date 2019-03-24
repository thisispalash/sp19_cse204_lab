#include "consts.h"
#include <stdio.h>
#include <math.h>

double mqs(Process *p, int n) {
  qsort(p, n, sizeof(Process), priority_first);
  
  printf("\tDiving %d processess into %d queues based on priority\n",n,QUEUES);
  int p_q = (int) ceil(n/QUEUES), i=0, j=0, k=0;
  Process q[QUEUES][p_q];
  for (i=0; i<QUEUES && k<n; i++)
    for (j=0; j<p_q && k<n; j++)
      q[i][j] = p[k++];

  printf("\tUsing Round Robin for 1st queue, first come first serve for rest\n");
  // Include rr and fcfs for no warning
  double awt = rr(q[0],p_q);
  for (k=1; k<QUEUES; k++)
    awt += fcfs(q[k],p_q);

  return awt;
}