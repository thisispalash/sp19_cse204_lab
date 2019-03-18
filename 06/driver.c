#include <stdio.h>

int main() {
  // Get processes
  int n;
  printf("Enter number of processes: ");
  scanf("%d",&n);
  int *p[n][3];
  for(int i=0; i<n; i++) {
    printf("For process %d, enter the following:\n",i);
    printf("Burst time (ms): ");
    scanf("%d", p[i][0]);
    printf("Arrival time (ms): ");
    scanf("%d", p[i][1]);
    printf("Priority (1 is highest): ");
    scanf("%d", p[i][2]);
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
    case 1: printf("Average Waiting time: %d",fcfs(p)); break;
    case 2: printf("Average Waiting time: %d",sjf(p)); break;
    case 3: printf("Average Waiting time: %d",prior(p)); break;
    case 4: printf("Average Waiting time: %d",rr(p)); break;
    case 5: printf("Average Waiting time: %d",mqs(p)); break;
    case 6: printf("Average Waiting time: %d",mfs(p)); break;
    case 7: printf("Average Waiting time: %d",srt(p)); break;
    case 8: printf("Average waiting time for,\n");
            printf("First come first serve: %d\n",fcfs(p)); 
            printf("Shortest job first: %d\n",sjf(p)); 
            printf("Priority based: %d\n",prior(p)); 
            printf("Round Robin: %d\n",rr(p)); 
            printf("Multilevel queue scheduling: %d\n",mqs(p)); 
            printf("Multilevel feedback scheduling: %d\n",mfs(p)); 
            printf("Shortest Time Remaining: %d\n",srt(p)); 
            break;
    default: printf("Invalid choice. Please run again.");
  }
  printf("\n");
  return 0;
}