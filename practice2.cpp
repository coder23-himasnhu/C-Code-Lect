#include<stdio.h>

//no argument no return
void news1()
{
    printf("OUTPUt\n");
}
//no argument with return
float news2()
{
    return 5+1;
}
//argument with no return
void news3(int a, int b)
{
    printf("%d\n", a+b);
}
//argument with return
int news4(int a, int b)
{
    return a*b;
}

int main()
{
    news1();
    printf("%f\n",news2());
    news3(2,4);
    printf("%d\n",news4(2,3));
}