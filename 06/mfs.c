#include "consts.h"
#include <stdio.h>
#include <math.h>

void update_queues(Process *q[], int p_q, int next) {
  for(int i=0; i<QUEUES; i++) {
    if (i<next) { continue; }
    qsort(q[i], p_q, sizeof(Process), lowest_age);
    for(int j=p_q-1; j>=0; j--) {
      if (q[i][j].age < 100) { break; }
      Process t = q[next][j];
      q[next][j] = q[i][j];
      q[i][j] = t;
    }
    qsort(q[i], p_q, sizeof(Process), priority_first); // Reset ordering of queue
  }
}

double mfs(Process *p, int n) {
  qsort(p, n, sizeof(Process), priority_first);

  printf("\tDiving %d processess into %d queues based on priority\n",n,QUEUES);
  int p_q = (int) ceil(n/QUEUES), i=0, j=0, k=0;
  Process q[QUEUES][p_q];
  for (i=0; i<QUEUES && k<n; i++)
    for (j=0; j<p_q && k<n; j++)
      q[i][j] = p[k++];

  printf("\tUsing Round Robin for 1st queue, first come first serve for rest\n");
  // Include rr and fcfs for no warning
  double awt = 0.0;
  for (k=0; k<QUEUES; k++) {
    if (k==0) { awt += rr(q[k],p_q); }
    else { awt += fcfs(q[k],p_q); }
    for (i=0; i<QUEUES; i++) {
      if (i<=k) { continue; }
      for (j=0; j<p_q; j++) { q[i][j].age++; }
    }
    printf("\t\tUpdate queue if age>100\n");
    update_queues(q, p_q, k+1);
  }

  return awt;
}