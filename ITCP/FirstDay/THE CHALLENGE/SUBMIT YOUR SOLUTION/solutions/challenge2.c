#include<stdio.h>
#include<stdlib.h>

    void something(int T1[],int T2[],int n1,int n2){
        int i,j,p,cpt;
        
        for (i=0;i<n2;i++){
            for(j=0;j<n1;j++)
            if(T2[i]>T1[i]){
                p=T2[i];
                for(j=i;j>0;j--){
                    T2[j]=T2[j-1];
                }
                T2[0]=T1[n1];
                for (j=n1;j>i;j--){
                    T1[j]=T1[j-1];

                }
                T1[i]=p;


            }

        }
        
        do {
        cpt=0;
            for(i=0;i<n2;i++){
                if(T2[i]>T2[i+1]){
                    p=T2[i+1];
                    T2[i+1]=T2[i];
                    T2[i]=p;
                    cpt=cpt+1;
                }
             }
        }while (cpt=0);
            


    }


int main(){
    int n1,n2,i;
    int T1[10],T2[10];
    scanf("%d %d",&n1,&n2);
    for (i=0;i<n1;i++){
        scanf("%d",&T1[i]);
    }
     for (i=0;i<n2;i++){
        scanf("%d",&T2[i]);
    }


    something(T1,T2,n1,n2);




    for(i=0;i<n1;i++){
    printf(" %d ",T1[i]);
    }

    for(i=0;i<n2;i++){
    printf(" %d ",T2[i]);
    
    }

    return 0;
}