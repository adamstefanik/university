#include <stdbool.h>
#include <math.h>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {

        printf("Hello World! \n");
        printf("Nazdar! \n");
        printf("Ahoj! \n");

        int x = 5;
        double y = 5.5;
        double w = 10.5;
        double vysl = 0.0;
        int vyslint = 0;
        float z = 6.5f;
        char c = 'n';
        double p = false;
        char str[] = "aaa";

        printf("%d\n", x);
        printf("%f\n", y);
        printf("%f\n", z);
        printf("%c\n", c);
        printf("%s\n", p);
        printf("%s\n", str);

        vysl = y + w;
        printf("soucet cisel je %f\n", vysl);
        vysl = y - w;
        printf("rozdil cisel je %f\n", vysl);
        vysl = y * w;
        printf("sucin cisel je %f\n", vysl);
        vysl = y / w;
        printf("podil cisel je %f\n", vysl);

        x++;
        printf("%d\n", x);
        x--;
        printf("%d\n", x);

        x = x + 2;
        x +=2;

        vysl = pow(vysl, 3);
        printf("%f\n", vysl);

        vysl = ceil(vysl);
        printf("%f\n",vysl);


        double a = 5.5;

        double obvod = 4 * a;
        printf("obvod ctverce je %.2f\n", obvod);

        double obsah = pow(a, 2);
        printf("obsah ctverce zaokruhleny na 2 desatinne mista je %.2f\n", obsah);
        int obsahi = int(obsah);
        obsah = ceil(obsah);
        printf("obsah ctverce je %.f\n", obsah);
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    double aT = 1.5;
    double bT = 2.89;
    double cT = 3.4;

    bool Podminka1 = false;
    bool Podminka2 = false;
    bool Podminka3 = false;

    Podminka1 = ((aT + bT) > cT);
    Podminka2 = ((bT + cT) > aT);
    Podminka3 = ((aT + cT) > bT);

    {
            if ((Podminka1 == true) && (Podminka2 == true) && (Podminka3)) == true
                printf("Trojuhelnik neexistuje");

            else
                printf("Trojuhelnik neexistuje");
    }

    double obvodT = aT + bT + cT;
    printf("obvod trojuholniku je %f\n", obvodT);
    */
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

    double m = 0.5;
    double deltat = 90;
    double cc = 4180;
    double P = 2000;

    double teplo = m * cc * deltat;
    printf("teplo je %.f\n", teplo);

    double cas = teplo / P;
    printf("Kanvice sa zohreje za %.f sekund \n", cas);

    double casmin = cas / 60;
    printf("Kanice sa zohreje za %.2f minut \n", casmin);

    return 0;
}