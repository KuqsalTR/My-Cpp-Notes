#include <iostream>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Turkish");


	int islem;

	double sayi1;
	double sayi2;

	std::cout << "Toplama işlemi için --> '1' tuşlayınız" << std::endl;
	std::cout << "Çıkarma işlemi için --> '2' tuşlayınız" << std::endl;
	std::cout << "Bölme işlemi için --> '3' tuşlayınız" << std::endl;
	std::cout << "Çarpa işlemi için --> '4' tuşlayınız" << std::endl;

	std::cout << "İşlem numarasını giriniz:" << " ";
	std::cin >> islem;

	std::cout << "1. Sayıyı giriniz:" << " ";
	std::cin >> sayi1;

	std::cout << "2. Sayıyı giriniz:" << " ";
	std::cin >> sayi2;


	switch (islem)
	{
		case 1:
			double sonuc1;
			sonuc1=sayi1 + sayi2;
			std::cout << sonuc1;
			break;

		case 2:
			double sonuc2;
			sonuc2= sayi1 - sayi2;
			std::cout << sonuc2;
			break;

		case 3:
			double sonuc3; 
			sonuc3= sayi1 / sayi2;
			//std::cout << sonuc3;
			break;
		case 4: 
			sayi1 * sayi2;
			std::cout << sayi1 * sayi2;
			break;
		
		default:
			"Boş bıraktınız.";
	}

	return 0;
}
