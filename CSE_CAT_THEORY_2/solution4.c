#include<stdio.h>
#include<string.h>
int main(){
    char car[20];
    printf("Enter car name ");
    int price;
    float discount;
    int extraPrice;
    fgets(car,20,stdin);
    car[strcspn(car, "\n")] = 0; 
    
    

    printf("Enter price\n");
        scanf("%d",&price);
        printf("Enter extra fitting price\n");
        scanf("%d",&extraPrice);
        int total=price+extraPrice;
        if(strcmp(car,"Hatchback")==0){
            discount=total*0.03;
        }
        else if(strcmp(car,"Sedan")==0){
            discount=total*0.05;
        }
        else if(strcmp(car,"SUV")==0){
            discount=total*0.1;
        }
        else if(strcmp(car,"MUV")==0){
            discount=total*0.12;
        }
        printf("Total price = %d\n",total);
        printf("Discount = %f\n",discount);
        float gst=(total-discount)*0.12;
        float net=total-discount+gst;
        printf("Net price %f",net);
    
}