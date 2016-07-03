#pragma once
#include "Enums.h"
#include<string>

class Uzytkownik
{
public:
	Uzytkownik();
	Uzytkownik(const Uzytkownik&);
	~Uzytkownik();
	std::string login;
	std::string imie;
	std::string nazwisko;
	std::string haslo;
	Uprawnienia uprawnienia;
};

