#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int bd;
    scanf("%d",&n);
    int sn=sqrt(n);
    if (n>2) printf("2 ");
    for (int i=3;i<n;i+=2){
        bd=1;
        if (i%2==0 && i!=2) continue;
        for (int j=3;j<=sn;j+=2){
            if (i%j==0 && i!=j){
                bd=0;
                break;
            }
        }
        if (bd==1) printf("%d ",i);
    }
    printf("\n");
    return 0;
}
