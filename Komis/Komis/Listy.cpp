#include "Listy.h"
#include<iostream>


using namespace System;
using namespace System::Windows::Forms;
Listy::Listy()
{
}


Listy::~Listy()
{
	ListaPojazdow.clear();
	ListaUzytkownikow.clear();
}

void Listy::GetListByPrzebiegOd(int przebiegOd, std::list<Pojazd> lista)
{
	std::list<Pojazd>::iterator iterator;

	for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
	{
		if (iterator->GetPrzebieg() > przebiegOd)
		{
			lista.push_back(*iterator);
		}
	}
}

std::list<Pojazd> Listy::GetListByPrzebiegDo(int przebiegDo)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
	{
		if (iterator->GetPrzebieg() < przebiegDo)
		{
			lista.push_back(*iterator);
		}
	}
	return lista;
}

std::list<Pojazd> Listy::GetListByRocznik(short rokOd, short rokDo)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
	{
		if (iterator->GetRokProdukcji() > rokOd && iterator->GetRokProdukcji() < rokDo)
		{
			lista.push_back(*iterator);
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
	int intTmp;
	std::string strTmp;

	is >> intTmp;
	pojazd.SetKategoria(KategoriaPojazdu(intTmp));
	is >> strTmp;
	pojazd.SetKolor(strTmp);
	is >> intTmp;
	pojazd.SetMoc(intTmp);
	is >> intTmp;
	pojazd.SetNaped(Naped(intTmp));
	is >> strTmp;
	pojazd.SetNazwaMarki(strTmp);
	is >> strTmp;
	pojazd.SetNazwaModelu(strTmp);
	is >> intTmp;
	pojazd.SetPojemnosc(intTmp);
	is >> intTmp;
	pojazd.SetPrzebieg(intTmp);
	is >> intTmp;
	pojazd.SetRodzajPaliwa(Paliwo(intTmp));
	is >> intTmp;
	pojazd.SetRokProdukcji(intTmp);
	is >> intTmp;
	pojazd.SetTyp(TypMaszyny(intTmp));
	is >> intTmp;
	pojazd.SetTypNadwozia(TypNadwozia(intTmp));
	is >> strTmp;
	pojazd.SetVin(strTmp);
	is >> pojazd.wyposazenie.automatycznaSkrzynia;
	is >> pojazd.wyposazenie.elLusterka;
	is >> pojazd.wyposazenie.elSzyby;
	is >> pojazd.wyposazenie.klimatyzacja;
	is >> pojazd.wyposazenie.nawigacja;
	is >> pojazd.wyposazenie.zestawGlosnomowiacy;
	return is;
}

std::ostream& operator << (std::ostream& os, Pojazd& const pojazd)
{
	os << pojazd.GetKategoria()<<std::endl;
	os << pojazd.GetKolor() << std::endl;
	os << pojazd.GetMoc() << std::endl;
	os << pojazd.GetNaped() << std::endl;
	os << pojazd.GetNazwaMarki() << std::endl;
	os << pojazd.GetNazwaModelu() << std::endl;
	os << pojazd.GetPojemnosc() << std::endl;
	os << pojazd.GetPrzebieg() << std::endl;
	os << pojazd.GetRodzajPaliwa() << std::endl;
	os << pojazd.GetRokProdukcji() << std::endl;
	os << pojazd.GetTyp() << std::endl;
	os << pojazd.GetTypNadwozia() << std::endl;
	os << pojazd.GetVin() << std::endl;
	os << pojazd.wyposazenie.automatycznaSkrzynia << std::endl;
	os << pojazd.wyposazenie.elLusterka << std::endl;
	os << pojazd.wyposazenie.elSzyby << std::endl;
	os << pojazd.wyposazenie.klimatyzacja << std::endl;
	os << pojazd.wyposazenie.nawigacja << std::endl;
	os << pojazd.wyposazenie.zestawGlosnomowiacy << std::endl;
	return os;
}

std::istream& operator >> (std::istream& is, Uzytkownik& uzytkownik)
{
	int tmp;
	is >> uzytkownik.haslo;
	is >> uzytkownik.imie;
	is >> uzytkownik.login;
	is >> uzytkownik.nazwisko;
	is >> tmp;
	uzytkownik.uprawnienia = Uprawnienia(tmp);
	return is;
}

std::ostream& operator << (std::ostream& os, const Uzytkownik& uzytkownik)
{
	os << uzytkownik.haslo << std::endl;
	os << uzytkownik.imie << std::endl;
	os << uzytkownik.login << std::endl;
	os << uzytkownik.nazwisko << std::endl;
	os << uzytkownik.uprawnienia << std::endl;
	return os;
}

void Listy::WczytajListePojazdow()
{
	std::ifstream bazaPojazdow;
	Pojazd pojazd;

	bazaPojazdow.open("Baza_Pojazdow.bin", std::ios::in | std::ios::binary);
	if (!bazaPojazdow.good())
	{
		MessageBox::Show("Nie udalo sie wczytac pliku z danymi");
	}
	else
	{
		while (!bazaPojazdow.eof())
		{
			bazaPojazdow >> pojazd;
			ListaPojazdow.push_back(pojazd);
		}
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