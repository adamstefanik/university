#include <stdio.h>
#include <stdbool.h>

// Funkce pro součet prvků v poli
double sumaPole(double pole[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += pole[i];
    }
    return sum;
}

// Funkce pro obrácení pořadí prvků v poli
void opacnePole(double array[], int size) {
    double temp;
    for (int i = 0; i < size / 2; i++) {
        temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

// Funkce pro kontrolu existence trojúhelníku
bool jeTrojuhelnik(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    double array[] = {556.48, 778.78, 115.4877, 2.7878, -3.5646};
    int size = sizeof(array) / sizeof(array[0]);

    // 1. Součet prvků v poli
    double sum = sumaPole(array, size);
    printf("Suma prvků v poli: %.4f\n", sum);

    // 2. Opačné pořadí prvků v poli
    opacnePole(array, size);
    printf("Pole v opačném pořadí: ");
    for (int i = 0; i < size; i++) {
        printf("%.4f ", array[i]);
    }
    printf("\n");

    // 3. Kontrola existence trojúhelníku
    double a, b, c;
    printf("Zadejte tři strany trojúhelníku: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (jeTrojuhelnik(a, b, c)) {
        printf("Trojúhelník existuje.\n");
    } else {
        printf("Trojúhelník neexistuje.\n");
    }

    return 0;
}