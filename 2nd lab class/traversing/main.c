#include <stdio.h>
#include <stdlib.h>

int main()
{
    int LA[]={1,2,3,4,5};
    int UB=5;
    int LB;
    printf("The original array elements are :\n");
    for(LB=0;LB<UB;LB++){
        printf("LA[%d]=%d\n",LB,LA[LB]);
    }

    return 0;
}
