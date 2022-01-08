#pragma once
#include <iostream>
#include <fstream>
#include <iomanip> 
#include <vector> 
#include<numeric>
#include <algorithm> 
#include <sstream> 
#include <chrono>
#include <list>
#include <deque>

namespace sisteminis2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;

	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::RichTextBox^ richTextBox5;
	private: System::Windows::Forms::ToolStripMenuItem^ apieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ apieProgramaToolStripMenuItem;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::ToolStripMenuItem^ sarasaiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generuotiSarasa1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generuotiSarasa2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generuotiSarasa3ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generuotiSarasa4ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generuotiSarasa5ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ generuotiVisus5SarasusToolStripMenuItem;



	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TabControl^ tabControl2;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage7;
	private: System::Windows::Forms::TabPage^ tabPage8;
	private: System::Windows::Forms::TabControl^ tabControl3;
	private: System::Windows::Forms::TabPage^ tabPage9;
	private: System::Windows::Forms::TabPage^ tabPage10;
	private: System::Windows::Forms::TabPage^ tabPage11;
	private: System::Windows::Forms::TabControl^ tabControl4;
	private: System::Windows::Forms::TabPage^ tabPage12;
	private: System::Windows::Forms::TabPage^ tabPage13;
	private: System::Windows::Forms::TabPage^ tabPage14;
	private: System::Windows::Forms::TabControl^ tabControl5;
	private: System::Windows::Forms::TabPage^ tabPage15;
	private: System::Windows::Forms::TabPage^ tabPage16;
	private: System::Windows::Forms::TabPage^ tabPage17;
	private: System::Windows::Forms::TabControl^ tabControl6;
	private: System::Windows::Forms::TabPage^ tabPage18;
	private: System::Windows::Forms::TabPage^ tabPage19;
	private: System::Windows::Forms::TabPage^ tabPage20;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sarasaiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generuotiSarasa1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generuotiSarasa2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generuotiSarasa3ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generuotiSarasa4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generuotiSarasa5ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->generuotiVisus5SarasusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apieProgramaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl6 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabPage12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabPage15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->tabControl6->SuspendLayout();
			this->tabPage18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->sarasaiToolStripMenuItem, this->apieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(987, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->saveToolStripMenuItem,
					this->openToolStripMenuItem, this->toolStripSeparator1, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(77, 29);
			this->fileToolStripMenuItem->Text = L"Meniu";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(189, 34);
			this->saveToolStripMenuItem->Text = L"&Issaugoti";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(189, 34);
			this->openToolStripMenuItem->Text = L"&Atnaujinti";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(186, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(189, 34);
			this->exitToolStripMenuItem->Text = L"&Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// sarasaiToolStripMenuItem
			// 
			this->sarasaiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->generuotiSarasa1ToolStripMenuItem,
					this->generuotiSarasa2ToolStripMenuItem, this->generuotiSarasa3ToolStripMenuItem, this->generuotiSarasa4ToolStripMenuItem, this->generuotiSarasa5ToolStripMenuItem,
					this->generuotiVisus5SarasusToolStripMenuItem
			});
			this->sarasaiToolStripMenuItem->Name = L"sarasaiToolStripMenuItem";
			this->sarasaiToolStripMenuItem->Size = System::Drawing::Size(83, 29);
			this->sarasaiToolStripMenuItem->Text = L"Sarasai";
			// 
			// generuotiSarasa1ToolStripMenuItem
			// 
			this->generuotiSarasa1ToolStripMenuItem->Name = L"generuotiSarasa1ToolStripMenuItem";
			this->generuotiSarasa1ToolStripMenuItem->Size = System::Drawing::Size(313, 34);
			this->generuotiSarasa1ToolStripMenuItem->Text = L"&Generuoti sarasa 1";
			this->generuotiSarasa1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::generuotiSarasa1ToolStripMenuItem_Click);
			// 
			// generuotiSarasa2ToolStripMenuItem
			// 
			this->generuotiSarasa2ToolStripMenuItem->Name = L"generuotiSarasa2ToolStripMenuItem";
			this->generuotiSarasa2ToolStripMenuItem->Size = System::Drawing::Size(313, 34);
			this->generuotiSarasa2ToolStripMenuItem->Text = L"&Generuoti sarasa 2";
			this->generuotiSarasa2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::generuotiSarasa2ToolStripMenuItem_Click);
			// 
			// generuotiSarasa3ToolStripMenuItem
			// 
			this->generuotiSarasa3ToolStripMenuItem->Name = L"generuotiSarasa3ToolStripMenuItem";
			this->generuotiSarasa3ToolStripMenuItem->Size = System::Drawing::Size(313, 34);
			this->generuotiSarasa3ToolStripMenuItem->Text = L"&Generuoti sarasa 3";
			this->generuotiSarasa3ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::generuotiSarasa3ToolStripMenuItem_Click);
			// 
			// generuotiSarasa4ToolStripMenuItem
			// 
			this->generuotiSarasa4ToolStripMenuItem->Name = L"generuotiSarasa4ToolStripMenuItem";
			this->generuotiSarasa4ToolStripMenuItem->Size = System::Drawing::Size(313, 34);
			this->generuotiSarasa4ToolStripMenuItem->Text = L"&Generuoti sarasa 4";
			this->generuotiSarasa4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::generuotiSarasa4ToolStripMenuItem_Click);
			// 
			// generuotiSarasa5ToolStripMenuItem
			// 
			this->generuotiSarasa5ToolStripMenuItem->Name = L"generuotiSarasa5ToolStripMenuItem";
			this->generuotiSarasa5ToolStripMenuItem->Size = System::Drawing::Size(313, 34);
			this->generuotiSarasa5ToolStripMenuItem->Text = L"&Generuoti sarasa 5";
			this->generuotiSarasa5ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::generuotiSarasa5ToolStripMenuItem_Click);
			// 
			// generuotiVisus5SarasusToolStripMenuItem
			// 
			this->generuotiVisus5SarasusToolStripMenuItem->Name = L"generuotiVisus5SarasusToolStripMenuItem";
			this->generuotiVisus5SarasusToolStripMenuItem->Size = System::Drawing::Size(313, 34);
			this->generuotiVisus5SarasusToolStripMenuItem->Text = L"&Generuoti visus 5 sarasus";
			this->generuotiVisus5SarasusToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::generuotiVisus5SarasusToolStripMenuItem_Click);
			// 
			// apieToolStripMenuItem
			// 
			this->apieToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->apieProgramaToolStripMenuItem });
			this->apieToolStripMenuItem->Name = L"apieToolStripMenuItem";
			this->apieToolStripMenuItem->Size = System::Drawing::Size(64, 29);
			this->apieToolStripMenuItem->Text = L"Apie";
			// 
			// apieProgramaToolStripMenuItem
			// 
			this->apieProgramaToolStripMenuItem->Name = L"apieProgramaToolStripMenuItem";
			this->apieProgramaToolStripMenuItem->Size = System::Drawing::Size(234, 34);
			this->apieProgramaToolStripMenuItem->Text = L"&Apie programa";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"TextDocuments |*.txt";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Text Documents |*.txt|All Files|*.*";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(230, 37);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(203, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Atnaujinti";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(6, 37);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(203, 38);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Issaugoti";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(6, 166);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(427, 42);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Generuoti visus 5 sarasus";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(542, 653);
			this->progressBar1->MarqueeAnimationSpeed = 1000;
			this->progressBar1->Maximum = 1000;
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(427, 49);
			this->progressBar1->Step = 1;
			this->progressBar1->TabIndex = 6;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Location = System::Drawing::Point(536, 153);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(439, 227);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sarasu generavimas";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(6, 122);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(427, 38);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Generuoti Sarasa 5";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(230, 78);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(203, 38);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Generuoti Sarasa 4";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(6, 78);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(203, 38);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Generuoti Sarasa 3";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(230, 34);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(203, 38);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Generuoti Sarasa 2";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 34);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(203, 38);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Generuoti Sarasa 1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->Location = System::Drawing::Point(-3, -3);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox1->Size = System::Drawing::Size(509, 613);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(12, 36);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(517, 681);
			this->tabControl1->TabIndex = 9;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(509, 648);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Sarasas 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage6);
			this->tabControl2->Controls->Add(this->tabPage7);
			this->tabControl2->Controls->Add(this->tabPage8);
			this->tabControl2->Location = System::Drawing::Point(-4, 3);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(517, 649);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->pictureBox1);
			this->tabPage6->Controls->Add(this->richTextBox1);
			this->tabPage6->Location = System::Drawing::Point(4, 29);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(509, 616);
			this->tabPage6->TabIndex = 0;
			this->tabPage6->Text = L"Sarasas 1";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(128, 227);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(212, 56);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// tabPage7
			// 
			this->tabPage7->Location = System::Drawing::Point(4, 29);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(509, 616);
			this->tabPage7->TabIndex = 1;
			this->tabPage7->Text = L"Vargsiukai";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// tabPage8
			// 
			this->tabPage8->Location = System::Drawing::Point(4, 29);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(509, 616);
			this->tabPage8->TabIndex = 2;
			this->tabPage8->Text = L"Kietiakiai";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->tabControl3);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(509, 648);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Sarasas 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage9);
			this->tabControl3->Controls->Add(this->tabPage10);
			this->tabControl3->Controls->Add(this->tabPage11);
			this->tabControl3->Location = System::Drawing::Point(-4, 3);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(517, 649);
			this->tabControl3->TabIndex = 14;
			// 
			// tabPage9
			// 
			this->tabPage9->Controls->Add(this->pictureBox2);
			this->tabPage9->Controls->Add(this->richTextBox2);
			this->tabPage9->Location = System::Drawing::Point(4, 29);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Padding = System::Windows::Forms::Padding(3);
			this->tabPage9->Size = System::Drawing::Size(509, 616);
			this->tabPage9->TabIndex = 0;
			this->tabPage9->Text = L"Sarasas 2";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(128, 227);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(212, 56);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox2->Location = System::Drawing::Point(-3, -3);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox2->Size = System::Drawing::Size(509, 613);
			this->richTextBox2->TabIndex = 9;
			this->richTextBox2->Text = L"";
			// 
			// tabPage10
			// 
			this->tabPage10->Location = System::Drawing::Point(4, 29);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(509, 616);
			this->tabPage10->TabIndex = 1;
			this->tabPage10->Text = L"Vargsiukai";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// tabPage11
			// 
			this->tabPage11->Location = System::Drawing::Point(4, 29);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Size = System::Drawing::Size(509, 616);
			this->tabPage11->TabIndex = 2;
			this->tabPage11->Text = L"Kietiakiai";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->tabControl4);
			this->tabPage3->Location = System::Drawing::Point(4, 29);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(509, 648);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Sarasas 3";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabControl4
			// 
			this->tabControl4->Controls->Add(this->tabPage12);
			this->tabControl4->Controls->Add(this->tabPage13);
			this->tabControl4->Controls->Add(this->tabPage14);
			this->tabControl4->Location = System::Drawing::Point(-4, 3);
			this->tabControl4->Name = L"tabControl4";
			this->tabControl4->SelectedIndex = 0;
			this->tabControl4->Size = System::Drawing::Size(517, 649);
			this->tabControl4->TabIndex = 15;
			// 
			// tabPage12
			// 
			this->tabPage12->Controls->Add(this->pictureBox3);
			this->tabPage12->Controls->Add(this->richTextBox3);
			this->tabPage12->Location = System::Drawing::Point(4, 29);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(509, 616);
			this->tabPage12->TabIndex = 0;
			this->tabPage12->Text = L"Sarasas 3";
			this->tabPage12->UseVisualStyleBackColor = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(128, 227);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(212, 56);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// richTextBox3
			// 
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox3->Location = System::Drawing::Point(-3, -3);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox3->Size = System::Drawing::Size(509, 613);
			this->richTextBox3->TabIndex = 9;
			this->richTextBox3->Text = L"";
			// 
			// tabPage13
			// 
			this->tabPage13->Location = System::Drawing::Point(4, 29);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(509, 616);
			this->tabPage13->TabIndex = 1;
			this->tabPage13->Text = L"Vargsiukai";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// tabPage14
			// 
			this->tabPage14->Location = System::Drawing::Point(4, 29);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Size = System::Drawing::Size(509, 616);
			this->tabPage14->TabIndex = 2;
			this->tabPage14->Text = L"Kietiakiai";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->tabControl5);
			this->tabPage4->Location = System::Drawing::Point(4, 29);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(509, 648);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Sarasas 4";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabPage15);
			this->tabControl5->Controls->Add(this->tabPage16);
			this->tabControl5->Controls->Add(this->tabPage17);
			this->tabControl5->Location = System::Drawing::Point(-4, 3);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(517, 649);
			this->tabControl5->TabIndex = 16;
			// 
			// tabPage15
			// 
			this->tabPage15->Controls->Add(this->pictureBox4);
			this->tabPage15->Controls->Add(this->richTextBox4);
			this->tabPage15->Location = System::Drawing::Point(4, 29);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(3);
			this->tabPage15->Size = System::Drawing::Size(509, 616);
			this->tabPage15->TabIndex = 0;
			this->tabPage15->Text = L"Sarasas 4";
			this->tabPage15->UseVisualStyleBackColor = true;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(128, 227);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(212, 56);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// richTextBox4
			// 
			this->richTextBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox4->Location = System::Drawing::Point(-3, -3);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox4->Size = System::Drawing::Size(509, 613);
			this->richTextBox4->TabIndex = 9;
			this->richTextBox4->Text = L"";
			// 
			// tabPage16
			// 
			this->tabPage16->Location = System::Drawing::Point(4, 29);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Padding = System::Windows::Forms::Padding(3);
			this->tabPage16->Size = System::Drawing::Size(509, 616);
			this->tabPage16->TabIndex = 1;
			this->tabPage16->Text = L"Vargsiukai";
			this->tabPage16->UseVisualStyleBackColor = true;
			// 
			// tabPage17
			// 
			this->tabPage17->Location = System::Drawing::Point(4, 29);
			this->tabPage17->Name = L"tabPage17";
			this->tabPage17->Size = System::Drawing::Size(509, 616);
			this->tabPage17->TabIndex = 2;
			this->tabPage17->Text = L"Kietiakiai";
			this->tabPage17->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->tabControl6);
			this->tabPage5->Location = System::Drawing::Point(4, 29);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(509, 648);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Sarasas 5";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabControl6
			// 
			this->tabControl6->Controls->Add(this->tabPage18);
			this->tabControl6->Controls->Add(this->tabPage19);
			this->tabControl6->Controls->Add(this->tabPage20);
			this->tabControl6->Location = System::Drawing::Point(-4, 3);
			this->tabControl6->Name = L"tabControl6";
			this->tabControl6->SelectedIndex = 0;
			this->tabControl6->Size = System::Drawing::Size(517, 649);
			this->tabControl6->TabIndex = 17;
			// 
			// tabPage18
			// 
			this->tabPage18->Controls->Add(this->pictureBox5);
			this->tabPage18->Controls->Add(this->richTextBox5);
			this->tabPage18->Location = System::Drawing::Point(4, 29);
			this->tabPage18->Name = L"tabPage18";
			this->tabPage18->Padding = System::Windows::Forms::Padding(3);
			this->tabPage18->Size = System::Drawing::Size(509, 616);
			this->tabPage18->TabIndex = 0;
			this->tabPage18->Text = L"Sarasas 5";
			this->tabPage18->UseVisualStyleBackColor = true;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(128, 227);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(212, 56);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 13;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// richTextBox5
			// 
			this->richTextBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox5->Location = System::Drawing::Point(-3, -3);
			this->richTextBox5->Name = L"richTextBox5";
			this->richTextBox5->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox5->Size = System::Drawing::Size(509, 613);
			this->richTextBox5->TabIndex = 9;
			this->richTextBox5->Text = L"";
			// 
			// tabPage19
			// 
			this->tabPage19->Location = System::Drawing::Point(4, 29);
			this->tabPage19->Name = L"tabPage19";
			this->tabPage19->Padding = System::Windows::Forms::Padding(3);
			this->tabPage19->Size = System::Drawing::Size(509, 616);
			this->tabPage19->TabIndex = 1;
			this->tabPage19->Text = L"Vargsiukai";
			this->tabPage19->UseVisualStyleBackColor = true;
			// 
			// tabPage20
			// 
			this->tabPage20->Location = System::Drawing::Point(4, 29);
			this->tabPage20->Name = L"tabPage20";
			this->tabPage20->Size = System::Drawing::Size(509, 616);
			this->tabPage20->TabIndex = 2;
			this->tabPage20->Text = L"Kietiakiai";
			this->tabPage20->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(536, 42);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(439, 96);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Redagavimas";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button14);
			this->groupBox3->Controls->Add(this->button13);
			this->groupBox3->Controls->Add(this->button12);
			this->groupBox3->Controls->Add(this->button11);
			this->groupBox3->Controls->Add(this->button10);
			this->groupBox3->Controls->Add(this->button9);
			this->groupBox3->Location = System::Drawing::Point(536, 404);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(439, 223);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Sarasu rusiavimas";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(6, 164);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(427, 42);
			this->button14->TabIndex = 12;
			this->button14->Text = L"Rusiuoti visus 5 sarasus";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(6, 120);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(427, 38);
			this->button13->TabIndex = 12;
			this->button13->Text = L"Rusiuoti Sarasa 5";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(230, 76);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(203, 38);
			this->button12->TabIndex = 12;
			this->button12->Text = L"Rusiuoti Sarasa 4";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(6, 76);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(203, 38);
			this->button11->TabIndex = 12;
			this->button11->Text = L"Rusiuoti Sarasa 3";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(230, 32);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(203, 38);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Rusiuoti Sarasa 2";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(6, 32);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(203, 38);
			this->button9->TabIndex = 12;
			this->button9->Text = L"Rusiuoti Sarasa 1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(987, 729);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->progressBar1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Programa | Arnas Tomas Markunas";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabControl4->ResumeLayout(false);
			this->tabPage12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabControl5->ResumeLayout(false);
			this->tabPage15->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabControl6->ResumeLayout(false);
			this->tabPage18->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void issaugoti() {
		if ((tabControl1->SelectedTab) == (tabPage1))
		{
			pictureBox1->Visible = true;
			System::Windows::Forms::Application::DoEvents();

			FileStream^ output = gcnew FileStream("sarasas1.txt", FileMode::Truncate);
			StreamWriter^ sw = gcnew StreamWriter(output);
			sw->Write(richTextBox1->Text);
			sw->Close();

			System::Windows::Forms::Application::DoEvents();
			pictureBox1->Visible = false;
			MessageBox::Show("Sarasas1.txt buvo issaugotas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		if ((tabControl1->SelectedTab) == (tabPage2))
		{
			pictureBox2->Visible = true;
			System::Windows::Forms::Application::DoEvents();

			FileStream^ output2 = gcnew FileStream("sarasas2.txt", FileMode::Create);
			StreamWriter^ sw2 = gcnew StreamWriter(output2);
			sw2->Write(richTextBox2->Text);
			sw2->Close();

			System::Windows::Forms::Application::DoEvents();
			pictureBox2->Visible = false;
			MessageBox::Show("Sarasas2.txt buvo issaugotas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		if ((tabControl1->SelectedTab) == (tabPage3))
		{
			pictureBox3->Visible = true;
			System::Windows::Forms::Application::DoEvents();

			FileStream^ output3 = gcnew FileStream("sarasas3.txt", FileMode::Create);
			StreamWriter^ sw3 = gcnew StreamWriter(output3);
			sw3->Write(richTextBox3->Text);
			sw3->Close();

			System::Windows::Forms::Application::DoEvents();
			pictureBox3->Visible = false;
			MessageBox::Show("Sarasas3.txt buvo issaugotas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		if ((tabControl1->SelectedTab) == (tabPage4))
		{
			pictureBox4->Visible = true;
			System::Windows::Forms::Application::DoEvents();

			FileStream^ output4 = gcnew FileStream("sarasas4.txt", FileMode::Create);
			StreamWriter^ sw4 = gcnew StreamWriter(output4);
			sw4->Write(richTextBox4->Text);
			sw4->Close();

			System::Windows::Forms::Application::DoEvents();
			pictureBox4->Visible = false;
			MessageBox::Show("Sarasas4.txt buvo issaugotas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		if ((tabControl1->SelectedTab) == (tabPage5))
		{
			pictureBox5->Visible = true;
			System::Windows::Forms::Application::DoEvents();

			FileStream^ output5 = gcnew FileStream("sarasas5.txt", FileMode::Create);
			StreamWriter^ sw5 = gcnew StreamWriter(output5);
			sw5->Write(richTextBox5->Text);
			sw5->Close();

			System::Windows::Forms::Application::DoEvents();
			pictureBox5->Visible = false;
			MessageBox::Show("Sarasas5.txt buvo issaugotas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	void atnaujinti() {
		if ((tabControl1->SelectedTab) == (tabPage1))
		{
			pictureBox1->Visible = true;
			System::Windows::Forms::Application::DoEvents();
			StreamReader^ sr = gcnew StreamReader("sarasas1.txt");
			richTextBox1->Text = sr->ReadToEnd();
			sr->Close();
			System::Windows::Forms::Application::DoEvents();
			pictureBox1->Visible = false;
			MessageBox::Show("Sarasas1.txt buvo atnaujintas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		if ((tabControl1->SelectedTab) == (tabPage2))
		{
			pictureBox2->Visible = true;
			System::Windows::Forms::Application::DoEvents();
			StreamReader^ sr = gcnew StreamReader("sarasas2.txt");
			richTextBox2->Text = sr->ReadToEnd();
			sr->Close();
			System::Windows::Forms::Application::DoEvents();
			pictureBox2->Visible = false;
			MessageBox::Show("Sarasas2.txt buvo atnaujintas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		if ((tabControl1->SelectedTab) == (tabPage3))
		{
			pictureBox3->Visible = true;
			System::Windows::Forms::Application::DoEvents();
			StreamReader^ sr = gcnew StreamReader("sarasas3.txt");
			richTextBox3->Text = sr->ReadToEnd();
			sr->Close();
			System::Windows::Forms::Application::DoEvents();
			pictureBox3->Visible = false;
			MessageBox::Show("Sarasas3.txt buvo atnaujintas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		if ((tabControl1->SelectedTab) == (tabPage4))
		{
			pictureBox4->Visible = true;
			System::Windows::Forms::Application::DoEvents();
			StreamReader^ sr = gcnew StreamReader("sarasas4.txt");
			richTextBox4->Text = sr->ReadToEnd();
			sr->Close();
			System::Windows::Forms::Application::DoEvents();
			pictureBox4->Visible = false;
			MessageBox::Show("Sarasas4.txt buvo atnaujintas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		if ((tabControl1->SelectedTab) == (tabPage5))
		{
			pictureBox5->Visible = true;
			System::Windows::Forms::Application::DoEvents();
			StreamReader^ sr = gcnew StreamReader("sarasas5.txt");
			richTextBox5->Text = sr->ReadToEnd();
			sr->Close();
			System::Windows::Forms::Application::DoEvents();
			pictureBox5->Visible = false;
			MessageBox::Show("Sarasas5.txt buvo atnaujintas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	void failoRasymas(StreamWriter^ outFile, int iki) {
		int max;
		max = 10;
		outFile->Write("Pavarde" + "\t\t");
		outFile->Write("Vardas" + "\t\t");
		outFile->Write("Egz" + "\t");
		outFile->Write("ND1 - ND5");
		outFile->Write("\r\n");
		outFile->Write("---------------------------------------------------------------------------------------------------");
		outFile->Write("\r\n");

		progressBar1->Maximum = iki;
		for (int i = 1; i <= iki; i++)
		{
			progressBar1->Value++;
			outFile->Write("Pavarde" + i + " ");
			outFile->Write("\t");
			outFile->Write("Vardas" + i + " ");
			if (i < 10)
			{
				outFile->Write("\t");
			}
			outFile->Write("\t");
			outFile->Write(rand() % max + 1 + " ");
			outFile->Write("\t");
			outFile->Write(rand() % max + 1 + " ");
			outFile->Write(rand() % max + 1 + " ");
			outFile->Write(rand() % max + 1 + " ");
			outFile->Write(rand() % max + 1 + " ");
			outFile->Write(rand() % max + 1 + "\r\n");
		}
	}

	void sarasas1() {
		// Sarasas 1
		pictureBox1->Visible = true;
		System::Windows::Forms::Application::DoEvents();

		progressBar1->Maximum = 1000;

		StreamWriter^ outFile1 = gcnew StreamWriter("sarasas1.txt");
		failoRasymas(outFile1, 1000);
		outFile1->Close();

		StreamReader^ readFile1 = gcnew StreamReader("sarasas1.txt");
		richTextBox1->Text = readFile1->ReadToEnd();
		readFile1->Close();

		progressBar1->Value = 0;

		System::Windows::Forms::Application::DoEvents();
		pictureBox1->Visible = false;
		MessageBox::Show("Sarasas1.txt buvo sugeneruotas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	void sarasas2() {
		// Sarasas 2
		pictureBox2->Visible = true;
		System::Windows::Forms::Application::DoEvents();

		progressBar1->Maximum = 10000;

		StreamWriter^ outFile2 = gcnew StreamWriter("sarasas2.txt");
		failoRasymas(outFile2, 10000);
		outFile2->Close();

		StreamReader^ readFile2 = gcnew StreamReader("sarasas2.txt");
		richTextBox2->Text = readFile2->ReadToEnd();
		readFile2->Close();

		progressBar1->Value = 0;

		System::Windows::Forms::Application::DoEvents();
		pictureBox2->Visible = false;
		MessageBox::Show("Sarasas2.txt buvo sugeneruotas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	void sarasas3() {
		// Sarasas 3
		pictureBox3->Visible = true;
		System::Windows::Forms::Application::DoEvents();

		progressBar1->Maximum = 100000;

		StreamWriter^ outFile3 = gcnew StreamWriter("sarasas3.txt");
		failoRasymas(outFile3, 100000);
		outFile3->Close();

		StreamReader^ readFile3 = gcnew StreamReader("sarasas3.txt");
		richTextBox3->Text = readFile3->ReadToEnd();
		readFile3->Close();

		progressBar1->Value = 0;

		System::Windows::Forms::Application::DoEvents();
		pictureBox3->Visible = false;
		MessageBox::Show("Sarasas3.txt buvo sugeneruotas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	void sarasas4() {
		// Sarasas 4
		pictureBox4->Visible = true;
		System::Windows::Forms::Application::DoEvents();

		progressBar1->Maximum = 1000000;

		StreamWriter^ outFile4 = gcnew StreamWriter("sarasas4.txt");
		failoRasymas(outFile4, 1000000);
		outFile4->Close();

		StreamReader^ readFile4 = gcnew StreamReader("sarasas4.txt");
		richTextBox4->Text = readFile4->ReadToEnd();
		readFile4->Close();

		progressBar1->Value = 0;

		System::Windows::Forms::Application::DoEvents();
		pictureBox4->Visible = false;
		MessageBox::Show("Sarasas4.txt buvo sugeneruotas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	void sarasas5() {
		// Sarasas 5
		pictureBox5->Visible = true;
		System::Windows::Forms::Application::DoEvents();

		progressBar1->Maximum = 10000000;

		StreamWriter^ outFile5 = gcnew StreamWriter("sarasas5.txt");
		failoRasymas(outFile5, 10000000);
		outFile5->Close();

		StreamReader^ readFile5 = gcnew StreamReader("sarasas5.txt");
		richTextBox5->Text = readFile5->ReadToEnd();
		readFile5->Close();

		progressBar1->Value = 0;

		System::Windows::Forms::Application::DoEvents();
		pictureBox5->Visible = false;
		MessageBox::Show("Sarasas5.txt buvo sugeneruotas!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		atnaujinti();
	}

	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		issaugoti();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		atnaujinti();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		issaugoti();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Visible = true;
		pictureBox2->Visible = true;
		pictureBox3->Visible = true;
		pictureBox4->Visible = true;
		pictureBox5->Visible = true;
		System::Windows::Forms::Application::DoEvents();

		sarasas1();
		sarasas2();
		sarasas3();
		sarasas4();
		sarasas5();

		System::Windows::Forms::Application::DoEvents();
		pictureBox1->Visible = false;
		pictureBox2->Visible = false;
		pictureBox3->Visible = false;
		pictureBox4->Visible = false;
		pictureBox5->Visible = false;
		MessageBox::Show("Sarasu generavimas pavyko!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		sarasas1();
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		sarasas2();
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		sarasas3();
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		sarasas4();
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		sarasas5();
	}

	private: System::Void generuotiSarasa1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		sarasas1();
	}

	private: System::Void generuotiSarasa2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		sarasas2();
	}

	private: System::Void generuotiSarasa3ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		sarasas3();
	}

	private: System::Void generuotiSarasa4ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		sarasas4();
	}

	private: System::Void generuotiSarasa5ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		sarasas5();
	}

	private: System::Void generuotiVisus5SarasusToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Visible = true;
		pictureBox2->Visible = true;
		pictureBox3->Visible = true;
		pictureBox4->Visible = true;
		pictureBox5->Visible = true;
		System::Windows::Forms::Application::DoEvents();

		sarasas1();
		sarasas2();
		sarasas3();
		sarasas4();
		sarasas5();

		System::Windows::Forms::Application::DoEvents();
		pictureBox1->Visible = false;
		pictureBox2->Visible = false;
		pictureBox3->Visible = false;
		pictureBox4->Visible = false;
		pictureBox5->Visible = false;
		MessageBox::Show("Sarasu generavimas pavyko!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
