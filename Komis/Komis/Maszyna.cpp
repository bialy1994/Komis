#include "Maszyna.h"



Maszyna::Maszyna()
{
}


Maszyna::~Maszyna()
{
}

void Maszyna::SetTyp(TypMaszyny T)
{
	this->typ = T;
}

TypMaszyny Maszyna::GetTyp()
{
	return this->typ;
}