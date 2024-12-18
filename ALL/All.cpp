#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>
#include <cmath>


void fox1() {
	std::cout << std::endl;
}
void fox2() {
	std::cout << std::endl;
	std::cout << std::endl;
}
 
int veritipleri();
int yazdirmak();
int kosulyapi();
int donguler();
int diziler();
int sabitdegerler();
int pointerlar();
int operatorler();
int random();
int ornekleryap();
int classlar();
int structlar();
int buildfunc();
int classlar2();

// ek
void birsayikupu(int* sptr); // pointer bir fonksıyon tanımlamak ıcın kullanılır (ister tum pointerin ismi yazilir ister yazilmaz farketmez ** kesin bilgi degiildir ** )

// ek son
//classes 
class Students { //burda bir classin olusturulur

public: // public adi altında her  hangi bir degisken veya fonskıyon aciktir yani classin ister classin disinda iste classin icinde kullanılabilir
	std::string firstname;//public bir stirng degisken tanımlama
	std::string lastname;//public bir stirng degisken tanımlama
	int age;//public bir integer degisken tanımlama
	float length;//public bir float degisken tanımlama
	double weight;//public bir double degisken tanımlama
	std::string s_number;//public bir stirng degisken tanımlama

	/*int students() {
		if (age > 25) {
			std::cout << "hos geldin " << std::endl;
			printer();
		}
		else {
			std::cout << "maalesef cok buyuksun ;)" << std::endl;
			std::cout << "tekrar giris yapmak istermisin istersen 1 istemessen 0 bas " << std::endl;
			bool tekrargiris = false;
			if (tekrargiris == true) {
				input_information();
			}	
		}
	}*/
	 
	void printer() { // public bir islevli fonksıyon tanımlama 
		std::cout << " firstname : " << firstname << std::endl; // burda bu fonskıyon cagrıldıgnda calısacak olan kod
		std::cout << " lastname : " << lastname << std::endl;
		std::cout << " age : " << age << std::endl;
		std::cout << " length : " << length << std::endl;
		std::cout << " weight : " << weight << std::endl;
		std::cout << " student number : " << s_number << std::endl;
	}

	void input_information() { // public bir islevli fonksıyon tanımlama 
		std::cout << "enter your firstname" << " :  "; // burda bu fonskıyon cagrıldıgnda calısacak olan kod
		std::cin >> firstname;
		std::cout << "enter your lastname" << " :  ";
		std::cin >> lastname;
		std::cout << "enter your age" << " :  ";
		std::cin >> age;
		std::cout << "enter your length" << " :  ";
		std::cin >> length;
		std::cout << "enter your weight" << " :  ";
		std::cin >> weight;
		std::cout << "enter your s_number" << " :  ";
		std::cin >> s_number;
	}

	void header() { // public bir islevli fonksıyon tanımlama 
		std::cout << names << " " << tarihs << " " << std::endl; // burda bu fonskıyon cagrıldıgnda calısacak olan kod
	}


private: // private adi altında olan her degisken ve fonksıyon disa kapalıdır yanı sadece classın icinde kullanılması ızın verilir
	std::string names = "MAHMUD CODE OKULU";// private bir string degisken tanımlama;
	int tarihs = 2023; // private bir integer degisken tanımlama;

protected:
	std::string whereheiscome;
};
struct women { // bir structın baslatma kodudur 
	std::string firstname;  // bu ve asagdakı degıskenler bir mainin icinde olusacak olan objelerin ozellikleridir
	std::string lastname;
	int age;
	double weight;
	void yazdir() { // classta oldugu gibi structında birden fazla fonskıyon tasıyabilir
		std::cout << "isim = " << firstname << std::endl;
		std::cout << "soyisim = " << lastname << std::endl;
		std::cout << "kilo  = " << weight << "  yas = " << age << std::endl;
	}
	void girisal() {
		std::cout << "isim gir = " << std::endl;
		std::cin >> firstname;
		std::cout << "soyadini gir = " << std::endl;
		std::cin >> lastname;
		std::cout << "yasini ve kilonu gir = " << std::endl;
		std::cin >> age; 
		std::cin >> weight;
	}
};

int main() {
	
	std::cout << "merhaba kullanici hizli giris icin 1 bas" << std::endl;
	std::cout << "orneklere bakmak istersen 2 ye bas" << std::endl;
	std::string hizlig;
	std::cin >> hizlig;
	if (hizlig == "1") {
		veritipleri();
		fox2();
		yazdirmak();
		fox2();
		operatorler();
		fox2();
		kosulyapi();
		fox2();
		donguler();
		fox2();
		diziler();
		fox2();
		sabitdegerler();
		fox2();
		pointerlar();
		fox2();
		random();
		fox2();
		classlar();
		fox2();
		structlar();
		fox2();
		buildfunc();
		fox2();
		ornekleryap();
	}
	else if (hizlig == "2") {
		ornekleryap();
	}
	else if(hizlig == "3") {
		int seccim;
		std::cout << "lutfen ismini girermisin" << std::endl;
		std::cout << "merhaba hangi basliga girmek istersin" << std::endl;
		std::cout <<"veritipleri icin 1" << std::endl;
		std::cout <<"yazdirmak icin 2" << std::endl;
		std::cout <<"operatorler icin 3" << std::endl;
		std::cout <<"kosulyapilari icin 4" << std::endl;
		std::cout <<"doguler icin 5" << std::endl;
		std::cout <<"diziler icin 6" << std::endl;
		std::cout <<"sabitdegerler icin 7" << std::endl;
		std::cout <<"pointerlar icin 8" << std::endl;
		std::cout <<"random icin 9" << std::endl;
		std::cout <<"classlar icin 10" << std::endl;
		std::cout <<"structlar icin 11" << std::endl;
		std::cout <<"buildfunc icin 12" << std::endl;
		std::cin >> seccim;
		switch (seccim) {
		case 1:
			veritipleri();
			break;

		case 2:
			yazdirmak();
			break;

		case 3:
			operatorler();
			break;

		case 4:
			kosulyapi();
			break;

		case 5:
			donguler();
			break;

		case 6:
			diziler();
			break;

		case 7:
			sabitdegerler();
			break;

		case 8:
			pointerlar();
			break;

		case 9:
			random();
			break;

		case 10:
			classlar();
			break;

		case 11:
			structlar();
			break;

		case 12:
			buildfunc();
			break;
			
		default:
			std::cout << " bir sayi girmedin yada girdigin sayi hatali tekrar gir" << std::endl;
			
		}	
	}
	
//veritipleri();
fox2();
//yazdirmak();
fox2();
//operatorler();
fox2();
//kosulyapi();
fox2();
//donguler();
fox2();
//diziler();
fox2();
//sabitdegerler();
fox2();
//pointerlar();
fox2();
//random();
fox2();
//classlar();
fox2();
//structlar();
fox2();
//buildfunc();
fox2();
classlar2();
ornekleryap();

	return 0;
}


int veritipleri() {
	const int size = 6; // sabit bir integer veri tipinde bir degisken
	int x = 18; // bu kod integer veri tipi tanimlamak için kullanilir.
	float pi = 3.14; // bu kod float veri tipi (yanı kucuk kesırlı sayilar) tanimlamak için kullanılır.
	double e = 2.71828182845; // bu kod double veri tipi (yani buyuk kesırlı sayilar ) tanimlamak icin kullanılır.
	char A = 'a'; // bu kod character veri tipi (yanı tek harf ) tanımlamak icin kullanılır;
	std::string isim = "code"; // bu kod string bir ifade tanımlamak ıcın kullanılır.
	bool a = true; // bu kod bir bool ifade tanımlar sadece (true and false vardır).
	
	std::cout << "bu integer bir ifade = " << x << std::endl;
	std::cout << "bu float bir ifade = " << pi << std::endl;
	std::cout << "bu double bir ifade = " << e << std::endl;
	std::cout << "bu character bir ifade = " << A << std::endl;
	std::cout << "bu string bir ifade = " << isim << std::endl;
	std::cout << "bu bool bir ifade = " << a << std::endl;

	int dizi[size] = { 10,23,4,5,3 }; // integer veri tipinde bir dizi tanımlama 
	char dizi1[size] = { 'm', 'a', 'h', 'm', 'u', 'd' }; //charecter veri tipinde tanimlama 
	double dizi2[size] = { 3.3243,4.243424,3243.232434 }; //double veri tipinde  bir dizi tanimlama 
	float dizi3[size] = { 3.2,4.5,1.2,1.9 }; //float veri tipinde bir dizi tanimlama 
	std::string dizi4[size] = { "mahmud" ,"code", "fatma", "nur" }; //string veri tipinde bir dizi tanimlama
	


	return 0;
}
int yazdirmak() {
	int x;
	float pi; 
	double e;
	char a;
	bool d;
	std::string isim;
    std::string isim2;

	std::cout << "bir integer deger yaz ?" << std::endl;
	std::cin >> x; // integer deger yazmak
	std::cout << "bu integer bir ifade = " << x << std::endl; // integer ifadeyi ekrana yazdirmak

	std::cout << "bir float deger yaz ?" << std::endl;
	std::cin >> pi; //float deger yazmak
	std::cout << "bu float bir ifade = " << pi << std::endl; // float ifadeyi yazdirmak

	std::cout << "bir double deger yaz ?" << std::endl;
	std::cin >> e; //double deger yazmak
	std::cout << "bu double bir ifade = " << e << std::endl; // double ifadeyi yazdirmak
	
	std::cout << "bir character yaz?" << std::endl;
	std::cin >> a; //character yazmak
    std::cout << "bu character bir ifade = " << a << std::endl; // character ifadeyi yazdirmak

	std::cout << "bir bool  deger yaz ?" << std::endl;
	std::cin >> d; //bool deger yazma (true / false)
	std::cout << "bu bool bir ifade = " << d << std::endl; // bool ifadeyi yazdirmak 
	
	std::cout << "bir string kelime yaz ?" << std::endl;
	std::cin >> isim; //tek kelıme yazmak
	std::cout << "bu string bir ifade = " << isim << std::endl; //string ifadeyi yazdirmak

	std::cin.ignore(); //std::cin fonksiyonu dolu oldugu icin onu bosaltmak icin kullanildi

	std::cout << "bir string metin yaz ?" << std::endl;
	std::getline(std::cin, isim2); //metin yazmak
	std::cout << "yazdigin metin = " << isim2 << std::endl; //metni yazdirmak
	
	std::string nickname; // sting bir degisken
	std::cout << "adini gir \n";
	std::getline(std::cin,nickname); // birden fazla string(kelime veya cumle girilcekse) girilcekse getline fonksıyonu kullanılır (metin girilcekse kullanılabilir)
	int length = nickname.length(); // girilen bir string veya her hangi bir veri tipinin karakter uzunlugnu belırler
	if (length >= 6) std::cout << "merhaba " << nickname << std::endl; // if kosul yapısı
	else std::cout << "isimin cok kucuk lutfen tam ismini gir  " << nickname << std::endl; // if kosul yapısı saglanmassa calıscak olan kod
 	

	return 0;
}
int kosulyapi() {
	int x = 18;
	int b;
	std::cout << "b degirini gir !" << std::endl;
	std::cin >> b;
	if (x == b) { //ana kosuldur saglanirsa alttaki kod blogu calisir 
		std::cout << "girdigniz sayi x'e esittir !" << b << " = " << x << std::endl;
	}
	else if (x > b) { //ikinci kosuldur ana kosul saglanmassa ve bu kosul saglanirsa bu kod blogu saglanir 
		std::cout << "girdigniz sayi xten kucuk " << b << " < " << x << std::endl;
	}
	else if (x < b) { // ucuncu kosuldur ve ilk iki kosul saglanmassa ve bu saglanirsa alttaki kod blogu saglanir
		std::cout << "girdigin sayi xten buyuk " << b << " > " << x << std::endl;
	}
	else { //son kosuldur usteki kosullar saglanmassa altaki kod blugo saglanir 
		std::cout << "girdigin sayi degil " << b << " != " << x << std::endl;
	}
	fox1();
	int nott;
	std::cout << "bir not gir " << std::endl;
	std::cin >> nott;
	

	switch (nott) { // hangi degiskenlerin kosul olarak berlirlenecegeni belirler
	case 90: //eger kosullar blogndaki kosulla aynisi ise alttaki kod blognu calistirir
		std::cout << "aldigin not doksan  " << nott << std::endl;
		break; //eger ustekı kosul dogru ise (break) sozcugu yuzunden donguden cikar
	case 80: //eger kosullar blogndaki usteki kosul ayni degilse ve bu ayni ise altaki kod blogu calisir
		std::cout << "aldigin not seksen   " << nott << std::endl;
		break;//eger ustekı kosul dogru ise (break) sozcugu yuzunden donguden cikar
	case 70: //eger kosullar blogndaki usteki kosul ayni degilse ve bu ayni ise altaki kod blogu calisir
		std::cout << "aldigin not yetmis  " << nott << std::endl;
		break;//eger ustekı kosul dogru ise (break) sozcugu yuzunden donguden cikar
	case 60: //eger kosullar blogndaki kosulla aynisi ise alttaki kod blognu calistirir
		std::cout << "aldigin not atmis  " << nott << std::endl;
		break;//eger ustekı kosul dogru ise (break) sozcugu yuzunden donguden cikar
	case 50: //eger kosullar blogndaki kosulla aynisi ise alttaki kod blognu calistirir
		std::cout << "aldigin not elli  " << nott << std::endl;
		break;//eger ustekı kosul dogru ise (break) sozcugu yuzunden donguden cikar
	case 40: //eger kosullar blogndaki kosulla aynisi ise alttaki kod blognu calistirir
		std::cout << "aldigin not kirk  " << nott << std::endl;
		break;//eger ustekı kosul dogru ise (break) sozcugu yuzunden donguden cikar
	default:std::cout << "girdigin not ya cok yuksek yada cok dusuktur" << std::endl; // bu kod blogu eger usteki hic bir kosul saglanmiyorsa bu kod blogu calisir
	}
	return 0;
}
int donguler() {
	for (int i = 0; i <= 10; i++) { // bu for dongusudur birinci hucre bir degisken tanimlayip 0 ra atanir 
		std::cout << i << std::endl;// ikinci hucre nerde bitecegini belirlenir ucuncu hucre artis miktarini belirler
	}//usteki kod ise yapilaacak olan kod  ayrica ikinci hucredeki kosul saglayana kadar devam eder yanı kod blougndaki kodu surekli basar
	fox1();
	int j = 0;//burda da aynidir fakat degisken tanimlamak icin dongunun disina yazilir
	while (j != 13) {  //burda isi nerden durmasi gerektigni soyler 
		std::cout << j << std::endl; //yapilacak olan kod usteki kosul saglayana kadar basmaya devam eder
		j++; //burasi ise artis miktarini soyler
	}
	fox1();
	std::string insansifresi = "mahmud123";
	std::string sifre;
	do { // bu dongude ilk olarak kod blogu calistirip sonra kontrol ederek devam edilip edilmicegini kontrol eder 
		std::cout << "sifreni gir " << std::endl;
		std::cin >> sifre;
		if(sifre !=insansifresi){  // burda kosul saglanmassa calistirilacak olan kod 
		std::cout << "sifreniz yanlis tekrar gir " << std::endl;
		}
	} while (insansifresi != sifre);  // bu kod kontrol eder eger kosul dogru ise dongunun disina cikar eger yanlis ise tekrar basa doner
		
	std::cout << "dogru giris " << std::endl;


	for (char i = 'A'; i <= 'Z'; i++) { //buyuk harfelerle A dan Z ye olan harflerı yazdırır
		std::cout << i << " ";
	}
	fox1();
	for (int i = 0;i <= 26; i++) { // 1 den 26 ya kadar olan sayıları yazdırır
		std::cout << i << " ";
	}
	return 0;
}
int diziler() {
	
	// dizi bildirimleri 

	std::string dizia[5]; //normal bir dizi tanımlama 
	for (int i = 0; i < 3; i++) {
	std::cout << dizia[i] << " ";
    }
	fox1();
	int dizib[3] = { 1,2,3 }; // tanımlı  3 elemanlı dizi tanımlama 
	for (int i = 0; i < 3; i++) {
		std::cout << dizib[i] << " ";
	}
	fox1();
	int dizim[3] = { 1,1,1 }; // tanımlı 3 elemanlı dizi tanımlama 
	for (int i = 0; i < 3; i++) {
		std::cout << dizim[i] << " ";
	}
	fox1();
	int dizis[3] = {}; //  tanımsız / bos yanı 3 sıfırdan olusan bir dizi tanimlama 
	for (int i = 0; i < 3; i++) {
		std::cout << dizis[i] <<  " ";
	}
	fox1();
	int dizil[3] = { 0 }; //  eger tek eleman tanımlı ıse o ılk ındexe yerlesır ve kalan ındexler sıfırdır  
	for (int i = 0; i < 3; i++) {
		std::cout << dizil[i] <<  " ";
	}
	fox1();
	int dizik[3] = { 1 }; // eger tek eleman tanımlı ıse o ılk ındexe yerlesır ve kalan ındexler sıfırdır 
	for (int i = 0; i < 3; i++) {
		std::cout << dizik[i] << " ";
	}
	fox1();
	
	int* dizig = new int[10]; //pointerla tanımlanmıs bir 10 elemanlı dizi olusturur
	for (int i = 0; i < 10; i++) {
		dizig[i] = 0; // elemanları sıfıra eşitle
		std::cout << dizig[i] << " ";
	}
	delete[] dizig; // belleği serbest bırak

	fox2();
	int dizi1[10]; // integer karakterler iceren bir dizi  olusturmak icin kullanilir
	std::string dizi2[5]; // string ifadeler icieren bir dizi olusturmak icin kullanilir
	char dizi3[10]; //character karakterller iciren bir dizi olusturmak icin kullanilir
	int size1 = sizeof(dizi1) / sizeof(dizi1[0]); //bir dizinin boyutunu hesaplamak icin kullanilir (sizeof(dizi) = dizi deki kac bayt oldugunu hesaplar ve dizi 10 elemanli ise ve veri tipi  int ise 4 * 10 dan 40 ve ilk elemana boler ve 40 / 4 = 10 olur oda dizideki eleman sayisidir;   )
	int size2 = sizeof(dizi2) / sizeof(dizi2[0]); //bir dizinin boyutunu hesaplamak icin kullanilir (sizeof(dizi) = dizi deki kac bayt oldugunu hesaplar ve dizi 10 elemanli ise ve veri tipi  string ise 2 * 10 dan 20 ve ilk elemana boler ve 20 / 2 = 10 olur oda dizideki eleman sayisidir;   )
	int size3 = sizeof(dizi3) / sizeof(dizi3[0]); //bir dizinin boyutunu hesaplamak icin kullanilir(sizeof(dizi) = dizi deki kac bayt oldugunu hesaplar ve dizi 10 elemanli ise ve veri tipi  char ise 1 * 10 dan 10 ve ilk elemana boler ve 10 / 1 = 10 olur oda dizideki eleman sayisidir;   )
	for (int i = 0; i < size1; i++) {  //  burda dizi1'e eleman eklemek icin for dongusu kullanilmistir
		std::cout << " integer dizi elemanlarini gir !" << std::endl;
		std::cin >> dizi1[i]; // dizi1[i] dongu her calistignda dizi1 e eleman eklenir
	}
	std::cin.ignore(); // std::cin  fonksiyonunun bosaltmak icin kullanilmistir
	for (int j = 0; j < size2; j++) {//  burda dizi2'e eleman eklemek icin for dongusu kullanilmistir
		std::cout << " string dizi elemanlarini gir !" << std::endl;
		std::cin >> dizi2[j]; // dizi2[j] dongu her calistignda dizi1 e eleman eklenir
	}
	
	std::cin.ignore();
	for (int k = 0; k < size3; k++) {//  burda dizi3'e eleman eklemek icin for dongusu kullanilmistir
		std::cout << "character dizi elemanlarini gir !" << std::endl;
		std::cin >> dizi3[k]; // dizi3[k] dongu her calistignda dizi1 e eleman eklenir
	}
		
	for (int i = 0; i < size1; i++) //dizilerdeki elemanlari yazdirmak icin kullanilir
		std::cout << dizi1[i] << " ";// for dongusu her calistignda ekrana bir dizi elemani yazar
	
	std::cout << std::endl;
	for (int j = 0; j < size2; j++)//dizilerdeki elemanlari yazdirmak icin kullanilir
		std::cout << dizi2[j] << " ";// for dongusu her calistignda ekrana bir dizi elemani yazar
	
	std::cout << std::endl;
	for (int k = 0; k < size3; k++)//dizilerdeki elemanlari yazdirmak icin kullanilir
		std::cout << dizi3[k] << " ";// for dongusu her calistignda ekrana bir dizi elemani yazar
	
	fox1();

	int dizivar[6] = { 18,19,20,17,16,15 }; // inetger bir dizi elemanlarini tanimlar
	std::string dizivar2[5] = { "mahmud", "code", "c++" , "gokay", "adnan" }; // string ifade dizi elemanlarini tanimlar
	char dizivar3[10] = { 'a','b','c','d','e','f','g','h','i','j' }; // character karakter dizi elemanlarini tanimlar


	int sizevar1 = sizeof(dizivar) / sizeof(dizivar[0]); //bir dizinin boyutunu hesaplamak icin kullanilir
	int sizevar2 = sizeof(dizivar2) / sizeof(dizivar2[0]); //bir dizinin boyutunu hesaplamak icin kullanilir
	int sizevar3 = sizeof(dizivar3) / sizeof(dizivar3[0]); //bir dizinin boyutunu hesaplamak icin kullanilir

	for (int i = 0; i < sizevar1; i++) //dizilerdeki elemanlari yazdirmak icin kullanilir
		std::cout << dizivar[i] << " "; // for dongusu her calistignda ekrana bir dizi elemani yazar
	std::cout << std::endl;
	for (int j = 0; j < sizevar2; j++)//dizilerdeki elemanlari yazdirmak icin kullanilir
		std::cout << dizivar2[j] << " ";// for dongusu her calistignda ekrana bir dizi elemani yazar
	std::cout << std::endl;
	for (int k = 0; k < sizevar3; k++)//dizilerdeki elemanlari yazdirmak icin kullanilir
		 std::cout << dizivar3[k] << " ";// for dongusu her calistignda ekrana bir dizi elemani yazar
	std::cout << std::endl;
	
	fox1();

	int matrix[3][3] = { { 0,0,0 }, // burda bir 3 boyutlu dizi tanimlanmis 
					     { 0,1,0 },//(tek satirda kullanilir)
					     { 0,0,0 } };

	for (int i = 0; i < 3; i++) { // ic ice for dongusu ile dizi elemanlarini yazmak icin kullanilir (satir sutun ile orneklendirilebilir)
		for (int j = 0; j < 3; j++) { // i'ye satir denirse j'ye sutun denir oda her i calistignda 3 kere sutun yazilir her j calistinda 3 rakam girilir
			std::cout << matrix[i][j] << "  ";// 3 boyutlu dizi yazdirilir 
		}
		std::cout << std::endl; // her sutun calistignda bir alt satira gecer
	}
	
	int matrixkendin[3][2]; // burda bir 3:2 boyutunda bir dizi tanimlanmis
	
	for (int i = 0; i < 3; i++) { // burda ic ice dongu ile bir sutun sayisini tanimlar 
		for (int j = 0; j < 2; j++) { // burda  bir satir sayisini tanimlar i dongusu her dondugnda calisir
			std::cin >> matrixkendin[i][j]; // burda ise her ic ice dongu calistignda bir eleman ekrandan ister
			
		}
	}
	
	for (int i = 0; i < 3; i++) {// burda ic ice dongu kullanilarak cok boyutli diziyi ekrana yazar
		for (int j = 0; j < 2; j++) { // burda her ust dongu calistignda bursi calisir ve altaki kodu calistirilir
			std::cout << matrixkendin[i][j] << " ";  // burda ekrana cok boyutlu diziyi yazdirir
		}
		std::cout << std::endl; // her sutun calistignda bir alt satira gecer
	}
	
	
	int dizio[10] = { 1,2,34,5,6,7,8,9,10,4 }; //dizio adinda bir integer tipinde dizi olusturmak icin kullanilir
	for (int yazdirdizi : dizio) { // diziyi bir degiskene atayi yazdirilir 
		std::cout << yazdirdizi << " " << std::endl; // for dondugu surece diziden bir ornek yazar 
	}


	
	//kullanıcıdan dizi elemanları almak
	int dizi[10]; //10 elemanlı bos bir dizi olusturulur
	for (int i = 0; i < 10; i++) { // kullanıcıdan eleman almak ıcın  10 kere donen dongu
		std::cout << "dizi eleman gir" << std::endl; 	
		std::cin >> dizi[i]; // dongu dondugu halde sayi alan kod
	}for (int i = 0; i < 10; i++) { // alınan elemanları yazdırmak icin 10 kere donen dongu
		std::cout << dizi[i] << std::endl;
	}

	char arr[26]; // 26 elemanlı bir char dizisi tanımlanıyor.

	for (int i = 0; i < 26; i++) {
		arr[i] = 'A' + i; // 'A' karakterine i eklenerek sıradaki harf atanıyor.
		std::cout << arr[i] << " "; // atanmış harf ekrana yazdırılıyor.
	}
		return 0;
}
int sabitdegerler() {
	 
	 const int sabityas = 18; // degistirlmeyen bir degiskeni tanimlamak icin const kullanilir bu 
	 int sabitdegilyas; //normal bir degisken tanimlama

	 std::cout << "yasini gir !!" << std::endl;
	 std::cin >> sabitdegilyas;

	 std::cout <<sabityas << std::endl;
	 std::cout <<sabitdegilyas << std::endl;

	 static std::string isim = "mahmud"; // bu integer tipindeki  degiskeni omru boyunca gecerli kilar . sadece bir kez yer alir ve hep orda kalir
	 static std::string soyisim = "code"; //bu string tipindeki  degiskeni omru boyunca gecerli kilar . sadece bir kez yer alir ve hep orda kalir
	 static int yas = 18;

	 std::cout << "isim soyisim gir !";
	 std::cin >> isim;
	 std::cin >> soyisim;
	 std::cout << "yasini gir !";
	 std::cin >> yas;

	 std::cout <<isim << std::endl;
	 std::cout <<soyisim<< std::endl; 
	 std::cout <<yas << std::endl;

	 auto isimi = "mahmud";
	 std::cout << isimi << std::endl;


	 int carpim = 1;
	 register int i;
	 for (i = 1; i < 10; i++) {
		  carpim  = carpim * i; 
	 }
	 std::cout << carpim << std::endl;

	return 0;
}
int pointerlar() {
	
	// * operatoru  dolaylama operatoru veya referansten ayirma operatoru denir
	// pointerin gosterdeıgı deger degısır ancak gosterdeıgı adres degısemez
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

	// bir porinterla fonksıyon iliskisi

	int sayi ; //bir degisken tanımlama 
	for (int i = 1; i < 10; i++) { // 1 ıle 10 sayilar arası sayi degiskenine atama
		sayi = i;
		birsayikupu(&sayi); // fonskıyon ıle ıletısım ıcın sayi degiskeninin adresini atama 
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
	//references

	int p = 5; // p degiskeni 
	int& o = p;//reference yontemıyle p artık o 

	std::cout << " p = " << p << std::endl; // reference olarak baglandiklari icin p = o
	std::cout << " o = " << o << std::endl; // reference olarak baglandiklari icin o = p

	o = 10; // reference deger degisede hic bir sey degismez o = p
	

	std::cout << " p = " << p << std::endl; // reference olarak baglandiklari icin p = o
	std::cout << " o = " << o << std::endl;// reference olarak baglandiklari icin o = p


	return 0;
}
int operatorler() {
	int x = 20;
	int y = 12;
	bool l = true;
	// Arithmetic Operators (Aritmetik Operatörler)
	std::cout << 20 + 12 << std::endl; // Addition (+): Toplama işlemi yapar.
	std::cout << 20 - 12 << std::endl; //Subtraction(-) : Çıkarma işlemi yapar.
	std::cout << 20 * 12 << std::endl; // Multiplication (*): Çarpma işlemi yapar.
	std::cout << 20 / 12 << std::endl; //Division (/): Bölme işlemi yapar.
	std::cout << 20 % 12 << std::endl; //Modulus(%) : Mod alma işlemi yapar.
	//Assignment Operators (Atama Operatörleri)
	x = y;  //Assignment(= ) : Bir değişkene değer atamak için kullanılır. (bu ıslemde x degısır)
	std::cout << " 1 =  " << x << " <-> " << y << std::endl;
	x += y; //Addition Assignment (+=): Toplama işlemi yaparak değeri değişkene atar.
	std::cout << " 2 =  " << x << " <-> " << y << std::endl;
	x -= y; //Subtraction Assignment (-=): Çıkarma işlemi yaparak değeri değişkene atar.
	std::cout << " 3 =  " << x << " <-> " << y << std::endl;
	x *= y; //Multiplication Assignment (*=): Çarpma işlemi yaparak değeri değişkene atar.
	std::cout << " 4 =  " << x << " <-> " << y << std::endl;
	x /= y; //Division Assignment (/=): Bölme işlemi yaparak değeri değişkene atar.
	std::cout << " 5 =  " << x << " <-> " << y << std::endl;
	x %= y; //Modulus Assignment (%=): Mod alma işlemi yaparak değeri değişkene atar.
	std::cout << " 6 =  " << x << " <-> " << y << std::endl;
	// Comparison Operators (Karşılaştırma Operatörleri)
	if (x == y) //Equal to (==): İki değerin eşit olup olmadığını kontrol eder.
		std::cout << "dogru " << std::endl;
	else
		std::cout << "yanlis" << std::endl;
	if (x != y) //Not equal to (!=): İki değerin eşit olmadığını kontrol eder.
		std::cout << "dogru " << std::endl;
	else
		std::cout << "yanlis" << std::endl;
	if (x > y)// Greater than (>): Bir değerin diğerinden büyük olup olmadığını kontrol eder.
		std::cout << "dogru " << std::endl;
	else
		std::cout << "yanlis" << std::endl;
	if (x < y) //Less than (<): Bir değerin diğerinden küçük olup olmadığını kontrol eder.
		std::cout << "dogru " << std::endl;
	else
		std::cout << "yanlis" << std::endl;
	if (x >= y)// Greater than or equal to (>=): Bir değerin diğerinden büyük veya eşit olup olmadığını kontrol eder.
		std::cout << "dogru " << std::endl;
	else
		std::cout << "yanlis" << std::endl;
	if (x <= y)//Less than or equal to (<=): Bir değerin diğerinden küçük veya eşit olup olmadığını kontrol eder.
		std::cout << "dogru " << std::endl;
	else
		std::cout << "yanlis" << std::endl;
	// Logical Operators (Mantıksal Operatörler)
	if (x == y && x <= y) //AND (&&): İki koşulun da doğru olup olmadığını kontrol eder.
		std::cout << " ben " << std::endl;
	else
		std::cout << " sen " << std::endl;
	if (x == y || x <= y) //OR (||): İki koşuldan en az birinin doğru olup olmadığını kontrol eder.
		std::cout << " ben " << std::endl;
	else
		std::cout << " sen " << std::endl;
	while (!(x == y)) { std::cout << " onlar " << std::endl; break; } //NOT (!): Bir koşulun doğru olup olmadığını tersine çevirir.
	//Increment/Decrement Operators (Arttırma/Azaltma Operatörleri)

	while (l = true) {
		x++; //Increment (++): Değişkenin değerini 1 arttırır.
		y--; //Decrement (--): Değişkenin değerini 1 azaltır.
		std::cout << " 1 =  " << x << " <-> " << y << std::endl;
		if (x < y) {
			--x; //  Değişkenin  önce değerini 1 azaltır. (ilk azaltır yani)
			++y; //  Değişkenin  önce değerini 1 arttırır. ( ilk artıtır yani)
			std::cout << " 2 =  " << x << " <-> " << y << std::endl;
			l = false;
			break;
		}
	}
	//Bitwise Operators(Bit Düzeyinde Operatörler)

		// Bitwise AND
		int c = x & y;  // 1001 Bitwise AND (&): İki sayının bit düzeyinde AND işlemi yapar.
		std::cout << "Bitwise AND result: " << c << std::endl;

		// Bitwise OR
		int d = x | y;  // 1101 Bitwise OR (|): İki sayının bit düzeyinde OR işlemi yapar.
		std::cout << "Bitwise OR result: " << d << std::endl;

		// Bitwise NOT
		int e = ~x;     // 0010 Bitwise NOT (~): Bir sayının bit düzeyinde NOT işlemi yapar.
		std::cout << "Bitwise NOT result: " << e << std::endl;

		// Bitwise XOR
		int f = x ^ y;  // 0100  Bitwise XOR (^): İki sayının bit düzeyinde XOR işlemi yapar.
		std::cout << "Bitwise XOR result: " << f << std::endl;

		// Left Shift
		int g = x << 2;  // 110100 Left Shift (<<): Bir sayının bitlerini belirtilen sayı kadar sola kaydırır.
		std::cout << "Left shift result: " << g << std::endl;

		// Right Shift
		int h = y >> 2;  // 0010  Right Shift (>>): Bir sayının bitlerini belirtilen sayı  kadar sağa kaydırır.
		std::cout << "Right shift result: " << h << std::endl;
	
	return 0;
}
int random() {
	srand(time(0)); // kod her calıstıgnda srand fonksıyonunu basa sarar ve her calıstıgnda baska rasgele eleman verır
	
	const int size1 = 10; //sabıt bır deger olusturur
	char  arr[size1]; // character verı tıpı olan bır dızı ve dızı elemanı sabıt bır degıskendır
	int  arr1[size1]; // integer veri tipi olan bir dizi ve eleman sayasi sabit bir degiskendir
	const int size2 = 10; //sabıt bır deger olusturur
	int  arr2[size2];// integer veri tipi olan bir dizi ve eleman sayasi sabit bir degiskendir
	const int size = 6; //sabıt bır deger olusturur
    int  arr3[size];// integer veri tipi olan bir dizi ve eleman sayasi sabit bir degiskendir

	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() * 26 / RAND_MAX + 1; // rastgele bir sayı atanır.  (2000 * 26 / RAND_MAX + 1 = 2000 * 26 / 32767 + 1 ≈ 15.4)
		std::cout << arr1[i] << " ";
	}	
	std::cout << std::endl;
	for (int i = 0; i < size1; i++) {
		arr[i] = rand() % 26 + 'a'; // rastgele bir küçük harf atanır. (random  26 karkterlı kucuk harflerden  olusan random dizi olusturur ve for dongusu ne kadar bu kodun uzerınden gecerse o kdaar  eleman alır her gectıgnde rasgele bır karakter alır)
		std::cout << arr[i] << " ";// rastgele  harf ekrana yazdırılır.
	}
	std::cout << std::endl;
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() * 26 / RAND_MAX + 2; // rastgele bir sayı atanır.  (2000 * 26 / RAND_MAX + 1 = 2000 * 26 / 32767 + 1 ≈ 15.4)
		std::cout << arr2[i] << " "; // rastgele sayı ekrana yazdırılır.
	}
	std::cout << std::endl;
	for (int i = 0; i < size; i++) {
		arr3[i] = rand() % 6 + 1; // rastgele bir sayı atanır. (rand() % 6 ıle 0  ıle 5 arası sayı uretır  ve +1 ıse o sayıyı bır ekler bu genelde zar gıbı oyunlarda kullanılır)
		std::cout << arr3[i] << " "; // arr dizisi ekrana yazdırılır.
	}
	int size4, size5; 
	bool like;
	fox1();
	std::cout << "kac sayi istersin";
	std::cin >> size4;
	fox1();
	std::cout << " en buyuk sayi kac olsun";
	std::cin >> size5;
    fox1();
	std::cout << " 0 danmi baslasin yoksa 1 mi";
	std::cin >> like;
	
	
	if (like == true) {
		for (int i = 0; i < size4; i++) { // girilen aralıklarda donen dongu
			std::cout << rand() % size5 + 1 << " " << std::endl; //  1 dan gırılen sayiya kadar olan rastgele sayı uretır
		}
	}
	else {
		for (int i = 0; i < size4; i++) { // girilen aralıklarda donen dongu
			std::cout << rand() % size5 << " " << std::endl; // 0 dan gırılen sayiya kadar olan rastgele sayı uretır
		}
	}
	 
	return 0;
}
int classlar() {
	int size;
	std::cout << " (ogrenci 30 ile sinirlidir ) sinifinizda kac ogrenci var" << std::endl;
	std::cin >> size;
	 while(size <= 30){

	Students class_student[30]; // students classinda 30 obje olusturulur 
	for (int i = 0; i < size; i++) { // girilen size kadar donen dongu her dondıgnde bir students objesi eklenır
		std::cout << i + 1 << ". ogrenci" << std::endl;
		class_student[i].input_information(); // burda classtakı bır fonksıyonu kullanılyor ve kullanıcıdan obje ozellıgı gırısı yapılıyo 
	}

	for (int i = 0; i < size; i++) {
		std::cout << i + 1 << ". ogrenci" << std::endl;
		class_student[i].printer(); // burda classta olan bir fonksıyon kullanılyo ve classta oldugu gıbı girilen bilgileri yazdiran bir fonskıyon
	}

	class_student[0].header(); // burda belirsiz sayida obje girilecegi icin olmasi zorunlu olan ilk obje ıle classın ıcınde olan header fonksıyonu cagırlmıstır
	break;
}

	return 0;
}
int structlar() {
	women number1; //classta oldugu gibi structtda bir obje olusturmak gerekir ve bu ypntem bir struct objesş olusturmak ıcın kullanılır
	number1.girisal(); // classta oldugu gibi bir objenın structın ıcındekı fonksıyonları baglamak ıcın bu yontem kullanılır
	number1.yazdir(); // classta oldugu gibi bir objenın structın ıcındekı fonksıyonları baglamak ıcın bu yontem kullanılır
	return 0;
}
int buildfunc() {
	
	//maths (integer)
	int x = 5;
	int y = 10;
	int sonuc = 0;

	sonuc = std::max(x, y); //  x ve y nin en büyüğünü döndürür.
	std::cout << sonuc << std::endl;
	sonuc = std::min(x, y); //  x ve y nin en küçüğünü döndürür.
	std::cout << sonuc << std::endl;
	sonuc = std::abs(-10); //  -10 mutlak değerini döndürür.
	std::cout << sonuc << std::endl;
	sonuc = std::sqrt(y); // y nin karekökünü döndürür.
	std::cout << sonuc << std::endl;
	sonuc = std::pow(x, y); //x tabanını ve y üssünü alır ve x üzeri y'yi döndürür.
	std::cout << sonuc << std::endl;
	sonuc = std::ceil(4.5); // 4.5 ten buyuk tam sayı değerini döndürür.
	std::cout << sonuc << std::endl;
	sonuc = std::floor(4.5); // 4.5 ten kucuk  tam sayı değerini döndürür.
	std::cout << sonuc << std::endl;
	sonuc = std::round(4.4); //4.4 en yakın tam sayıya yuvarlar ve döndürür. 
	std::cout << sonuc << std::endl;
	sonuc = std::sin(90); // cos(x), tan(x): x'in sinüs, kosinüs ve tanjantını hesaplar (radyan cinsinden).
	std::cout << sonuc << std::endl;
	sonuc = std::log(x); //x'in doğal logaritmasını hesaplar.
	std::cout << sonuc << std::endl;
	sonuc = std::exp(x); // e^x'i hesaplar.(e = 2.17~)
	std::cout << sonuc << std::endl;
	sonuc = std::fmod(12.2,3.2); // iki verilen sayının modunu hesaplar.(kesirli olsada)
	std::cout << sonuc << std::endl;

	//sozcuk (string)





	return 0;
}




int ornekleryap() {
	

	
	return 0;
}
 // ek
void birsayikupu(int* sptr) { // void bir fonksıyon tanımlayıp pointer bir degisken baslatır ve uste olan adreste buna atanır
	*sptr = *sptr * *sptr * *sptr; // giren sayiların kubu alırınır
}
// ek son

