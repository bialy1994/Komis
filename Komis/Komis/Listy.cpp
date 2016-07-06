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

	query = "INSERT INTO komis.uzytkownicy(UzytkownikId,imie,nazwisko,login,"
		+"haslo,uprawnienia)VALUES(";
	
	query += newId.ToString();

	query += ",'" + msclr::interop::marshal_as<System::String^>(u.imie);

	query += "','" + msclr::interop::marshal_as<System::String^>(u.nazwisko);

	query += "','" + msclr::interop::marshal_as<System::String^>(u.login);

	query += "','" + msclr::interop::marshal_as<System::String^>(u.haslo);

	query += "'," + Convert::ToInt16(u.uprawnienia) + ")";

	command = gcnew MySqlCommand( query, connection);

	connection->Open();

	dataReader = command->ExecuteReader();

	connection->Close();
}

void Listy::PobierzZBazyPojazdow()
{
	Pojazd pojazd;

	System::String^ connectionString = L"datasource=localhost;port=3306;username=root;password=04172Bia";
	MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM komis.pojazd;", connection);
	MySqlDataReader^ dataReader;

	try
	{
		connection->Open();
		dataReader = command->ExecuteReader();

		while (dataReader->Read())
		{
			pojazd.SetId(dataReader->GetInt32(0));
			
			pojazd.SetNazwaMarki(msclr::interop::marshal_as<std::string>(dataReader->GetString(1)));

			pojazd.SetNazwaModelu(msclr::interop::marshal_as<std::string>(dataReader->GetString(2)));

			pojazd.SetPojemnosc(dataReader->GetInt32(3));

			pojazd.SetMoc(dataReader->GetInt32(4));

			pojazd.SetPrzebieg(dataReader->GetInt32(5));

			pojazd.SetRokProdukcji(dataReader->GetInt32(6));

			pojazd.SetRodzajPaliwa(Paliwo(dataReader->GetInt32(7)));

			pojazd.SetNaped(Naped(dataReader->GetInt32(8)));

			pojazd.SetKolor(msclr::interop::marshal_as<std::string>(dataReader->GetString(9)));

			pojazd.SetVin(msclr::interop::marshal_as<std::string>(dataReader->GetString(10)));

			pojazd.SetTypNadwozia(TypNadwozia(dataReader->GetInt16(11)));

			pojazd.SetKategoria(KategoriaPojazdu(dataReader->GetInt16(12)));

			pojazd.SetTyp(TypMaszyny(dataReader->GetInt16(13)));

			pojazd.wyposazenie.automatycznaSkrzynia = dataReader->GetBoolean(14);

			pojazd.wyposazenie.elLusterka = dataReader->GetBoolean(15);

			pojazd.wyposazenie.elSzyby = dataReader->GetBoolean(16);

			pojazd.wyposazenie.klimatyzacja = dataReader->GetBoolean(17);

			pojazd.wyposazenie.nawigacja = dataReader->GetBoolean(18);

			pojazd.wyposazenie.zestawGlosnomowiacy = dataReader->GetBoolean(19);

			ListaPojazdow.push_back(pojazd);
		}
		connection->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}

void Listy::DodajDoBazyPojazdow(Pojazd p)
{
	ListaPojazdow.push_back(p);

	System::String^ connectionString = L"datasource=localhost;port=3306;username=root;password=04172Bia";
	System::String^ query;
	MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
	MySqlDataReader^ dataReader;
	MySqlCommand^ command = gcnew MySqlCommand("SELECT idPojazd FROM komis.pojazd WHERE idPojazd=(SELECT max(idPojazd) FROM komis.pojazd);", connection);
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


	query = "INSERT INTO komis.pojazd(idPojazd,Marka,Model,Pojemnosc,moc,"
		+ "przebieg,rok_produkcji,paliwo,naped,kolor,VIN,typ_nadwozia,"
		+ "kategoria_pojazdu,typ_maszyny,automatyczna_skrzynia,el_lusterka,"
		+ "el_szyby,klimatyzacja,nawigacja,zestaw_glosnomowiacy)VALUES(";

	query += newId.ToString();

	query += ",'" + msclr::interop::marshal_as<System::String^>(p.GetNazwaMarki());

	query += "','" + msclr::interop::marshal_as<System::String^>(p.GetNazwaModelu());

	query += "'," + p.GetPojemnosc();

	query += "," + p.GetMoc();

	query += "," + p.GetPrzebieg();

	query += "," + p.GetRokProdukcji();

	query += "," + Convert::ToInt16(p.GetRodzajPaliwa());

	query += "," + Convert::ToInt16(p.GetNaped());

	query += ",'" + msclr::interop::marshal_as<System::String^>(p.GetKolor());

	query += "','" + msclr::interop::marshal_as<System::String^>(p.GetVin());
	
	query += "'," + Convert::ToInt16(p.GetTypNadwozia());
	
	query += "," + Convert::ToInt16(p.GetKategoria());

	query += "," + Convert::ToInt16(p.GetTyp());

	query += "," + (p.wyposazenie.automatycznaSkrzynia == true ? 1 : 0);

	query += "," + (p.wyposazenie.elLusterka == true ? 1 : 0);

	query += "," + (p.wyposazenie.elSzyby == true ? 1 : 0);

	query += "," + (p.wyposazenie.klimatyzacja == true ? 1 : 0);

	query += "," + (p.wyposazenie.nawigacja == true ? 1 : 0);

	query += "," + (p.wyposazenie.zestawGlosnomowiacy == true ? 1 : 0) + ")";

	command = gcnew MySqlCommand(query, connection);

	connection->Open();

	dataReader = command->ExecuteReader();

	connection->Close();
}

void Listy::UsunPojazd(int id)
{
	System::String^ connectionString = L"datasource=localhost;port=3306;username=root;password=04172Bia";
	System::String^ query;
	MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
	MySqlDataReader^ dataReader;
	MySqlCommand^ command = gcnew MySqlCommand("DELETE FROM komis.pojazd WHERE idPojazd = " + id, connection);

	try
	{
		connection->Open();
		dataReader = command->ExecuteReader();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}

void Listy::UsunUzytkownika(int id)
{
	System::String^ connectionString = L"datasource=localhost;port=3306;username=root;password=04172Bia";
	System::String^ query;
	MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
	MySqlDataReader^ dataReader;
	MySqlCommand^ command = gcnew MySqlCommand("DELETE FROM komis.uzytkownicy WHERE UzytkownikId = " + id, connection);

	try
	{
		connection->Open();
		dataReader = command->ExecuteReader();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
}

Pojazd Listy::PobierzPojazd(int id)
{
	Pojazd pojazd;

	System::String^ connectionString = L"datasource=localhost;port=3306;username=root;password=04172Bia";
	MySqlConnection^ connection = gcnew MySqlConnection(connectionString);
	MySqlCommand^ command = gcnew MySqlCommand("SELECT * FROM komis.pojazd WHERE idPojazd = " + id, connection);
	MySqlDataReader^ dataReader;

	try
	{
		connection->Open();
		dataReader = command->ExecuteReader();

		while (dataReader->Read())
		{
			pojazd.SetId(dataReader->GetInt32(0));

			pojazd.SetNazwaMarki(msclr::interop::marshal_as<std::string>(dataReader->GetString(1)));

			pojazd.SetNazwaModelu(msclr::interop::marshal_as<std::string>(dataReader->GetString(2)));

			pojazd.SetPojemnosc(dataReader->GetInt32(3));

			pojazd.SetMoc(dataReader->GetInt32(4));

			pojazd.SetPrzebieg(dataReader->GetInt32(5));

			pojazd.SetRokProdukcji(dataReader->GetInt32(6));

			pojazd.SetRodzajPaliwa(Paliwo(dataReader->GetInt32(7)));

			pojazd.SetNaped(Naped(dataReader->GetInt32(8)));

			pojazd.SetKolor(msclr::interop::marshal_as<std::string>(dataReader->GetString(9)));

			pojazd.SetVin(msclr::interop::marshal_as<std::string>(dataReader->GetString(10)));

			pojazd.SetTypNadwozia(TypNadwozia(dataReader->GetInt16(11)));

			pojazd.SetKategoria(KategoriaPojazdu(dataReader->GetInt16(12)));

			pojazd.SetTyp(TypMaszyny(dataReader->GetInt16(13)));

			pojazd.wyposazenie.automatycznaSkrzynia = dataReader->GetBoolean(14);

			pojazd.wyposazenie.elLusterka = dataReader->GetBoolean(15);

			pojazd.wyposazenie.elSzyby = dataReader->GetBoolean(16);

			pojazd.wyposazenie.klimatyzacja = dataReader->GetBoolean(17);

			pojazd.wyposazenie.nawigacja = dataReader->GetBoolean(18);

			pojazd.wyposazenie.zestawGlosnomowiacy = dataReader->GetBoolean(19);
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
	return pojazd;
}



