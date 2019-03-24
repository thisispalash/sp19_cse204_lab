#define QUANTUM 1

#ifndef PROCESS
#define PROCESS
typedef struct {
  int burst;
  int arrival;
  int priority;
} Process;
#endif

// qsort comparators
int priority_first(const void *a, const void *b);