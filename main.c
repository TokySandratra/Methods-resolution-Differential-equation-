/*RASAMOELINa Toky Sandratra Miharimamy*/
#include <stdio.h>
#include <stdlib.h>
#include "algo_Euler.h"
#include "Taylor.h"
#include "pointMilieu.h"
#include "Runge_Kutta4.h"

// void  getInput(float *x,float *y,float *z,float *a);
// float Fonction(float t,float w);
// float FonctionPrim(float t,float w);
// float T(float t,float w,float h, int ordre);
// float algo_Euler(float a, float b,float c,float d);
// float Taylor(float a, float b,float c,float d,int ordre);
// float pointMilieu(float a, float b,float c,float d);
// float Runge_Kutta4(float a, float b,float c,float d);

int main(int argc, char const *argv[])
{
    printf("\t\t>RESOLUTION EQUATION DIFFERENTIELLE ORDINAIRE 1er ordre a valeur intiale<\n");
    float a,b,N,alpha;
    getInput(&a,&b,&N,&alpha);
    printf("%f %f %f %f\n",a,b,N,alpha);
    //algo_Euler(a,b,N,alpha);
    //Taylor(a,b,N,alpha,2);
    //pointMilieu(a,b,N,alpha);
    Runge_Kutta4(a,b,N,alpha);
    return 0;
}


void getInput(float *a,float *b,float *N,float *alpha){
    printf("INPUT:\n");
    printf("a=");
    scanf("%f",a);
    printf("b=");
    scanf("%f",b);
    printf("N=");
    scanf("%f",N);
    printf("alpha=");
    scanf("%f",alpha);
}

