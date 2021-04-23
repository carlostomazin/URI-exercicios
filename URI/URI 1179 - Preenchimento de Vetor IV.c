#include <stdio.h>

int main() {

    int par[5]={},impar[5]={},ctd,num,i=0,p=0,ind;
    
    for(ctd=0;ctd<15;ctd++){
        scanf("%d",&num);

        if(num%2==0){
            par[p] = num;
            p++;
        }else{
            impar[i] = num;
            i++;
        }

        if(p == 5){
            for (ind=0;ind<5;ind++){
                printf("par[%d] = %d\n",ind,par[ind]);
                par[ind]=0;
            }
            p=0;
        }
        if(i == 5){
            for (ind=0;ind<5;ind++){
                printf("impar[%d] = %d\n",ind,impar[ind]);
                impar[ind]=0;
            }
            i=0;
        }
    }

    for (ctd=0;ctd<5;ctd++){
        if(impar[ctd] != 0){
            printf("impar[%d] = %d\n",ctd,impar[ctd]);
        }
    }

    for (ctd=0;ctd<5;ctd++){
        if(par[ctd] != 0){
            printf("par[%d] = %d\n",ctd,par[ctd]);
        }
    }

    return 0;
}
