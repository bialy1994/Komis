#pragma once
#include "Model.h"

struct Wyposazenie 
{
	bool klimatyzacja;
	bool elSzyby;
	bool elLusterka;
	bool automatycznaSkrzynia;
	bool nawigacja;
	bool zestawGlosnomowiacy;
};

class Pojazd :
	public Model
{
public:
	Pojazd();
	~Pojazd();

	Paliwo GetRodzajPaliwa();

	TypNadwozia GetTypNadwozia();

	Naped GetNaped();

	std::string GetVin();

	int GetPojemnosc();

	short GetMoc();

	int GetRokProdukcji();

	int GetPrzebieg();

	std::string GetKolor();


	void SetRodzajPaliwa(Paliwo);

	void SetTypNadwozia(TypNadwozia);

	void SetNaped(Naped);

	void SetVin(std::string);

	void SetPojemnosc(int);

	void SetMoc(short);

	void SetRokProdukcji(short);

	void SetPrzebieg(int);

	void SetKolor(std::string);

	Wyposazenie wyposazenie;
private:
	std::string VIN;

	Paliwo paliwo;

	TypNadwozia typNadwozia;

	int pojemnosc;

	short moc;

	short rokProdukcji;

	int przebieg;

	Naped naped;

	std::string kolor;
};

