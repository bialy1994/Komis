#include "Model.h"



Model::Model()
{
}


Model::~Model()
{
}

void Model::SetKategoria(KategoriaPojazdu kat)
{
	this->kategoria = kat;
}

void Model::SetNazwaModelu(std::string nazwa)
{
	this->nazwaModelu = nazwa;
}

KategoriaPojazdu Model::GetKategoria()
{
	return this->kategoria;
}

std::string Model::GetNazwaModelu()
{
	return this->nazwaModelu;
}