#pragma once
#include <stdlib.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <math.h>
#include <iostream>
#include "windows.h"
#include <fstream>
#include "InfoBox.h"
#include <conio.h>
namespace CalCul {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� clc
	/// </summary>
	public ref class clc : public System::Windows::Forms::Form
	{
	public:
		clc(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
	
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~clc()
		{
			if (components)
			{
				delete components;
			}
		}
	private:Button^  button1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;




	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;









	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::PictureBox^  picturebox;
	private: System::Windows::Forms::PictureBox^  settings_button;
	private: System::Windows::Forms::PictureBox^  save_log_button;
	private: System::Windows::Forms::PictureBox^  minimize_button;
	private: System::Windows::Forms::PictureBox^  close_button;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  up_1;
	private: System::Windows::Forms::PictureBox^  up_2;
	private: System::Windows::Forms::PictureBox^  down_2;

	private: System::Windows::Forms::PictureBox^  down_1;
	private: System::Windows::Forms::TextBox^  label6;



	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button20;







	private: System::ComponentModel::IContainer^  components;

















	protected:

	protected:





	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(clc::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->picturebox = (gcnew System::Windows::Forms::PictureBox());
			this->settings_button = (gcnew System::Windows::Forms::PictureBox());
			this->save_log_button = (gcnew System::Windows::Forms::PictureBox());
			this->minimize_button = (gcnew System::Windows::Forms::PictureBox());
			this->close_button = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->up_1 = (gcnew System::Windows::Forms::PictureBox());
			this->up_2 = (gcnew System::Windows::Forms::PictureBox());
			this->down_2 = (gcnew System::Windows::Forms::PictureBox());
			this->down_1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->settings_button))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->save_log_button))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimize_button))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->close_button))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->up_1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->up_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->down_2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->down_1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button1->Location = System::Drawing::Point(0, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &clc::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Fallout Display", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox1->Location = System::Drawing::Point(322, 111);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(301, 60);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &clc::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &clc::textBox1_KeyPress_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button2->Location = System::Drawing::Point(61, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 35);
			this->button2->TabIndex = 4;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &clc::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button3->Location = System::Drawing::Point(122, 1);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 35);
			this->button3->TabIndex = 5;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &clc::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button4->Location = System::Drawing::Point(0, 42);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 35);
			this->button4->TabIndex = 6;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &clc::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button5->Location = System::Drawing::Point(61, 43);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 34);
			this->button5->TabIndex = 7;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &clc::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button6->Location = System::Drawing::Point(122, 43);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 34);
			this->button6->TabIndex = 8;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &clc::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button7->Location = System::Drawing::Point(0, 83);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 35);
			this->button7->TabIndex = 9;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &clc::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button8->Location = System::Drawing::Point(61, 83);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 35);
			this->button8->TabIndex = 10;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &clc::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button9->Location = System::Drawing::Point(122, 83);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 35);
			this->button9->TabIndex = 11;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &clc::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Transparent;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button10->Location = System::Drawing::Point(183, 124);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(116, 35);
			this->button10->TabIndex = 12;
			this->button10->Text = L"CE";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &clc::button10_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Fallout Display", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->textBox2->Location = System::Drawing::Point(322, 186);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(303, 60);
			this->textBox2->TabIndex = 13;
			this->textBox2->Text = L"0";
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button11->Location = System::Drawing::Point(122, 124);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(55, 35);
			this->button11->TabIndex = 15;
			this->button11->Text = L".";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &clc::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button12->Location = System::Drawing::Point(0, 124);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(116, 35);
			this->button12->TabIndex = 16;
			this->button12->Text = L"0";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &clc::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button13->Location = System::Drawing::Point(183, 1);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(55, 35);
			this->button13->TabIndex = 17;
			this->button13->Text = L"A";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &clc::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button14->Location = System::Drawing::Point(244, 1);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 35);
			this->button14->TabIndex = 18;
			this->button14->Text = L"B";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &clc::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button15->Location = System::Drawing::Point(244, 42);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(55, 35);
			this->button15->TabIndex = 19;
			this->button15->Text = L"D";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &clc::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Transparent;
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button16->Location = System::Drawing::Point(183, 83);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(55, 35);
			this->button16->TabIndex = 20;
			this->button16->Text = L"E";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &clc::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Transparent;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button17->Location = System::Drawing::Point(244, 83);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(55, 35);
			this->button17->TabIndex = 21;
			this->button17->Text = L"F";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &clc::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Transparent;
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button18->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button18->Location = System::Drawing::Point(183, 43);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(55, 34);
			this->button18->TabIndex = 22;
			this->button18->Text = L"C";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &clc::button18_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label2->Location = System::Drawing::Point(700, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 26);
			this->label2->TabIndex = 23;
			this->label2->Text = L"10";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->TextChanged += gcnew System::EventHandler(this, &clc::label2_TextChanged);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label3->Location = System::Drawing::Point(701, 201);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 26);
			this->label3->TabIndex = 24;
			this->label3->Text = L"2";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label3->TextChanged += gcnew System::EventHandler(this, &clc::label3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label4->Font = (gcnew System::Drawing::Font(L"Fallout Display", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label4->Location = System::Drawing::Point(320, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 16);
			this->label4->TabIndex = 29;
			this->label4->Text = L"Result:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label5->Font = (gcnew System::Drawing::Font(L"Fallout Display", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label5->Location = System::Drawing::Point(320, 96);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(113, 16);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Input data:";
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::Transparent;
			this->button28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button28->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button28->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button28->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button28->Font = (gcnew System::Drawing::Font(L"Fallout Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button28->Location = System::Drawing::Point(170, 43);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(116, 35);
			this->button28->TabIndex = 38;
			this->button28->Text = L"Green";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &clc::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::Transparent;
			this->button29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button29->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button29->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button29->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button29->Font = (gcnew System::Drawing::Font(L"Fallout Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button29->Location = System::Drawing::Point(170, 82);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(116, 35);
			this->button29->TabIndex = 39;
			this->button29->Text = L"Orange";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &clc::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::Transparent;
			this->button30->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button30->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button30->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button30->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button30->Font = (gcnew System::Drawing::Font(L"Fallout Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button30->Location = System::Drawing::Point(170, 121);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(116, 35);
			this->button30->TabIndex = 40;
			this->button30->Text = L"Blue";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &clc::button30_Click);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Fallout Display", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label8->Location = System::Drawing::Point(0, 3);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(117, 35);
			this->label8->TabIndex = 41;
			this->label8->Text = L"Fractional length";
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Fallout Display", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label9->Location = System::Drawing::Point(170, 4);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(117, 35);
			this->label9->TabIndex = 42;
			this->label9->Text = L"Interface color";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Fallout Display", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label10->Location = System::Drawing::Point(0, 96);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 16);
			this->label10->TabIndex = 43;
			this->label10->Text = L"Clear zeros";
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::Transparent;
			this->button31->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button31->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button31->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button31->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button31->Font = (gcnew System::Drawing::Font(L"Fallout Display", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button31->Location = System::Drawing::Point(1, 121);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(116, 35);
			this->button31->TabIndex = 44;
			this->button31->Text = L"True";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &clc::button31_Click);
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Fallout Display", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label11->Location = System::Drawing::Point(29, 43);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(61, 36);
			this->label11->TabIndex = 45;
			this->label11->Text = L"4";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->TextChanged += gcnew System::EventHandler(this, &clc::label11_TextChanged);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::Transparent;
			this->button32->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button32->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button32->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button32->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button32->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button32->Location = System::Drawing::Point(1, 43);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(29, 35);
			this->button32->TabIndex = 46;
			this->button32->Text = L"<";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &clc::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::Transparent;
			this->button33->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button33->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button33->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button33->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button33->Font = (gcnew System::Drawing::Font(L"Fallout Display", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button33->Location = System::Drawing::Point(88, 43);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(29, 35);
			this->button33->TabIndex = 47;
			this->button33->Text = L">";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &clc::button33_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->button33);
			this->panel1->Controls->Add(this->button28);
			this->panel1->Controls->Add(this->button32);
			this->panel1->Controls->Add(this->button29);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->button30);
			this->panel1->Controls->Add(this->button31);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Location = System::Drawing::Point(319, 248);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(314, 161);
			this->panel1->TabIndex = 48;
			this->panel1->Visible = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->button18);
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->button9);
			this->panel3->Controls->Add(this->button10);
			this->panel3->Controls->Add(this->button11);
			this->panel3->Controls->Add(this->button12);
			this->panel3->Controls->Add(this->button13);
			this->panel3->Controls->Add(this->button14);
			this->panel3->Controls->Add(this->button17);
			this->panel3->Controls->Add(this->button15);
			this->panel3->Controls->Add(this->button16);
			this->panel3->ForeColor = System::Drawing::Color::Transparent;
			this->panel3->Location = System::Drawing::Point(324, 249);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(304, 161);
			this->panel3->TabIndex = 49;
			// 
			// button34
			// 
			this->button34->AutoSize = true;
			this->button34->BackColor = System::Drawing::Color::Transparent;
			this->button34->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button34->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button34->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button34->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button34->Font = (gcnew System::Drawing::Font(L"Fallout Display", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button34->Location = System::Drawing::Point(575, 395);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(68, 22);
			this->button34->TabIndex = 48;
			this->button34->Text = L"Clear log";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Visible = false;
			this->button34->Click += gcnew System::EventHandler(this, &clc::button34_Click);
			// 
			// picturebox
			// 
			this->picturebox->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picturebox.ErrorImage")));
			this->picturebox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picturebox.Image")));
			this->picturebox->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picturebox.InitialImage")));
			this->picturebox->Location = System::Drawing::Point(709, 387);
			this->picturebox->Name = L"picturebox";
			this->picturebox->Size = System::Drawing::Size(109, 62);
			this->picturebox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picturebox->TabIndex = 51;
			this->picturebox->TabStop = false;
			this->picturebox->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::picturebox_MouseDown);
			this->picturebox->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::picturebox_MouseUp);
			// 
			// settings_button
			// 
			this->settings_button->BackColor = System::Drawing::Color::Transparent;
			this->settings_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"settings_button.Image")));
			this->settings_button->Location = System::Drawing::Point(52, 338);
			this->settings_button->Name = L"settings_button";
			this->settings_button->Size = System::Drawing::Size(18, 18);
			this->settings_button->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->settings_button->TabIndex = 52;
			this->settings_button->TabStop = false;
			this->settings_button->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::settings_button_MouseDown);
			this->settings_button->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::settings_button_MouseUp);
			// 
			// save_log_button
			// 
			this->save_log_button->BackColor = System::Drawing::Color::Transparent;
			this->save_log_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"save_log_button.Image")));
			this->save_log_button->Location = System::Drawing::Point(52, 392);
			this->save_log_button->Name = L"save_log_button";
			this->save_log_button->Size = System::Drawing::Size(18, 18);
			this->save_log_button->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->save_log_button->TabIndex = 53;
			this->save_log_button->TabStop = false;
			this->save_log_button->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::save_log_button_MouseDown);
			this->save_log_button->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::save_log_button_MouseUp);
			// 
			// minimize_button
			// 
			this->minimize_button->BackColor = System::Drawing::Color::Transparent;
			this->minimize_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"minimize_button.Image")));
			this->minimize_button->Location = System::Drawing::Point(52, 421);
			this->minimize_button->Name = L"minimize_button";
			this->minimize_button->Size = System::Drawing::Size(18, 18);
			this->minimize_button->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->minimize_button->TabIndex = 54;
			this->minimize_button->TabStop = false;
			this->minimize_button->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::minimize_button_MouseDown);
			this->minimize_button->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::minimize_button_MouseUp);
			// 
			// close_button
			// 
			this->close_button->BackColor = System::Drawing::Color::Transparent;
			this->close_button->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close_button.Image")));
			this->close_button->Location = System::Drawing::Point(52, 448);
			this->close_button->Name = L"close_button";
			this->close_button->Size = System::Drawing::Size(18, 18);
			this->close_button->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->close_button->TabIndex = 55;
			this->close_button->TabStop = false;
			this->close_button->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::close_button_MouseDown);
			this->close_button->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::close_button_MouseUp);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 179);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(225, 141);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 56;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::clc_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::clc_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::clc_MouseUp);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(250, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(449, 479);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 57;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &clc::pictureBox2_Click);
			this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::clc_MouseDown);
			this->pictureBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::clc_MouseMove);
			this->pictureBox2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::clc_MouseUp);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &clc::timer1_Tick);
			// 
			// up_1
			// 
			this->up_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"up_1.Image")));
			this->up_1->Location = System::Drawing::Point(753, 144);
			this->up_1->Name = L"up_1";
			this->up_1->Size = System::Drawing::Size(21, 22);
			this->up_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->up_1->TabIndex = 58;
			this->up_1->TabStop = false;
			this->up_1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::up_1_MouseDown);
			this->up_1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::up_1_MouseUp);
			// 
			// up_2
			// 
			this->up_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"up_2.Image")));
			this->up_2->Location = System::Drawing::Point(753, 193);
			this->up_2->Name = L"up_2";
			this->up_2->Size = System::Drawing::Size(21, 22);
			this->up_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->up_2->TabIndex = 59;
			this->up_2->TabStop = false;
			this->up_2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::up_2_MouseDown);
			this->up_2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::up_2_MouseUp);
			// 
			// down_2
			// 
			this->down_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"down_2.Image")));
			this->down_2->Location = System::Drawing::Point(753, 216);
			this->down_2->Name = L"down_2";
			this->down_2->Size = System::Drawing::Size(21, 22);
			this->down_2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->down_2->TabIndex = 60;
			this->down_2->TabStop = false;
			this->down_2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::down_2_MouseDown);
			this->down_2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::down_2_MouseUp);
			// 
			// down_1
			// 
			this->down_1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"down_1.Image")));
			this->down_1->Location = System::Drawing::Point(753, 168);
			this->down_1->Name = L"down_1";
			this->down_1->Size = System::Drawing::Size(21, 22);
			this->down_1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->down_1->TabIndex = 61;
			this->down_1->TabStop = false;
			this->down_1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::down_1_MouseDown);
			this->down_1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::down_1_MouseUp);
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->label6->Font = (gcnew System::Drawing::Font(L"Fallout Display", 8.25F));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->label6->Location = System::Drawing::Point(319, 99);
			this->label6->Multiline = true;
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(304, 311);
			this->label6->TabIndex = 62;
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Cursor = System::Windows::Forms::Cursors::No;
			this->label7->Font = (gcnew System::Drawing::Font(L"Fallout Display", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DarkGray;
			this->label7->Location = System::Drawing::Point(52, 366);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 18);
			this->label7->TabIndex = 65;
			this->label7->Text = L"  ";
			this->label7->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::pictureBox3_MouseUp);
			// 
			// button19
			// 
			this->button19->AutoSize = true;
			this->button19->BackColor = System::Drawing::Color::Transparent;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button19->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Fallout Display", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button19->Location = System::Drawing::Point(500, 395);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(68, 22);
			this->button19->TabIndex = 66;
			this->button19->Text = L"Open log";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Visible = false;
			this->button19->Click += gcnew System::EventHandler(this, &clc::button19_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Cursor = System::Windows::Forms::Cursors::Help;
			this->label1->Font = (gcnew System::Drawing::Font(L"Fallout Display", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(17, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(25, 21);
			this->label1->TabIndex = 67;
			this->label1->Text = L"\?";
			this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::label1_MouseDown);
			// 
			// button20
			// 
			this->button20->AutoSize = true;
			this->button20->BackColor = System::Drawing::Color::Transparent;
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Fallout Display", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)));
			this->button20->Location = System::Drawing::Point(575, 395);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(68, 22);
			this->button20->TabIndex = 68;
			this->button20->Text = L"Close";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Visible = false;
			this->button20->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::button20_MouseDown);
			// 
			// clc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 32);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(861, 479);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->down_1);
			this->Controls->Add(this->down_2);
			this->Controls->Add(this->up_2);
			this->Controls->Add(this->up_1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->close_button);
			this->Controls->Add(this->minimize_button);
			this->Controls->Add(this->save_log_button);
			this->Controls->Add(this->settings_button);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->picturebox);
			this->Font = (gcnew System::Drawing::Font(L"Fallout Regular", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::Color::Transparent;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->MaximizeBox = false;
			this->Name = L"clc";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�����������";
			this->Shown += gcnew System::EventHandler(this, &clc::clc_Shown);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::clc_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::clc_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &clc::clc_MouseUp);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picturebox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->settings_button))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->save_log_button))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->minimize_button))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->close_button))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->up_1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->up_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->down_2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->down_1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	bool info_box = false;
	bool cl_zer = true;		// �������� �� ��������� �����
	bool pr_log = false;	// ������������ �� �������
	bool pr_stat = false;	// ������������ �� ���������
	bool dragging;			// �������������� (������� ���)
	Point offset;			// ���������
	bool Z = false;			// �������, ���� ��
	bool S_LIM = false;		// �������� �� ����� ��������, ���������� �����
	private: System::Void textBox1_KeyPress_1(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		
		if (!((e->KeyChar >= 65 && e->KeyChar <= 70) || (e->KeyChar >= 48 && e->KeyChar <= 57) || (e->KeyChar == 8) || e->KeyChar == 44 || e->KeyChar == 46)) {
			e->Handled = true;
		}
		if ((e->KeyChar == 44 || e->KeyChar == 46) && Z) {
			e->Handled = true;
		}
		if ((S_LIM) && !(e->KeyChar == 8)) {
			e->Handled = true;
		}
		if ((S_LIM) && (e->KeyChar == 8)) {
			S_LIM = false;
		}

		for (int i = 50; (i <= 57) && (e->Handled == false); i++) {
			if (e->KeyChar == i && !(i-48 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))) {
				e->Handled = true;
			}
		}
		for (int i = 65; (i <= 70) && (e->Handled == false); i++) {
			if (e->KeyChar == i && !(i - 55 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))) {
				e->Handled = true;
			}
		}
		if (e->KeyChar == 32) {
			button10_Click(sender, e);
			textBox1->SelectionStart = textBox1->Text->Length;
		}
		if ((S_LIM) && !(e->KeyChar == 32)) {
			e->Handled = true;
		}
		if ((S_LIM) && (e->KeyChar == 32)) {
			S_LIM = false;
		}
	}

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox2->Font = gcnew System::Drawing::Font("Fallout Display", 18);
	textBox1->Font = gcnew System::Drawing::Font("Fallout Display", 18);

	bool f = true;			// ��� �� ������
	Z = false;
	int MAX;				// ����������� �� ����������� ��������
	long double a2 = 0, a1 = 0;
	long int i = 0, n = 0;
	int CUR_CC = 0;			//������ ������� ���������
	long long int a = 0, r = 0;

	String ^ x = textBox1->Text;
	std::string s1 = "", s2 = "", s;

	s = msclr::interop::marshal_as<std::string>(x);

	if (s.length() / 27 > 0) {
		textBox1->Font = gcnew System::Drawing::Font("Fallout Display", 24 / (s.length() / 27 + 1));
	}

	if (s[0] == '0' && s.length() > 1 && s[1] != '.' && s[1] != ',') {
		while ((s[i] == '0') && (i < s.length())) {
			i++;
		}
		for (i; i < s.length(); i++) {
			s1 += s[i];
		}
		s = s1;
		i = 0;
		if (s == ""){
			s = "0";
		}
		textBox1->Text = msclr::interop::marshal_as<System::String ^>(s);
		textBox1->SelectionStart = textBox1->Text->Length;
	}

	s1 = "";

	if (s == "") {
		s = "0";
		textBox1->Text = msclr::interop::marshal_as<System::String ^>(s);
		textBox1->SelectionStart = textBox1->Text->Length;
	}

	check_number_system(label2->Text, CUR_CC, MAX);

	if (s.length() >= MAX) { 
		S_LIM = true;
	}

	if (s.length() > MAX) {
		f = false;
		textBox2->Font = gcnew System::Drawing::Font("Fallout Display", 12);
		s = "��������� ������������ ����������� ��������.";
	}
	for (i; i < s.length(); i++) {
		if (s[i] == '.' || s[i] == ',') {
			Z = true;
			i++;
		}
		if ((Z == false) && (i < s.length())) {
			s1 += s[i];
		}
		if ((Z == true) && (i < s.length())) {
			s2 += s[i];
		}
	}


	for (i = 0; (i < s1.length()) && (f == true); i++) { // ������� � 10-� �� (����� �����)

		n = from_any_to_10(s1[i]);

		if (n < 0) {
			f = false;
			s = "����������� ������.";
		}

		if (n >= CUR_CC) {
			f = false;
			s = "����� �� ������� ��.";
		}

		a1 = a1 + n * pow(CUR_CC, s1.length() - i - 1);

	}

	for (i = 0; (i < s2.length()) && (f == true); i++) { // ������� � 10-� �� (������� �����)

		n = from_any_to_10(s2[i]);

		if (n < 0) {
			f = false;
			s = "����������� ������.";
		}

		if (n >= CUR_CC) {
			f = false;
			s = "����� �� ������� ��.";
		}

		a2 = a2 + n * pow(CUR_CC, -(i + 1));

	}


	if (f) {

		check_number_system(label3->Text, CUR_CC, MAX);

		s = "";

		while (a1 != 0) { // ������� ����� ����� �� 10� � ��������� (����� �������)
			r = a1;
			a = r % CUR_CC;
			r = r / CUR_CC;
			a1 = r;
			switch (a) {
			case 0: s += '0'; break;
			case 1: s += '1'; break;
			case 2: s += "2"; break;
			case 3: s += "3"; break;
			case 4: s += "4"; break;
			case 5: s += "5"; break;
			case 6: s += "6"; break;
			case 7: s += "7"; break;
			case 8: s += "8"; break;
			case 9: s += "9"; break;
			case 10: s += "A"; break;
			case 11: s += "B"; break;
			case 12: s += "C"; break;
			case 13: s += "D"; break;
			case 14: s += "E"; break;
			case 15: s += "F"; break;
			default:
				f = false;
				break;
			}
		}

		s1 = "";

		for (i = s.length() - 1; i >= 0; i--) //  �������������� ����� �����, ����� ��������
			s1 += s[i];

		s = s1;

		s2 = "";

		int MAX_m = stoi(msclr::interop::marshal_as<std::string>(label11->Text)); // ����������� �������� ����� �������

		for (i = 0; (i < MAX_m) && (a2 != 0); i++) { // ������� ������� ����� � ��������� ��
			a2 = a2 * CUR_CC;
			if (a2 >= 1) {
				a = a2;
				a = a % CUR_CC;
			}
			else {
				a = 0;
			}
			switch (a) {
			case 0: s2 += '0'; break;
			case 1: s2 += '1'; break;
			case 2: s2 += "2"; break;
			case 3: s2 += "3"; break;
			case 4: s2 += "4"; break;
			case 5: s2 += "5"; break;
			case 6: s2 += "6"; break;
			case 7: s2 += "7"; break;
			case 8: s2 += "8"; break;
			case 9: s2 += "9"; break;
			case 10: s2 += "A"; break;
			case 11: s2 += "B"; break;
			case 12: s2 += "C"; break;
			case 13: s2 += "D"; break;
			case 14: s2 += "E"; break;
			case 15: s2 += "F"; break;
			default:
				f = false;
				break;
			}
		}
			
		if (i == MAX_m) { 
			s = "";
			n = (s2.length() - 1);

			while ((n >= 0) && (s2[n] == '0')) {
				n--;
			}

			if (cl_zer)//��������� �����
				for (i = 0; i <= n; i++) {
				s += s2[i];
				}
			else 
				s = s2;
				

			if (s1 == "") s1 = "0";
			if (s == "") s = "0";
			s = s1 + "." + s;
		}
	}

		if (s == "") s = "0";

		if (s.length() / 27 > 0) {
			textBox2->Font = gcnew System::Drawing::Font("Fallout Display", 12);
		}

	textBox2->Text = msclr::interop::marshal_as<System::String ^>(s);

}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox1_TextChanged(sender, e);
	}
	 private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		textBox1_TextChanged(sender, e);
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!S_LIM)
			if (textBox1->Text == "0") {
				textBox1->Text = "1";
			}
			else {
				textBox1->Text = Convert::ToString
				(textBox1->Text) + "1";
			}
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM && 3 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))
	if (textBox1->Text == "0") {
		textBox1->Text = "3";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "3";
	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM && 2 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))
	if (textBox1->Text == "0") {
		textBox1->Text = "2";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "2";
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM && 6 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))
	if (textBox1->Text == "0") {
		textBox1->Text = "6";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "6";
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM && 5 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))
	if (textBox1->Text == "0") {
		textBox1->Text = "5";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "5";
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM && 4 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))
	if (textBox1->Text == "0") {
		textBox1->Text = "4";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "4";
	}
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM && 9 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))
	if (textBox1->Text == "0") {
		textBox1->Text = "9";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "9";
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM && 8 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))
	if (textBox1->Text == "0") {
		textBox1->Text = "8";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "8";
	}
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM && 7 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))
	if (textBox1->Text == "0") {
		textBox1->Text = "7";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "7";
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox1->Text = "0";
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM)
		if (!Z) {
			if (textBox1->Text == "0") {
				textBox1->Text = "0.";
			}
			else {
				textBox1->Text = Convert::ToString(textBox1->Text) + ".";
			}
		}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM)
	if (textBox1->Text == "0") {
		textBox1->Text = "0";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "0";
	}
}

private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM && 10 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))
	if (textBox1->Text == "0") {
		textBox1->Text = "A";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "A";
	}

}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM && 11 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))
	if (textBox1->Text == "0") {
		textBox1->Text = "B";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "B";
	}
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM && 12 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))
	if (textBox1->Text == "0") {
		textBox1->Text = "C";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "C";
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM && 13 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))
	if (textBox1->Text == "0") {
		textBox1->Text = "D";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "D";
	}

}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM && 14 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))
	if (textBox1->Text == "0") {
		textBox1->Text = "E";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "E";
	}
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!S_LIM && 15 < stoi(msclr::interop::marshal_as<std::string>(label2->Text)))
	if (textBox1->Text == "0") {
		textBox1->Text = "F";
	}
	else {
		textBox1->Text = Convert::ToString(textBox1->Text) + "F";
	}
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void label2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	std::string r; int val;
	r = msclr::interop::marshal_as<std::string>(label2->Text);
	val = stoi(r);
	if (val > 16) {
		label2->Text = "16";
	}
	if (val < 2) {
		label2->Text = "2";
	}
	textBox1_TextChanged(sender, e);
}
private: System::Void label3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	std::string r; int val;
	r = msclr::interop::marshal_as<std::string>(label3->Text);
	val = stoi(r);
	if (val > 16) {
		label3->Text = "16";
	}
	if (val < 2) {
		label3->Text = "2";
	}
	textBox1_TextChanged(sender, e);
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string r; int val;
	r = msclr::interop::marshal_as<std::string>(label2->Text);
	val = stoi(r); val++;
	r = std::to_string(val);
	label2->Text = msclr::interop::marshal_as<System::String ^>(r);
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string r; int val;
	r = msclr::interop::marshal_as<std::string>(label2->Text);
	val = stoi(r); val--;
	r = std::to_string(val);
	label2->Text = msclr::interop::marshal_as<System::String ^>(r);
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string r; int val;
	r = msclr::interop::marshal_as<std::string>(label3->Text);
	val = stoi(r); val++;
	r = std::to_string(val);
	label3->Text = msclr::interop::marshal_as<System::String ^>(r);
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string r; int val;
	r = msclr::interop::marshal_as<std::string>(label3->Text);
	val = stoi(r); val--;
	r = std::to_string(val);
	label3->Text = msclr::interop::marshal_as<System::String ^>(r);
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	this->WindowState = System::Windows::Forms::FormWindowState::Minimized;
}
private: System::Void clc_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}
private: System::Void clc_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (this->dragging) {
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
	}
}
private: System::Void clc_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	this->dragging = false;
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string data, result; int i_from, i_to;
	data = msclr::interop::marshal_as<std::string>(textBox1->Text);
	if (!((data == "0") || (data == ".") || (data == "0."))) {
		result = msclr::interop::marshal_as<std::string>(textBox2->Text);
		i_from = stoi(msclr::interop::marshal_as<std::string>(label2->Text));
		i_to = stoi(msclr::interop::marshal_as<std::string>(label3->Text));
		std::ofstream fout("log.txt",std::ios_base::app);
		fout << "\nNumber: " << data << " (" << i_from << ") to: " << result << " (" << i_to << ")\n";
	}
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	button20->Visible = false;
	label6->Text = "";
	std::ifstream fin("log.txt");
	std::string str;
	int i = str_val();
	i = i - 20;
	while (std::getline(fin, str)) {
		if (i < 0) {
			label6->Text += msclr::interop::marshal_as<System::String ^>(str) + "\r\n";
		}

		i--;
	}
	if (pr_log == true) {
		button19->Visible = false;
		label5->Visible = true;
		button34->Visible = false;
		label6->Visible = false;
		pr_log = false;
	}
	else {
		label5->Visible = false;
		button34->Visible = true;
		label6->Visible = true;
		pr_log = true;
		button19->Visible = true;
	}
	
}
private: int str_val() {
	std::string str;
	int i;
	std::ifstream fin("log.txt");
	while (std::getline(fin, str)) {
		i++;
	}
	return i;
};
private: System::Void clc_Load(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void label11_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	int val;
	val = stoi(msclr::interop::marshal_as<std::string>(label11->Text));
	if (val > 10) {
		label11->Text = "10";
	}
	if (val < 4) {
		label11->Text = "4";
	}
	textBox1_TextChanged(sender, e);
}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string r; int val;
	r = msclr::interop::marshal_as<std::string>(label11->Text);
	val = stoi(r); val++;
	r = std::to_string(val);
	label11->Text = msclr::interop::marshal_as<System::String ^>(r);
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string r; int val;
	r = msclr::interop::marshal_as<std::string>(label11->Text);
	val = stoi(r); val--;
	r = std::to_string(val);
	label11->Text = msclr::interop::marshal_as<System::String ^>(r);
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	if (pr_stat == true) {
		panel1->Visible = false;
		pr_stat = false;
	}
	else {
		panel1->Visible = true;
		pr_stat = true;
	}
}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	change_interface_colour(72, 208, 36);
}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
	change_interface_colour(255, 182, 65);
}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	change_interface_colour(46, 207, 255);
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	if (cl_zer) {
		button31->Text = "False";
		cl_zer = false;
	}
	else {
		button31->Text = "True";
		cl_zer = true;
	}
	textBox1_TextChanged(sender, e);
}

private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	std::ofstream fout("log.txt", std::ios_base::trunc);
	label6->Text = "";
}

private: System::Void picturebox_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	
	System::Media::SoundPlayer ^ f;
	f = gcnew System::Media::SoundPlayer("BUTIN1.wav");
	f->Play();
	button27_Click(sender, e);
	Bitmap^ bmp = gcnew Bitmap(109, 62);
	Graphics^ g = Graphics::FromImage(bmp);
	picturebox->Image = bmp;
	Bitmap^ image1;
	image1 = gcnew Bitmap("log_pr.bmp");
	picturebox->Image = image1;
	
}

private: System::Void picturebox_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	System::Media::SoundPlayer ^ f;
	f = gcnew System::Media::SoundPlayer("BUTIN2.wav");
	f->Play();
	Bitmap^ bmp = gcnew Bitmap(109, 62);
	Graphics^ g = Graphics::FromImage(bmp);
	picturebox->Image = bmp;
	Bitmap^ image1;
	image1 = gcnew Bitmap("log.bmp");
	picturebox->Image = image1;
}

private: System::Void settings_button_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	button23_Click(sender, e);
	red_button_down(settings_button);
}

private: System::Void settings_button_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	red_button_up(settings_button);
}

private: System::Void save_log_button_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	button26_Click(sender, e);
	red_button_down(save_log_button);
}

private: System::Void save_log_button_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	red_button_up(save_log_button);
}

private: System::Void minimize_button_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	red_button_down(minimize_button);
}

private: System::Void minimize_button_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	red_button_up(minimize_button);
	button25_Click(sender, e);
}

private: System::Void close_button_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	red_button_down(close_button);
}

private: System::Void close_button_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	red_button_up(close_button);
	button24_Click(sender, e);
}	
private: System::Void up_1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	button19_Click(sender, e);
	up_button_down(up_1);
}
private: System::Void up_1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	up_button_up(up_1);
}
private: System::Void up_2_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	button21_Click(sender, e);
	up_button_down(up_2);
}
private: System::Void up_2_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	up_button_up(up_2);
}
private: System::Void clc_Shown(System::Object^  sender, System::EventArgs^  e) {
	timer1->Interval = 4500;
	timer1->Start();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	timer1->Stop();
	pictureBox2->Visible = false;
}

private: System::Void down_1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	button20_Click(sender, e);
	down_button_down(down_1);
}
private: System::Void down_1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	down_button_up(down_1);
}
private: System::Void down_2_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	button22_Click(sender, e);
	down_button_down(down_2);
}
private: System::Void down_2_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	down_button_up(down_2);
}
private: System::Void red_button_up(System::Windows::Forms::PictureBox ^ button) {
	System::Media::SoundPlayer ^ f;
	f = gcnew System::Media::SoundPlayer("BUTIN2.wav");
	f->Play();
	Bitmap^ png = gcnew Bitmap(18, 18);
	Graphics^ g = Graphics::FromImage(png);
	button->Image = png;
	Bitmap^ image1;
	image1 = gcnew Bitmap("button_red_off.png");
	button->Image = image1;
}
private: System::Void red_button_down(System::Windows::Forms::PictureBox ^ button) {
	System::Media::SoundPlayer ^ f;
	f = gcnew System::Media::SoundPlayer("BUTIN1.wav");
	f->Play();
	Bitmap^ png = gcnew Bitmap(18, 18);
	Graphics^ g = Graphics::FromImage(png);
	button->Image = png;
	Bitmap^ image1;
	image1 = gcnew Bitmap("button_red_on.png");
	button->Image = image1;
}
private: System::Void up_button_up(System::Windows::Forms::PictureBox ^ button) {
	System::Media::SoundPlayer ^ f;
	f = gcnew System::Media::SoundPlayer("BUTIN2.wav");
	f->Play();
	Bitmap^ bmp = gcnew Bitmap(21, 22);
	Graphics^ g = Graphics::FromImage(bmp);
	button->Image = bmp;
	Bitmap^ image1;
	image1 = gcnew Bitmap("up_off.bmp");
	button->Image = image1;
}
private: System::Void up_button_down(System::Windows::Forms::PictureBox ^ button) {
	System::Media::SoundPlayer ^ f;
	f = gcnew System::Media::SoundPlayer("BUTIN1.wav");
	f->Play();
	Bitmap^ bmp = gcnew Bitmap(21, 22);
	Graphics^ g = Graphics::FromImage(bmp);
	button->Image = bmp;
	Bitmap^ image1;
	image1 = gcnew Bitmap("up_on.bmp");
	button->Image = image1;
}
private: System::Void down_button_up(System::Windows::Forms::PictureBox ^ button) {
	System::Media::SoundPlayer ^ f;
	f = gcnew System::Media::SoundPlayer("BUTIN2.wav");
	f->Play();
	Bitmap^ bmp = gcnew Bitmap(21, 22);
	Graphics^ g = Graphics::FromImage(bmp);
	button->Image = bmp;
	Bitmap^ image1;
	image1 = gcnew Bitmap("down_off.bmp");
	button->Image = image1;
}
private: System::Void down_button_down(System::Windows::Forms::PictureBox ^ button) {
	System::Media::SoundPlayer ^ f;
	f = gcnew System::Media::SoundPlayer("BUTIN1.wav");
	f->Play();
	Bitmap^ bmp = gcnew Bitmap(21, 22);
	Graphics^ g = Graphics::FromImage(bmp);
	button->Image = bmp;
	Bitmap^ image1;
	image1 = gcnew Bitmap("down_on.bmp");
	button->Image = image1;
}
private: System::Void change_interface_colour(int red, int green, int blue) { // ����� �����
	for each(Object^ i in panel1->Controls) {
		if (i->GetType() == button1->GetType()) {
			safe_cast<Button^>(i)->ForeColor = Color::FromArgb(255, red, green, blue);
			safe_cast<Button^>(i)->FlatAppearance->MouseDownBackColor = Color::FromArgb(100, red, green, blue);
			safe_cast<Button^>(i)->FlatAppearance->MouseOverBackColor = Color::FromArgb(100, red, green, blue);
		}
		else {
			safe_cast<Control^>(i)->ForeColor = Color::FromArgb(255, red, green, blue);
		}
	}
	for each(Object^ i in panel3->Controls) {
		safe_cast<Button^>(i)->ForeColor = Color::FromArgb(255, red, green, blue);
		safe_cast<Button^>(i)->FlatAppearance->MouseDownBackColor = Color::FromArgb(100, red, green, blue);
		safe_cast<Button^>(i)->FlatAppearance->MouseOverBackColor = Color::FromArgb(100, red, green, blue);
	}
	label2->ForeColor = Color::FromArgb(255, red, green, blue);
	label3->ForeColor = Color::FromArgb(255, red, green, blue);
	label4->ForeColor = Color::FromArgb(255, red, green, blue);
	label5->ForeColor = Color::FromArgb(255, red, green, blue);
	label6->ForeColor = Color::FromArgb(255, red, green, blue);
	textBox1->ForeColor = Color::FromArgb(255, red, green, blue);
	textBox2->ForeColor = Color::FromArgb(255, red, green, blue);
	button34->ForeColor = Color::FromArgb(255, red, green, blue);
	button34->FlatAppearance->MouseDownBackColor = Color::FromArgb(100, red, green, blue);
	button34->FlatAppearance->MouseOverBackColor = Color::FromArgb(100, red, green, blue);
	button19->ForeColor = Color::FromArgb(255, red, green, blue);
	button19->FlatAppearance->MouseDownBackColor = Color::FromArgb(100, red, green, blue);
	button19->FlatAppearance->MouseOverBackColor = Color::FromArgb(100, red, green, blue);
	button20->ForeColor = Color::FromArgb(255, red, green, blue);
	button20->FlatAppearance->MouseDownBackColor = Color::FromArgb(100, red, green, blue);
	button20->FlatAppearance->MouseOverBackColor = Color::FromArgb(100, red, green, blue);
}


private: System::Void check_number_system(System::String ^ number_system, int &num_sys, int &max_symb_of_num_sys) { //����������� �� � ������������� ����������� �������� � ���� ��
	switch (stoi(msclr::interop::marshal_as<std::string>(number_system)))
	{
	case 2: num_sys = 2; max_symb_of_num_sys = 52; break;
	case 3: num_sys = 3; max_symb_of_num_sys = 28; break;
	case 4: num_sys = 4; max_symb_of_num_sys = 25; break;
	case 5: num_sys = 5; max_symb_of_num_sys = 22; break;
	case 6: num_sys = 6; max_symb_of_num_sys = 18; break;
	case 7: num_sys = 7; max_symb_of_num_sys = 18; break;
	case 8: num_sys = 8; max_symb_of_num_sys = 16; break;
	case 9: num_sys = 9; max_symb_of_num_sys = 16; break;
	case 10: num_sys = 10; max_symb_of_num_sys = 15; break;
	case 11: num_sys = 11; max_symb_of_num_sys = 15; break;
	case 12: num_sys = 12; max_symb_of_num_sys = 14; break;
	case 13: num_sys = 13; max_symb_of_num_sys = 14; break;
	case 14: num_sys = 14; max_symb_of_num_sys = 14; break;
	case 15: num_sys = 15; max_symb_of_num_sys = 13; break;
	case 16: num_sys = 16; max_symb_of_num_sys = 13; break;
	default:
		num_sys = 10; max_symb_of_num_sys = 15;
		break;
	}
}


private: int from_any_to_10(char symbol) { // ������� ������� � 10-� ��
	int n;
	switch (symbol) {
	case '0': n = 0; break;
	case '1': n = 1; break;
	case '2': n = 2; break;
	case '3': n = 3; break;
	case '4': n = 4; break;
	case '5': n = 5; break;
	case '6': n = 6; break;
	case '7': n = 7; break;
	case '8': n = 8; break;
	case '9': n = 9; break;
	case 'A': n = 10; break;
	case 'B': n = 11; break;
	case 'C': n = 12; break;
	case 'D': n = 13; break;
	case 'E': n = 14; break;
	case 'F': n = 15; break;
	default:
		n = -1;
		break;
	}
	return n;
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	pictureBox2->Visible = false;
}

private: System::Void pictureBox3_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		info_box = true;
		InfoBox^INFO = gcnew InfoBox();
		System::Media::SoundPlayer ^ f;
		System::Media::SoundPlayer ^ f1;
		f1 = gcnew System::Media::SoundPlayer("electro.wav");
		f1->Play();
		Sleep(1000);
		f = gcnew System::Media::SoundPlayer("ded.wav");
		f->Play();
		INFO->ShowDialog();
		this->Close();
}
private: System::Void button19_Click_1(System::Object^  sender, System::EventArgs^  e) {
	System::Diagnostics::Process::Start("log.txt");

}
private: System::Void label1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	label5->Visible = false;
	label6->Visible = true;
	button19->Visible = false;
	button34->Visible = false;
	button20->Visible = true;
	label6->Text = "* SETTINGS - ��������� ������������;\r\n* SAVE LOG - ��������� � �������;\r\n* MINIMIZE - ������ �����������;\r\n* CLOSE - ������� �����������;\r\n* LOG - �������/������� �������.\r\n\r\n��������� (SETTINGS):\r\n* Fractional length - ����������� �������� ����� �������;\r\n* Clean zeros - ��������� ���������� ����� ����� �������;\r\n* Interface color - ����� ����� ����������.\r\n\r\n������� (LOG):\r\n* Clear log - �������� �������;\r\n* Open log - ������� ���� � ��������.\r\n\r\n������ ������ �� �������� ������ �������� �� ��������� ��.";
}
private: System::Void button20_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	label5->Visible = true;
	label6->Visible = false;
	button20->Visible = false;
}
};
}