#include <iostream>
#include <windows.h>
#include "C:\Users\ZAPE\source\repos\HelloLeha\HelloLeha\xorstr.h"

int main()
{
	setlocale(LC_ALL, "Russian"); // С ДНЕМ РАЖДЕНИЯ
	SetConsoleTitle(L"NURSULTAN С ХВИДОМ КОРОЧЕ");

	// (◕‿◕) ПАСХАЛКА КОГДА ТЕКСТА НЕДОСТАТОЧНО 😂

	std::string vvedeniy_key;
	std::string vvedeniy_name;
	int yebanoe_zivotnoe = 0; // УИД))

	std::string hwid = xorstr("MFOJNADUIFHUIADF"); // МОЙ ХВИД)
	std::string key = xorstr("NURSULTAN_ACTIVATE_30_DAY"); // КЛЮЧ НА 30 ДНЕЙ)
	std::string users[100] { "KYRIL" };

	printf(xorstr("Здарово бро, го ключь ввидеш))\n"));
	std::cin >> vvedeniy_key;

	if (vvedeniy_key == key)
	{
		printf(xorstr("КУ БРАТ ВВЕДИ НИК СВОЙ\n"));
		try {
			std::cin >> vvedeniy_name;
		}
		catch (...) {
			std::cout << "БРАТ ОШИБКУ БЬЕТ" << std::endl;
		}
		users[1] = vvedeniy_name;
		yebanoe_zivotnoe++;
	}

	if (users[1] != vvedeniy_key)
	{
		std::cout << "ERROR! ОШИБКА!" << std::endl;
	}

	if (users[1] != "KYRIL")
		printf(xorstr("АДМИН КУ"));
	else
		printf(xorstr("ПРИВЕТ МОЙ ДОРОГО ПОЛЬЗОВАТЕЛЬ, НАДЕЮСЬ НАШ ЛОАДЕР ОЧЕНЬ УДОБНЫЙ)"));

	if (users[0] == "KYRIL")
		printf("Ку курил, че курил?");
	else
		printf("[!] У вас нет прав!");
	
	if (vvedeniy_key != key)
		printf("БРАТ ЕСЛИ КЛЮЧЬ НЕ ПРАВИЛЕН ТО КОНСОЛЬ НАЗКРОЕТСЯ НАХУЙ))");

	if (yebanoe_zivotnoe == 0)
		printf("ЮЗЕРОВ НЕТ");

	if (yebanoe_zivotnoe > 0)
		printf("БРАТ У НААААС " + yebanoe_zivotnoe);
	else
		printf("ЮЗЕРОВ НЕТ");

	Sleep(vvedeniy_key == key ? -1 : 10);
	return 0;
}