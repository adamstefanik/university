#include <stdio.h>
#include <math.h>

int main(void) {
//1
    //predefinovanie
    double AS_a = 34.0;
    double AS_b = 25.0;
    double AS_c = 32.0;
    double AS_d = 25.0;
    //vypocty
    double AS_v = sqrt((AS_b * AS_c) - (pow((AS_b - AS_a) / 2, 2)));
    double AS_obvod = AS_a + AS_b + AS_c + AS_d;
    double AS_obsah = ((AS_a+AS_b)*AS_v)/2;
    //vypis
    printf("Obvod lichobežníka: %.2lf cm\n", AS_obvod);
    printf("Obsah lichobežníka: %.2lf cm²\n", AS_obsah);

//2
    //predefinovanie
    double AS_Obsah_zak = AS_obsah;
    //vypocty
    double AS_Objem = AS_Obsah_zak * AS_v;
    double AS_Obvod_zak = AS_a + AS_b + 2 * AS_b;
    double AS_Povrch = (2 * AS_Obsah_zak + AS_Obvod_zak) * AS_v;

    //Vypis
    printf("Objem hranolu: %.2lf cm³\n", AS_Objem);
    printf("Povrch hranolu: %.2lf cm²\n", AS_Povrch);

//3
    //Predefinovanie
    double AS_poc_rychlost = 0;
    double AS_rychlost = 27.78; //100km/h na m/s
    double AS_t = 5.5;

    //vypocet
    double AS_vyp_a = (AS_rychlost - AS_poc_rychlost) / AS_t;

    //vypis
    printf("Zrýchlenie automobilu: %.2lf m/s²\n", AS_vyp_a);

//4
    // predefinovanie
    double AS_Fx = 5.0, AS_Fy = 4.0, AS_Fz = 2.0;
    double AS_rx = 0.02, AS_ry = 0.5, AS_rz = 0.01;

    // vypocet
    double AS_Mx = AS_ry * AS_Fz - AS_rz * AS_Fy;
    double AS_My = AS_rz * AS_Fx - AS_rx * AS_Fz;
    double AS_Mz = AS_rx * AS_Fy - AS_ry * AS_Fx;

    // Výstup výsledkov
    printf("Mx = %.2lf Nm\n", AS_Mx);
    printf("My = %.2lf Nm\n", AS_My);
    printf("Mz = %.2lf Nm\n", AS_Mz);
}