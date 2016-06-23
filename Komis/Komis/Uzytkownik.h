#pragma once
#include<string>
#include "Enums.h"

class Uzytkownik
{
public:
	Uzytkownik();
	~Uzytkownik();
	std::string login;
	std::string imie;
	std::string nazwisko;
	std::string haslo;
	Uprawnienia uprawnienia;
};

