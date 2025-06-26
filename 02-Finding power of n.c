#include<stdio.h>
int main(){
        int n;
        int num;
        //logic for taking input
        scanf("%d",&num);
        scanf("%d",&n);
        //logic for handling special case
        if(n<=1){
            if(num==1){
                printf("yes");
            }else{
                printf("no");
            }
            return 0;
        }


        // logic for checking finding power
        while(num>1){
            if(num%n!=0){
                printf("no");
                return 0;
            }
            num=num/n;
            

        }
        if(num==1)
        printf("yes");
        else
        printf("no");








    return 0;
}
