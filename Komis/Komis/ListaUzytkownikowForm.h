#pragma once
#include"Listy.h"

namespace Komis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class ListaUzytkownikowForm : public System::Windows::Forms::Form
	{
	public:
		ListaUzytkownikowForm(void)
		{
			InitializeComponent();
		}

	protected:
		~ListaUzytkownikowForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  UzytkownicyTable;
	protected:

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  IdColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ImieColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  NazwizkoColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  LoginColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  HasloColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  UprawnieniaColumn;
	private: System::Windows::Forms::DataGridViewLinkColumn^  UsunColumn;
	private: System::Windows::Forms::Button^  zamknijButton;
	protected:

	private:
		System::ComponentModel::Container ^components;

		void InitializeComponent(void)
		{
			this->UzytkownicyTable = (gcnew System::Windows::Forms::DataGridView());
			this->IdColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ImieColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NazwizkoColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->LoginColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HasloColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UprawnieniaColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->UsunColumn = (gcnew System::Windows::Forms::DataGridViewLinkColumn());
			this->zamknijButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UzytkownicyTable))->BeginInit();
			this->SuspendLayout();
			// 
			// UzytkownicyTable
			// 
			this->UzytkownicyTable->AllowUserToAddRows = false;
			this->UzytkownicyTable->AllowUserToDeleteRows = false;
			this->UzytkownicyTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->UzytkownicyTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->IdColumn,
					this->ImieColumn, this->NazwizkoColumn, this->LoginColumn, this->HasloColumn, this->UprawnieniaColumn, this->UsunColumn
			});
			this->UzytkownicyTable->Location = System::Drawing::Point(12, 12);
			this->UzytkownicyTable->Name = L"UzytkownicyTable";
			this->UzytkownicyTable->ReadOnly = true;
			this->UzytkownicyTable->Size = System::Drawing::Size(744, 150);
			this->UzytkownicyTable->TabIndex = 0;
			this->UzytkownicyTable->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ListaUzytkownikowForm::UzytkownicyTable_CellClick);
			// 
			// IdColumn
			// 
			this->IdColumn->HeaderText = L"Id";
			this->IdColumn->Name = L"IdColumn";
			this->IdColumn->ReadOnly = true;
			// 
			// ImieColumn
			// 
			this->ImieColumn->HeaderText = L"Imie";
			this->ImieColumn->Name = L"ImieColumn";
			this->ImieColumn->ReadOnly = true;
			// 
			// NazwizkoColumn
			// 
			this->NazwizkoColumn->HeaderText = L"Nazwizko";
			this->NazwizkoColumn->Name = L"NazwizkoColumn";
			this->NazwizkoColumn->ReadOnly = true;
			// 
			// LoginColumn
			// 
			this->LoginColumn->HeaderText = L"Login";
			this->LoginColumn->Name = L"LoginColumn";
			this->LoginColumn->ReadOnly = true;
			// 
			// HasloColumn
			// 
			this->HasloColumn->HeaderText = L"Haslo";
			this->HasloColumn->Name = L"HasloColumn";
			this->HasloColumn->ReadOnly = true;
			// 
			// UprawnieniaColumn
			// 
			this->UprawnieniaColumn->HeaderText = L"Uprawnienia";
			this->UprawnieniaColumn->Name = L"UprawnieniaColumn";
			this->UprawnieniaColumn->ReadOnly = true;
			// 
			// UsunColumn
			// 
			this->UsunColumn->HeaderText = L"Usun";
			this->UsunColumn->Name = L"UsunColumn";
			this->UsunColumn->ReadOnly = true;
			// 
			// zamknijButton
			// 
			this->zamknijButton->Location = System::Drawing::Point(348, 168);
			this->zamknijButton->Name = L"zamknijButton";
			this->zamknijButton->Size = System::Drawing::Size(75, 23);
			this->zamknijButton->TabIndex = 1;
			this->zamknijButton->Text = L"Zamknij";
			this->zamknijButton->UseVisualStyleBackColor = true;
			this->zamknijButton->Click += gcnew System::EventHandler(this, &ListaUzytkownikowForm::zamknijButton_Click);
			// 
			// ListaUzytkownikowForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(769, 195);
			this->Controls->Add(this->zamknijButton);
			this->Controls->Add(this->UzytkownicyTable);
			this->Name = L"ListaUzytkownikowForm";
			this->Text = L"ListaUzytkownikowForm";
			this->Load += gcnew System::EventHandler(this, &ListaUzytkownikowForm::ListaUzytkownikowForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UzytkownicyTable))->EndInit();
			this->ResumeLayout(false);

		}

private: System::Void zamknijButton_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void ListaUzytkownikowForm_Load(System::Object^  sender, System::EventArgs^  e);
private: System::Void UzytkownicyTable_CellClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e);
private: void OdswiezTabele();
};
}
