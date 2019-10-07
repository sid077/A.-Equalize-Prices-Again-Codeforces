#include <stdio.h>
#include<math.h>
 
int main()
{
    int nq,ng;
    long price,sum=0;
    double avg;
    
    scanf("%d",&nq);
    for(int i=0;i<nq;i++){
        scanf("%d",&ng);
        for(int j=0;j<ng;j++){
            scanf("%ld",&price);
            sum+=price;
            
        }
        avg=(double)sum/ng;
        printf("\n%d",(int)ceil(avg));
        sum=0;
        
    }
    return 0;
}
