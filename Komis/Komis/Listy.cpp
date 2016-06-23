#include "Listy.h"
#include<iostream>



Listy::Listy()
{
}


Listy::~Listy()
{
	ListaPojazdow.clear();
	ListaUzytkownikow.clear();
}

std::list<Pojazd> Listy::GetListByPrzebieg(int przebiegOd, int przebiegDo)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	if (przebiegDo < 0)
	{
		for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
		{
			if (iterator->GetPrzebieg() > przebiegOd)
			{
				lista.push_back(*iterator);
			}
		}
	}
	else
	{
		for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
		{
			if (iterator->GetPrzebieg() > przebiegOd && iterator->GetPrzebieg() < przebiegDo)
			{
				lista.push_back(*iterator);
			}
		}
	}
	return lista;
}

std::list<Pojazd> Listy::GetListByRocznik(short rokOd, short rokDo)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	if (rokDo < 0)
	{
		for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
		{
			if (iterator->GetRokProdukcji() > rokOd)
			{
				lista.push_back(*iterator);
			}
		}
	}
	else
	{
		for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
		{
			if (iterator->GetRokProdukcji() > rokOd && iterator->GetRokProdukcji() < rokDo)
			{
				lista.push_back(*iterator);
			}
		}
	}
	return lista;
}

std::list<Pojazd> Listy::GetListByPaliwo(Paliwo paliwo)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
	{
		if (iterator->GetRodzajPaliwa() == paliwo)
		{
			lista.push_back(*iterator);
		}
	}
	return lista;
}

std::list<Pojazd> Listy::GetListByMoc(short mocOd, short mocDo)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	if (mocDo < 0)
	{
		for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
		{
			if (iterator->GetMoc() > mocOd)
			{
				lista.push_back(*iterator);
			}
		}
	}
	else
	{
		for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
		{
			if (iterator->GetMoc() > mocOd && iterator->GetMoc() < mocDo)
			{
				lista.push_back(*iterator);
			}
		}
	}
	return lista;
}

std::list<Pojazd> Listy::GetListByPojemnosc(int pojemnoscOd, int pojemnoscDo)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	if (pojemnoscDo < 0)
	{
		for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
		{
			if (iterator->GetPojemnosc() > pojemnoscOd)
			{
				lista.push_back(*iterator);
			}
		}
	}
	else
	{
		for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
		{
			if (iterator->GetPojemnosc() > pojemnoscOd && iterator->GetPojemnosc() < pojemnoscDo)
			{
				lista.push_back(*iterator);
			}
		}
	}
	return lista;
}

std::list<Pojazd> Listy::GetListByRodzajNadwozia(TypNadwozia typ)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
	{
		if (iterator->GetTypNadwozia() == typ)
		{
			lista.push_back(*iterator);
		}
	}
	return lista;
}


std::istream& operator >> (std::istream& is, Pojazd &pojazd)
{
	is >> pojazd;
	return is;
}

std::ostream& operator << (std::ostream& os, Pojazd& const pojazd)
{
	os << pojazd.GetKategoria();
	os << pojazd.GetKolor();
	os << pojazd.GetMoc();
	os << pojazd.GetNaped();
	os << pojazd.GetNazwaMarki();
	os << pojazd.GetNazwaModelu();
	os << pojazd.GetPojemnosc();
	os << pojazd.GetPrzebieg();
	os << pojazd.GetRodzajPaliwa();
	os << pojazd.GetRokProdukcji();
	os << pojazd.GetTyp();
	os << pojazd.GetTypNadwozia();
	os << pojazd.GetVin();
	os << pojazd.wyposazenie.automatycznaSkrzynia;
	os << pojazd.wyposazenie.elLusterka;
	os << pojazd.wyposazenie.elSzyby;
	os << pojazd.wyposazenie.klimatyzacja;
	os << pojazd.wyposazenie.nawigacja;
	os << pojazd.wyposazenie.zestawGlosnomowiacy;
	return os;
}

std::istream& operator >> (std::istream& is, Uzytkownik& uzytkownik)
{
	is >> uzytkownik;
	return is;
}

std::ostream& operator << (std::ostream& os, const Uzytkownik& uzytkownik)
{
	os << uzytkownik;
	return os;
}

void Listy::WczytajListePojazdow()
{
	std::ifstream bazaPojazdow;
	Pojazd pojazd;

	bazaPojazdow.open("Baza_Pojazdow.bin", std::ios::in | std::ios::binary);
	while (!bazaPojazdow.eof())
	{
		bazaPojazdow >> pojazd;
		ListaPojazdow.push_back(pojazd);
	}
	bazaPojazdow.close();
}

void Listy::WczytajListeUzytkownikow()
{
	std::ifstream bazaUzytkownikow;
	Uzytkownik uzytkownik;

	bazaUzytkownikow.open("Baza_Uzytkownikow.bin", std::ios::in | std::ios::binary);
	while (!bazaUzytkownikow.eof())
	{
		bazaUzytkownikow >> uzytkownik;
		ListaUzytkownikow.push_back(uzytkownik);
	}
	bazaUzytkownikow.close();
}

void Listy::ZapiszListePojazdow()
{
	std::ofstream bazaPojazdow;
	Pojazd pojazd;

	bazaPojazdow.open("Baza_Pojazdow.bin", std::ios::out | std::ios::binary);

	std::list<Pojazd>::iterator iterator;

	for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
	{
		bazaPojazdow << *iterator;
	}
	bazaPojazdow.close();
}

void Listy::ZapiszListeUzytkownikow()
{
	std::ofstream bazaUzytkownikow;
	Uzytkownik uzytkownik;

	bazaUzytkownikow.open("Baza_Uzytkownikow.bin", std::ios::out | std::ios::binary);

	std::list<Uzytkownik>::iterator iterator;

	for (iterator = ListaUzytkownikow.begin(); iterator != ListaUzytkownikow.end(); ++iterator)
	{
		bazaUzytkownikow << *iterator;
	}
	bazaUzytkownikow.close();
}