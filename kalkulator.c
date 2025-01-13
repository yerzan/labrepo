#include <stdio.h>
#include <stdlib.h>

double kwadrat(double liczba)
{
    return liczba * liczba;
}

double dzielenie(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Blad: dzielenie przez zero!\n");
        exit(1); 
    }
}

double bezwzgledna(double a)
{
    if (a >= 0)
    {
        return a;
    }
    else
    {
        return -a;
    }
}

int main()
{
    printf("Wynik bezwzgledna(5): %f\n", bezwzgledna(5));
    printf("Wynik bezwzgledna(-5): %f\n", bezwzgledna(-5));
    printf("Wynik dzielenie(3, 4): %f\n", dzielenie(3, 4));

    return 0;
}
