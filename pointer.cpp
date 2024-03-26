#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <cmath>

// smart pointer
// unıque pointer
// shared pointer 
// weak pointer

 
int ben(int *p);
// ptr++ bir pointer'ı bir sonraki elemana taşır.
// ptr-- bir pointer'ı bir önceki elemana taşır.
// ptr + n bir pointer'ı n eleman ileri taşır.
// ptr - n bir pointer'ı n eleman geri taşır.
int main(){

	// // * operatoru  dolaylama operatoru veya referansten ayirma operatoru denir
	// // pointerin gosterdeıgı deger degısır ancak gosterdeıgı adres degısemez
	int a = 34;  //bir değişken tanimlanir 
	int* aptr = &a; // bir pointer değişkeni tanimlanir ve ain adresi atanir

	std::cout << "adres = " << aptr << std::endl; //adresi yazdirir
	std::cout << "deger  = " << *aptr << std::endl; // a değişkenin değirini yazdirilir
	std::cout << "adres = " << &a << std::endl;  //adresi yazdirir
	std::cout << "deger  = " << a << std::endl; // a değişkenin değirini yazdirir

	int y = 5; // bir ya değişkeni tanimlanir
	int* yptr = nullptr; // yptr dğişkeni için bir pointer tanımlanıp bos olarak tanımlanır  yani bu değişkenin hiçbir bellek adresine sahip olmadığı anlamına gelir.
	yptr = &y;  // bos olan pointiri y nin adresine atanir ve bu pointer taanımlama yontemıne bir pointerin referanstan ayırma yontemı denır

	std::cout << "deger = " << *yptr << std::endl; // y değişkenin değirini yazdirilir
	std::cout << "deger = " << y << std::endl; // y değişkenin değirini yazdirilir

	*yptr = 9; // burda pointerin degirini degistiri 5 yerine 9 atar

	std::cout << "deger = " << *yptr << std::endl; //  yeni y  değişkenin değirini yazdirilir
	std::cout << "deger = " << y << std::endl; // yeni y değişkenin değirini yazdirilir
	
	int x = 22; // bir degisken tanimlanir
	int* xptr = NULL; // bir pointer tanimlanir ve bos olarak tanımlanir (ikinci yol)  yani bu değişkenin hiçbir bellek adresine sahip olmadığı anlamına gelir.
	xptr = new int;  // pointerin yeni bir veri tipi olacagini belirtirlir (kullanmak zorunlu degıl ama tavsıye edilir)
	xptr = &x; // pointira degiskenin adresi atanır

	std::cout << "adres = " << xptr << std::endl; // x degirinin adresini yazdirir
	std::cout << "deger = " << x << std::endl; // x degiskeninin degirini yazdirir

	x = 1002; // deger ne kadar degistirilirse adres asla degismez

	std::cout << "adres = " << xptr << std::endl; // x degirinin adresini yazdirir 
	std::cout << "deger = " << x << std::endl; // x degiskeninin degirini yazdirir

	*xptr = 2343; // deger ne kadar degistirilirse adres asla degismez

	std::cout << "adres = " << xptr << std::endl; // x degirinin adresini yazdirir
	std::cout << "deger = " << x << std::endl; // x degiskeninin degirini yazdirir

	// // bir porinterla fonksıyon iliskisi

	int sayi ; //bir degisken tanımlama 
	for (int i = 1; i < 10; i++) { // 1 ıle 10 sayilar arası sayi degiskenine atama
		sayi = i;
	//birsayikupu(&sayi); // fonskıyon ıle ıletısım ıcın sayi degiskeninin adresini atama 
		std::cout << sayi << std::endl; // pointerla alına kuplerı ekrana yazdırılır 
	}
	
	int* ptrd; //pointer bir degisken tanımlar
	int dizi[5] = { 2,3,4,5,6 }; // 5 elemanlı bir dizi tanımlar
	ptrd = &dizi[0];// pointer degiskeni dizinin bulundugu adrese atar
	//ptrd = dizi;//pointer degiskeni dizinin bulundugu adrese atar ( dizi kendısı bir pointer oldugu ıcın yukardakı ıle aynı  )
	for (int i = 0; i < 5; i++) { // 5 kere donen dongu
		std::cout << dizi[i] << " = " << &dizi[i] << std::endl; //ilk degisken bir sayi verir icin ve ikincisi adresi verir
		std::cout << ptrd[i] << " = " << &ptrd[i] << std::endl; //ilk degisken bir sayi verir icin ve ikincisi adresi verir
		std::cout << *(ptrd + i) << " = " << &ptrd[i] << std::endl; //ilk degisken  bir sayi verir ve ikincisi adresi verir
	}

	// //references
	int p = 5; // p degiskeni 
	int& o = p;//reference yontemıyle p artık o 

	std::cout << " p = " << p << std::endl; // reference olarak baglandiklari icin p = o
	std::cout << " o = " << o << std::endl; // reference olarak baglandiklari icin o = p

	o = 10; // reference deger degisede hic bir sey degismez o = p

	std::cout << " p = " << p << std::endl; // reference olarak baglandiklari icin p = o
	std::cout << " o = " << o << std::endl;// reference olarak baglandiklari icin o = p


int sayi = 10; // bir sayi baslatilir
int *ptr = NULL; // bir pointer baslatilir ve bosa atilir
ptr = &sayi; // sayinin adresi bos pointerin icine atilir

std::cout <<"sayi= " <<sayi << std::endl; // sayinin kendisini yazdirir
std::cout <<"&sayi= "<< &sayi << std::endl; //sayinin adresini yazdirir
std::cout <<"ptr= "<< ptr << std::endl; // sayinin adresini yazdirir
std::cout <<"*ptr= "<< *ptr << std::endl; // sayinin kendısını yazdirir
std::cout <<"&ptr= "<< &ptr << std::endl; // ptrin adresini yazdirir

int sayi1;
int sayi2 = 14;
int* ptr1 = nullptr; // bir pointer olusturulur ve bosa atılır 
ptr1 = &sayi1; // sayinin adresi bos poinetera atanir

std::cout << "sayi1 =" << sayi1 << std::endl; // sayi yazdirilir 0 dir
*ptr1 = 12; // pointerin gosterdigi adresin degeri degisir ve 12 olur

std::cout << "sayi1 =" << sayi1 << std::endl; // degisen sayi  12 olur 
std::cout << "&sayi1 =" << &sayi1 << std::endl; // sayinin adresi yazdirilir
std::cout << "ptr1 =" << ptr1 << std::endl; //sayinin adrsi yazdirilir

*ptr1 = sayi2; // pointerin gosterdıgı adres degısır ve sayi2 inin adresi pointera atanır
std::cout << "*ptr1 =" << *ptr1 << std::endl; // sayi yazdirilir 14 tur
std::cout << "&ptr1 =" << &ptr1 << std::endl; // pointerin adresi yazdirilir

int sayi3 = 16; 
int* ptr2 = &sayi3; // bir sayinin adresini bir pointera direk atama 

std::cout <<"&ptr2 = "<< &ptr2 << std::endl;  // pointerin adresi yazdirilir 0x43d9fffc60
std::cout <<"&ptr2 + 1 = "<< &ptr2 + 1 << std::endl;  //pointerin adresi + 8 0x43d9fffc68
std::cout <<"&ptr2 + 2 = "<< &ptr2 + 2 << std::endl; // pointerin adresi + 2 0x43d9fffc70

std::cout <<"ptr2 = "<< ptr2 << std::endl;  // sayinin adresini yazdirilir          0x43d9fffc6c
std::cout <<"ptr2 + 1 = "<< ptr2 + 1 << std::endl; // sayinin adresi + 1 yazdirilir 0x43d9fffc70
std::cout <<"ptr2 + 2 = "<< ptr2 + 2 << std::endl; // sayinin adresi + 2 yazdirilir 0x43d9fffc74

std::cout <<"*(ptr2) " << *(ptr2) << std::endl; //sayi yazdirilir 
std::cout <<"*(ptr2 + 1) " << *(ptr2 + 1) << std::endl; // -637535108
std::cout <<"*(ptr2 + 2) " << *(ptr2 + 2) << std::endl; // 67
std::cout <<"*(ptr2 + 3) " << *(ptr2 + 3) << std::endl; // 46

std::cout <<"*ptr2 = "<< *ptr2 << std::endl;  // sayi yazidirlir
std::cout <<"*ptr2 + 1 = "<< *ptr2 + 1 << std::endl;  // sayi + 1 yazdirlir
std::cout <<"*ptr2 + 2 = "<< *ptr2 + 2 << std::endl;  // sayi + 2 yazdirlir


int x = 10;
int* p;
p = &x;
*p = 12;
int** q = &p;
int *** r = &q;

std::cout << p  << std::endl; // adres
std::cout << *p << std::endl; //12
std::cout << *q << std::endl; // adres
std::cout <<*(*q) << std::endl; // 12
std::cout <<*(*r) << std::endl; // adres
std::cout <<*(*(*r)) << std::endl; // 12
***r = 100; // x in degrini 100 yapar
std::cout << x;  // x == 100

int a, b;
a = 10;
b = ben(&a); // referanse ile fonksıyona ainin adresini atama
std::cout << b;

int  a[] = {1,2,3,4,5,6,7,8,9,10};
int *ptr = a;
std::cout << a << std::endl; // adres
std::cout << &a[2] << std::endl; // adres
std::cout << a[4] << std::endl; // 5
std::cout << &a << std::endl; // adres
std::cout << ptr << std::endl; // adres
std::cout << ptr[3] << std::endl; // 4
std::cout << *(ptr + 3) << std::endl; // 4
std::cout << (a + 3) << std::endl; // adres
std::cout << *(a + 0) << std::endl; // 1

   return 0;
}

int ben(int *p){ // ptr kullanarak a inin adresindeki degeri degsitirir
	return *p * 2;
}