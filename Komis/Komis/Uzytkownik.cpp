#include "Uzytkownik.h"

std::string UprawnieniaToString(Uprawnienia uprawnienia)
{
	switch (uprawnienia)
	{
	case ADMIN:
		return "Admin";
	case SPRZEDAWCA:
		return "Sprzedawca";
	}
}

Uzytkownik::Uzytkownik()
{
}

Uzytkownik::Uzytkownik(const Uzytkownik& u)
{
	this->UzytkownikId = u.UzytkownikId;
	this->imie = u.imie;
	this->nazwisko = u.nazwisko;
	this->haslo = u.haslo;
	this->login = u.login;
	this->uprawnienia = u.uprawnienia;
}


Uzytkownik::~Uzytkownik()
{
}
