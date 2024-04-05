#pragma once
#include <Windows.h>
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include "controller.h"
namespace CSAT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace controllerNameSpace;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ chooseFileButton;
	private: System::Windows::Forms::TextBox^ originTextBox;
	private: System::Windows::Forms::TextBox^ keyTextBox;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ openDecodedBT;

	private: System::Windows::Forms::TextBox^ decodedFileTextBox;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ openEncryptedBT;

	private: System::Windows::Forms::TextBox^ encrytedFileTextBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ encodingTimeTextBox;
	private: System::Windows::Forms::TextBox^ decodingTextBox;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ Plaintext;
	private: System::Windows::Forms::TextBox^ plaintextData;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ encryptedDataTextBox;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ decodedDataTextBox;
	private: System::Windows::Forms::Panel^ panel2;










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->keyTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->openDecodedBT = (gcnew System::Windows::Forms::Button());
			this->decodedFileTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->openEncryptedBT = (gcnew System::Windows::Forms::Button());
			this->encrytedFileTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->chooseFileButton = (gcnew System::Windows::Forms::Button());
			this->originTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->encodingTimeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->decodingTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Plaintext = (gcnew System::Windows::Forms::Label());
			this->plaintextData = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->encryptedDataTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->decodedDataTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->keyTextBox);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->openDecodedBT);
			this->panel1->Controls->Add(this->decodedFileTextBox);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->openEncryptedBT);
			this->panel1->Controls->Add(this->encrytedFileTextBox);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->chooseFileButton);
			this->panel1->Controls->Add(this->originTextBox);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 23);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(633, 425);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(350, 153);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(89, 48);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Decode";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(146, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 49);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Encrypt";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// keyTextBox
			// 
			this->keyTextBox->Location = System::Drawing::Point(146, 94);
			this->keyTextBox->Multiline = true;
			this->keyTextBox->Name = L"keyTextBox";
			this->keyTextBox->Size = System::Drawing::Size(285, 30);
			this->keyTextBox->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(16, 93);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 22);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Key";
			// 
			// openDecodedBT
			// 
			this->openDecodedBT->Location = System::Drawing::Point(459, 351);
			this->openDecodedBT->Name = L"openDecodedBT";
			this->openDecodedBT->Size = System::Drawing::Size(86, 29);
			this->openDecodedBT->TabIndex = 8;
			this->openDecodedBT->Text = L"Open";
			this->openDecodedBT->UseVisualStyleBackColor = true;
			// 
			// decodedFileTextBox
			// 
			this->decodedFileTextBox->Location = System::Drawing::Point(146, 332);
			this->decodedFileTextBox->Multiline = true;
			this->decodedFileTextBox->Name = L"decodedFileTextBox";
			this->decodedFileTextBox->Size = System::Drawing::Size(285, 61);
			this->decodedFileTextBox->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 331);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 22);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Decoded file";
			// 
			// openEncryptedBT
			// 
			this->openEncryptedBT->Location = System::Drawing::Point(459, 255);
			this->openEncryptedBT->Name = L"openEncryptedBT";
			this->openEncryptedBT->Size = System::Drawing::Size(86, 32);
			this->openEncryptedBT->TabIndex = 5;
			this->openEncryptedBT->Text = L"Open";
			this->openEncryptedBT->UseVisualStyleBackColor = true;
			// 
			// encrytedFileTextBox
			// 
			this->encrytedFileTextBox->Location = System::Drawing::Point(146, 242);
			this->encrytedFileTextBox->Multiline = true;
			this->encrytedFileTextBox->Name = L"encrytedFileTextBox";
			this->encrytedFileTextBox->Size = System::Drawing::Size(285, 64);
			this->encrytedFileTextBox->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 245);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(122, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Encrypted file";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// chooseFileButton
			// 
			this->chooseFileButton->Location = System::Drawing::Point(459, 47);
			this->chooseFileButton->Name = L"chooseFileButton";
			this->chooseFileButton->Size = System::Drawing::Size(86, 31);
			this->chooseFileButton->TabIndex = 2;
			this->chooseFileButton->Text = L"Choose file";
			this->chooseFileButton->UseVisualStyleBackColor = true;
			this->chooseFileButton->Click += gcnew System::EventHandler(this, &MyForm::chooseFileButton_Click);
			// 
			// originTextBox
			// 
			this->originTextBox->Location = System::Drawing::Point(146, 33);
			this->originTextBox->Multiline = true;
			this->originTextBox->Name = L"originTextBox";
			this->originTextBox->Size = System::Drawing::Size(285, 55);
			this->originTextBox->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"File";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(103, 476);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(132, 22);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Enconding time";
			// 
			// encodingTimeTextBox
			// 
			this->encodingTimeTextBox->Location = System::Drawing::Point(250, 476);
			this->encodingTimeTextBox->Multiline = true;
			this->encodingTimeTextBox->Name = L"encodingTimeTextBox";
			this->encodingTimeTextBox->Size = System::Drawing::Size(201, 30);
			this->encodingTimeTextBox->TabIndex = 13;
			// 
			// decodingTextBox
			// 
			this->decodingTextBox->Location = System::Drawing::Point(906, 476);
			this->decodingTextBox->Multiline = true;
			this->decodingTextBox->Name = L"decodingTextBox";
			this->decodingTextBox->Size = System::Drawing::Size(201, 30);
			this->decodingTextBox->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(759, 476);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 22);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Decoding time";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// Plaintext
			// 
			this->Plaintext->AutoSize = true;
			this->Plaintext->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Plaintext->Location = System::Drawing::Point(23, 28);
			this->Plaintext->Name = L"Plaintext";
			this->Plaintext->Size = System::Drawing::Size(79, 22);
			this->Plaintext->TabIndex = 13;
			this->Plaintext->Text = L"Plaintext";
			// 
			// plaintextData
			// 
			this->plaintextData->Location = System::Drawing::Point(27, 53);
			this->plaintextData->Multiline = true;
			this->plaintextData->Name = L"plaintextData";
			this->plaintextData->Size = System::Drawing::Size(479, 80);
			this->plaintextData->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(23, 148);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(133, 22);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Encrypted  data";
			// 
			// encryptedDataTextBox
			// 
			this->encryptedDataTextBox->Location = System::Drawing::Point(27, 177);
			this->encryptedDataTextBox->Multiline = true;
			this->encryptedDataTextBox->Name = L"encryptedDataTextBox";
			this->encryptedDataTextBox->Size = System::Drawing::Size(479, 86);
			this->encryptedDataTextBox->TabIndex = 16;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(23, 280);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(119, 22);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Decoded data";
			// 
			// decodedDataTextBox
			// 
			this->decodedDataTextBox->Location = System::Drawing::Point(27, 308);
			this->decodedDataTextBox->Multiline = true;
			this->decodedDataTextBox->Name = L"decodedDataTextBox";
			this->decodedDataTextBox->Size = System::Drawing::Size(479, 81);
			this->decodedDataTextBox->TabIndex = 18;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->decodedDataTextBox);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->encryptedDataTextBox);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->plaintextData);
			this->panel2->Controls->Add(this->Plaintext);
			this->panel2->Location = System::Drawing::Point(674, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(524, 421);
			this->panel2->TabIndex = 16;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Turquoise;
			this->ClientSize = System::Drawing::Size(1221, 554);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->decodingTextBox);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->encodingTimeTextBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chooseFileButton_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
	openFileDialog->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog->Title = "Open Text File";

	if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		try {
			String^ fileName = openFileDialog->FileName;
			String^ filePath = openFileDialog->FileName; // Get the file path
			String^ fileContent = System::IO::File::ReadAllText(fileName);
			plaintextData->Text = fileContent;
			originTextBox->Text = filePath;

			

		}
		catch (Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (keyTextBox->Text == ""&& originTextBox->Text=="") {
		MessageBox::Show("Please enter key and choose file", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (originTextBox->Text == "") {
		MessageBox::Show("Please choose file", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (keyTextBox->Text == "") {
		MessageBox::Show("Please enter key", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		String^ fileName = "C:/Users/Admin/OneDrive - actvn.edu.vn/Máy tính/encryptedData.txt";
		String^ key = keyTextBox->Text;
		String^ filePath = originTextBox->Text;

		std::string keyStr = msclr::interop::marshal_as<std::string>(key);
		std::string filePathStr = msclr::interop::marshal_as<std::string>(filePath);

		std::string time=	controllerNameSpace::perform_Encryption_DES(filePathStr, keyStr);
		String^ encryptedTime = msclr::interop::marshal_as<String^>(time);

		encodingTimeTextBox->Text = encryptedTime;
		String^ encryptedData = System::IO::File::ReadAllText(fileName);
		encrytedFileTextBox->Text = fileName;
		encryptedDataTextBox->Text = encryptedData;
	// std::string plaintext_hex = controllerNameSpace::read_data(filePathStr);
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (keyTextBox->Text == "" && originTextBox->Text == "") {
		MessageBox::Show("Please enter key and choose file", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (originTextBox->Text == "") {
		MessageBox::Show("Please choose file", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else if (keyTextBox->Text == "") {
		MessageBox::Show("Please enter key", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else {
		String^ fileName = "C:/Users/Admin/OneDrive - actvn.edu.vn/Máy tính/output.txt";
		String^ key = keyTextBox->Text;
		String^ filePath = originTextBox->Text;

		std::string keyStr = msclr::interop::marshal_as<std::string>(key);
		std::string filePathStr = msclr::interop::marshal_as<std::string>(filePath);

		std::string time = controllerNameSpace::perform_Decryption_DES(filePathStr, keyStr);
		String^ decodedTime = msclr::interop::marshal_as<String^>(time);

		decodingTextBox->Text = decodedTime;
		
		String^ encryptedData = System::IO::File::ReadAllText(fileName);
		decodedFileTextBox->Text = fileName;
		decodedDataTextBox->Text = encryptedData;
		// std::string plaintext_hex = controllerNameSpace::read_data(filePathStr);
	}
}
};
}
