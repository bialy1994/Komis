#include "UzytkownikForm.h"
#include <msclr\marshal_cppstd.h>

void Komis::UzytkownikForm::InitializeComponent(void)
{
	this->dodajButton = (gcnew System::Windows::Forms::Button());
	this->anulujButton = (gcnew System::Windows::Forms::Button());
	this->imieLabel = (gcnew System::Windows::Forms::Label());
	this->nazwiskoLabel = (gcnew System::Windows::Forms::Label());
	this->hasloLabel = (gcnew System::Windows::Forms::Label());
	this->uprawnieniaLabel = (gcnew System::Windows::Forms::Label());
	this->loginLabel = (gcnew System::Windows::Forms::Label());
	this->nazwiskoTextBox = (gcnew System::Windows::Forms::TextBox());
	this->hasloTextBox = (gcnew System::Windows::Forms::TextBox());
	this->loginTextBox = (gcnew System::Windows::Forms::TextBox());
	this->imieTextBox = (gcnew System::Windows::Forms::TextBox());
	this->uprawnieniaComboBox = (gcnew System::Windows::Forms::ComboBox());
	this->SuspendLayout();
	// 
	// dodajButton
	// 
		this->dodajButton->Location = System::Drawing::Point(127, 165);
		this->dodajButton->Name = L"dodajButton";
		this->dodajButton->Size = System::Drawing::Size(75, 23);
		this->dodajButton->TabIndex = 0;
		this->dodajButton->Text = L"Dodaj";
		this->dodajButton->UseVisualStyleBackColor = true;
		this->dodajButton->Click += gcnew System::EventHandler(this, &UzytkownikForm::dodajButton_Click);
	// 
	// anulujButton
	// 
	this->anulujButton->Location = System::Drawing::Point(21, 165);
	this->anulujButton->Name = L"anulujButton";
	this->anulujButton->Size = System::Drawing::Size(75, 23);
	this->anulujButton->TabIndex = 1;
	this->anulujButton->Text = L"Anuluj";
	this->anulujButton->UseVisualStyleBackColor = true;
	this->anulujButton->Click += gcnew System::EventHandler(this, &UzytkownikForm::anulujButton_Click);
	// 
	// imieLabel
	// 
	this->imieLabel->AutoSize = true;
	this->imieLabel->Location = System::Drawing::Point(18, 24);
	this->imieLabel->Name = L"imieLabel";
	this->imieLabel->Size = System::Drawing::Size(26, 13);
	this->imieLabel->TabIndex = 2;
	this->imieLabel->Text = L"Imie";
	// 
	// nazwiskoLabel
	// 
	this->nazwiskoLabel->AutoSize = true;
	this->nazwiskoLabel->Location = System::Drawing::Point(18, 50);
	this->nazwiskoLabel->Name = L"nazwiskoLabel";
	this->nazwiskoLabel->Size = System::Drawing::Size(53, 13);
	this->nazwiskoLabel->TabIndex = 3;
	this->nazwiskoLabel->Text = L"Nazwisko";
	// 
	// hasloLabel
	// 
	this->hasloLabel->AutoSize = true;
	this->hasloLabel->Location = System::Drawing::Point(18, 102);
	this->hasloLabel->Name = L"hasloLabel";
	this->hasloLabel->Size = System::Drawing::Size(34, 13);
	this->hasloLabel->TabIndex = 4;
	this->hasloLabel->Text = L"Haslo";
	// 
	// uprawnieniaLabel
	// 
	this->uprawnieniaLabel->AutoSize = true;
	this->uprawnieniaLabel->Location = System::Drawing::Point(18, 128);
	this->uprawnieniaLabel->Name = L"uprawnieniaLabel";
	this->uprawnieniaLabel->Size = System::Drawing::Size(66, 13);
	this->uprawnieniaLabel->TabIndex = 5;
	this->uprawnieniaLabel->Text = L"Uprawnienia";
	// 
	// loginLabel
	// 
	this->loginLabel->AutoSize = true;
	this->loginLabel->Location = System::Drawing::Point(18, 76);
	this->loginLabel->Name = L"loginLabel";
	this->loginLabel->Size = System::Drawing::Size(33, 13);
	this->loginLabel->TabIndex = 6;
	this->loginLabel->Text = L"Login";
	// 
	// nazwiskoTextBox
	// 
	this->nazwiskoTextBox->Location = System::Drawing::Point(102, 47);
	this->nazwiskoTextBox->Name = L"nazwiskoTextBox";
	this->nazwiskoTextBox->Size = System::Drawing::Size(100, 20);
	this->nazwiskoTextBox->TabIndex = 7;
	// 
	// hasloTextBox
	// 
	this->hasloTextBox->Location = System::Drawing::Point(102, 99);
	this->hasloTextBox->Name = L"hasloTextBox";
	this->hasloTextBox->Size = System::Drawing::Size(100, 20);
	this->hasloTextBox->TabIndex = 8;
	// 
	// loginTextBox
	// 
	this->loginTextBox->Location = System::Drawing::Point(102, 73);
	this->loginTextBox->Name = L"loginTextBox";
	this->loginTextBox->Size = System::Drawing::Size(100, 20);
	this->loginTextBox->TabIndex = 9;
	// 
	// imieTextBox
	// 
	this->imieTextBox->Location = System::Drawing::Point(102, 21);
	this->imieTextBox->Name = L"imieTextBox";
	this->imieTextBox->Size = System::Drawing::Size(100, 20);
	this->imieTextBox->TabIndex = 11;
	// 
	// uprawnieniaComboBox
	// 
	this->uprawnieniaComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
	this->uprawnieniaComboBox->FormattingEnabled = true;
	this->uprawnieniaComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ADMIN", L"USER" });
	this->uprawnieniaComboBox->Location = System::Drawing::Point(102, 125);
	this->uprawnieniaComboBox->Name = L"uprawnieniaComboBox";
	this->uprawnieniaComboBox->Size = System::Drawing::Size(100, 21);
	this->uprawnieniaComboBox->TabIndex = 12;
	// 
	// UzytkownikForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(224, 205);
	this->Controls->Add(this->uprawnieniaComboBox);
	this->Controls->Add(this->imieTextBox);
	this->Controls->Add(this->loginTextBox);
	this->Controls->Add(this->hasloTextBox);
	this->Controls->Add(this->nazwiskoTextBox);
	this->Controls->Add(this->loginLabel);
	this->Controls->Add(this->uprawnieniaLabel);
	this->Controls->Add(this->hasloLabel);
	this->Controls->Add(this->nazwiskoLabel);
	this->Controls->Add(this->imieLabel);
	this->Controls->Add(this->anulujButton);
	this->Controls->Add(this->dodajButton);
	this->Name = L"UzytkownikForm";
	this->Text = L"UzytkownikForm";
	this->ResumeLayout(false);
	this->PerformLayout();

}

System::Void Komis::UzytkownikForm::dodajButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Listy lista;
	Uzytkownik uzytkownik;
	bool isError = false;

	if(!System::String::IsNullOrEmpty(imieTextBox->Text))
		uzytkownik.imie = msclr::interop::marshal_as<std::string>(imieTextBox->Text);
	else
		isError = true;
	if (!System::String::IsNullOrEmpty(nazwiskoTextBox->Text))
		uzytkownik.nazwisko = msclr::interop::marshal_as<std::string>(nazwiskoTextBox->Text);
	else
		isError = true;
	if (!System::String::IsNullOrEmpty(loginTextBox->Text))
		uzytkownik.login = msclr::interop::marshal_as<std::string>(loginTextBox->Text);
	else
		isError = true;
	if (!System::String::IsNullOrEmpty(hasloTextBox->Text))
		uzytkownik.haslo = msclr::interop::marshal_as<std::string>(hasloTextBox->Text);
	else
		isError = true;

	switch(this->uprawnieniaComboBox->SelectedIndex)
	{
	case 0:
		uzytkownik.uprawnienia = Uprawnienia::ADMIN;
		break;
	case 1:
		uzytkownik.uprawnienia = Uprawnienia::SPRZEDAWCA;
		break;
	}

	if (!isError)
	{
		lista.DodajDoBazyUzytkownikow(uzytkownik);
		MessageBox::Show("Pomyslnie dodano uzytkownika");
		this->Hide();
	}
	else
	{
		MessageBox::Show("Dodawanie uzytkownika nie powiodlo sie! \n Wszystkie pola wymagane");
		isError = false;
	}
}

System::Void Komis::UzytkownikForm::anulujButton_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	this->Hide();
}
