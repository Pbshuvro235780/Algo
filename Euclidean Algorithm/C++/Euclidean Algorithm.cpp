#include<iostream>

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
    std::cout << "Enter the two numbers: ";
    std::cin >> x >> y;
    z = gcd(x,y);
    std::cout << "GCD: " << z;
    return 0;

}
