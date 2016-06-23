#include "DodajPojazdForm.h"

void Komis::DodajPojazdForm::InitializeComponent()

{
	this->label1 = (gcnew System::Windows::Forms::Label());
	this->typComboBox = (gcnew System::Windows::Forms::ComboBox());
	this->label2 = (gcnew System::Windows::Forms::Label());
	this->markaTextBox = (gcnew System::Windows::Forms::TextBox());
	this->label3 = (gcnew System::Windows::Forms::Label());
	this->kategoriaComboBox = (gcnew System::Windows::Forms::ComboBox());
	this->label4 = (gcnew System::Windows::Forms::Label());
	this->modelTextBox = (gcnew System::Windows::Forms::TextBox());
	this->label5 = (gcnew System::Windows::Forms::Label());
	this->PaliwoComboBox = (gcnew System::Windows::Forms::ComboBox());
	this->label6 = (gcnew System::Windows::Forms::Label());
	this->nadwozieComboBox = (gcnew System::Windows::Forms::ComboBox());
	this->napedComboBox = (gcnew System::Windows::Forms::ComboBox());
	this->label7 = (gcnew System::Windows::Forms::Label());
	this->label8 = (gcnew System::Windows::Forms::Label());
	this->label9 = (gcnew System::Windows::Forms::Label());
	this->label10 = (gcnew System::Windows::Forms::Label());
	this->label11 = (gcnew System::Windows::Forms::Label());
	this->label12 = (gcnew System::Windows::Forms::Label());
	this->label13 = (gcnew System::Windows::Forms::Label());
	this->rokTextBox = (gcnew System::Windows::Forms::TextBox());
	this->pojemnoscTextBox = (gcnew System::Windows::Forms::TextBox());
	this->mocTextBox = (gcnew System::Windows::Forms::TextBox());
	this->przebiegTextBox = (gcnew System::Windows::Forms::TextBox());
	this->vinTextBox = (gcnew System::Windows::Forms::TextBox());
	this->kolorTextBox = (gcnew System::Windows::Forms::TextBox());
	this->dodajButton = (gcnew System::Windows::Forms::Button());
	this->anulujButton = (gcnew System::Windows::Forms::Button());
	this->szybyCheckBox = (gcnew System::Windows::Forms::CheckBox());
	this->automatCheckBox = (gcnew System::Windows::Forms::CheckBox());
	this->glosnomowiacyCheckBox = (gcnew System::Windows::Forms::CheckBox());
	this->nawigacjaCheckBox = (gcnew System::Windows::Forms::CheckBox());
	this->klimaCheckBox = (gcnew System::Windows::Forms::CheckBox());
	this->lusterkaCheckBox = (gcnew System::Windows::Forms::CheckBox());
	this->label14 = (gcnew System::Windows::Forms::Label());
	this->SuspendLayout();
	// 
	// label1
	// 
	this->label1->AutoSize = true;
	this->label1->Location = System::Drawing::Point(22, 14);
	this->label1->Name = L"label1";
	this->label1->Size = System::Drawing::Size(65, 13);
	this->label1->TabIndex = 0;
	this->label1->Text = L"Typ pojazdu";
	// 
	// typComboBox
	// 
	this->typComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->typComboBox->FormattingEnabled = true;
	this->typComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
		L"SAMOCHOD", L"CIEZAROWKA", L"POJAZD_WOJSKOWY",
			L"POJAZD_BUDOWLANY", L"INNE"
	});
	this->typComboBox->Location = System::Drawing::Point(93, 11);
	this->typComboBox->Name = L"typComboBox";
	this->typComboBox->Size = System::Drawing::Size(121, 21);
	this->typComboBox->TabIndex = 35;
	// 
	// label2
	// 
	this->label2->AutoSize = true;
	this->label2->Location = System::Drawing::Point(50, 68);
	this->label2->Name = L"label2";
	this->label2->Size = System::Drawing::Size(37, 13);
	this->label2->TabIndex = 2;
	this->label2->Text = L"Marka";
	// 
	// markaTextBox
	// 
	this->markaTextBox->Location = System::Drawing::Point(93, 65);
	this->markaTextBox->Name = L"markaTextBox";
	this->markaTextBox->Size = System::Drawing::Size(121, 20);
	this->markaTextBox->TabIndex = 3;
	// 
	// label3
	// 
	this->label3->AutoSize = true;
	this->label3->Location = System::Drawing::Point(35, 41);
	this->label3->Name = L"label3";
	this->label3->Size = System::Drawing::Size(52, 13);
	this->label3->TabIndex = 4;
	this->label3->Text = L"Kategoria";
	// 
	// kategoriaComboBox
	// 
	this->kategoriaComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->kategoriaComboBox->FormattingEnabled = true;
	this->kategoriaComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
		L"A", L"A1", L"B", L"BE", L"C", L"CE",
			L"C1", L"C1E", L"D", L"DE", L"D1", L"D1E", L"DODATKOWE_UPRAWNIENIA"
	});
	this->kategoriaComboBox->Location = System::Drawing::Point(93, 38);
	this->kategoriaComboBox->Name = L"kategoriaComboBox";
	this->kategoriaComboBox->Size = System::Drawing::Size(121, 21);
	this->kategoriaComboBox->TabIndex = 5;
	// 
	// label4
	// 
	this->label4->AutoSize = true;
	this->label4->Location = System::Drawing::Point(51, 94);
	this->label4->Name = L"label4";
	this->label4->Size = System::Drawing::Size(36, 13);
	this->label4->TabIndex = 6;
	this->label4->Text = L"Model";
	// 
	// modelTextBox
	// 
	this->modelTextBox->Location = System::Drawing::Point(93, 91);
	this->modelTextBox->Name = L"modelTextBox";
	this->modelTextBox->Size = System::Drawing::Size(121, 20);
	this->modelTextBox->TabIndex = 7;
	// 
	// label5
	// 
	this->label5->AutoSize = true;
	this->label5->Location = System::Drawing::Point(49, 146);
	this->label5->Name = L"label5";
	this->label5->Size = System::Drawing::Size(38, 13);
	this->label5->TabIndex = 8;
	this->label5->Text = L"Paliwo";
	// 
	// PaliwoComboBox
	// 
	this->PaliwoComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->PaliwoComboBox->FormattingEnabled = true;
	this->PaliwoComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
		L"DIESEL", L"BENZYNA", L"ELEKTRYCZNY", L"LPG",
			L"BENZYNA_LPG", L"HYBRYDOWY"
	});
	this->PaliwoComboBox->Location = System::Drawing::Point(93, 143);
	this->PaliwoComboBox->Name = L"PaliwoComboBox";
	this->PaliwoComboBox->Size = System::Drawing::Size(121, 21);
	this->PaliwoComboBox->TabIndex = 9;
	// 
	// label6
	// 
	this->label6->AutoSize = true;
	this->label6->Location = System::Drawing::Point(12, 173);
	this->label6->Name = L"label6";
	this->label6->Size = System::Drawing::Size(75, 13);
	this->label6->TabIndex = 10;
	this->label6->Text = L"Typ Nadwozia";
	// 
	// nadwozieComboBox
	// 
	this->nadwozieComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->nadwozieComboBox->FormattingEnabled = true;
	this->nadwozieComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
		L"SEDAN", L"HATCHBACK", L"KOMBI", L"PICKUP",
			L"KABRIOLET", L"MINIVAN", L"VAN", L"COUPE", L"INNY"
	});
	this->nadwozieComboBox->Location = System::Drawing::Point(93, 170);
	this->nadwozieComboBox->Name = L"nadwozieComboBox";
	this->nadwozieComboBox->Size = System::Drawing::Size(121, 21);
	this->nadwozieComboBox->TabIndex = 11;
	// 
	// napedComboBox
	// 
	this->napedComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->napedComboBox->FormattingEnabled = true;
	this->napedComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"TYL", L"PRZOD", L"4x4" });
	this->napedComboBox->Location = System::Drawing::Point(93, 197);
	this->napedComboBox->Name = L"napedComboBox";
	this->napedComboBox->Size = System::Drawing::Size(121, 21);
	this->napedComboBox->TabIndex = 12;
	// 
	// label7
	// 
	this->label7->AutoSize = true;
	this->label7->Location = System::Drawing::Point(48, 200);
	this->label7->Name = L"label7";
	this->label7->Size = System::Drawing::Size(39, 13);
	this->label7->TabIndex = 13;
	this->label7->Text = L"Napêd";
	// 
	// label8
	// 
	this->label8->AutoSize = true;
	this->label8->Location = System::Drawing::Point(28, 305);
	this->label8->Name = L"label8";
	this->label8->Size = System::Drawing::Size(59, 13);
	this->label8->TabIndex = 14;
	this->label8->Text = L"Numer VIN";
	// 
	// label9
	// 
	this->label9->AutoSize = true;
	this->label9->Location = System::Drawing::Point(35, 279);
	this->label9->Name = L"label9";
	this->label9->Size = System::Drawing::Size(48, 13);
	this->label9->TabIndex = 15;
	this->label9->Text = L"Przebieg";
	// 
	// label10
	// 
	this->label10->AutoSize = true;
	this->label10->Location = System::Drawing::Point(56, 331);
	this->label10->Name = L"label10";
	this->label10->Size = System::Drawing::Size(31, 13);
	this->label10->TabIndex = 16;
	this->label10->Text = L"Kolor";
	// 
	// label11
	// 
	this->label11->AutoSize = true;
	this->label11->Location = System::Drawing::Point(14, 120);
	this->label11->Name = L"label11";
	this->label11->Size = System::Drawing::Size(73, 13);
	this->label11->TabIndex = 17;
	this->label11->Text = L"Rok produkcji";
	// 
	// label12
	// 
	this->label12->AutoSize = true;
	this->label12->Location = System::Drawing::Point(59, 253);
	this->label12->Name = L"label12";
	this->label12->Size = System::Drawing::Size(28, 13);
	this->label12->TabIndex = 18;
	this->label12->Text = L"Moc";
	// 
	// label13
	// 
	this->label13->AutoSize = true;
	this->label13->Location = System::Drawing::Point(5, 227);
	this->label13->Name = L"label13";
	this->label13->Size = System::Drawing::Size(82, 13);
	this->label13->TabIndex = 19;
	this->label13->Text = L"Pojemnoœæ [cm]";
	// 
	// rokTextBox
	// 
	this->rokTextBox->Location = System::Drawing::Point(93, 117);
	this->rokTextBox->Name = L"rokTextBox";
	this->rokTextBox->Size = System::Drawing::Size(121, 20);
	this->rokTextBox->TabIndex = 20;
	// 
	// pojemnoscTextBox
	// 
	this->pojemnoscTextBox->Location = System::Drawing::Point(93, 224);
	this->pojemnoscTextBox->Name = L"pojemnoscTextBox";
	this->pojemnoscTextBox->Size = System::Drawing::Size(121, 20);
	this->pojemnoscTextBox->TabIndex = 21;
	// 
	// mocTextBox
	// 
	this->mocTextBox->Location = System::Drawing::Point(93, 250);
	this->mocTextBox->Name = L"mocTextBox";
	this->mocTextBox->Size = System::Drawing::Size(121, 20);
	this->mocTextBox->TabIndex = 22;
	// 
	// przebiegTextBox
	// 
	this->przebiegTextBox->Location = System::Drawing::Point(93, 276);
	this->przebiegTextBox->Name = L"przebiegTextBox";
	this->przebiegTextBox->Size = System::Drawing::Size(121, 20);
	this->przebiegTextBox->TabIndex = 23;
	// 
	// vinTextBox
	// 
	this->vinTextBox->Location = System::Drawing::Point(93, 302);
	this->vinTextBox->Name = L"vinTextBox";
	this->vinTextBox->Size = System::Drawing::Size(121, 20);
	this->vinTextBox->TabIndex = 24;
	// 
	// kolorTextBox
	// 
	this->kolorTextBox->Location = System::Drawing::Point(93, 328);
	this->kolorTextBox->Name = L"kolorTextBox";
	this->kolorTextBox->Size = System::Drawing::Size(121, 20);
	this->kolorTextBox->TabIndex = 25;
	// 
	// dodajButton
	// 
	this->dodajButton->Location = System::Drawing::Point(379, 325);
	this->dodajButton->Name = L"dodajButton";
	this->dodajButton->Size = System::Drawing::Size(75, 23);
	this->dodajButton->TabIndex = 26;
	this->dodajButton->Text = L"Dodaj";
	this->dodajButton->UseVisualStyleBackColor = true;
	this->dodajButton->Click += gcnew System::EventHandler(this, &DodajPojazdForm::dodajButton_Click);
	// 
	// anulujButton
	// 
	this->anulujButton->Location = System::Drawing::Point(277, 325);
	this->anulujButton->Name = L"anulujButton";
	this->anulujButton->Size = System::Drawing::Size(75, 23);
	this->anulujButton->TabIndex = 27;
	this->anulujButton->Text = L"Anuluj";
	this->anulujButton->UseVisualStyleBackColor = true;
	this->anulujButton->Click += gcnew System::EventHandler(this, &DodajPojazdForm::anulujButton_Click);
	// 
	// szybyCheckBox
	// 
	this->szybyCheckBox->AutoSize = true;
	this->szybyCheckBox->Location = System::Drawing::Point(237, 118);
	this->szybyCheckBox->Name = L"szybyCheckBox";
	this->szybyCheckBox->Size = System::Drawing::Size(110, 17);
	this->szybyCheckBox->TabIndex = 28;
	this->szybyCheckBox->Text = L"Elektryczne szyby";
	this->szybyCheckBox->UseVisualStyleBackColor = true;
	// 
	// automatCheckBox
	// 
	this->automatCheckBox->AutoSize = true;
	this->automatCheckBox->Location = System::Drawing::Point(381, 172);
	this->automatCheckBox->Name = L"automatCheckBox";
	this->automatCheckBox->Size = System::Drawing::Size(65, 17);
	this->automatCheckBox->TabIndex = 29;
	this->automatCheckBox->Text = L"Automat";
	this->automatCheckBox->UseVisualStyleBackColor = true;
	// 
	// glosnomowiacyCheckBox
	// 
	this->glosnomowiacyCheckBox->AutoSize = true;
	this->glosnomowiacyCheckBox->Location = System::Drawing::Point(237, 172);
	this->glosnomowiacyCheckBox->Name = L"glosnomowiacyCheckBox";
	this->glosnomowiacyCheckBox->Size = System::Drawing::Size(138, 17);
	this->glosnomowiacyCheckBox->TabIndex = 30;
	this->glosnomowiacyCheckBox->Text = L"Zestaw g³oœnomówi¹cy";
	this->glosnomowiacyCheckBox->UseVisualStyleBackColor = true;
	// 
	// nawigacjaCheckBox
	// 
	this->nawigacjaCheckBox->AutoSize = true;
	this->nawigacjaCheckBox->Location = System::Drawing::Point(381, 118);
	this->nawigacjaCheckBox->Name = L"nawigacjaCheckBox";
	this->nawigacjaCheckBox->Size = System::Drawing::Size(76, 17);
	this->nawigacjaCheckBox->TabIndex = 31;
	this->nawigacjaCheckBox->Text = L"Nawigacja";
	this->nawigacjaCheckBox->UseVisualStyleBackColor = true;
	// 
	// klimaCheckBox
	// 
	this->klimaCheckBox->AutoSize = true;
	this->klimaCheckBox->Location = System::Drawing::Point(381, 145);
	this->klimaCheckBox->Name = L"klimaCheckBox";
	this->klimaCheckBox->Size = System::Drawing::Size(84, 17);
	this->klimaCheckBox->TabIndex = 32;
	this->klimaCheckBox->Text = L"Klimatyzacja";
	this->klimaCheckBox->UseVisualStyleBackColor = true;
	// 
	// lusterkaCheckBox
	// 
	this->lusterkaCheckBox->AutoSize = true;
	this->lusterkaCheckBox->Location = System::Drawing::Point(237, 145);
	this->lusterkaCheckBox->Name = L"lusterkaCheckBox";
	this->lusterkaCheckBox->Size = System::Drawing::Size(125, 17);
	this->lusterkaCheckBox->TabIndex = 33;
	this->lusterkaCheckBox->Text = L"Elektryczne Lusterka";
	this->lusterkaCheckBox->UseVisualStyleBackColor = true;
	// 
	// label14
	// 
	this->label14->AutoSize = true;
	this->label14->Location = System::Drawing::Point(314, 97);
	this->label14->Name = L"label14";
	this->label14->Size = System::Drawing::Size(86, 13);
	this->label14->TabIndex = 34;
	this->label14->Text = L"WYPOSA¯ENIE";
	// 
	// DodajPojazdForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(477, 371);
	this->Controls->Add(this->label14);
	this->Controls->Add(this->lusterkaCheckBox);
	this->Controls->Add(this->klimaCheckBox);
	this->Controls->Add(this->nawigacjaCheckBox);
	this->Controls->Add(this->glosnomowiacyCheckBox);
	this->Controls->Add(this->automatCheckBox);
	this->Controls->Add(this->szybyCheckBox);
	this->Controls->Add(this->anulujButton);
	this->Controls->Add(this->dodajButton);
	this->Controls->Add(this->kolorTextBox);
	this->Controls->Add(this->vinTextBox);
	this->Controls->Add(this->przebiegTextBox);
	this->Controls->Add(this->mocTextBox);
	this->Controls->Add(this->pojemnoscTextBox);
	this->Controls->Add(this->rokTextBox);
	this->Controls->Add(this->label13);
	this->Controls->Add(this->label12);
	this->Controls->Add(this->label11);
	this->Controls->Add(this->label10);
	this->Controls->Add(this->label9);
	this->Controls->Add(this->label8);
	this->Controls->Add(this->label7);
	this->Controls->Add(this->napedComboBox);
	this->Controls->Add(this->nadwozieComboBox);
	this->Controls->Add(this->label6);
	this->Controls->Add(this->PaliwoComboBox);
	this->Controls->Add(this->label5);
	this->Controls->Add(this->modelTextBox);
	this->Controls->Add(this->label4);
	this->Controls->Add(this->kategoriaComboBox);
	this->Controls->Add(this->label3);
	this->Controls->Add(this->markaTextBox);
	this->Controls->Add(this->label2);
	this->Controls->Add(this->typComboBox);
	this->Controls->Add(this->label1);
	this->Name = L"DodajPojazdForm";
	this->Text = L"DodajPojazdForm";
	this->ResumeLayout(false);
	this->PerformLayout();

}

void Komis::DodajPojazdForm::DodajPojazd()
{

}

System::Void Komis::DodajPojazdForm::anulujButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	this->Hide();
}

System::Void Komis::DodajPojazdForm::dodajButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	Listy lista;
	Pojazd pojazd;
	bool isError = false;
	int tmp;

	pojazd.wyposazenie.automatycznaSkrzynia = this->automatCheckBox->Checked;
	pojazd.wyposazenie.elLusterka = this->lusterkaCheckBox->Checked;
	pojazd.wyposazenie.elSzyby = this->szybyCheckBox->Checked;
	pojazd.wyposazenie.klimatyzacja = this->klimaCheckBox->Checked;
	pojazd.wyposazenie.nawigacja = this->nawigacjaCheckBox->Checked;
	pojazd.wyposazenie.zestawGlosnomowiacy = this->glosnomowiacyCheckBox->Checked;

	pojazd.SetNazwaMarki(msclr::interop::marshal_as<std::string>(this->markaTextBox->Text));

	pojazd.SetNazwaModelu(msclr::interop::marshal_as<std::string>(this->modelTextBox->Text));

	if (this->rokTextBox->Text->Length == 4)
	{
		try 
		{
			tmp = Int32::Parse(this->rokTextBox->Text);
			pojazd.SetRokProdukcji(tmp);
		}
		catch (System::FormatException^ e)
		{
			MessageBox::Show("Niepoprawny format daty");
			isError = true;
		}
	}
	else
	{
		MessageBox::Show("Niepoprawny format daty");
		isError = true;
	}

	try
	{
		tmp = Int32::Parse(this->pojemnoscTextBox->Text);
		pojazd.SetPojemnosc(tmp);
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show("Niepoprawne dane w polu pojemnosc");
		isError = true;
	}

	try
	{
		tmp = Int32::Parse(this->mocTextBox->Text);
		pojazd.SetMoc(tmp);
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show("Niepoprawne dane w polu moc");
		isError = true;
	}

	try
	{
		tmp = Int32::Parse(this->przebiegTextBox->Text);
		pojazd.SetPrzebieg(tmp);
	}
	catch (System::FormatException^ e)
	{
		MessageBox::Show("Niepoprawne dane w polu przebieg");
		isError = true;
	}

	pojazd.SetVin(msclr::interop::marshal_as<std::string>(this->vinTextBox->Text));

	pojazd.SetKolor(msclr::interop::marshal_as<std::string>(this->kolorTextBox->Text));

	switch (this->kategoriaComboBox->SelectedIndex)
	{
	case 0:
		pojazd.SetKategoria(KategoriaPojazdu::A);
		break;
	case 1:
		pojazd.SetKategoria(KategoriaPojazdu::A1);
		break;
	case 2:
		pojazd.SetKategoria(KategoriaPojazdu::B);
		break;
	case 3:
		pojazd.SetKategoria(KategoriaPojazdu::BE);
		break;
	case 4:
		pojazd.SetKategoria(KategoriaPojazdu::C);
		break;
	case 5:
		pojazd.SetKategoria(KategoriaPojazdu::CE);
		break;
	case 6:
		pojazd.SetKategoria(KategoriaPojazdu::C1);
		break;
	case 7:
		pojazd.SetKategoria(KategoriaPojazdu::C1E);
		break;
	case 8:
		pojazd.SetKategoria(KategoriaPojazdu::D);
		break;
	case 9:
		pojazd.SetKategoria(KategoriaPojazdu::DE);
		break;
	case 10:
		pojazd.SetKategoria(KategoriaPojazdu::D1);
		break;
	case 11:
		pojazd.SetKategoria(KategoriaPojazdu::D1E);
		break;
	case 12:
		pojazd.SetKategoria(KategoriaPojazdu::DODATKOWE_UPRAWNIENIA);
		break;
	default:
		break;
	}

	switch (this->nadwozieComboBox->SelectedIndex)
	{
	case 0:
		pojazd.SetTypNadwozia(TypNadwozia::SEDAN);
		break;
	case 1:
		pojazd.SetTypNadwozia(TypNadwozia::HATCHBACK);
		break;
	case 2:
		pojazd.SetTypNadwozia(TypNadwozia::KOMBI);
		break;
	case 3:
		pojazd.SetTypNadwozia(TypNadwozia::PICKUP);
		break;
	case 4:
		pojazd.SetTypNadwozia(TypNadwozia::KABRIOLET);
		break;
	case 5:
		pojazd.SetTypNadwozia(TypNadwozia::MINIVAN);
		break;
	case 6:
		pojazd.SetTypNadwozia(TypNadwozia::VAN);
		break;
	case 7:
		pojazd.SetTypNadwozia(TypNadwozia::COUPE);
		break;
	case 8:
		pojazd.SetTypNadwozia(TypNadwozia::INNY);
		break;
	default:
		break;
	}

	switch (this->typComboBox->SelectedIndex)
	{
	case 0:
		pojazd.SetTyp(TypMaszyny::SAMOCHOD);
		break;
	case 1:
		pojazd.SetTyp(TypMaszyny::CIEZAROWKA);
		break;
	case 2:
		pojazd.SetTyp(TypMaszyny::POJAZD_WOJSKOWY);
		break;
	case 3:
		pojazd.SetTyp(TypMaszyny::POJAZD_BUDOWLANY);
		break;
	case 4:
		pojazd.SetTyp(TypMaszyny::INNE);
		break;

	default:
		break;
	}

	switch (this->PaliwoComboBox->SelectedIndex)
	{
	case 0:
		pojazd.SetRodzajPaliwa(Paliwo::DIESEL);
		break;
	case 1:
		pojazd.SetRodzajPaliwa(Paliwo::BENZYNA);
		break;
	case 2:
		pojazd.SetRodzajPaliwa(Paliwo::ELEKTRYCZNY);
		break;
	case 3:
		pojazd.SetRodzajPaliwa(Paliwo::LPG);
		break;
	case 4:
		pojazd.SetRodzajPaliwa(Paliwo::BENZYNA_LPG);
		break;
	case 5:
		pojazd.SetRodzajPaliwa(Paliwo::HYBRYDOWY);
		break;

	default:
		break;
	}

	switch (this->napedComboBox->SelectedIndex)
	{
	case 0:
		pojazd.SetNaped(Naped::TYL);
		break;
	case 1:
		pojazd.SetNaped(Naped::PRZOD);
		break;
	case 2:
		pojazd.SetNaped(Naped::NACZTERY);
		break;
	default:
		break;
	}

	if (!isError)
	{
		lista.WczytajListePojazdow();
		lista.ListaPojazdow.push_back(pojazd);
		lista.ZapiszListePojazdow();
		MessageBox::Show("Pomyslnie dodano pojazd");
		this->Hide();
	}
	else
	{
		MessageBox::Show("Dodawanie pojazdu nie powiodlo sie");
		isError = false;
	}
}

