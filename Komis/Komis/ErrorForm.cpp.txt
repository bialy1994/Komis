#include "ErrorForm.h"

Komis::ErrorForm::ErrorForm(System::String^ message)
{
	InitializeComponent();
	this->textBox1->Text = message;
}