#pragma once
#include <msclr\marshal_cppstd.h>
#include "Listy.h"

namespace Komis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DodajPojazdForm
	/// </summary>
	public ref class DodajPojazdForm : public System::Windows::Forms::Form
	{
	public:
		DodajPojazdForm(void)
		{
			InitializeComponent();
			this->usunButton->Enabled = false;
			this->usunButton->Visible = false;
		}

		DodajPojazdForm(int);

	protected:
		~DodajPojazdForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  typComboBox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  markaTextBox;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  kategoriaComboBox;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  modelTextBox;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  PaliwoComboBox;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  nadwozieComboBox;
	private: System::Windows::Forms::ComboBox^  napedComboBox;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  rokTextBox;
	private: System::Windows::Forms::TextBox^  pojemnoscTextBox;
	private: System::Windows::Forms::TextBox^  mocTextBox;
	private: System::Windows::Forms::TextBox^  przebiegTextBox;
	private: System::Windows::Forms::TextBox^  vinTextBox;
	private: System::Windows::Forms::TextBox^  kolorTextBox;
	private: System::Windows::Forms::Button^  dodajButton;
	private: System::Windows::Forms::Button^  anulujButton;
	private: System::Windows::Forms::CheckBox^  szybyCheckBox;
	private: System::Windows::Forms::CheckBox^  automatCheckBox;
	private: System::Windows::Forms::CheckBox^  glosnomowiacyCheckBox;
	private: System::Windows::Forms::CheckBox^  nawigacjaCheckBox;
	private: System::Windows::Forms::CheckBox^  klimaCheckBox;
	private: System::Windows::Forms::CheckBox^  lusterkaCheckBox;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  usunButton;
	private:
		int Id;
		System::ComponentModel::Container ^components;
		void InitializeComponent(void);
		void DodajPojazd();

	private: System::Void anulujButton_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void dodajButton_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void usunButton_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
