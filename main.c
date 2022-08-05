#include <stdio.h>
#include <stdlib.h>
int factoriele(int z){

int b=1,t,r;
        for(t=1;t<r+1;t++){
    b=b*t;
    }
    return b;
}
int main()
{
    int r,t,b;
    printf("calcule de factoriele");
    printf("entrer un nombre");
    scanf("%d",&r);
    b=1;

    for(t=1;t<r+1;t++){
    b=b*t;
    }
    printf("%d",b);
    return 0;
}
