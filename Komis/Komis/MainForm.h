#pragma once
#include "DodajPojazdForm.h"
#include"Listy.h"
#include"Uzytkownik.h"
#include"UzytkownikForm.h"

namespace Komis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(Uzytkownik* u)
		{
			InitializeComponent();
			uzytkownik = u;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  przebiegOdLabel;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  rokProdukcjiOdLabel;
	private: System::Windows::Forms::Label^  rokProdukcjiDoLabel;
	private: System::Windows::Forms::Label^  mocOdLabel;
	private: System::Windows::Forms::Label^  mocDoLabel;
	private: System::Windows::Forms::Label^  pojemnoscOdLabel;
	private: System::Windows::Forms::Label^  pojemnoscDoLabel;
	private: System::Windows::Forms::Label^  rodzajPaliwaLabel;
	private: System::Windows::Forms::Label^  typNadwoziaLabel;
	private: System::Windows::Forms::TextBox^  przebiegOdTextBox;
	private: System::Windows::Forms::TextBox^  przebiegDoTextBox;
	private: System::Windows::Forms::TextBox^  rokProdukcjiOdTextBox;
	private: System::Windows::Forms::TextBox^  rokProdukcjiDoTextBox;
	private: System::Windows::Forms::TextBox^  mocOdTextBox;
	private: System::Windows::Forms::TextBox^  mocDoTextBox;
	private: System::Windows::Forms::TextBox^  pojemnoscOdTextBox;
	private: System::Windows::Forms::TextBox^  pojemnoscDoTextBox;
	private: System::Windows::Forms::ComboBox^  paliwoComboBox;
	private: System::Windows::Forms::ComboBox^  nadwozieComboBox;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  filtrujButton;
	private: System::Windows::Forms::LinkLabel^  wylogujLinkLabel;
	private: System::Windows::Forms::DataGridView^  dataTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  markaColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  modelColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  przebiegColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  rokColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  mocColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  paliwoColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nadwozieColumn;
	private: System::Windows::Forms::DataGridViewLinkColumn^  wiecejColumn;
	private: System::Windows::Forms::Button^  czyscButton;

	private:
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^  dodajUzytkownikaButton;
	private: System::Windows::Forms::LinkLabel^  daneUzytkownikaLabel;
			 Uzytkownik *uzytkownik;
		void InitializeComponent(void);

		System::Void WypelnijTabele(std::list<Pojazd> lista);

	private: System::Void wylogujLinkLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e);
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void filtrujButton_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void czyscButton_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void dodajUzytkownikaButton_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void daneUzytkownikaLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e);
	};
}
