#include<stdio.h>
#include<string.h>
int split(char sen[]);
int main(){
    char sen[100];
    fgets(sen,100,stdin);
    split(sen);
}
int split(char sen[]){
    int n=strlen(sen),i=0,j=0,k=0;
    char first[100],second[100];
    while(i<n){
        if(sen[i]==' '){
            break;
        }
        if(i==0){
            first[j]=sen[i]-32;
            j++,i++;
            continue;
        }
        first[j]=sen[i];
        j++,i++;
    }
    first[j]='\0';
    i++;
    while(i<n){
        if(sen[i]=='\0'){
            break;
        }
        if(i==n-1){
            break;
        }
        second[k]=sen[i]-32;
        i++,k++;
    }
    second[k]='\0';
    int length=strlen(first)+strlen(second);
    printf("%s %s\n%d",first,second,length);
    int size=sizeof(first)+sizeof(second);
    if(length<20){
        return length;
    }
    else{
        return size;
    }
}