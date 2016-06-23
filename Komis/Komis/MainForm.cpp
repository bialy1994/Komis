#include "MainForm.h"
#include "DodajPojazdForm.h"

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
