#include <stdlib.h> // qsort

// Constants
#define QUANTUM 1
#define QUEUES 2

// Process Struct
typedef struct {
  int burst;
  int arrival;
  int priority;
} Process;

// comparators
int first_come_first_serve(const void *a, const void *b);
int shortest_job_first(const void *a, const void *b);
int priority_first(const void *a, const void *b);