#include "Uzytkownik.h"



Uzytkownik::Uzytkownik()
{
}

Uzytkownik::Uzytkownik(const Uzytkownik& u)
{
	this->imie = u.imie;
	this->nazwisko = u.nazwisko;
	this->haslo = u.haslo;
	this->login = u.login;
	this->uprawnienia = u.uprawnienia;
}


Uzytkownik::~Uzytkownik()
{
}
