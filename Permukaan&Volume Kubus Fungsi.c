#include <stdio.h>

void cover(){
    printf("\t\t\t--------------------------------------------------------------\n");
    printf("\t\t\t|----------------PROGRAM BANGUN RUANG KUBUS------------------|\n");
    printf("\t\t\t|============================================================|\n");
    printf("\t\t\t|>> Laurensia Dini Marys Haryanto   ||     2205551028        |\n");
    printf("\t\t\t--------------------------------------------------------------\n");
}

int l_permukaan_kubus (float sisi)
{
    float luas_permukaan;

    // Menghitung Luas Permukaan Kubus
    luas_permukaan = (6*sisi*sisi);
    printf("luas permukaan : %.f\n",luas_permukaan);
    return luas_permukaan ;
}

int v_kubus (float sisi)
{
    float volume;
    // Menghitung Volume Kubus
    volume = (sisi*sisi*sisi);
    printf ("volume : %.f\n",volume);
    return volume;
}


int main ()
{
    // Deklarasi variabel
    float sisi, luas_permukaan, volume ;

    printf ("sisi : ");
    scanf ("%f", &sisi);

    l_permukaan_kubus (sisi);
    v_kubus (sisi);

    return 0;
}

