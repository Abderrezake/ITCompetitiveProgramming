    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>



    int main(){
        int T[10],D[50];
        int i,a,j,k,d;
        float distance,min;
        scanf("%d",&d);
        for(i=0;i<d;i++){
        scanf("%d",&T[i]);
        }
        a=0;
        for(i=0;i<d;i++){
            for(j=0;j<d;j++){
                D[a]=pow(T[i]-T[j],2);
                a=a+1;
            }
        }
        k=a-1;
        min=sqrt(D[0]+D[1]);
        for(a=0;a<k;a++){   
            for(j=0;j<k;j++){
                    if((sqrt(D[a]+D[j]))<min){
                        min=sqrt(D[a]+D[j]);

                    }
            }

        }
              


        return 0;
    }