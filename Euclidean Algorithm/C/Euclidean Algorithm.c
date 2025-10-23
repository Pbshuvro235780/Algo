#include<stdio.h>

int gcd (int a, int b);

int gcd (int a, int b)
{
    int x = a;
    int y = b;

    while(y != 0)
    {
        int r = x % y;
        x = y;
        y = r;
    }

    return x;
}

int main()
{
    int x, y, z;
    printf("Enter the two numbers: ");
    scanf("%d %d",&x,&y);
    z = gcd(x,y);
    printf("GCD: %d",z);
    return 0;

}
