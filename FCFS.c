#include<stdio.h>
#include<stdlib.h>
int main(){
    int tracks;
    printf("Enter number of tracks: ");
    scanf("%d",&tracks);
    int n;
    printf("Enter number of track numbers in queue: ");
    scanf("%d",&n);
    int tnums[n];
    printf("Enter track numbers in queue: ");
    for(int i=0;i<n;i++){
        scanf("%d",&tnums[i]);
        if(tnums[i]>0 && tnums[i]<200)
            continue;
        else{
            printf("Enter valid track number: ");
            scanf("%d",&tnums[i]);
        }
    }
    int head;
    printf("Enter initial position of read/write head: ");
    scanf("%d",&head);
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=abs(head-tnums[i]);
        head=tnums[i];
    }
    printf("Total number of track movements: %d",total);
    return 0;
}