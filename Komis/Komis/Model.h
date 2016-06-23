#pragma once
#include "Marka.h"
class Model :
	public Marka
{
public:
	Model();
	~Model();
	void SetNazwaModelu(std::string);
	void SetKategoria(KategoriaPojazdu);
	std::string GetNazwaModelu();
	KategoriaPojazdu GetKategoria();
private:
	std::string nazwaModelu;
	KategoriaPojazdu kategoria;
};

