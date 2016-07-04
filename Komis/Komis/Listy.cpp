#include "Listy.h"
#include<iostream>


using namespace System;
using namespace System::Windows::Forms;
using namespace MySql::Data::MySqlClient;

Listy::Listy()
{
}


Listy::~Listy()
{
	ListaPojazdow.clear();
	ListaUzytkownikow.clear();
}

void Listy::GetListByPrzebiegOd(int przebiegOd, std::list<Pojazd>& listaPojazdow)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	for (iterator = listaPojazdow.begin(); iterator != listaPojazdow.end(); ++iterator)
	{
		if (iterator->GetPrzebieg() >= przebiegOd)
		{
			lista.push_back(*iterator);
		}
	}
	listaPojazdow.clear();
	listaPojazdow = lista;
}

void Listy::GetListByPrzebiegDo(int przebiegDo, std::list<Pojazd>& listaPojazdow)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
	{
		if (iterator->GetPrzebieg() <= przebiegDo)
		{
			lista.push_back(*iterator);
		}
	}
	listaPojazdow.clear();
	listaPojazdow = lista;
}

void Listy::GetListByRocznikOd(short rokOd, std::list<Pojazd>& listaPojazdow)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	for (iterator = listaPojazdow.begin(); iterator != listaPojazdow.end(); ++iterator)
	{
		if (iterator->GetRokProdukcji() >= rokOd)
		{
			lista.push_back(*iterator);
		}
	}
	listaPojazdow = lista;
}

void Listy::GetListByRocznikDo(short rokDo, std::list<Pojazd>& listaPojazdow)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	for (iterator = ListaPojazdow.begin(); iterator != ListaPojazdow.end(); ++iterator)
	{
		if (iterator->GetRokProdukcji() <= rokDo)
		{
			lista.push_back(*iterator);
		}
	}
	listaPojazdow.clear();
	listaPojazdow = lista;
}

void Listy::GetListByPaliwo(Paliwo paliwo, std::list<Pojazd>& listaPojazdow)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	for (iterator = listaPojazdow.begin(); iterator != listaPojazdow.end(); ++iterator)
	{
		if (iterator->GetRodzajPaliwa() == paliwo)
		{
			lista.push_back(*iterator);
		}
	}
	listaPojazdow.clear();
	listaPojazdow = lista;
}

void Listy::GetListByMocOd(short mocOd, std::list<Pojazd>& listaPojazdow)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	for (iterator = listaPojazdow.begin(); iterator != listaPojazdow.end(); ++iterator)
	{
		if (iterator->GetMoc() >= mocOd)
		{
			lista.push_back(*iterator);
		}
	}
	listaPojazdow.clear();
	listaPojazdow = lista;
}

void Listy::GetListByMocDo(short mocDo, std::list<Pojazd>& listaPojazdow)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	for (iterator = listaPojazdow.begin(); iterator != listaPojazdow.end(); ++iterator)
	{
		if (iterator->GetMoc() <= mocDo)
		{
			lista.push_back(*iterator);
		}
	}
	listaPojazdow.clear();
	listaPojazdow = lista;
}

void Listy::GetListByPojemnoscOd(int pojemnoscOd, std::list<Pojazd>& listaPojazdow)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	for (iterator = listaPojazdow.begin(); iterator != listaPojazdow.end(); ++iterator)
	{
		if (iterator->GetPojemnosc() >= pojemnoscOd)
		{
			lista.push_back(*iterator);
		}
	}
	listaPojazdow.clear();
	listaPojazdow = lista;
}

void Listy::GetListByPojemnoscDo(int pojemnoscDo, std::list<Pojazd>& listaPojazdow)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

		for (iterator = listaPojazdow.begin(); iterator != listaPojazdow.end(); ++iterator)
		{
			if (iterator->GetPojemnosc() <= pojemnoscDo)
			{
				lista.push_back(*iterator);
			}
		}
	listaPojazdow.clear();
	listaPojazdow = lista;
}

void Listy::GetListByRodzajNadwozia(TypNadwozia typ, std::list<Pojazd>& listaPojazdow)
{
	std::list<Pojazd> lista;
	std::list<Pojazd>::iterator iterator;

	for (iterator = listaPojazdow.begin(); iterator != listaPojazdow.end(); ++iterator)
	{
		if (iterator->GetTypNadwozia() == typ)
		{
			lista.push_back(*iterator);
		}
	}
	listaPojazdow.clear();
	listaPojazdow = lista;
}


std::istream& operator >> (std::istream& is, Pojazd &pojazd)
{
	int intTmp;
	std::string strTmp;

	is >> intTmp;
	pojazd.SetId(intTmp);
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
	os << pojazd.GetId() << std::endl;
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
	is >> uzytkownik.UzytkownikId;
	is >> uzytkownik.haslo;
	is >> uzytkownik.imie;
	is >> uzytkownik.login;
	is >> uzytkownik.nazwisko;
	is >> tmp;
	uzytkownik.uprawnienia = Uprawnienia(tmp);
	return is;
}

std::ostream& operator << (std::ostream& os, Uzytkownik& uzytkownik)
{
	os << uzytkownik.UzytkownikId << std::endl;
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

	bazaPojazdow.open("Baza_Pojazdow.txt", std::ios::in | std::ios::binary);
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

	bazaUzytkownikow.open("Baza_Uzytkownikow.txt", std::ios::in | std::ios::binary);
	if (!bazaUzytkownikow.good())
	{
		MessageBox::Show("Nie udalo sie wczytac pliku z danymi");
	}
	else
	{
		while (!bazaUzytkownikow.eof())
		{
			bazaUzytkownikow >> uzytkownik;
			ListaUzytkownikow.push_back(uzytkownik);
		}
	}
	bazaUzytkownikow.close();
}

void Listy::ZapiszListePojazdow()
{
	std::ofstream bazaPojazdow;
	Pojazd pojazd;

	bazaPojazdow.open("Baza_Pojazdow.txt", std::ios::out | std::ios::binary);

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

	bazaUzytkownikow.open("Baza_Uzytkownikow.txt", std::ios::out | std::ios::binary);

	std::list<Uzytkownik>::iterator iterator;

	for (iterator = ListaUzytkownikow.begin(); iterator != ListaUzytkownikow.end(); ++iterator)
	{
		bazaUzytkownikow << *iterator;
	}
	bazaUzytkownikow.close();
}

void Listy::PobierzZBazyUzytkownikow()
{
	Uzytkownik uzytkownik;

	System::String^ connectionString = L"datasource=localhost;port=3306;username=root;password=04172Bia";
	MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM komis.uzytkownicy;", connection);
	MySqlDataReader^ dataReader;

	try
	{
		connection->Open();
		dataReader = command->ExecuteReader();

		while (dataReader->Read())
		{
			uzytkownik.UzytkownikId = dataReader->GetInt32(0);
			uzytkownik.imie = msclr::interop::marshal_as<std::string>(dataReader->GetString(1));
			uzytkownik.nazwisko = msclr::interop::marshal_as<std::string>(dataReader->GetString(2));
			uzytkownik.login = msclr::interop::marshal_as<std::string>(dataReader->GetString(3));
			uzytkownik.haslo = msclr::interop::marshal_as<std::string>(dataReader->GetString(4));
			uzytkownik.uprawnienia = Uprawnienia(dataReader->GetInt16(5));
			ListaUzytkownikow.push_back(uzytkownik);
		}
		connection->Close();
	} catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}

void Listy::DodajDoBazyUzytkownikow(Uzytkownik u)
{
	ListaUzytkownikow.push_back(u);

	System::String^ connectionString = L"datasource=localhost;port=3306;username=root;password=04172Bia";
	System::String^ query;
	MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
	MySqlDataReader^ dataReader;
	MySqlCommand^ command = gcnew MySqlCommand("SELECT UzytkownikId FROM komis.uzytkownicy WHERE UzytkownikId=(SELECT max(UzytkownikId) FROM komis.uzytkownicy);", connection);
	int newId, tmp;
	try
	{
		connection->Open();
		dataReader = command->ExecuteReader();

		while (dataReader->Read())
		{
			newId = dataReader->GetInt32(0) + 1;
		}
		connection->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}

	switch (u.uprawnienia)
	{
	case Uprawnienia::ADMIN:
		tmp = 0;
		break;
	case Uprawnienia::SPRZEDAWCA:
		tmp = 1;
		break;
	default:
		break;
	}

	query = "INSERT INTO komis.uzytkownicy(UzytkownikId,imie,nazwisko,login,haslo,uprawnienia)VALUES(";
	
	query += newId.ToString();

	query += ",'" + msclr::interop::marshal_as<System::String^>(u.imie);

	query += "','" + msclr::interop::marshal_as<System::String^>(u.nazwisko);

	query += "','" + msclr::interop::marshal_as<System::String^>(u.login);

	query += "','" + msclr::interop::marshal_as<System::String^>(u.haslo);

	query += "'," + tmp + ")";

	command = gcnew MySqlCommand( query, connection);

	connection->Open();

	dataReader = command->ExecuteReader();

	connection->Close();
}

