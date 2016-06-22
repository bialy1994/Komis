#pragma once
#include "Enums.h"
class Maszyna
{
public:
	Maszyna();
	~Maszyna();
	void SetTyp(TypMaszyny);
	TypMaszyny GetTyp();
private:
	TypMaszyny typ;
};

