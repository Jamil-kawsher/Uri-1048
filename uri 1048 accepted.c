#include<stdio.h>
int main()
{
    double s,p,ts;
    char ch='%';
    scanf("%lf",&s);
    if(s>=0&&s<=400.00)
    {
        p=0.15*s;
        ts=p+s;
        printf("Novo salario: %.2lf\n",ts);
        printf("Reajuste ganho: %.2lf\n",p);
        printf("Em percentual: 15 %c\n",ch);
    }
    else if(s>=400.01&&s<=800.00)
    {
        p=0.12*s;
        ts=p+s;
        printf("Novo salario: %.2lf\n",ts);
        printf("Reajuste ganho: %.2lf\n",p);
        printf("Em percentual: 12 %c\n",ch);
    }

    else if(s>=800.01&&s<=1200.00)
    {
        p=0.1*s;
        ts=p+s;
        printf("Novo salario: %.2lf\n",ts);
        printf("Reajuste ganho: %.2lf\n",p);
        printf("Em percentual: 10 %c\n",ch);
    }
    else if(s>=1200.01&&s<=2000.00)
    {
        p=0.07*s;
        ts=p+s;
        printf("Novo salario: %.2lf\n",ts);
        printf("Reajuste ganho: %.2lf\n",p);
        printf("Em percentual: 7 %c\n",ch);
    }
    else if(s>2000.00)
    {
        p=0.04*s;
        ts=p+s;
        printf("Novo salario: %.2lf\n",ts);
        printf("Reajuste ganho: %.2lf\n",p);
        printf("Em percentual: 4 %c\n",ch);
    }


    return 0;
}
