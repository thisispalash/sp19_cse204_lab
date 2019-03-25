#include "consts.h"

int first_come_first_serve(const void *a, const void *b) {
  Process *A = (Process *) a;
  Process *B = (Process *) b;
  return (A->arrival - B->arrival);
}

int shortest_job_first(const void *a, const void *b) {
  Process *A = (Process *) a;
  Process *B = (Process *) b;
  return (A->burst - B->burst);
}

int priority_first(const void *a, const void *b) {
  Process *A = (Process *) a;
  Process *B = (Process *) b;
  if (A->priority > B->priority)
    return 1;
  if (A->priority < B->priority)
    return -1;
  return (A->arrival - B->arrival);
}

int lowest_age(const void *a, const void *b) {
  Process *A = (Process *) a;
  Process *B = (Process *) b;
  return (A->age - B->age);
}