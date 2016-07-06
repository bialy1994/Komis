#pragma once
#include"Listy.h"
#include <msclr\marshal_cppstd.h>

namespace Komis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UzytkownikForm
	/// </summary>
	public ref class UzytkownikForm : public System::Windows::Forms::Form
	{
	public:
		UzytkownikForm(void)
		{
			InitializeComponent();
		}

		UzytkownikForm(Uzytkownik* u)
		{
			InitializeComponent();
			this->dodajButton->Enabled = false;
			this->dodajButton->Visible = false;
			this->anulujButton->Text = L"Zamknij";
			this->imieTextBox->Enabled = false;
			this->nazwiskoTextBox->Enabled = false;
			this->loginTextBox->Enabled = false;
			this->hasloTextBox->Enabled = false;
			uprawnieniaComboBox->Enabled = false;

			imieTextBox->Text = msclr::interop::marshal_as<System::String^>(u->imie);
			nazwiskoTextBox->Text = msclr::interop::marshal_as<System::String^>(u->nazwisko);
			loginTextBox->Text = msclr::interop::marshal_as<System::String^>(u->login);
			hasloTextBox->Text = msclr::interop::marshal_as<System::String^>(u->haslo);
			uprawnieniaComboBox->SelectedIndex = Convert::ToInt16(u->uprawnienia);
		}

	protected:
		~UzytkownikForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  dodajButton;
	private: System::Windows::Forms::Button^  anulujButton;
	private: System::Windows::Forms::Label^  imieLabel;
	private: System::Windows::Forms::Label^  nazwiskoLabel;
	private: System::Windows::Forms::Label^  hasloLabel;
	private: System::Windows::Forms::Label^  uprawnieniaLabel;
	private: System::Windows::Forms::Label^  loginLabel;
	private: System::Windows::Forms::TextBox^  nazwiskoTextBox;
	private: System::Windows::Forms::TextBox^  hasloTextBox;
	private: System::Windows::Forms::TextBox^  loginTextBox;
	private: System::Windows::Forms::TextBox^  imieTextBox;
	private: System::Windows::Forms::ComboBox^  uprawnieniaComboBox;

	private:
		System::ComponentModel::Container ^components;
		void InitializeComponent(void);
#pragma endregion
	private: System::Void dodajButton_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void anulujButton_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
