#include "MainForm.h"
#include"LoginForm.h"

std::string NapedToString(Naped naped)
{
	switch (naped)
	{
	case PRZOD:
		return "Przod";
	case TYL:
		return "Tyl";
	case NACZTERY:
		return "4x4";
	default:
		return "niezdefiniowany";
	}
}

std::string TypNadwoziaToString(TypNadwozia typ)
{
	switch (typ)
	{
	case SEDAN:
		return "Sedan";
	case HATCHBACK:
		return "Hatch-Back";
	case KOMBI:
		return "Kombi";
	case PICKUP:
		return "Pickup";
	case KABRIOLET:
		return "Kabriolet";
	case MINIVAN:
		return "MiniVan";
	case VAN:
		return "Van";
	case COUPE:
		return "Coupe";
	case INNY:
		return "Inny";
	default:
		return "niezdefiniowany";
	}
}

std::string PaliwoToString(Paliwo paliwo)
{
	switch (paliwo)
	{
	case DIESEL:
		return "Diesel";
	case BENZYNA:
		return "Benzyna";
	case ELEKTRYCZNY:
		return "Elektryczny";
	case LPG:
		return "LPG";
	case BENZYNA_LPG:
		return "Benzyna + LPG";
	case HYBRYDOWY:
		return "Hybrydowy";
	default:
		return "niezdefiniowany";
	}
}

std::string TypMaszynyToString(TypMaszyny typ)
{
	switch (typ)
	{
	case SAMOCHOD:
		return "Samochod";
	case CIEZAROWKA:
		return "Ciezarowka";
	case POJAZD_WOJSKOWY:
		return "Pojazd wojskowy";
	case POJAZD_BUDOWLANY:
		return "Pojazd budowlany";
	case INNE:
		return "Inne";
	default:
		return "niezdefiniowany";
	}
}

std::string KategoriaPojazduToString(KategoriaPojazdu kategoria)
{
	switch (kategoria)
	{
	case A:
		return "A";
	case A1:
		return "A1";
	case B:
		return "B";
	case BE:
		return "BE";
	case C:
		return "C";
	case CE:
		return "CE";
	case C1:
		return "C1";
	case C1E:
		return "C1E";
	case D:
		return "D";
	case DE:
		return "DE";
	case D1:
		return "D1";
	case D1E:
		return "D1E";
	case DODATKOWE_UPRAWNIENIA:
		return "Inne uprawnienia";
	default:
		return "niezdefiniowane";
	}
}

void Komis::MainForm::InitializeComponent()
{
	this->przebiegOdLabel = (gcnew System::Windows::Forms::Label());
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->rokProdukcjiOdLabel = (gcnew System::Windows::Forms::Label());
	this->rokProdukcjiDoLabel = (gcnew System::Windows::Forms::Label());
	this->mocOdLabel = (gcnew System::Windows::Forms::Label());
	this->mocDoLabel = (gcnew System::Windows::Forms::Label());
	this->pojemnoscOdLabel = (gcnew System::Windows::Forms::Label());
	this->pojemnoscDoLabel = (gcnew System::Windows::Forms::Label());
	this->rodzajPaliwaLabel = (gcnew System::Windows::Forms::Label());
	this->typNadwoziaLabel = (gcnew System::Windows::Forms::Label());
	this->przebiegOdTextBox = (gcnew System::Windows::Forms::TextBox());
	this->przebiegDoTextBox = (gcnew System::Windows::Forms::TextBox());
	this->rokProdukcjiOdTextBox = (gcnew System::Windows::Forms::TextBox());
	this->rokProdukcjiDoTextBox = (gcnew System::Windows::Forms::TextBox());
	this->mocOdTextBox = (gcnew System::Windows::Forms::TextBox());
	this->mocDoTextBox = (gcnew System::Windows::Forms::TextBox());
	this->pojemnoscOdTextBox = (gcnew System::Windows::Forms::TextBox());
	this->pojemnoscDoTextBox = (gcnew System::Windows::Forms::TextBox());
	this->paliwoComboBox = (gcnew System::Windows::Forms::ComboBox());
	this->nadwozieComboBox = (gcnew System::Windows::Forms::ComboBox());
	this->button1 = (gcnew System::Windows::Forms::Button());
	this->filtrujButton = (gcnew System::Windows::Forms::Button());
	this->wylogujLinkLabel = (gcnew System::Windows::Forms::LinkLabel());
	this->dataTable = (gcnew System::Windows::Forms::DataGridView());
	this->markaColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->modelColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->przebiegColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->rokColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->mocColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->paliwoColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->nadwozieColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
	this->wiecejColumn = (gcnew System::Windows::Forms::DataGridViewLinkColumn());
	this->czyscButton = (gcnew System::Windows::Forms::Button());
	this->dodajUzytkownikaButton = (gcnew System::Windows::Forms::Button());
	this->daneUzytkownikaLabel = (gcnew System::Windows::Forms::LinkLabel());
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->BeginInit();
	this->SuspendLayout();
	// 
	// przebiegOdLabel
	// 
	this->przebiegOdLabel->AutoSize = true;
	this->przebiegOdLabel->Location = System::Drawing::Point(14, 12);
	this->przebiegOdLabel->Name = L"przebiegOdLabel";
	this->przebiegOdLabel->Size = System::Drawing::Size(63, 13);
	this->przebiegOdLabel->TabIndex = 0;
	this->przebiegOdLabel->Text = L"Przebieg od";
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(83, 12);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(63, 13);
	this->label1->TabIndex = 1;
	this->label1->Text = L"Przebieg do";
	// 
	// rokProdukcjiOdLabel
	// 
	this->rokProdukcjiOdLabel->AutoSize = true;
	this->rokProdukcjiOdLabel->Location = System::Drawing::Point(152, 12);
	this->rokProdukcjiOdLabel->Name = L"rokProdukcjiOdLabel";
	this->rokProdukcjiOdLabel->Size = System::Drawing::Size(88, 13);
	this->rokProdukcjiOdLabel->TabIndex = 2;
	this->rokProdukcjiOdLabel->Text = L"Rok produkcji od";
	// 
	// rokProdukcjiDoLabel
	// 
	this->rokProdukcjiDoLabel->AutoSize = true;
	this->rokProdukcjiDoLabel->Location = System::Drawing::Point(246, 12);
	this->rokProdukcjiDoLabel->Name = L"rokProdukcjiDoLabel";
	this->rokProdukcjiDoLabel->Size = System::Drawing::Size(88, 13);
	this->rokProdukcjiDoLabel->TabIndex = 3;
	this->rokProdukcjiDoLabel->Text = L"Rok produkcji do";
	// 
	// mocOdLabel
	// 
	this->mocOdLabel->AutoSize = true;
	this->mocOdLabel->Location = System::Drawing::Point(337, 12);
	this->mocOdLabel->Name = L"mocOdLabel";
	this->mocOdLabel->Size = System::Drawing::Size(43, 13);
	this->mocOdLabel->TabIndex = 4;
	this->mocOdLabel->Text = L"Moc od";
	// 
	// mocDoLabel
	// 
	this->mocDoLabel->AutoSize = true;
	this->mocDoLabel->Location = System::Drawing::Point(406, 12);
	this->mocDoLabel->Name = L"mocDoLabel";
	this->mocDoLabel->Size = System::Drawing::Size(43, 13);
	this->mocDoLabel->TabIndex = 5;
	this->mocDoLabel->Text = L"Moc do";
	// 
	// pojemnoscOdLabel
	// 
	this->pojemnoscOdLabel->AutoSize = true;
	this->pojemnoscOdLabel->Location = System::Drawing::Point(14, 51);
	this->pojemnoscOdLabel->Name = L"pojemnoscOdLabel";
	this->pojemnoscOdLabel->Size = System::Drawing::Size(74, 13);
	this->pojemnoscOdLabel->TabIndex = 6;
	this->pojemnoscOdLabel->Text = L"Pojemnoœæ od";
	// 
	// pojemnoscDoLabel
	// 
	this->pojemnoscDoLabel->AutoSize = true;
	this->pojemnoscDoLabel->Location = System::Drawing::Point(85, 51);
	this->pojemnoscDoLabel->Name = L"pojemnoscDoLabel";
	this->pojemnoscDoLabel->Size = System::Drawing::Size(74, 13);
	this->pojemnoscDoLabel->TabIndex = 7;
	this->pojemnoscDoLabel->Text = L"Pojemnoœæ do";
	// 
	// rodzajPaliwaLabel
	// 
	this->rodzajPaliwaLabel->AutoSize = true;
	this->rodzajPaliwaLabel->Location = System::Drawing::Point(156, 51);
	this->rodzajPaliwaLabel->Name = L"rodzajPaliwaLabel";
	this->rodzajPaliwaLabel->Size = System::Drawing::Size(73, 13);
	this->rodzajPaliwaLabel->TabIndex = 8;
	this->rodzajPaliwaLabel->Text = L"Rodzaj paliwa";
	// 
	// typNadwoziaLabel
	// 
	this->typNadwoziaLabel->AutoSize = true;
	this->typNadwoziaLabel->Location = System::Drawing::Point(246, 51);
	this->typNadwoziaLabel->Name = L"typNadwoziaLabel";
	this->typNadwoziaLabel->Size = System::Drawing::Size(73, 13);
	this->typNadwoziaLabel->TabIndex = 9;
	this->typNadwoziaLabel->Text = L"Typ nadwozia";
	// 
	// przebiegOdTextBox
	// 
	this->przebiegOdTextBox->Location = System::Drawing::Point(17, 28);
	this->przebiegOdTextBox->Name = L"przebiegOdTextBox";
	this->przebiegOdTextBox->Size = System::Drawing::Size(65, 20);
	this->przebiegOdTextBox->TabIndex = 10;
	// 
	// przebiegDoTextBox
	// 
	this->przebiegDoTextBox->Location = System::Drawing::Point(86, 28);
	this->przebiegDoTextBox->Name = L"przebiegDoTextBox";
	this->przebiegDoTextBox->Size = System::Drawing::Size(65, 20);
	this->przebiegDoTextBox->TabIndex = 11;
	// 
	// rokProdukcjiOdTextBox
	// 
	this->rokProdukcjiOdTextBox->Location = System::Drawing::Point(155, 28);
	this->rokProdukcjiOdTextBox->Name = L"rokProdukcjiOdTextBox";
	this->rokProdukcjiOdTextBox->Size = System::Drawing::Size(85, 20);
	this->rokProdukcjiOdTextBox->TabIndex = 12;
	// 
	// rokProdukcjiDoTextBox
	// 
	this->rokProdukcjiDoTextBox->Location = System::Drawing::Point(249, 28);
	this->rokProdukcjiDoTextBox->Name = L"rokProdukcjiDoTextBox";
	this->rokProdukcjiDoTextBox->Size = System::Drawing::Size(85, 20);
	this->rokProdukcjiDoTextBox->TabIndex = 13;
	// 
	// mocOdTextBox
	// 
	this->mocOdTextBox->Location = System::Drawing::Point(340, 28);
	this->mocOdTextBox->Name = L"mocOdTextBox";
	this->mocOdTextBox->Size = System::Drawing::Size(65, 20);
	this->mocOdTextBox->TabIndex = 14;
	// 
	// mocDoTextBox
	// 
	this->mocDoTextBox->Location = System::Drawing::Point(409, 28);
	this->mocDoTextBox->Name = L"mocDoTextBox";
	this->mocDoTextBox->Size = System::Drawing::Size(65, 20);
	this->mocDoTextBox->TabIndex = 15;
	// 
	// pojemnoscOdTextBox
	// 
	this->pojemnoscOdTextBox->Location = System::Drawing::Point(17, 67);
	this->pojemnoscOdTextBox->Name = L"pojemnoscOdTextBox";
	this->pojemnoscOdTextBox->Size = System::Drawing::Size(65, 20);
	this->pojemnoscOdTextBox->TabIndex = 16;
	// 
	// pojemnoscDoTextBox
	// 
	this->pojemnoscDoTextBox->Location = System::Drawing::Point(88, 67);
	this->pojemnoscDoTextBox->Name = L"pojemnoscDoTextBox";
	this->pojemnoscDoTextBox->Size = System::Drawing::Size(65, 20);
	this->pojemnoscDoTextBox->TabIndex = 17;
	// 
	// paliwoComboBox
	// 
	this->paliwoComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->paliwoComboBox->FormattingEnabled = true;
	this->paliwoComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
		L"", L"DIESEL", L"BENZYNA", L"ELEKTRYCZNY",
			L"LPG", L"BENZYNA_LPG", L"HYBRYDOWY"
	});
	this->paliwoComboBox->Location = System::Drawing::Point(159, 67);
	this->paliwoComboBox->Name = L"paliwoComboBox";
	this->paliwoComboBox->Size = System::Drawing::Size(81, 21);
	this->paliwoComboBox->TabIndex = 18;
	// 
	// nadwozieComboBox
	// 
	this->nadwozieComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->nadwozieComboBox->FormattingEnabled = true;
	this->nadwozieComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
		L"", L"SEDAN", L"HATCHBACK", L"KOMBI", L"PICKUP",
			L"KABRIOLET", L"MINIVAN", L"VAN", L"COUPE", L"INNY"
	});
	this->nadwozieComboBox->Location = System::Drawing::Point(249, 67);
	this->nadwozieComboBox->Name = L"nadwozieComboBox";
	this->nadwozieComboBox->Size = System::Drawing::Size(70, 21);
	this->nadwozieComboBox->TabIndex = 19;
	// 
	// button1
	// 
	this->button1->Location = System::Drawing::Point(530, 67);
	this->button1->Name = L"button1";
	this->button1->Size = System::Drawing::Size(113, 23);
	this->button1->TabIndex = 20;
	this->button1->Text = L"Dodaj pojazd";
	this->button1->UseVisualStyleBackColor = true;
	this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
	// 
	// filtrujButton
	// 
	this->filtrujButton->Location = System::Drawing::Point(344, 65);
	this->filtrujButton->Name = L"filtrujButton";
	this->filtrujButton->Size = System::Drawing::Size(75, 23);
	this->filtrujButton->TabIndex = 21;
	this->filtrujButton->Text = L"Filtruj";
	this->filtrujButton->UseVisualStyleBackColor = true;
	this->filtrujButton->Click += gcnew System::EventHandler(this, &MainForm::filtrujButton_Click);
	// 
	// wylogujLinkLabel
	// 
	this->wylogujLinkLabel->AutoSize = true;
	this->wylogujLinkLabel->Location = System::Drawing::Point(598, 9);
	this->wylogujLinkLabel->Name = L"wylogujLinkLabel";
	this->wylogujLinkLabel->Size = System::Drawing::Size(45, 13);
	this->wylogujLinkLabel->TabIndex = 22;
	this->wylogujLinkLabel->TabStop = true;
	this->wylogujLinkLabel->Text = L"Wyloguj";
	this->wylogujLinkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::wylogujLinkLabel_LinkClicked);
	// 
	// dataTable
	// 
	this->dataTable->AllowUserToAddRows = false;
	this->dataTable->AllowUserToDeleteRows = false;
	this->dataTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
	this->dataTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
		this->markaColumn,
			this->modelColumn, this->przebiegColumn, this->rokColumn, this->mocColumn, this->paliwoColumn, this->nadwozieColumn, this->wiecejColumn
	});
	this->dataTable->Location = System::Drawing::Point(17, 96);
	this->dataTable->Name = L"dataTable";
	this->dataTable->ReadOnly = true;
	this->dataTable->Size = System::Drawing::Size(626, 268);
	this->dataTable->TabIndex = 23;
	// 
	// markaColumn
	// 
	this->markaColumn->HeaderText = L"Marka";
	this->markaColumn->Name = L"markaColumn";
	this->markaColumn->ReadOnly = true;
	// 
	// modelColumn
	// 
	this->modelColumn->HeaderText = L"Model";
	this->modelColumn->Name = L"modelColumn";
	this->modelColumn->ReadOnly = true;
	// 
	// przebiegColumn
	// 
	this->przebiegColumn->HeaderText = L"Przebieg";
	this->przebiegColumn->Name = L"przebiegColumn";
	this->przebiegColumn->ReadOnly = true;
	// 
	// rokColumn
	// 
	this->rokColumn->HeaderText = L"Rok produkcji";
	this->rokColumn->Name = L"rokColumn";
	this->rokColumn->ReadOnly = true;
	// 
	// mocColumn
	// 
	this->mocColumn->HeaderText = L"Moc";
	this->mocColumn->Name = L"mocColumn";
	this->mocColumn->ReadOnly = true;
	// 
	// paliwoColumn
	// 
	this->paliwoColumn->HeaderText = L"Rodzaj Paliwa";
	this->paliwoColumn->Name = L"paliwoColumn";
	this->paliwoColumn->ReadOnly = true;
	// 
	// nadwozieColumn
	// 
	this->nadwozieColumn->HeaderText = L"Typ nadwozia";
	this->nadwozieColumn->Name = L"nadwozieColumn";
	this->nadwozieColumn->ReadOnly = true;
	// 
	// wiecejColumn
	// 
	this->wiecejColumn->HeaderText = L"Szczegó³y";
	this->wiecejColumn->Name = L"wiecejColumn";
	this->wiecejColumn->ReadOnly = true;
	this->wiecejColumn->Text = L"szczegoly";
	// 
	// czyscButton
	// 
	this->czyscButton->Location = System::Drawing::Point(425, 65);
	this->czyscButton->Name = L"czyscButton";
	this->czyscButton->Size = System::Drawing::Size(83, 23);
	this->czyscButton->TabIndex = 24;
	this->czyscButton->Text = L"Wyczysc filtry";
	this->czyscButton->UseVisualStyleBackColor = true;
	this->czyscButton->Click += gcnew System::EventHandler(this, &MainForm::czyscButton_Click);
	// 
	// dodajUzytkownikaButton
	// 
	this->dodajUzytkownikaButton->Location = System::Drawing::Point(530, 38);
	this->dodajUzytkownikaButton->Name = L"dodajUzytkownikaButton";
	this->dodajUzytkownikaButton->Size = System::Drawing::Size(113, 23);
	this->dodajUzytkownikaButton->TabIndex = 25;
	this->dodajUzytkownikaButton->Text = L"Dodaj uzytkownika";
	this->dodajUzytkownikaButton->UseVisualStyleBackColor = true;
	this->dodajUzytkownikaButton->Click += gcnew System::EventHandler(this, &MainForm::dodajUzytkownikaButton_Click);
	// 
	// daneUzytkownikaLabel
	// 
	this->daneUzytkownikaLabel->AutoSize = true;
	this->daneUzytkownikaLabel->Location = System::Drawing::Point(535, 9);
	this->daneUzytkownikaLabel->Name = L"daneUzytkownikaLabel";
	this->daneUzytkownikaLabel->Size = System::Drawing::Size(57, 13);
	this->daneUzytkownikaLabel->TabIndex = 26;
	this->daneUzytkownikaLabel->TabStop = true;
	this->daneUzytkownikaLabel->Text = L"Moje dane";
	this->daneUzytkownikaLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::daneUzytkownikaLabel_LinkClicked);
	// 
	// MainForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(655, 374);
	this->Controls->Add(this->daneUzytkownikaLabel);
	this->Controls->Add(this->dodajUzytkownikaButton);
	this->Controls->Add(this->czyscButton);
	this->Controls->Add(this->dataTable);
	this->Controls->Add(this->wylogujLinkLabel);
	this->Controls->Add(this->filtrujButton);
	this->Controls->Add(this->button1);
	this->Controls->Add(this->nadwozieComboBox);
	this->Controls->Add(this->paliwoComboBox);
	this->Controls->Add(this->pojemnoscDoTextBox);
	this->Controls->Add(this->pojemnoscOdTextBox);
	this->Controls->Add(this->mocDoTextBox);
	this->Controls->Add(this->mocOdTextBox);
	this->Controls->Add(this->rokProdukcjiDoTextBox);
	this->Controls->Add(this->rokProdukcjiOdTextBox);
	this->Controls->Add(this->przebiegDoTextBox);
	this->Controls->Add(this->przebiegOdTextBox);
	this->Controls->Add(this->typNadwoziaLabel);
	this->Controls->Add(this->rodzajPaliwaLabel);
	this->Controls->Add(this->pojemnoscDoLabel);
	this->Controls->Add(this->pojemnoscOdLabel);
	this->Controls->Add(this->mocDoLabel);
	this->Controls->Add(this->mocOdLabel);
	this->Controls->Add(this->rokProdukcjiDoLabel);
	this->Controls->Add(this->rokProdukcjiOdLabel);
	this->Controls->Add(this->label1);
	this->Controls->Add(this->przebiegOdLabel);
	this->Name = L"MainForm";
	this->Text = L"MainForm";
	this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable))->EndInit();
	this->ResumeLayout(false);
	this->PerformLayout();

}

System::Void Komis::MainForm::wylogujLinkLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) 
{
	Form^ rgForm = gcnew LoginForm;
	rgForm->Show();
	this->Hide();
}

System::Void Komis::MainForm::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	Form^ rgForm = gcnew DodajPojazdForm;
	rgForm->Show();
}

System::Void Komis::MainForm::WypelnijTabele(std::list<Pojazd> lista)
{
	dataTable->Rows->Clear();
	std::list<Pojazd>::iterator iterator;
	for (iterator = lista.begin(); iterator != lista.end(); iterator++)
	{
		dataTable->Rows->Add(msclr::interop::marshal_as<System::String^>(iterator->GetNazwaMarki()),
			msclr::interop::marshal_as<System::String^>(iterator->GetNazwaModelu()),
			msclr::interop::marshal_as<System::String^>(std::to_string(iterator->GetPrzebieg())),
			msclr::interop::marshal_as<System::String^>(std::to_string(iterator->GetRokProdukcji())),
			msclr::interop::marshal_as<System::String^>(std::to_string(iterator->GetMoc())),
			msclr::interop::marshal_as<System::String^>(PaliwoToString(iterator->GetRodzajPaliwa())),
			msclr::interop::marshal_as<System::String^>(TypNadwoziaToString(iterator->GetTypNadwozia()))
		);
	}
}

System::Void Komis::MainForm::MainForm_Load(System::Object^  sender, System::EventArgs^  e)
{
	//Listy lista;
	//lista.WczytajListePojazdow();
	//WypelnijTabele(lista.ListaPojazdow);
}

System::Void Komis::MainForm::filtrujButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	Listy lista;
	lista.WczytajListePojazdow();
	std::list<Pojazd> listaPojazdow = lista.ListaPojazdow;
	int tmp;
	
	if (!System::String::IsNullOrEmpty(przebiegOdTextBox->Text))
	{
		try
		{
			tmp = Convert::ToInt32(przebiegOdTextBox->Text);
			lista.GetListByPrzebiegOd(tmp, listaPojazdow);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Niepoprawny format przebiegu");
		}
	}

	if (!System::String::IsNullOrEmpty(przebiegDoTextBox->Text))
	{
		try
		{
			tmp = Convert::ToInt32(przebiegDoTextBox->Text);
			lista.GetListByPrzebiegDo(tmp, listaPojazdow);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Niepoprawny format przebiegu");
		}
	}

	if (!System::String::IsNullOrEmpty(rokProdukcjiOdTextBox->Text))
	{
		try
		{
			tmp = Convert::ToInt32(rokProdukcjiOdTextBox->Text);
			lista.GetListByRocznikOd(tmp, listaPojazdow);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Niepoprawny format daty");
		}
	}

	if (!System::String::IsNullOrEmpty(rokProdukcjiDoTextBox->Text))
	{
		try
		{
			tmp = Convert::ToInt32(rokProdukcjiDoTextBox->Text);
			lista.GetListByRocznikDo(tmp, listaPojazdow);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Niepoprawny format daty");
		}
	}

	if (!System::String::IsNullOrEmpty(mocOdTextBox->Text))
	{
		try
		{
			tmp = Convert::ToInt32(mocOdTextBox->Text);
			lista.GetListByMocOd(tmp, listaPojazdow);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Niepoprawny format mocy");
		}
	}

	if (!System::String::IsNullOrEmpty(mocDoTextBox->Text))
	{
		try
		{
			tmp = Convert::ToInt32(mocDoTextBox->Text);
			lista.GetListByMocDo(tmp, listaPojazdow);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Niepoprawny format mocy");
		}
	}

	if (!System::String::IsNullOrEmpty(pojemnoscOdTextBox->Text))
	{
		try
		{
			tmp = Convert::ToInt32(pojemnoscOdTextBox->Text);
			lista.GetListByPojemnoscOd(tmp, listaPojazdow);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Niepoprawny format pojemnosci");
		}
	}

	if (!System::String::IsNullOrEmpty(pojemnoscDoTextBox->Text))
	{
		try
		{
			tmp = Convert::ToInt32(pojemnoscDoTextBox->Text);
			lista.GetListByPojemnoscDo(tmp, listaPojazdow);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Niepoprawny format pojemnosci");
		}
	}

	if(!System::String::IsNullOrEmpty(paliwoComboBox->Text))
	{
		try
		{
			tmp = Convert::ToInt32(paliwoComboBox->SelectedIndex);
			lista.GetListByPaliwo(Paliwo(tmp-1), listaPojazdow);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Niepoprawne paliwo");
		}
	}
	
	if(!System::String::IsNullOrEmpty(nadwozieComboBox->Text))
	{
		try
		{
			tmp = Convert::ToInt32(nadwozieComboBox->SelectedIndex);
			lista.GetListByRodzajNadwozia(TypNadwozia(tmp-1), listaPojazdow);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Niepoprawny typ nadwozia");
		}
	}

	WypelnijTabele(listaPojazdow);
}

System::Void Komis::MainForm::czyscButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	przebiegOdTextBox->Text = nullptr;
	przebiegDoTextBox->Text = nullptr;
	rokProdukcjiOdTextBox->Text = nullptr;
	rokProdukcjiDoTextBox->Text = nullptr;
	mocOdTextBox->Text = nullptr;
	mocDoTextBox->Text = nullptr;
	paliwoComboBox->SelectedIndex = NULL;
	nadwozieComboBox->SelectedIndex = NULL;
	pojemnoscOdTextBox->Text = nullptr;
	pojemnoscDoTextBox->Text = nullptr;
}

System::Void Komis::MainForm::dodajUzytkownikaButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Form^ rgForm = gcnew UzytkownikForm;
	rgForm->Show();
}

System::Void Komis::MainForm::daneUzytkownikaLabel_LinkClicked(System::Object ^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs ^ e)
{
	UzytkownikForm^ rgForm = gcnew UzytkownikForm(uzytkownik);
	rgForm->Show();
}

