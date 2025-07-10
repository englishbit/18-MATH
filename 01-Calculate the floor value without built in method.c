#include<stdio.h> 
int main(){
          float num;
          int fnl_rslt;
          //logic for taking input
          scanf("%f",&num);
          
         
          if(num<0){
            
            fnl_rslt=(int)num;
            if(fnl_rslt!=num){
              fnl_rslt=fnl_rslt-1;
            }
            
          }else{
            fnl_rslt=(int)num;
          }
          

          //logic for output
          printf("%d",fnl_rslt);


    return 0;
}
