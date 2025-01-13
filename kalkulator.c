#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Potrzebne do stałej M_PI

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

double radiany_na_stopnie(double radiany)
{
    return radiany * (180.0 / M_PI); // Użycie stałej M_PI z math.h
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
    // Testowanie funkcji bezwzgledna
    printf("Wartosc bezwzgledna(5): %f\n", bezwzgledna(5));
    printf("Wartosc bezwzgledna(-5): %f\n", bezwzgledna(-5));
    
    // Testowanie funkcji dzielenie
    printf("Wynik dzielenia (3 / 4): %f\n", dzielenie(3, 4));
    // Przy dzieleniu przez zero program zakończy działanie
    // printf("Wynik dzielenia (3 / 0): %f\n", dzielenie(3, 0));
    
    // Testowanie funkcji radiany_na_stopnie
    double radiany = M_PI; // Przykładowa wartość: pi radianów
    printf("Radiany na stopnie (%f rad): %f stopni\n", radiany, radiany_na_stopnie(radiany));

    return 0;
}
