#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
float tractLand,tractLandAcred;
scanf("%f",&tractLand);
tractLandAcred=(float)tractLand/43560;
printf("%.2f sq.ft is equal to %.2f acres",tractLand,tractLandAcred);
return 0;
}