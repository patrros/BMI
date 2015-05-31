#pragma once

namespace BMI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BMI1
	/// </summary>
	public ref class BMI1 : public System::Windows::Forms::Form
	{
	public:
		BMI1(void)
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
		~BMI1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  label3;
	public: System::Windows::Forms::Label^  label4;
	public: System::Windows::Forms::Label^  label5;
	public: System::Windows::Forms::Label^  label6;
	public: System::Windows::Forms::Label^  label7;
	public: System::Windows::Forms::Label^  label8;
	public: System::Windows::Forms::Label^  label9;
	public: System::Windows::Forms::Label^  label10;
	public: System::Windows::Forms::Label^  label11;
	public: System::Windows::Forms::Label^  label12;
	public: System::Windows::Forms::Label^  label13;
	public: System::Windows::Forms::Label^  label14;
	public: System::Windows::Forms::Label^  label15;
	public: System::Windows::Forms::Label^  label16;
	public: System::Windows::Forms::Label^  label17;
	public: System::Windows::Forms::PictureBox^  pictureBox1;
	public: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(BMI1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) 
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(11, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(455, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"GRANICE WAGOWE DLA PODANEGO WZROSTU [kg]:";
			this->label1->Click += gcnew System::EventHandler(this, &BMI1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Wyniszczenie: poni¿ej";
			this->label2->Click += gcnew System::EventHandler(this, &BMI1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(154, 91);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 15);
			this->label3->TabIndex = 2;
			this->label3->Click += gcnew System::EventHandler(this, &BMI1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 124);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Wychudzenie: od";
			this->label4->Click += gcnew System::EventHandler(this, &BMI1::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(124, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 15);
			this->label5->TabIndex = 4;
			this->label5->Click += gcnew System::EventHandler(this, &BMI1::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 156);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(95, 15);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Niedowaga: od";
			this->label6->Click += gcnew System::EventHandler(this, &BMI1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(104, 156);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 15);
			this->label7->TabIndex = 6;
			this->label7->Click += gcnew System::EventHandler(this, &BMI1::label7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 190);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(137, 15);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Waga prawid³owa: od";
			this->label8->Click += gcnew System::EventHandler(this, &BMI1::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(154, 190);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 15);
			this->label9->TabIndex = 8;
			this->label9->Click += gcnew System::EventHandler(this, &BMI1::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(12, 223);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(84, 15);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Nadwaga: od";
			this->label10->Click += gcnew System::EventHandler(this, &BMI1::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(86, 223);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 15);
			this->label11->TabIndex = 10;
			this->label11->Click += gcnew System::EventHandler(this, &BMI1::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(12, 253);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(139, 15);
			this->label12->TabIndex = 11;
			this->label12->Text = L"I stopieñ oty³oœci:  od";
			this->label12->Click += gcnew System::EventHandler(this, &BMI1::label12_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(147, 253);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 15);
			this->label13->TabIndex = 12;
			this->label13->Click += gcnew System::EventHandler(this, &BMI1::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(12, 283);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(140, 15);
			this->label14->TabIndex = 13;
			this->label14->Text = L"II stopieñ oty³oœci: od";
			this->label14->Click += gcnew System::EventHandler(this, &BMI1::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(154, 283);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(0, 15);
			this->label15->TabIndex = 14;
			this->label15->Click += gcnew System::EventHandler(this, &BMI1::label15_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(12, 317);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(136, 15);
			this->label16->TabIndex = 15;
			this->label16->Text = L"Oty³oœæ kliniczna: od";
			this->label16->Click += gcnew System::EventHandler(this, &BMI1::label16_Click);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(154, 319);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 15);
			this->label17->TabIndex = 16;
			this->label17->Click += gcnew System::EventHandler(this, &BMI1::label17_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(266, 113);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(206, 210);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &BMI1::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button1->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button1->Location = System::Drawing::Point(259, 336);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(213, 23);
			this->button1->TabIndex = 18;
			this->button1->Text = L"WSTECZ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &BMI1::button1_Click);
			// 
			// BMI1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Yellow;
			this->ClientSize = System::Drawing::Size(484, 371);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->MaximumSize = System::Drawing::Size(500, 410);
			this->MinimumSize = System::Drawing::Size(500, 410);
			this->Name = L"BMI1";
			this->Text = L"BMI1";
			this->Load += gcnew System::EventHandler(this, &BMI1::BMI1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BMI1_Load(System::Object^  sender, System::EventArgs^  e) {
			
			 }

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
public: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
public: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
public: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
public: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
public: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
public: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
public: System::Void label15_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
		 }

public: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
			Close();
		 }

};
}
