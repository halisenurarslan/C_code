#include<stdio.h>
#include<stdlib.h>

/* Soru1: Kullanýcýdan a,b ve c sayýlarýný okuyarak aþaðýdaki iþlemi yapan kodu yazýnýz
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

/*Soru2:Kullanýcýdan bugünün'ün tarihini (yýl olarak) ve kaç yaþýnda olduðunu alarak doðum tarihini yýl olarak bulan kod yazýnýz */

int main() {
	int yas, bugtarih, dogyýl;

	printf("Bugunun tarihi ni giriniz:");
	scanf_s("%d", &bugtarih);
	printf("Yasinizi giriniz:");
	scanf_s("%d", &yas);
	
	printf("Dogdugunuz tarih: %d", bugtarih - yas);
	return 0;



}