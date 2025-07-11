#include<stdio.h>
int main(){

        int n;
        //logic for taking input
        scanf("%d",&n);

        
        int n1=0,n2=1,n3;
        if(n>=1){
            printf("%d  ",n1);
        }
        if(n>=2){
            printf("%d  ",n2);
        }

        //logic for output
        for(int i=2;i<n;i++){
            
            n3=n1+n2;
            
            printf("%d  ",n3);
            n1=n2;
            n2=n3;
        }
       







    return 0;
}
