#include "UstawieniaBazyDanychForm.h"

System::Void Komis::UstawieniaBazyDanychForm::cancelButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->Hide();
}

System::Void Komis::UstawieniaBazyDanychForm::saveButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	System::String^ connectionString;
	bool isError = false;
	
	if (System::String::IsNullOrEmpty(sourceTextBox->Text))
	{
		MessageBox::Show("Pole 'ród³o' jest wymagane");
		isError = true;
	}
	else
	{
		connectionString += "datasource=" + sourceTextBox->Text;
	}

	if (System::String::IsNullOrEmpty(portTextBox->Text))
	{
		MessageBox::Show("Pole 'PORT' jest wymagane");
		isError = true;
	}
	else
	{
		connectionString += ";port=" + portTextBox->Text;
	}

	if (System::String::IsNullOrEmpty(usernameTextBox->Text))
	{
		MessageBox::Show("Pole 'Nazwa u¿ytkownika' jest wymagane");
		isError = true;
	}
	else
	{
		connectionString += ";username=" + usernameTextBox->Text;
	}

	if (System::String::IsNullOrEmpty(passwordTextBox->Text))
	{
		MessageBox::Show("Pole 'Has³o' jest wymagane");
		isError = true;
	}
	else
	{
		connectionString += ";password=" + passwordTextBox->Text;
	}

	if (isError)
	{
		MessageBox::Show("Nie uda³o siê zmieniæ ustawieñ bazy");
	}
	else
	{
		std::fstream plik;
		std::string connection = msclr::interop::marshal_as<std::string>(connectionString);
		plik.open("connectionString.txt", std::ios::out);
		plik.write(connection.c_str(), connection.length());
		plik.close();
		MessageBox::Show("Poprawnie zmieniono ustawienia bazy");
		this->Close();
	}
}

