#include <stdio.h>
#include <stdlib.h>
#include "Fonction.h"

float algo_Euler(float a, float b,float N,float alpha){
    printf("\t---------------Algo_Euler------------\n");
    float h,t,w;

    //intialise h,t,w
    h=(b-a)/N;
    t=a;
    w=alpha;
    printf("h=%f\n",h);
    printf("Approximation=");
    printf("\nw=%f\t",w);
    printf("t=%f",t);
    for(int i=0;i<=N;i++){
        w+=h*Fonction(t,w);
        t=a+i*h;
        printf("\ni=%d\tt=%f w=%f",i,t,w);
    }
    printf("\n\t---------------FIN------------\n");
    return 1.0;
}