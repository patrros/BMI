#pragma once
#include<string>
#include<fstream>
#include"BMI1.h"
#include"BMI2.h"
#include"BMI3.h"
#include<cmath>
namespace BMI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace IO;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	public: 
	private: System::Windows::Forms::Button^  button2;
	public: System::Windows::Forms::TextBox^  textBox1;

	public: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::Label^  label1;
	private: 

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::MonthCalendar^  kalendarz;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::ComponentModel::IContainer^  components;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->kalendarz = (gcnew System::Windows::Forms::MonthCalendar());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(90, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 56);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Oblicz BMI";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(3, 240);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 70);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Granice wagowe dla podanego wzrostu";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->textBox1->Location = System::Drawing::Point(31, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 29);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->textBox2->Location = System::Drawing::Point(185, 44);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 29);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(166, 240);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(157, 70);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Skala BMI";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(74, 173);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 33);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Twoje BMI";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Yellow;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(185, 327);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 40);
			this->button4->TabIndex = 6;
			this->button4->Text = L"WYJŒCIE";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// kalendarz
			// 
			this->kalendarz->Enabled = false;
			this->kalendarz->Location = System::Drawing::Point(317, 44);
			this->kalendarz->MaxSelectionCount = 1;
			this->kalendarz->Name = L"kalendarz";
			this->kalendarz->TabIndex = 7;
			this->kalendarz->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Form1::monthCalendar1_DateChanged);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(329, 240);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(157, 70);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Zapisz swoje BMI";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(45, 25);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 16);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Wzrost [m]";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(238)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(202, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 16);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Waga [kg]";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(491, 371);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->kalendarz);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"BMI";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	public: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			 }

public: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 
		 }

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 

float wartosc = Double::Parse(textBox2->Text)/ (Double::Parse(textBox1->Text)*Double::Parse(textBox1->Text));
wartosc = Math::Round(wartosc,1);
label1->Text = wartosc.ToString();
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 BMI1^ ZMIENNA = gcnew BMI1;
			float wartosc1 = Double::Parse(textBox1->Text) * Double::Parse(textBox1->Text) * 15 ;
			 wartosc1 = Math::Round(wartosc1,1);
			 ZMIENNA->label3->Text =wartosc1.ToString();
			float wartosc2 = Double::Parse(textBox1->Text) * Double::Parse(textBox1->Text) * 15;
			 wartosc2 = Math::Round(wartosc2,1);
			ZMIENNA -> label5->Text=wartosc2.ToString();
			float wartosc3 = Double::Parse(textBox1->Text) * Double::Parse(textBox1->Text) * 17.5;
			 wartosc3 = Math::Round(wartosc3,1);
			ZMIENNA -> label7->Text=wartosc3.ToString();
			float wartosc4 = Double::Parse(textBox1->Text) * Double::Parse(textBox1->Text) * 19.5;
			 wartosc4 = Math::Round(wartosc4,1);
			ZMIENNA -> label9->Text=wartosc4.ToString();
			float wartosc5 = Double::Parse(textBox1->Text) * Double::Parse(textBox1->Text) * 25;
			 wartosc5 = Math::Round(wartosc5,1);
			ZMIENNA -> label11->Text=wartosc5.ToString();
           float wartosc6 = Double::Parse(textBox1->Text) * Double::Parse(textBox1->Text) * 30;
			 wartosc6 = Math::Round(wartosc6,1);
			ZMIENNA -> label13->Text=wartosc6.ToString();
			float wartosc7 = Double::Parse(textBox1->Text) * Double::Parse(textBox1->Text) * 35;
			 wartosc7 = Math::Round(wartosc7,1);
			ZMIENNA -> label15->Text=wartosc7.ToString();
			float wartosc8 = Double::Parse(textBox1->Text) * Double::Parse(textBox1->Text) * 40;
			 wartosc8 = Math::Round(wartosc8,1);
			ZMIENNA -> label17->Text=wartosc8.ToString();
			ZMIENNA->ShowDialog();
			
	
			 
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
BMI2^ ZMIENNA1 = gcnew BMI2;
ZMIENNA1->ShowDialog();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		BMI3^ ZMIENNAA = gcnew BMI3;
		FileInfo^ dane_BMI = gcnew FileInfo("dane_BMI.txt");
		StreamWriter^ zapisz = dane_BMI->CreateText();
		//StreamWriter^ zapisz = gcnew StreamWriter("dane_BMI.txt",app);

		if(!dane_BMI->Exists == true)
			dane_BMI->Create();

		
		zapisz->WriteLine(kalendarz->TodayDate.ToShortDateString());
		zapisz->WriteLine(label1->Text);
		
		zapisz->Close();

		

		//ZMIENNAA->label1->Text=label1->Text;
		ZMIENNAA->ShowDialog();

			
		 }
private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

