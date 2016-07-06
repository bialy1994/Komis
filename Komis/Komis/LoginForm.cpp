#include "LoginForm.h"

Komis::LoginForm::LoginForm()
{
		InitializeComponent();
}

void Komis::LoginForm::InitializeComponent()
{
	this->LoginLabel = (gcnew System::Windows::Forms::Label());
	this->hasloLabel = (gcnew System::Windows::Forms::Label());
	this->loginTextBox = (gcnew System::Windows::Forms::TextBox());
	this->hasloTextBox = (gcnew System::Windows::Forms::TextBox());
	this->loginButton = (gcnew System::Windows::Forms::Button());
	this->SuspendLayout();
	// 
	// LoginLabel
	// 
	this->LoginLabel->AutoSize = true;
	this->LoginLabel->Location = System::Drawing::Point(12, 28);
	this->LoginLabel->Name = L"LoginLabel";
	this->LoginLabel->Size = System::Drawing::Size(33, 13);
	this->LoginLabel->TabIndex = 0;
	this->LoginLabel->Text = L"Login";
	// 
	// hasloLabel
	// 
	this->hasloLabel->AutoSize = true;
	this->hasloLabel->Location = System::Drawing::Point(12, 54);
	this->hasloLabel->Name = L"hasloLabel";
	this->hasloLabel->Size = System::Drawing::Size(36, 13);
	this->hasloLabel->TabIndex = 1;
	this->hasloLabel->Text = L"Has³o";
	// 
	// loginTextBox
	// 
	this->loginTextBox->Location = System::Drawing::Point(64, 25);
	this->loginTextBox->Name = L"loginTextBox";
	this->loginTextBox->Size = System::Drawing::Size(119, 20);
	this->loginTextBox->TabIndex = 2;
	// 
	// hasloTextBox
	// 
	this->hasloTextBox->Location = System::Drawing::Point(64, 51);
	this->hasloTextBox->Name = L"hasloTextBox";
	this->hasloTextBox->PasswordChar = '*';
	this->hasloTextBox->Size = System::Drawing::Size(119, 20);
	this->hasloTextBox->TabIndex = 3;
	// 
	// loginButton
	// 
	this->loginButton->Location = System::Drawing::Point(108, 94);
	this->loginButton->Name = L"loginButton";
	this->loginButton->Size = System::Drawing::Size(75, 23);
	this->loginButton->TabIndex = 4;
	this->loginButton->Text = L"Zaloguj";
	this->loginButton->UseVisualStyleBackColor = true;
	this->loginButton->Click += gcnew System::EventHandler(this, &LoginForm::loginButton_Click);
	// 
	// LoginForm
	// 
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->ClientSize = System::Drawing::Size(195, 131);
	this->Controls->Add(this->loginButton);
	this->Controls->Add(this->hasloTextBox);
	this->Controls->Add(this->loginTextBox);
	this->Controls->Add(this->hasloLabel);
	this->Controls->Add(this->LoginLabel);
	this->Name = L"LoginForm";
	this->Text = L"Logowanie";
	this->ResumeLayout(false);
	this->PerformLayout();

}

System::Void Komis::LoginForm::loginButton_Click(System::Object^  sender, System::EventArgs^  e)
{
	Listy lista;
	lista.PobierzZBazyUzytkownikow();
	std::list<Uzytkownik>::iterator iterator;

	for(iterator = lista.ListaUzytkownikow.begin(); iterator != lista.ListaUzytkownikow.end(); ++iterator)
	{
		if(loginTextBox->Text == msclr::interop::marshal_as<System::String^>(iterator->login))
		{
			if(hasloTextBox->Text == msclr::interop::marshal_as<System::String^>(iterator->haslo))
			{
				Uzytkownik uzytkownik = *iterator;
				Form^ rgForm = gcnew Komis::MainForm(uzytkownik);
				rgForm->Show();
				this->Hide();
				break;
			}
		}
	}
	if(iterator==lista.ListaUzytkownikow.end())
	{
		MessageBox::Show("Niepoprawne dane");
		lista.ListaUzytkownikow.clear();
	}
		
}