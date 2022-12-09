#include <stdio.h>
int main()
{
    int process[5], arrivalTime, brustTime[5], waitingTime[5], turnTime[5], totalTime;
    int i = 0, j=0;

    for(i=0; i<4; i++){
        printf("Enter brust time: ");
        scanf("%d", &brustTime[i]);
        process[i] = brustTime[i];
    }

    printf("Process     Brust Time\n");
    for(i=0; i<4; i++){
        printf("%d              %d\n", i+1, brustTime[i]);
    }

    int temp = 0;
    for(i=0; i<4; i++){
        for(j=i+1; j<4; j++){
            if(brustTime[i] > brustTime[j]){
            temp=brustTime[i];
            brustTime[i] = brustTime[j];
            brustTime[j] = temp;
            }
        }
    }
    printf("After sorting: \n");
    printf("Process     Brust Time\n");
    for(i=0; i<4; i++){
        printf("%d              %d\n", process[i], brustTime[i]);
    }

    printf("Start Time      End Time        Waiting Time        Turn Time\n");
    totalTime=0;
    arrivalTime=0;
    for(i=0; i<4; i++){
        int startTime = totalTime;
        waitingTime[i] = startTime - arrivalTime;
        totalTime += brustTime[i];
        turnTime[i] = totalTime - arrivalTime;

        printf("%d                %d                     %d                 %d\n", startTime, totalTime, waitingTime[i], turnTime[i]);
    }
}