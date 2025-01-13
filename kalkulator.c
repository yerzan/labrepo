#include <stdio.h>

double dzielenie(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
        exit(0);
}

double radiany_na_stopnie(double radiany)
{
    return radiany * (180.0 / math.pi);
}

int main()
{
    printf("%f", dzielenie(3, 4));
    printf("\n%f", dzielenie(3, 0));

    return 0;
}