#include<stdio.h>
#include<conio.h>

int tukar (int nilai);

int main (void)
{
    int nilai;
    printf("Masukan Nilai Antara 1 sampai 4 : ");
    scanf("%d" ,&nilai);
    tukar (nilai);
    getch ();
}

int tukar (int nilai)
{
switch (nilai)
{
    case 4:
    printf("Nilai huruf : A"); break;
    case 3:
    printf("Nilai huruf : B"); break;
    case 2:
    printf("Nilai huruf : C"); break;
    case 1:
    printf("Nilai huruf : D"); break;
    default :
    printf("Kesalahan dalam Memasukan Angka");
}
    return(nilai);
}
