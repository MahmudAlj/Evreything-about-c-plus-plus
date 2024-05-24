#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>

//2d diziler 2d vectorler 2d std::array listler 
int main(){
//diziler
// a dan z eye bir diziye atar ve yazdirir (kucuk harfler) 
// char char_d[26];
// 	char harf = 'a';
// 	for(int i = 0; i <= 25; i++){
// 		char_d[i] = harf;
// 		harf++;
// 		std::cout << char_d[i] << " ";
// 	}
// 	std::cout << std::endl;
// // A dan Z eye bir diziye atar ve yazdirir (buyuk harfler)
// 	char char_d1[26];
// 	char harf1 = 'A';
// 	for(int i = 0; i <= 25; i++){
// 		char_d1[i] = harf1;
// 		harf1++;
// 		std::cout << char_d1[i] << " ";
// 	}
// 	std::cout << std::endl;
// // 1 den 20 ye kadar olan sayilari bir diziye atar ve yazdirir
// int int_d[20];
// int sayi = 1;
// for(int i = 0; i <= 19; i++){
// 	int_d[i] = sayi;
// 	sayi++;
// 	std::cout<< int_d[i] << " ";
// }
// std::cout << std::endl;
	
// //dizi bildirimleri 
// 	std::string dizia[5]; //normal bir dizi tanımlama 
// 	for (int i = 0; i < 3; i++) {
// 	std::cout << dizia[i] << " ";
//     }
	 
// 	int dizib[3] = { 1,2,3 }; // tanımlı  3 elemanlı dizi tanımlama 
// 	for (int i = 0; i < 3; i++) {
// 		std::cout << dizib[i] << " ";
// 	}
	 
// 	int dizim[3] = { 1,1,1 }; // tanımlı 3 elemanlı dizi tanımlama 
// 	for (int i = 0; i < 3; i++) {
// 		std::cout << dizim[i] << " ";
// 	}
	 
// 	int dizis[3] = {}; //  tanımsız / bos yanı 3 sıfırdan olusan bir dizi tanimlama 
// 	for (int i = 0; i < 3; i++) {
// 		std::cout << dizis[i] <<  " ";
// 	}
	 
// 	int dizil[3] = { 0 }; //  eger tek eleman tanımlı ıse o ılk ındexe yerlesır ve kalan ındexler sıfırdır  
// 	for (int i = 0; i < 3; i++) {
// 		std::cout << dizil[i] <<  " ";
// 	}
	 
// 	int dizik[3] = { 1 }; // eger tek eleman tanımlı ıse o ılk ındexe yerlesır ve kalan ındexler sıfırdır 
// 	for (int i = 0; i < 3; i++) {
// 		std::cout << dizik[i] << " ";
// 	}
	 
	
// 	int* dizig = new int[10]; //pointerla tanımlanmıs bir 10 elemanlı dizi olusturur
// 	for (int i = 0; i < 10; i++) {
// 		dizig[i] = 0; // elemanları sıfıra eşitle
// 		std::cout << dizig[i] << " ";
// 	}
// 	delete[] dizig; // belleği serbest bırak


// 	int dizi1[10]; // integer karakterler iceren bir dizi  olusturmak icin kullanilir
// 	std::string dizi2[5]; // string ifadeler icieren bir dizi olusturmak icin kullanilir
// 	char dizi3[10]; //character karakterller iciren bir dizi olusturmak icin kullanilir
// 	int size1 = sizeof(dizi1) / sizeof(dizi1[0]); //bir dizinin boyutunu hesaplamak icin kullanilir (sizeof(dizi) = dizi deki kac bayt oldugunu hesaplar ve dizi 10 elemanli ise ve veri tipi  int ise 4 * 10 dan 40 ve ilk elemana boler ve 40 / 4 = 10 olur oda dizideki eleman sayisidir;   )
// 	int size2 = sizeof(dizi2) / sizeof(dizi2[0]); //bir dizinin boyutunu hesaplamak icin kullanilir (sizeof(dizi) = dizi deki kac bayt oldugunu hesaplar ve dizi 10 elemanli ise ve veri tipi  string ise 2 * 10 dan 20 ve ilk elemana boler ve 20 / 2 = 10 olur oda dizideki eleman sayisidir;   )
// 	int size3 = sizeof(dizi3) / sizeof(dizi3[0]); //bir dizinin boyutunu hesaplamak icin kullanilir(sizeof(dizi) = dizi deki kac bayt oldugunu hesaplar ve dizi 10 elemanli ise ve veri tipi  char ise 1 * 10 dan 10 ve ilk elemana boler ve 10 / 1 = 10 olur oda dizideki eleman sayisidir;   )
// 	for (int i = 0; i < size1; i++) {  //  burda dizi1'e eleman eklemek icin for dongusu kullanilmistir
// 		std::cout << " integer dizi elemanlarini gir !" << std::endl;
// 		std::cin >> dizi1[i]; // dizi1[i] dongu her calistignda dizi1 e eleman eklenir
// 	}
// 	std::cin.ignore(); // std::cin  fonksiyonunun bosaltmak icin kullanilmistir
// 	for (int j = 0; j < size2; j++) {//  burda dizi2'e eleman eklemek icin for dongusu kullanilmistir
// 		std::cout << " string dizi elemanlarini gir !" << std::endl;
// 		std::cin >> dizi2[j]; // dizi2[j] dongu her calistignda dizi1 e eleman eklenir
// 	}
	
// 	std::cin.ignore();
// 	for (int k = 0; k < size3; k++) {//  burda dizi3'e eleman eklemek icin for dongusu kullanilmistir
// 		std::cout << "character dizi elemanlarini gir !" << std::endl;
// 		std::cin >> dizi3[k]; // dizi3[k] dongu her calistignda dizi1 e eleman eklenir
// 	}
		
// 	for (int i = 0; i < size1; i++) //dizilerdeki elemanlari yazdirmak icin kullanilir
// 		std::cout << dizi1[i] << " ";// for dongusu her calistignda ekrana bir dizi elemani yazar
	
// 	std::cout << std::endl;
// 	for (int j = 0; j < size2; j++)//dizilerdeki elemanlari yazdirmak icin kullanilir
// 		std::cout << dizi2[j] << " ";// for dongusu her calistignda ekrana bir dizi elemani yazar
	
// 	std::cout << std::endl;
// 	for (int k = 0; k < size3; k++)//dizilerdeki elemanlari yazdirmak icin kullanilir
// 		std::cout << dizi3[k] << " ";// for dongusu her calistignda ekrana bir dizi elemani yazar
	

// 	int dizivar[6] = { 18,19,20,17,16,15 }; // inetger bir dizi elemanlarini tanimlar
// 	std::string dizivar2[5] = { "mahmud", "code", "c++" , "gokay", "adnan" }; // string ifade dizi elemanlarini tanimlar
// 	char dizivar3[10] = { 'a','b','c','d','e','f','g','h','i','j' }; // character karakter dizi elemanlarini tanimlar


// 	int sizevar1 = sizeof(dizivar) / sizeof(dizivar[0]); //bir dizinin boyutunu hesaplamak icin kullanilir
// 	int sizevar2 = sizeof(dizivar2) / sizeof(dizivar2[0]); //bir dizinin boyutunu hesaplamak icin kullanilir
// 	int sizevar3 = sizeof(dizivar3) / sizeof(dizivar3[0]); //bir dizinin boyutunu hesaplamak icin kullanilir

// 	for (int i = 0; i < sizevar1; i++) //dizilerdeki elemanlari yazdirmak icin kullanilir
// 		std::cout << dizivar[i] << " "; // for dongusu her calistignda ekrana bir dizi elemani yazar
// 	std::cout << std::endl;
// 	for (int j = 0; j < sizevar2; j++)//dizilerdeki elemanlari yazdirmak icin kullanilir
// 		std::cout << dizivar2[j] << " ";// for dongusu her calistignda ekrana bir dizi elemani yazar
// 	std::cout << std::endl;
// 	for (int k = 0; k < sizevar3; k++)//dizilerdeki elemanlari yazdirmak icin kullanilir
// 		 std::cout << dizivar3[k] << " ";// for dongusu her calistignda ekrana bir dizi elemani yazar
// 	std::cout << std::endl;
	
// 		int dizio[10] = { 1,2,34,5,6,7,8,9,10,4 }; //dizio adinda bir integer tipinde dizi olusturmak icin kullanilir
// 	for (int yazdirdizi : dizio) { // diziyi bir degiskene atayip yazdirilir 
// 		std::cout << yazdirdizi << " " << std::endl; // for dondugu surece diziden bir ornek yazar 
// 	}


    
// 	//MATRİXLER

// 	int matrix[3][3] = { { 0,0,0 }, // burda bir 3 boyutlu dizi tanimlanmis 
// 					     { 0,1,0 }, // (tek satirdada kullanilir)
// 					     { 0,0,0 } };

// 	for (int i = 0; i < 3; i++) { // ic ice for dongusu ile dizi elemanlarini yazmak icin kullanilir (satir sutun ile orneklendirilebilir)
// 		for (int j = 0; j < 3; j++) { // i'ye satir denirse j'ye sutun denir oda her i calistignda 3 kere sutun yazilir her j calistinda 3 rakam girilir
// 			std::cout << matrix[i][j] << "  ";// 3 boyutlu dizi yazdirilir 
// 		}
// 		std::cout << std::endl; // her sutun calistignda bir alt satira gecer
// 	}
	
// 	int matrixkendin[3][2]; // burda bir 3:2 boyutunda bir dizi tanimlanmis
	
// 	for (int i = 0; i < 3; i++) { // burda ic ice dongu ile bir sutun sayisini tanimlar 
// 		for (int j = 0; j < 2; j++) { // burda  bir satir sayisini tanimlar i dongusu her dondugnda calisir
// 			std::cin >> matrixkendin[i][j]; // burda ise her ic ice dongu calistignda bir eleman ekrandan ister
			
// 		}
// 	}
	
// 	for (int i = 0; i < 3; i++) {// burda ic ice dongu kullanilarak cok boyutli diziyi ekrana yazar
// 		for (int j = 0; j < 2; j++) { // burda her ust dongu calistignda bursi calisir ve altaki kodu calistirilir
// 			std::cout << matrixkendin[i][j] << " ";  // burda ekrana cok boyutlu diziyi yazdirir
// 		}
// 		std::cout << std::endl; // her sutun calistignda bir alt satira gecer
// 	}
	
// 	//kullanıcıdan dizi elemanları almak
// 	int dizi[10]; //10 elemanlı bos bir dizi olusturulur
// 	for (int i = 0; i < 10; i++) { // kullanıcıdan eleman almak ıcın  10 kere donen dongu
// 		std::cout << "dizi eleman gir" << std::endl; 	
// 		std::cin >> dizi[i]; // dongu dondugu halde sayi alan kod
// 	}for (int i = 0; i < 10; i++) { // alınan elemanları yazdırmak icin 10 kere donen dongu
// 		std::cout << dizi[i] << std::endl;
// 	}

// 	char arr[26]; // 26 elemanlı bir char dizisi tanımlanıyor.

// 	for (int i = 0; i < 26; i++) {
// 		arr[i] = 'A' + i; // 'A' karakterine i eklenerek sıradaki harf atanıyor.
// 		std::cout << arr[i] << " "; // atanmış harf ekrana yazdırılıyor.
// 	}


// //std::array
// std::array<int, 5> myArray{1, 2, 3, 4, 5};  // 5 elemanlı bir array oluştur
//   myArray[0] = 42;  // İlk elemana değer atama
//   int value = myArray[0];  // İlk elemana erişim

//   std::cout << myArray.size(); // arrayin boyutunu yazdirir

//   std::array<int, 5> sourceArray = {1, 2, 3, 4, 5};
//   std::array<int, 5> destArray = sourceArray; // Kopyalama

// for (auto it = myArray.begin(); it != myArray.end(); ++it) {
//     std::cout << *it << " ";
// }
// //begin(): Bir dizinin veya sıralı veri yapısının başlangıç noktasını (ilk elemanın konumunu) gösteren bir işaretçi (iterator) döndürür.

// //end(): Bir dizinin veya sıralı veri yapısının sonunu (son elemandan sonraki konumu) gösteren bir işaretçi (iterator) döndürür.

//     // 'at' işlemi ile elemanlara erişim ve değiştirme
//     myArray.at(2) = 42;

//     // 'front' ile ilk elemana erişim
//     int firstElement = myArray.front();

//     // 'back' ile son elemana erişim
//     int lastElement = myArray.back();

//     // 'data' ile dizinin veri işaretçisine erişim
//     int* dataPointer = myArray.data();

//     // 'empty' ile dizinin boş olup olmadığını kontrol etme
//     bool isEmpty = myArray.empty();

//     // 'fill' ile tüm elemanların doldurulması
//     myArray.fill(0);

//     // 'swap' ile iki dizinin yer değiştirmesi
//     std::array<int, 5> anotherArray = {10, 20, 30, 40, 50};
//     myArray.swap(anotherArray);



//   // Vector
// std::vector<int> number; // tek boyutlu vector tanımlama 
//    number = {1,2,3,4,5,6,7,8,9};
// // std::vector<std::vector<int>> number1; // iki boyutlu vector tanımlama 
// //    number1 = {{1,2,3,4,5}{2,4,6,8,10}};
// std::vector<int> myVector = {1,2,3,4,5,6,7,8,9};

// myVector.push_back(6); // işlevi ile yeni elemanlar vektöre eklenir:
// myVector.pop_back(); // işlevi ile son elemanı siler

// int value1 = myVector[0];    // İlk eleman
// int value2 = myVector.at(2); // Üçüncü eleman  işlevleri ile vektörün belirli bir elemanına erişebilirsiniz:
// for (auto it = number.begin(); it != number.end(); ++it) { // begin ve end ile number vectorunu yazdirma
//     std::cout << *it << std::endl;
// }
// int size = myVector.size(); //Vektörün boyutunu size() işlevi ile öğrenebilirsiniz:
// int capacity = myVector.capacity(); //Vektörün kapasitesini capacity() işlevi ile öğrenebilirsiniz:
// myVector.clear(); // Vektörü temizler (elemanları siler)
// myVector.assign(5, 42); // Tüm elemanları 42 ile doldurur Vektörün boyutunu değiştirmeden tüm elemanlarını belirli bir değerle doldurmak için assign() işlevini kullanabilirsiniz:
// //Diğer İşlevler: std::vector'ün diğer birçok işlevi bulunur, örneğin insert(), erase(), resize(), swap(), emplace_back(), ve daha fazlası. İhtiyacınıza göre belirli işlemleri gerçekleştirmek için bu işlevleri kullanabilirsiniz.


// // std::list bunu bıtır
// std::list<int> mylist;

// mylist.push_back(30);
// mylist.push_front(20);
// mylist.push_front(10);
// mylist.push_back(40);

// for(std::list<int>::iterator it = mylist.begin(); it != mylist.end(); it++){
// 	std::cout << *it << " ";
// }
//std::advance
//std::deque

std::deque <int> d{1,2,3,4,5};

    return 0;
}