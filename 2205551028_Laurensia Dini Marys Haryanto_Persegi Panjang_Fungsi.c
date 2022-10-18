#include <stdio.h>

void cover(){
    printf("\t\t\t-------------------------------------------------------------------------\n");
    printf("\t\t\t|----------------PROGRAM BANGUN DATAR PERSEGI PANJANG ------------------|\n");
    printf("\t\t\t|=======================================================================|\n");
    printf("\t\t\t|>>    Laurensia Dini Marys Haryanto       ||         2205551028        |\n");
    printf("\t\t\t-------------------------------------------------------------------------\n");
}

int k_persegi_panjang(float a, float b){
    float keliling;

    // perhitungan keliling persegi panjang
    keliling = (2*a)+(2*b);
    printf("keliling persegi panjang : %.f\n",keliling);
    return keliling;
}

int l_persegi_panjang(float a, float b){
    float luas;

    // perhitungan luas persegi panjang
    luas = (a*b);
    printf ("luas persegi panjang : %.f\n",luas);
    return luas;
}

int main ()
{
    // Deklarasi variabel
    float panjang,lebar,keliling, luas ;

    printf ("panjang persegi : ");
    scanf ("%f", &panjang);

    printf ("lebar persegi : ");
    scanf (" %f", &lebar);

    k_persegi_panjang(panjang, lebar);
    l_persegi_panjang(panjang, lebar);

return 0;
}

