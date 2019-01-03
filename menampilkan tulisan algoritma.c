#include<iostream>
#include<stdio.h>
#include<conio.h>

int ulang (int n);



int main ( void)

{
printf("PROGRAM MENAMPILKAN TULISAN ALGORITMA\n");
printf("BY M Achmad Sahroni NIM 311620782\n");
printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");

	int n;

	printf("masukkan nilai (n) :");

	scanf("%d", &n);

	ulang (n);

	getch ();



}



int ulang (int n)

{

	int i;

	for(i=1;i<=n;i++)

	printf("Algoritma Dan Pemrograman\n");

	return (i);



}

