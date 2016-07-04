#pragma once
#include "Enums.h"
class Maszyna
{
public:
	Maszyna();
	~Maszyna();
	void SetTyp(TypMaszyny);
	void SetId(int);
	TypMaszyny GetTyp();
	int GetId();
private:
	TypMaszyny typ;
	int Id;
};

