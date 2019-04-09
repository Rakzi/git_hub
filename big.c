#include <stdio.h>
big()
{
    double n1, n2, n3;
#this is big three
    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);
#reciving changes from lava and implimenting on cetral hub which is rakzi hub
    if( n1>=n2 && n1>=n3 )
        printf("%.2f is the largest number.", n1);

    if( n2>=n1 && n2>=n3 )
        printf("%.2f is the largest number.", n2);

    if( n3>=n1 && n3>=n2 )
        printf("%.2f is the largest number.", n3);

    return 0;
}
