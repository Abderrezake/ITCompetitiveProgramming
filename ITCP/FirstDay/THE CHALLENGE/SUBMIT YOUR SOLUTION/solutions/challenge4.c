#include<stdio.h>
#include<stdlib.h>



int linear(int T[],int n,int e){

        int linear,i;
        linear=-1;
        for(i=0;i<n;i++){
            if(T[i]==e){
                linear=i;
            }

        }
    return linear;

}
int main(){
    int T[10];
    int i,n,e;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&T[i]);
    }
    scanf("%e",&e);
    linear(T,n,e);



    return 0;
}