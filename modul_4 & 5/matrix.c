#include "stdio.h"
#include "conio.h"
int main()
{
	int baris, kolom, matriks[3][4];
	//input elemen secara Row Major Order
	printf("Masukkan elemen array : \n");
	for (baris=0; baris<3; baris++)
	{
		for (kolom=0; kolom<4; kolom++)
		{
			printf("matriks[%i][%i]", baris+1, kolom+1);
			scanf("%i", &matriks[baris][kolom]);
		}
		printf("\n");
	}
	//tampilan elemen array secara Row Major Order
	printf("isi array: \n");
	for(baris=0; baris<3; baris++)
	{
		for (kolom=0; kolom<4; kolom++)
		{
			printf("[%i]", matriks[baris][kolom]);
		}
		printf("\n");
	}
	getch();
}
