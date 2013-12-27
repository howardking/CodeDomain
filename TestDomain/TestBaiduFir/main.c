# include<stdio.h>
int main()
{
    int a,b,c,d,e,f,x,y,z;
    scanf("%d",&a);
    if (a>9999) x=5;
    else if (a>999) x=4;
    else if (a>99) x=3;
    else if (a>9) x=2;
    else x=1;
    printf("Î»Êý:%d\n",x);
    if (x==1)
    {
        printf("%d\n",a);
        printf("%d\n",a);
    }
    if (x==2)
    {
         b=a/10;
        c=a%10;
        printf("%d%d\n",b,c);
        printf("%d,%d\n",c,b);
    }

 if (x==3)
 {
      d=a/100;
    b=a%10;
     c=a%100/10;
 // d=a%100%10;
    printf("%d%d%d\n",d,c,b);
    printf("%d,%d,%d\n",b,c,d);
 }
 if (x==4)
 {
    b=a/1000;
    c=a%1000/100;
    d=a%100/10;
    e=a%10;
    printf("%d%d%d%d\n",b,c,d,e);
    printf("%d,%d,%d,%d\n",e,d,c,b);
 }

 if (x==5)
 {
     b=a/10000;
     c=a%10000/1000;
    d=a%1000/100;
    e=a%100/10;
    f=a%10;
    printf("%d%d%d%d%d\n",b,c,d,e,f);
    printf("%d,%d,%d,%d,%d\n",f,e,d,c,b);
 }

    return 0;
}
