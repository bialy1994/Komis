#pragma once
#include "Maszyna.h"
#include <string>
class Marka :
	public Maszyna
{
public:
	Marka();
	~Marka();
	void SetNazwaMarki(std::string);
	std::string GetNazwaMarki();
private:
	std::string nazwaMarki;

};

