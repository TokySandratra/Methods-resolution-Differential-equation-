#include <stdio.h>
#include <stdlib.h>
#include "Fonction.h"

float Runge_Kutta4(float a, float b,float N,float alpha){
    printf("\t---------------Runge_Kutta ordre 4------------\n");
    float h,t,w;
    float A,B,C,D;
    //intialise h,t,w
    h=(b-a)/N;
    t=a;
    w=alpha;
    printf("h=%f\n",h);
    printf("Approximation=");
    printf("\nw=%f\t",w);
    printf("t=%f",t);
    for(int i=0;i<=N;i++){
        A=h*Fonction(t,w);
        B=h*Fonction(t+(h/2),w+(A/2));
        C=h*Fonction(t+(h/2),w+(B/2));
        D=h*Fonction(t+h,w+A);
        w+=(A+2*B+2*C+D)/6;
        t=a+i*h;
        printf("\ni=%d\tt=%f w=%f",i,t,w);
    }
    printf("\n\t---------------FIN------------\n");
    return 1.0;   
}