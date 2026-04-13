#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(){
    int A,B;scanf("%d %d",&A,&B);
    if(A>0) {
        if(B>0){
            printf("1");
        }
        else 
        {
            printf("4");

        }
    }
    else {   if (B>0){
            printf("2");
        }
        else{
            printf("3");
        }

    }
}