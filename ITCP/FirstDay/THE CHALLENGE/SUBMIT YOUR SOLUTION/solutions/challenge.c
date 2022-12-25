#include<stdio.h>
#include<stdlib.h>


int main(void){

    int T[10];
    int i,j,d;
    scanf("%d",&d);
    for (i=0;i<d;i++){
    scanf("%d",&T[i]);
    }
    i=0;
    for(i=0;i<d;i++){
        if(T[i]==T[i+1]){
            for(j=i+1;j<d;j++){
                T[j]=T[j+1];
            }
            d=d-1;

        } 

    }
    for (i=0;i<d;i++){
        printf(" %d  \n",T[i]);
    }
    return 0;
}