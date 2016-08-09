#pragma once
#include"MainForm.h"
#include"UstawieniaBazyDanychForm.h"

namespace Komis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void);

	protected:
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  LoginLabel;
	private: System::Windows::Forms::Label^  hasloLabel;
	private: System::Windows::Forms::TextBox^  loginTextBox;
	private: System::Windows::Forms::TextBox^  hasloTextBox;
	private: System::Windows::Forms::Button^  loginButton;
	private: System::Windows::Forms::LinkLabel^  databaseSettingsLabel;
	private: System::ComponentModel::Container ^components;
	private: void InitializeComponent(void);
	private: System::Void loginButton_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void databaseSettingsLabel_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e);
	};
}
