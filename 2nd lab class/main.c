#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1,n2,n3;
    printf("Type First number: \n");
    scanf("%d", &n1);
    printf("Type Second number: \n");
    scanf("%d", &n2);

    printf("Type Third number: \n");
    scanf("%d", &n3);

    if(n1<n2&&n1<n3)
        printf("The smallest number is %d ",n1);
     else if(n2<n1&&n2<n3)
        printf("The smallest number is %d",n2);
     else
        printf("The smallest number is %d",n3);

        return 0;

}
