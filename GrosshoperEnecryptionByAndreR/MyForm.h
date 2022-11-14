#pragma once

namespace GrosshoperEnecryptionByAndreR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ EnecryptionBox;
	private: System::Windows::Forms::Button^ Enecrypt;
	private: System::Windows::Forms::Button^ Decrypt;
	private: System::Windows::Forms::Label^ Data;
	private: System::Windows::Forms::Label^ Data_Exist;
	private: System::Windows::Forms::TextBox^ Exsist_Box;
	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->EnecryptionBox = (gcnew System::Windows::Forms::TextBox());
			this->Enecrypt = (gcnew System::Windows::Forms::Button());
			this->Decrypt = (gcnew System::Windows::Forms::Button());
			this->Data = (gcnew System::Windows::Forms::Label());
			this->Data_Exist = (gcnew System::Windows::Forms::Label());
			this->Exsist_Box = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// EnecryptionBox
			// 
			this->EnecryptionBox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->EnecryptionBox->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->EnecryptionBox->Location = System::Drawing::Point(150, 23);
			this->EnecryptionBox->Multiline = true;
			this->EnecryptionBox->Name = L"EnecryptionBox";
			this->EnecryptionBox->Size = System::Drawing::Size(424, 35);
			this->EnecryptionBox->TabIndex = 1;
			// 
			// Enecrypt
			// 
			this->Enecrypt->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Enecrypt->ForeColor = System::Drawing::SystemColors::Control;
			this->Enecrypt->Location = System::Drawing::Point(150, 64);
			this->Enecrypt->Name = L"Enecrypt";
			this->Enecrypt->Size = System::Drawing::Size(108, 41);
			this->Enecrypt->TabIndex = 2;
			this->Enecrypt->Text = L"Enecrypt";
			this->Enecrypt->UseVisualStyleBackColor = false;
			// 
			// Decrypt
			// 
			this->Decrypt->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Decrypt->ForeColor = System::Drawing::SystemColors::Control;
			this->Decrypt->Location = System::Drawing::Point(466, 64);
			this->Decrypt->Name = L"Decrypt";
			this->Decrypt->Size = System::Drawing::Size(108, 41);
			this->Decrypt->TabIndex = 3;
			this->Decrypt->Text = L"Decrypt";
			this->Decrypt->UseVisualStyleBackColor = false;
			// 
			// Data
			// 
			this->Data->AutoSize = true;
			this->Data->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Data->Location = System::Drawing::Point(13, 23);
			this->Data->Name = L"Data";
			this->Data->Size = System::Drawing::Size(131, 31);
			this->Data->TabIndex = 4;
			this->Data->Text = L"Data Row";
			// 
			// Data_Exist
			// 
			this->Data_Exist->AutoSize = true;
			this->Data_Exist->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Data_Exist->Location = System::Drawing::Point(13, 123);
			this->Data_Exist->Name = L"Data_Exist";
			this->Data_Exist->Size = System::Drawing::Size(132, 31);
			this->Data_Exist->TabIndex = 5;
			this->Data_Exist->Text = L"Exist Sum";
			// 
			// Exsist_Box
			// 
			this->Exsist_Box->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->Exsist_Box->ForeColor = System::Drawing::SystemColors::MenuBar;
			this->Exsist_Box->Location = System::Drawing::Point(159, 119);
			this->Exsist_Box->Multiline = true;
			this->Exsist_Box->Name = L"Exsist_Box";
			this->Exsist_Box->Size = System::Drawing::Size(424, 35);
			this->Exsist_Box->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(595, 180);
			this->Controls->Add(this->Exsist_Box);
			this->Controls->Add(this->Data_Exist);
			this->Controls->Add(this->Data);
			this->Controls->Add(this->Decrypt);
			this->Controls->Add(this->Enecrypt);
			this->Controls->Add(this->EnecryptionBox);
			this->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Opacity = 0.99;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
