#include <stdio.h>

int avg(int arr[]);
int revisedAvg(int arr[],int birth[]);
int check(int avg,int revAvg);

int main(){
    int arr[25],birth[25];
    printf("Input marks of individual student with their birth month ");
    for(int i=0;i<25;i++){
        scanf("%d",&arr[i]);
        scanf("%d",&birth[i]);
    }
    int average=avg(arr);
    int revaverage=revisedAvg(arr,birth);
    printf("original class avergae : %d\n",average);
    printf("Revised class average : %d\n",revaverage);
    if(check(average,revaverage)){
        printf("Can implement siginificant increase in class average");

    }
    else{
        printf("Need not implement. No significant increase in class average ");
    }
}
int avg(int arr[]){
    int sum=0;
    int a;
    for(int i=0;i<25;i++){
        sum+=arr[i];
    }
    a=sum/25;
    return a;
}
int revisedAvg(int arr[],int birth[]){
    int marks[25];
    for(int i=0;i<25;i++){
        marks[i]=arr[i]+birth[i];
    }
    int r=avg(marks);
    return r;
}
int check(int avg,int revAvg){
    int diff=revAvg-avg;
    if(diff==5){
        return 1;
    }
    else{
        return 0;
    }
}