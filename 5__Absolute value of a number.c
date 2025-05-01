#include<stdio.h>
//logic for finding the absolute value of a number 
int abs(int x){
    if(x<0){
        return x*(-1);
    }

    return x;
}


int main(){
    int n;
    scanf("%d",&n);
    

    printf("the absolute value is %d",abs(n));


return 0;


}