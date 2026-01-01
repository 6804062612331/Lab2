#include <stdio.h>

int main() {
    int a,b,c,d,Nmax,Nmax1,Nmax2,Nmax3,Smax;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    Nmax1 = ((a>b)? b:a);
    Nmax = ((a>b)? a:b);
    Nmax2 = ((Nmax>c)? c:Nmax);
    Nmax = ((Nmax>c)? Nmax:c);
    Nmax3 =((Nmax>d)? d:Nmax);
    Nmax = ((Nmax>d)? Nmax:d);
    Smax = ((Nmax1>Nmax2)? Nmax1:Nmax2);
    Smax = ((Smax>Nmax3)? Smax:Nmax3);
    printf("%d",Smax);
}