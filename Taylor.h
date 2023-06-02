#include <stdio.h>
#include <stdlib.h>
#include "Fonction.h"

float FonctionPrim(float t,float w){
    return (2/(t*t))*((w*w*w)+(w*w)); //exo Algo Taylor d'ordre 2
}

float T(float t,float w,float h,int ordre){
    return Fonction(t,w)+ (h/ordre)*FonctionPrim(t,w);
}

float Taylor(float a, float b,float N,float alpha,int ordre){
    printf("\t---------------TAYLOR d'ordre %d------------\n",ordre);
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
        w+=h*T(t,w,h,ordre);
        t=a+i*h;
        printf("\ni=%d\tt=%f w=%f",i,t,w);
    }
    printf("\n\t---------------FIN------------\n");
    return 1.0;
}