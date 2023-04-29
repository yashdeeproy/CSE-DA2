#include<stdio.h>
int main(){
    int che[7],delhi[7],haveri[7],gang[7];
    for(int i=0;i<7;i++){
        scanf("%d",&che[i]);
    }
    for(int i=0;i<7;i++){
        haveri[i]=che[i]+5;
        delhi[i]=che[i]-8;
    }
    for(int i=0;i<7;i++){
        printf("%d\n",gang[i]);
        
    }
}