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

void Maszyna::SetId(int id)
{
	this->Id = id;
}

TypMaszyny Maszyna::GetTyp()
{
	return this->typ;
}

int Maszyna::GetId()
{
	return this->Id;
}