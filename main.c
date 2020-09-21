#include <stdio.h>
#include <stdlib.h>

int main()
{
    double N;
    int a,b=0,d,e=0,c,f,g,h=0;
    int i,j,k=0,l,m,n=0,o,p,q=0;
    int r,s,t=0,u,v,w=0,x,y,z=0;
    int A,B,C=0,D,E,F=0,G,H=0;
    scanf("%lf",&N);
    a=N*100;
    printf("NOTAS:\n");
    if(a>=10000){
        b=a/10000;
        c=b*10000;
        d=a-c;
    }
    else {
        d=a;
    }
    printf("%d nota(s) de R$ 100.00\n",b);
    if(d>=5000){
        e=d/5000;
        f=e*5000;
        g=d-f;
    }
    else
    {
        g=d;
    }
    printf("%d nota(s) de R$ 50.00\n",e);
    if(g>=2000){
        h=g/2000;
        i=h*2000;
        j=g-i;
    }
    else
    {
        j=g;
    }
    printf("%d nota(s) de R$ 20.00\n",h);
    if(j>=1000){
        k=j/1000;
        l=k*1000;
        m=j-l;
    }
    else
    {
        m=j;
    }
    printf("%d nota(s) de R$ 10.00\n",k);
    if(m>=500){
        n=m/500;
        o=n*500;
        p=m-o;
    }
    else
    {
        p=m;
    }
    printf("%d nota(s) de R$ 5.00\n",n);
    if(p>=200){
        q=p/200;
        r=q*200;
        s=p-r;
    }
    else
    {
        s=p;
    }
    printf("%d nota(s) de R$ 2.00\n",q);
    printf("MOEDAS:\n");
    if(s>=100){
        t=s/100;
        u=t*100;
        v=s-u;
    }
    else
    {
        v=s;
    }
    printf("%d moeda(s) de R$ 1.00\n",t);
    if(v>=50){
        w=v/50;
        x=w*50;
        y=v-x;
    }
    else
    {
        y=v;
    }
    printf("%d moeda(s) de R$ 0.50\n",w);
    if(y>=25){
        z=y/25;
        A=z*25;
        B=y-A;
    }
    else
    {
        B=y;
    }
    printf("%d moeda(s) de R$ 0.25\n",z);
    if(B>=10){
        C=B/10;
        D=C*10;
        E=B-D;
    }
    else
    {
        E=B;
    }
    printf("%d moeda(s) de R$ 0.10\n",C);
    if(E>=5){
        F=E/5;
        G=F*5;
        H=E-G;
    }
    else
    {
        H=E;
    }
    printf("%d moeda(s) de R$ 0.05\n",F);
    printf("%d moeda(s) de R$ 0.01",H);
    printf("\n");

    return 0;
}
