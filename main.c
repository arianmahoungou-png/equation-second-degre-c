#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,x1,x2,disc;
    printf("Veuillez entrer les trois nombres de l'équation\n");
    scanf("%lf %lf %lf", &a,&b,&c);
    if (a==0)
    {
        printf("Syntax error : Ceci n'est pas une équation du second degré\n");
    }
    else{
        disc=(b*b)-(4*a*c);
        if(disc<0)
        {
            printf("La solution de l'équation est l'ensemble vide\n");
        }
        else if(disc==0)
        {
            x1=x2=(-b)/(2*a);
            printf("L'équation admet une solution unique %.2f\n", x1);
        }
        else
        {
            x1=(-b-sqrt(disc))/(2*a);
            x2=(-b+sqrt(disc))/(2*a);
            printf("L'équation admet deux racines distinctes : %.2f et %.2f\n", x1, x2);
        }
    }
    return 0;
}
