#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m,n,t;
    scanf("%d %d",&m,&n);
    t=m*n;
    if(t%2==0)
        t=t/2;
    else
        t=(t+1)/2;
    printf("%d", t);
    return 0;
}
