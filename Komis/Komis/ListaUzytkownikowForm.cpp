#include "ListaUzytkownikowForm.h"

System::Void Komis::ListaUzytkownikowForm::zamknijButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	this->Hide();
}

System::Void Komis::ListaUzytkownikowForm::ListaUzytkownikowForm_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	Listy lista;
	lista.PobierzZBazyUzytkownikow();
	this->UzytkownicyTable->Rows->Clear();
	std::list<Uzytkownik>::iterator iterator;
	for (iterator = lista.ListaUzytkownikow.begin(); iterator != lista.ListaUzytkownikow.end(); iterator++)
	{
		UzytkownicyTable->Rows->Add(iterator->UzytkownikId,
			msclr::interop::marshal_as<System::String^>(iterator->imie),
			msclr::interop::marshal_as<System::String^>(iterator->nazwisko),
			msclr::interop::marshal_as<System::String^>(iterator->login),
			msclr::interop::marshal_as<System::String^>(iterator->haslo),
			msclr::interop::marshal_as<System::String^>(UprawnieniaToString(iterator->uprawnienia)),
			msclr::interop::marshal_as<System::String^>(L"usun")
		);
	}
	lista.ListaPojazdow.clear();
}

System::Void Komis::ListaUzytkownikowForm::UzytkownicyTable_CellClick(System::Object ^ sender, System::Windows::Forms::DataGridViewCellEventArgs ^ e)
{
	if (e->ColumnIndex == 6)
	{
		Listy lista;
		int id = int::Parse(UzytkownicyTable[0, e->RowIndex]->Value->ToString());
		lista.UsunUzytkownika(id);
		MessageBox::Show("Usunieto uzytkownika o nr ID = " + id);
		OdswiezTabele();
	}
}

void Komis::ListaUzytkownikowForm::OdswiezTabele()
{
	Listy lista;
	lista.PobierzZBazyUzytkownikow();
	this->UzytkownicyTable->Rows->Clear();
	std::list<Uzytkownik>::iterator iterator;
	for (iterator = lista.ListaUzytkownikow.begin(); iterator != lista.ListaUzytkownikow.end(); iterator++)
	{
		UzytkownicyTable->Rows->Add(iterator->UzytkownikId,
			msclr::interop::marshal_as<System::String^>(iterator->imie),
			msclr::interop::marshal_as<System::String^>(iterator->nazwisko),
			msclr::interop::marshal_as<System::String^>(iterator->login),
			msclr::interop::marshal_as<System::String^>(iterator->haslo),
			msclr::interop::marshal_as<System::String^>(UprawnieniaToString(iterator->uprawnienia)),
			msclr::interop::marshal_as<System::String^>(L"usun")
		);
	}
	lista.ListaUzytkownikow.clear();
}

