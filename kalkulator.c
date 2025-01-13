#include <stdio.h>

double dzielenie(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else exit(0);
}

double bezwzgledna(double a)
{
    if(a >= 0)
    {
        return a;
    }
    else if(a < 0)
    {
        return -a;
    }
}

int main()
{
    printf("%f",bezwzgledna(5));
    printf("\n%f",bezwzgledna(5));
    printf("\n%f",dzielenie(3,4));
    printf("\n%f",dzielenie(3,0));
    return 0;
}