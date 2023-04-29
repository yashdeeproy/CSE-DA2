#include<stdio.h>
int main(){
    char str[20];
    fgets(str,20,stdin);
    int i=0;
    char alph[26]={0};
    while(str[i] != '\0'){
        alph[str[i]-65]++;
        
        i++;
    }
    int n=i-1;
    printf("Length of the string is %d\n",i);
    int repeat=0;
    int freq=0;
    
    char character;
    for(int i=0;i<n;i++){
        if(alph[str[i]-65]>1){
            repeat=1;
             character=str[i];
             break;
        }
        
    }

    for(int i=0;i<26;i++){
        if(alph[i]>0){
            freq++;
        }
    }
    if(repeat==0){
        printf("No repeated characters found in the string\n");
        printf("First non repeated character is %c",str[0]);
    }
    else{
        printf("First repeated character is %c\n",character);
        printf("First non repeated character is %c\n",str[0]);
    }
    printf("Word frequency is %d",freq);
    
}