#include <msclr\marshal_cppstd.h>
#include<fstream>

namespace Komis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class UstawieniaBazyDanychForm : public System::Windows::Forms::Form
	{
	public:
		UstawieniaBazyDanychForm(void)
		{
			InitializeComponent();
		}

	protected:
		~UstawieniaBazyDanychForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  sourceTextBox;
	private: System::Windows::Forms::TextBox^  portTextBox;
	private: System::Windows::Forms::TextBox^  usernameTextBox;
	private: System::Windows::Forms::TextBox^  passwordTextBox;
	protected:

	protected:



	private: System::Windows::Forms::Label^  sourceLabel;
	private: System::Windows::Forms::Label^  portLabel;
	private: System::Windows::Forms::Label^  usernameLabel;
	private: System::Windows::Forms::Label^  passwordLabel;
	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::Button^  cancelButton;

	private:
		System::ComponentModel::Container ^components;

		void InitializeComponent(void)
		{
			this->sourceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->portTextBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->sourceLabel = (gcnew System::Windows::Forms::Label());
			this->portLabel = (gcnew System::Windows::Forms::Label());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// sourceTextBox
			// 
			this->sourceTextBox->Location = System::Drawing::Point(136, 20);
			this->sourceTextBox->Name = L"sourceTextBox";
			this->sourceTextBox->Size = System::Drawing::Size(100, 20);
			this->sourceTextBox->TabIndex = 0;
			// 
			// portTextBox
			// 
			this->portTextBox->Location = System::Drawing::Point(136, 46);
			this->portTextBox->Name = L"portTextBox";
			this->portTextBox->Size = System::Drawing::Size(100, 20);
			this->portTextBox->TabIndex = 1;
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->Location = System::Drawing::Point(136, 73);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(100, 20);
			this->usernameTextBox->TabIndex = 2;
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Location = System::Drawing::Point(136, 100);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(100, 20);
			this->passwordTextBox->TabIndex = 3;
			// 
			// sourceLabel
			// 
			this->sourceLabel->AutoSize = true;
			this->sourceLabel->Location = System::Drawing::Point(28, 20);
			this->sourceLabel->Name = L"sourceLabel";
			this->sourceLabel->Size = System::Drawing::Size(39, 13);
			this->sourceLabel->TabIndex = 4;
			this->sourceLabel->Text = L"ród³o";
			// 
			// portLabel
			// 
			this->portLabel->AutoSize = true;
			this->portLabel->Location = System::Drawing::Point(28, 49);
			this->portLabel->Name = L"portLabel";
			this->portLabel->Size = System::Drawing::Size(37, 13);
			this->portLabel->TabIndex = 5;
			this->portLabel->Text = L"PORT";
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Location = System::Drawing::Point(28, 76);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(102, 13);
			this->usernameLabel->TabIndex = 6;
			this->usernameLabel->Text = L"Nazwa u¿ytkownika";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Location = System::Drawing::Point(28, 103);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(36, 13);
			this->passwordLabel->TabIndex = 7;
			this->passwordLabel->Text = L"Has³o";
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(31, 134);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(75, 23);
			this->saveButton->TabIndex = 8;
			this->saveButton->Text = L"Zapisz";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &UstawieniaBazyDanychForm::saveButton_Click);
			// 
			// cancelButton
			// 
			this->cancelButton->Location = System::Drawing::Point(161, 134);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(75, 23);
			this->cancelButton->TabIndex = 9;
			this->cancelButton->Text = L"Anuluj";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &UstawieniaBazyDanychForm::cancelButton_Click);
			// 
			// UstawieniaBazyDanychForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(267, 178);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->usernameLabel);
			this->Controls->Add(this->portLabel);
			this->Controls->Add(this->sourceLabel);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->usernameTextBox);
			this->Controls->Add(this->portTextBox);
			this->Controls->Add(this->sourceTextBox);
			this->Name = L"UstawieniaBazyDanychForm";
			this->Text = L"Ustawienia Bazy Danych";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e);
};
}
