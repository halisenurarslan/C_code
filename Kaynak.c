#include<stdio.h>
#include<stdlib.h>

/* Soru1: Kullan�c�dan a,b ve c say�lar�n� okuyarak a�a��daki i�lemi yapan kodu yaz�n�z
(a)^2+(b)^2+3(c)
*/

//int main() {
//
//	int a, b, c;
//	int d;
//
//	printf("A degerini giriniz:");
//	scanf_s("%d", &a);
//	printf("B degerini giriniz:");
//	scanf_s("%d", &b);
//	printf("C degerini giriniz:");
//	scanf_s("%d", &c);
//
//	d = a * a + b * b + 3 * c;
//
//	printf("Verilen denklem icin sonuc: %d", d);
//	return 0;
//
//
//}

/*Soru2:Kullan�c�dan bug�n�n'�n tarihini (y�l olarak) ve ka� ya��nda oldu�unu alarak do�um tarihini y�l olarak bulan kod yaz�n�z */

int main() {
	int yas, bugtarih, dogy�l;

	printf("Bugunun tarihi ni giriniz:");
	scanf_s("%d", &bugtarih);
	printf("Yasinizi giriniz:");
	scanf_s("%d", &yas);
	
	printf("Dogdugunuz tarih: %d", bugtarih - yas);
	return 0;



}