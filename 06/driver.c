#include <stdio.h>
#include "driver.h"

int main() {
  // Get processes
  int n;
  printf("Enter number of processes: ");
  scanf("%d",&n);
  Process p[n];
  for(int i=0; i<n; i++) {
    printf("For process %d, enter the following:\n",i);
    printf("Burst time (ms): ");
    scanf("%d", &p[i].burst);
    printf("Arrival time (ms): ");
    scanf("%d", &p[i].arrival);
    printf("Priority (1 is highest): ");
    scanf("%d", &p[i].priority);
  }
  // Choose Algorithm
  int choice;
  printf("Which scheduling algorithm would you like to use today?\n");
  printf("1. First Come First Serve\n");
  printf("2. Shortest Job First\n");
  printf("3. Priority Based\n");
  printf("4. Round Robin\n");
  printf("5. Multilevel Queue Scheduling\n");
  printf("6. Multilevel Feedback Scheduling\n");
  printf("7. Shortest Time Remaining\n");
  printf("8. ALL\n");
  printf("Enter choice: ");
  scanf("%d",&choice);
  switch(choice) {
    case 1: printf("Average Waiting time: %.2f",fcfs(p,n)); break;
    case 2: printf("Average Waiting time: %.2f",sjf(p,n)); break;
    case 3: printf("Average Waiting time: %.2f",prior(p,n)); break;
    case 4: printf("Average Waiting time: %.2f",rr(p,n)); break;
    case 5: printf("Average Waiting time: %.2f",mqs(p,n)); break;
    case 6: printf("Average Waiting time: %.2f",mfs(p,n)); break;
    case 7: printf("Average Waiting time: %.2f",srt(p,n)); break;
    case 8: printf("Average waiting time for,\n");
            printf("First come first serve: %.2f\n",fcfs(p,n)); 
            printf("Shortest job first: %.2f\n",sjf(p,n)); 
            printf("Priority based: %.2f\n",prior(p,n)); 
            printf("Round Robin: %.2f\n",rr(p,n)); 
            printf("Multilevel queue scheduling: %.2f\n",mqs(p,n)); 
            printf("Multilevel feedback scheduling: %.2f\n",mfs(p,n)); 
            printf("Shortest Time Remaining: %.2f\n",srt(p,n)); 
            break;
    default: printf("Invalid choice. Please run again.");
  }
  printf("\n");
  return 0;
}