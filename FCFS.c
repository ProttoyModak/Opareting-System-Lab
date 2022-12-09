#include <stdio.h>
int main()
{
    int process[5], arrivalTime[5], brustTime[5], waitingTime[5], turnTime[5], totalTime;
    int i = 0;

    for(i=0; i<5; i++){
        printf("Enter arrival time: ");
        scanf("%d", &arrivalTime[i]);
        printf("Enter brust time: ");
        scanf("%d", &brustTime[i]);
    }

    printf("Process         Arrival Time        Brust Time\n");
    for(i=0; i<5; i++){
        printf("%d                      %d              %d\n", i+1, arrivalTime[i], brustTime[i]);
    }

    printf("Process     Start Time      End Time        Waiting Time        Turn Time\n");
    totalTime = arrivalTime[1];
    for(i=0; i<5; i++){
        int startTime = totalTime;
        waitingTime[i] = totalTime - arrivalTime[i];
        turnTime[i] = waitingTime[i] + brustTime[i];

        totalTime = brustTime[i];
        printf("%d          %d              %d              %d                  %d\n", i+1, startTime, totalTime, waitingTime[i],turnTime[i]);
        printf("\n");
    }
    return 0;
}