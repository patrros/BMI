#pragma once

namespace BMI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;

	/// <summary>
	/// Summary for BMI3
	/// </summary>
	public ref class BMI3 : public System::Windows::Forms::Form
	{
	public:
		BMI3(void)
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
		~BMI3()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  WSTECZ;
	private: System::Windows::Forms::ListBox^  lista;


	public: 
	protected: 

	protected: 

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->WSTECZ = (gcnew System::Windows::Forms::Button());
			this->lista = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(153, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(184, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"TWOJE WYNIKI BMI :";
			this->label2->Click += gcnew System::EventHandler(this, &BMI3::label2_Click);
			// 
			// WSTECZ
			// 
			this->WSTECZ->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->WSTECZ->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->WSTECZ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->WSTECZ->Location = System::Drawing::Point(259, 336);
			this->WSTECZ->Name = L"WSTECZ";
			this->WSTECZ->Size = System::Drawing::Size(213, 23);
			this->WSTECZ->TabIndex = 2;
			this->WSTECZ->Text = L"WSTECZ";
			this->WSTECZ->UseVisualStyleBackColor = false;
			this->WSTECZ->Click += gcnew System::EventHandler(this, &BMI3::button1_Click);
			// 
			// lista
			// 
			this->lista->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->lista->FormattingEnabled = true;
			this->lista->ItemHeight = 18;
			this->lista->Location = System::Drawing::Point(99, 55);
			this->lista->Name = L"lista";
			this->lista->Size = System::Drawing::Size(313, 94);
			this->lista->TabIndex = 3;
			// 
			// BMI3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Yellow;
			this->ClientSize = System::Drawing::Size(484, 371);
			this->Controls->Add(this->lista);
			this->Controls->Add(this->WSTECZ);
			this->Controls->Add(this->label2);
			this->MaximumSize = System::Drawing::Size(500, 410);
			this->MinimumSize = System::Drawing::Size(500, 410);
			this->Name = L"BMI3";
			this->Text = L"BMI3";
			this->Load += gcnew System::EventHandler(this, &BMI3::BMI3_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BMI3_Load(System::Object^  sender, System::EventArgs^  e) {
				 FileInfo^ odczyt = gcnew FileInfo("dane_BMI.txt");
				 StreamReader^ wyswietl = odczyt->OpenText();

				 while(!wyswietl->EndOfStream)
					 lista->Items->Add("BMI z dnia (" + wyswietl->ReadLine() + ")" +  "\n wynosi:"+ "\n \n" + wyswietl->ReadLine() );
					
				 wyswietl->Close();

			 }
//	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
//			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Close();
			 }
	};
}
