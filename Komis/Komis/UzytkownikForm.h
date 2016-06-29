#pragma once
#include"Listy.h"

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
			uzytkownik = u;
			this->dodajButton->Enabled = false;
			this->dodajButton->Visible = false;
			this->anulujButton->Text = L"Zamknij";
			this->imieTextBox->ReadOnly = true;
			this->nazwiskoTextBox->ReadOnly = true;
			this->loginTextBox->ReadOnly = true;
			this->hasloTextBox->ReadOnly = true;
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
		Uzytkownik *uzytkownik;
		System::ComponentModel::Container ^components;
		void InitializeComponent(void);
#pragma endregion
	private: System::Void dodajButton_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void anulujButton_Click(System::Object^  sender, System::EventArgs^  e);
	};
}