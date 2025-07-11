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
    //logic for taking input
    scanf("%d",&n);
    
    //logic for output
    printf("the absolute value is %d",abs(n));


return 0;


}
