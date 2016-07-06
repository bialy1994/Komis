#pragma once
#include<list>
#include "Pojazd.h"
#include "Uzytkownik.h"
#include <msclr\marshal_cppstd.h>
class Listy
{
public:
	Listy();
	~Listy();

	std::list<Pojazd> ListaPojazdow;
	std::list<Uzytkownik> ListaUzytkownikow;

	void GetListByPrzebiegOd(int, std::list<Pojazd>&);
	void GetListByPrzebiegDo(int, std::list<Pojazd>&);
	void GetListByRocznikOd(short, std::list<Pojazd>&);
	void GetListByRocznikDo(short, std::list<Pojazd>&);
	void GetListByMocOd(short, std::list<Pojazd>&);
	void GetListByMocDo(short, std::list<Pojazd>&);
	void GetListByPojemnoscOd(int, std::list<Pojazd>&);
	void GetListByPojemnoscDo(int, std::list<Pojazd>&);
	void GetListByPaliwo(Paliwo, std::list<Pojazd>&);
	void GetListByRodzajNadwozia(TypNadwozia, std::list<Pojazd>&);

	void PobierzZBazyUzytkownikow();
	void DodajDoBazyUzytkownikow(Uzytkownik);
	void PobierzZBazyPojazdow();
	void DodajDoBazyPojazdow(Pojazd);
	void UsunPojazd(int);
	void UsunUzytkownika(int);
	Pojazd PobierzPojazd(int);
};
