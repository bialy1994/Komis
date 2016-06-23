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
	void GetListByPrzebiegOd(int, std::list<Pojazd>);
	std::list<Pojazd> GetListByPrzebiegDo(int);
	std::list<Pojazd> GetListByRocznik(short rokOd = 1900, short rokDo = -1);
	std::list<Pojazd> GetListByMoc(short mocOd = 0, short mocDo = -1);
	std::list<Pojazd> GetListByPojemnosc(int pojemnoscOd = 0, int pojemnoscDo = -1);
	std::list<Pojazd> GetListByPaliwo(Paliwo);
	std::list<Pojazd> GetListByRodzajNadwozia(TypNadwozia);

	std::list<Uzytkownik> ListaUzytkownikow;

	void WczytajListePojazdow();
	void WczytajListeUzytkownikow();

	void ZapiszListePojazdow();
	void ZapiszListeUzytkownikow();
private:
};
