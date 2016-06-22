#include "Marka.h"



Marka::Marka()
{
}


Marka::~Marka()
{
}

void Marka::SetNazwaMarki(std::string nazwa)
{
	this->nazwaMarki = nazwa;
}

std::string Marka::GetNazwaMarki()
{
	return this->nazwaMarki;
}