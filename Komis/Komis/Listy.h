#pragma once
#include<list>
#include<fstream>
#include "Pojazd.h"
#include "Uzytkownik.h"
class Listy
{
public:
	Listy();
	~Listy();
	std::list<Pojazd> ListaPojazdow;
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

	std::list<Uzytkownik> ListaUzytkownikow;

	void WczytajListePojazdow();
	void WczytajListeUzytkownikow();

	void ZapiszListePojazdow();
	void ZapiszListeUzytkownikow();
private:
};
