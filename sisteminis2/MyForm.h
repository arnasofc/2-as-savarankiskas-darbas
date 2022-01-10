#pragma once
#include <iostream>
#include <fstream>
#include <iomanip> 
#include <vector> 
#include<numeric>
#include <algorithm> 
#include <sstream> 
#include <chrono>


namespace sisteminis2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	const char separator = ' ';
	const int nameWidth = 15;

	// Darbui su failais ir kitka
	string dummy; // placeholder

	// Failo duomenu ivedimui
	string vardasT;
	string pavardeT;
	double egzaminasT;

	// Failo duomenu saugojimas vectoriuje
	vector< string > vardasV;
	vector< string > pavardeV;
	vector< double > namaiV; // Namu darbai
	vector< double > egzaminasV;

	// Namu darbu ivedimui is failo
	double temp; // Placeholder

	//vidurkio skaiciavimui
	double hold;
	double hold2;
	vector< double > averageV; // Vectoriuje laikomi rezultatai V

	//Mediano skaiciavimui
	double hold3;
	vector< double > averageM; // Vectoriuje laikomi rezultatai M

	// Is string i integer konvertavimui
	string laikom;

	//finalgrade skaiciavimui
	double vidurkisG;
	double vidurkisGM;
	vector < double > galutinisV;  // Vectoriuje laikomi rezultatai V
	vector < double > galutinisM;  // Vectoriuje laikomi rezultatai M

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
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::RichTextBox^ richTextBox7;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::RichTextBox^ richTextBox8;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::RichTextBox^ richTextBox9;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::RichTextBox^ richTextBox10;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::RichTextBox^ richTextBox11;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::RichTextBox^ richTextBox12;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::RichTextBox^ richTextBox13;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::RichTextBox^ richTextBox14;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::RichTextBox^ richTextBox15;
private: System::Windows::Forms::ToolStripMenuItem^ sarasuRusiavimasToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ rusiuotiSarasa1ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ rusiuotiSarasa2ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ rusiuotiSarasaToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ rusiuotiSarasa4ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ rusiuotiSarasa5ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ rusiuotiVisus5SarasusToolStripMenuItem;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::ToolStripMenuItem^ naujasToolStripMenuItem;

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
			this->naujasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->sarasuRusiavimasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rusiuotiSarasa1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rusiuotiSarasa2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rusiuotiSarasaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rusiuotiSarasa4ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rusiuotiSarasa5ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rusiuotiVisus5SarasusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox8 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox9 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl4 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage13 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox10 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage14 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox11 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox12 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox13 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl6 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox5 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox14 = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox15 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
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
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->tabPage11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->tabControl4->SuspendLayout();
			this->tabPage12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->tabPage14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->tabPage4->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabPage15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->tabPage16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->tabPage17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->tabPage5->SuspendLayout();
			this->tabControl6->SuspendLayout();
			this->tabPage18->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->tabPage19->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->tabPage20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->sarasaiToolStripMenuItem, this->sarasuRusiavimasToolStripMenuItem, this->apieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(987, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->naujasToolStripMenuItem,
					this->saveToolStripMenuItem, this->openToolStripMenuItem, this->toolStripSeparator1, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(77, 29);
			this->fileToolStripMenuItem->Text = L"Meniu";
			// 
			// naujasToolStripMenuItem
			// 
			this->naujasToolStripMenuItem->Name = L"naujasToolStripMenuItem";
			this->naujasToolStripMenuItem->Size = System::Drawing::Size(189, 34);
			this->naujasToolStripMenuItem->Text = L"&Naujas";
			this->naujasToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::naujasToolStripMenuItem_Click);
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
			this->sarasaiToolStripMenuItem->Size = System::Drawing::Size(186, 29);
			this->sarasaiToolStripMenuItem->Text = L"Sarasu Generavimas";
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
			// sarasuRusiavimasToolStripMenuItem
			// 
			this->sarasuRusiavimasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->rusiuotiSarasa1ToolStripMenuItem,
					this->rusiuotiSarasa2ToolStripMenuItem, this->rusiuotiSarasaToolStripMenuItem, this->rusiuotiSarasa4ToolStripMenuItem, this->rusiuotiSarasa5ToolStripMenuItem,
					this->rusiuotiVisus5SarasusToolStripMenuItem
			});
			this->sarasuRusiavimasToolStripMenuItem->Name = L"sarasuRusiavimasToolStripMenuItem";
			this->sarasuRusiavimasToolStripMenuItem->Size = System::Drawing::Size(173, 29);
			this->sarasuRusiavimasToolStripMenuItem->Text = L"Sarasu Rusiavimas";
			// 
			// rusiuotiSarasa1ToolStripMenuItem
			// 
			this->rusiuotiSarasa1ToolStripMenuItem->Name = L"rusiuotiSarasa1ToolStripMenuItem";
			this->rusiuotiSarasa1ToolStripMenuItem->Size = System::Drawing::Size(300, 34);
			this->rusiuotiSarasa1ToolStripMenuItem->Text = L"&Rusiuoti Sarasa 1";
			this->rusiuotiSarasa1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rusiuotiSarasa1ToolStripMenuItem_Click);
			// 
			// rusiuotiSarasa2ToolStripMenuItem
			// 
			this->rusiuotiSarasa2ToolStripMenuItem->Name = L"rusiuotiSarasa2ToolStripMenuItem";
			this->rusiuotiSarasa2ToolStripMenuItem->Size = System::Drawing::Size(300, 34);
			this->rusiuotiSarasa2ToolStripMenuItem->Text = L"&Rusiuoti Sarasa 2";
			this->rusiuotiSarasa2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rusiuotiSarasa2ToolStripMenuItem_Click);
			// 
			// rusiuotiSarasaToolStripMenuItem
			// 
			this->rusiuotiSarasaToolStripMenuItem->Name = L"rusiuotiSarasaToolStripMenuItem";
			this->rusiuotiSarasaToolStripMenuItem->Size = System::Drawing::Size(300, 34);
			this->rusiuotiSarasaToolStripMenuItem->Text = L"&Rusiuoti Sarasa 3";
			this->rusiuotiSarasaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rusiuotiSarasaToolStripMenuItem_Click);
			// 
			// rusiuotiSarasa4ToolStripMenuItem
			// 
			this->rusiuotiSarasa4ToolStripMenuItem->Name = L"rusiuotiSarasa4ToolStripMenuItem";
			this->rusiuotiSarasa4ToolStripMenuItem->Size = System::Drawing::Size(300, 34);
			this->rusiuotiSarasa4ToolStripMenuItem->Text = L"&Rusiuoti Sarasa 4";
			this->rusiuotiSarasa4ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rusiuotiSarasa4ToolStripMenuItem_Click);
			// 
			// rusiuotiSarasa5ToolStripMenuItem
			// 
			this->rusiuotiSarasa5ToolStripMenuItem->Name = L"rusiuotiSarasa5ToolStripMenuItem";
			this->rusiuotiSarasa5ToolStripMenuItem->Size = System::Drawing::Size(300, 34);
			this->rusiuotiSarasa5ToolStripMenuItem->Text = L"&Rusiuoti Sarasa 5";
			this->rusiuotiSarasa5ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rusiuotiSarasa5ToolStripMenuItem_Click);
			// 
			// rusiuotiVisus5SarasusToolStripMenuItem
			// 
			this->rusiuotiVisus5SarasusToolStripMenuItem->Name = L"rusiuotiVisus5SarasusToolStripMenuItem";
			this->rusiuotiVisus5SarasusToolStripMenuItem->Size = System::Drawing::Size(300, 34);
			this->rusiuotiVisus5SarasusToolStripMenuItem->Text = L"&Rusiuoti visus 5 sarasus";
			this->rusiuotiVisus5SarasusToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::rusiuotiVisus5SarasusToolStripMenuItem_Click);
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
			this->apieProgramaToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->apieProgramaToolStripMenuItem->Text = L"&Apie programa";
			this->apieProgramaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::apieProgramaToolStripMenuItem_Click);
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
			this->button2->Location = System::Drawing::Point(298, 37);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Atnaujinti (Local)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(158, 37);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 38);
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
			this->progressBar1->Location = System::Drawing::Point(542, 648);
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
			this->richTextBox1->Text = L"Pavarde\t\tVardas\t\tEgz\tND1 - ND5\n--------------------------------------------------"
				L"------------------------------------------------";
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
			this->tabPage7->Controls->Add(this->pictureBox6);
			this->tabPage7->Controls->Add(this->richTextBox6);
			this->tabPage7->Location = System::Drawing::Point(4, 29);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(509, 616);
			this->tabPage7->TabIndex = 1;
			this->tabPage7->Text = L"Vargsiukai";
			this->tabPage7->UseVisualStyleBackColor = true;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(128, 227);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(212, 56);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// richTextBox6
			// 
			this->richTextBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox6->Location = System::Drawing::Point(-3, -3);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->ReadOnly = true;
			this->richTextBox6->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox6->Size = System::Drawing::Size(509, 613);
			this->richTextBox6->TabIndex = 9;
			this->richTextBox6->Text = L"";
			// 
			// tabPage8
			// 
			this->tabPage8->Controls->Add(this->pictureBox7);
			this->tabPage8->Controls->Add(this->richTextBox7);
			this->tabPage8->Location = System::Drawing::Point(4, 29);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(509, 616);
			this->tabPage8->TabIndex = 2;
			this->tabPage8->Text = L"Kietiakiai";
			this->tabPage8->UseVisualStyleBackColor = true;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(128, 227);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(212, 56);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 11;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// richTextBox7
			// 
			this->richTextBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox7->Location = System::Drawing::Point(-3, -3);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->ReadOnly = true;
			this->richTextBox7->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox7->Size = System::Drawing::Size(509, 613);
			this->richTextBox7->TabIndex = 10;
			this->richTextBox7->Text = L"";
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
			this->richTextBox2->Text = L"Pavarde\t\tVardas\t\tEgz\tND1 - ND5\n--------------------------------------------------"
				L"------------------------------------------------";
			// 
			// tabPage10
			// 
			this->tabPage10->Controls->Add(this->pictureBox8);
			this->tabPage10->Controls->Add(this->richTextBox8);
			this->tabPage10->Location = System::Drawing::Point(4, 29);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(509, 616);
			this->tabPage10->TabIndex = 1;
			this->tabPage10->Text = L"Vargsiukai";
			this->tabPage10->UseVisualStyleBackColor = true;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(128, 227);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(212, 56);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 14;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			// 
			// richTextBox8
			// 
			this->richTextBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox8->Location = System::Drawing::Point(-3, -3);
			this->richTextBox8->Name = L"richTextBox8";
			this->richTextBox8->ReadOnly = true;
			this->richTextBox8->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox8->Size = System::Drawing::Size(509, 613);
			this->richTextBox8->TabIndex = 10;
			this->richTextBox8->Text = L"";
			// 
			// tabPage11
			// 
			this->tabPage11->Controls->Add(this->pictureBox9);
			this->tabPage11->Controls->Add(this->richTextBox9);
			this->tabPage11->Location = System::Drawing::Point(4, 29);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Size = System::Drawing::Size(509, 616);
			this->tabPage11->TabIndex = 2;
			this->tabPage11->Text = L"Kietiakiai";
			this->tabPage11->UseVisualStyleBackColor = true;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(128, 227);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(212, 56);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 14;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			// 
			// richTextBox9
			// 
			this->richTextBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox9->Location = System::Drawing::Point(-3, -3);
			this->richTextBox9->Name = L"richTextBox9";
			this->richTextBox9->ReadOnly = true;
			this->richTextBox9->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox9->Size = System::Drawing::Size(509, 613);
			this->richTextBox9->TabIndex = 10;
			this->richTextBox9->Text = L"";
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
			this->richTextBox3->Text = L"Pavarde\t\tVardas\t\tEgz\tND1 - ND5\n--------------------------------------------------"
				L"------------------------------------------------";
			// 
			// tabPage13
			// 
			this->tabPage13->Controls->Add(this->pictureBox10);
			this->tabPage13->Controls->Add(this->richTextBox10);
			this->tabPage13->Location = System::Drawing::Point(4, 29);
			this->tabPage13->Name = L"tabPage13";
			this->tabPage13->Padding = System::Windows::Forms::Padding(3);
			this->tabPage13->Size = System::Drawing::Size(509, 616);
			this->tabPage13->TabIndex = 1;
			this->tabPage13->Text = L"Vargsiukai";
			this->tabPage13->UseVisualStyleBackColor = true;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(128, 227);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(212, 56);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 14;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			// 
			// richTextBox10
			// 
			this->richTextBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox10->Location = System::Drawing::Point(-3, -3);
			this->richTextBox10->Name = L"richTextBox10";
			this->richTextBox10->ReadOnly = true;
			this->richTextBox10->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox10->Size = System::Drawing::Size(509, 613);
			this->richTextBox10->TabIndex = 10;
			this->richTextBox10->Text = L"";
			// 
			// tabPage14
			// 
			this->tabPage14->Controls->Add(this->pictureBox11);
			this->tabPage14->Controls->Add(this->richTextBox11);
			this->tabPage14->Location = System::Drawing::Point(4, 29);
			this->tabPage14->Name = L"tabPage14";
			this->tabPage14->Size = System::Drawing::Size(509, 616);
			this->tabPage14->TabIndex = 2;
			this->tabPage14->Text = L"Kietiakiai";
			this->tabPage14->UseVisualStyleBackColor = true;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(128, 227);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(212, 56);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 14;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Visible = false;
			// 
			// richTextBox11
			// 
			this->richTextBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox11->Location = System::Drawing::Point(-3, -3);
			this->richTextBox11->Name = L"richTextBox11";
			this->richTextBox11->ReadOnly = true;
			this->richTextBox11->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox11->Size = System::Drawing::Size(509, 613);
			this->richTextBox11->TabIndex = 10;
			this->richTextBox11->Text = L"";
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
			this->richTextBox4->Text = L"Pavarde\t\tVardas\t\tEgz\tND1 - ND5\n--------------------------------------------------"
				L"------------------------------------------------";
			// 
			// tabPage16
			// 
			this->tabPage16->Controls->Add(this->pictureBox12);
			this->tabPage16->Controls->Add(this->richTextBox12);
			this->tabPage16->Location = System::Drawing::Point(4, 29);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Padding = System::Windows::Forms::Padding(3);
			this->tabPage16->Size = System::Drawing::Size(509, 616);
			this->tabPage16->TabIndex = 1;
			this->tabPage16->Text = L"Vargsiukai";
			this->tabPage16->UseVisualStyleBackColor = true;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(128, 227);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(212, 56);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 14;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			// 
			// richTextBox12
			// 
			this->richTextBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox12->Location = System::Drawing::Point(-3, -3);
			this->richTextBox12->Name = L"richTextBox12";
			this->richTextBox12->ReadOnly = true;
			this->richTextBox12->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox12->Size = System::Drawing::Size(509, 613);
			this->richTextBox12->TabIndex = 10;
			this->richTextBox12->Text = L"";
			// 
			// tabPage17
			// 
			this->tabPage17->Controls->Add(this->pictureBox13);
			this->tabPage17->Controls->Add(this->richTextBox13);
			this->tabPage17->Location = System::Drawing::Point(4, 29);
			this->tabPage17->Name = L"tabPage17";
			this->tabPage17->Size = System::Drawing::Size(509, 616);
			this->tabPage17->TabIndex = 2;
			this->tabPage17->Text = L"Kietiakiai";
			this->tabPage17->UseVisualStyleBackColor = true;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(128, 227);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(212, 56);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 14;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Visible = false;
			// 
			// richTextBox13
			// 
			this->richTextBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox13->Location = System::Drawing::Point(-3, -3);
			this->richTextBox13->Name = L"richTextBox13";
			this->richTextBox13->ReadOnly = true;
			this->richTextBox13->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox13->Size = System::Drawing::Size(509, 613);
			this->richTextBox13->TabIndex = 10;
			this->richTextBox13->Text = L"";
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
			this->richTextBox5->Text = L"Pavarde\t\tVardas\t\tEgz\tND1 - ND5\n--------------------------------------------------"
				L"------------------------------------------------";
			// 
			// tabPage19
			// 
			this->tabPage19->Controls->Add(this->pictureBox14);
			this->tabPage19->Controls->Add(this->richTextBox14);
			this->tabPage19->Location = System::Drawing::Point(4, 29);
			this->tabPage19->Name = L"tabPage19";
			this->tabPage19->Padding = System::Windows::Forms::Padding(3);
			this->tabPage19->Size = System::Drawing::Size(509, 616);
			this->tabPage19->TabIndex = 1;
			this->tabPage19->Text = L"Vargsiukai";
			this->tabPage19->UseVisualStyleBackColor = true;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(128, 227);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(212, 56);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 14;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Visible = false;
			// 
			// richTextBox14
			// 
			this->richTextBox14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox14->Location = System::Drawing::Point(-3, -3);
			this->richTextBox14->Name = L"richTextBox14";
			this->richTextBox14->ReadOnly = true;
			this->richTextBox14->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox14->Size = System::Drawing::Size(509, 613);
			this->richTextBox14->TabIndex = 10;
			this->richTextBox14->Text = L"";
			// 
			// tabPage20
			// 
			this->tabPage20->Controls->Add(this->pictureBox15);
			this->tabPage20->Controls->Add(this->richTextBox15);
			this->tabPage20->Location = System::Drawing::Point(4, 29);
			this->tabPage20->Name = L"tabPage20";
			this->tabPage20->Size = System::Drawing::Size(509, 616);
			this->tabPage20->TabIndex = 2;
			this->tabPage20->Text = L"Kietiakiai";
			this->tabPage20->UseVisualStyleBackColor = true;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(128, 227);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(212, 56);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 14;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Visible = false;
			// 
			// richTextBox15
			// 
			this->richTextBox15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox15->Location = System::Drawing::Point(-3, -3);
			this->richTextBox15->Name = L"richTextBox15";
			this->richTextBox15->ReadOnly = true;
			this->richTextBox15->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::ForcedVertical;
			this->richTextBox15->Size = System::Drawing::Size(509, 613);
			this->richTextBox15->TabIndex = 10;
			this->richTextBox15->Text = L"";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button15);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(536, 42);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(439, 96);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Redagavimas";
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(6, 37);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(146, 38);
			this->button15->TabIndex = 5;
			this->button15->Text = L"Naujas";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
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
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(6, 120);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(427, 38);
			this->button13->TabIndex = 12;
			this->button13->Text = L"Rusiuoti Sarasa 5";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(230, 76);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(203, 38);
			this->button12->TabIndex = 12;
			this->button12->Text = L"Rusiuoti Sarasa 4";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(6, 76);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(203, 38);
			this->button11->TabIndex = 12;
			this->button11->Text = L"Rusiuoti Sarasa 3";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(230, 32);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(203, 38);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Rusiuoti Sarasa 2";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
			this->tabPage7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->tabPage8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage9->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->tabPage11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabControl4->ResumeLayout(false);
			this->tabPage12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->tabPage14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabControl5->ResumeLayout(false);
			this->tabPage15->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->tabPage16->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->tabPage17->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabControl6->ResumeLayout(false);
			this->tabPage18->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->tabPage19->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->tabPage20->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
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
			if (i < 10) {
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
		atnaujinti();
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

	// Cia prasideda failu rusiavimas...

	void resetVectors() {
		pavardeV.clear();
		vardasV.clear();
		egzaminasV.clear();
		galutinisM.clear();
		galutinisV.clear();
		namaiV.clear();
		averageV.clear();
		averageM.clear();
	}

	void vidurkisV() {
		namaiV.erase(std::remove(namaiV.begin(), namaiV.end(), 0), namaiV.end());
		hold = accumulate(namaiV.begin(), namaiV.end(), 0);
		hold2 = hold / namaiV.size();
		averageV.push_back(hold2);
	}

	void finalGradeV(double vidurkis, double egzaminas) {
		vidurkisG = 0.4 * vidurkis + 0.6 * egzaminas;
		galutinisV.push_back(vidurkisG);
	}

	void vidurkisM() {
		namaiV.erase(std::remove(namaiV.begin(), namaiV.end(), 0), namaiV.end());
		sort(namaiV.begin(), namaiV.end());
		hold3 = (namaiV.size() % 2 == 0 ? (namaiV[namaiV.size() / 2] + namaiV[(namaiV.size() / 2) - 1]) / 2 : namaiV[namaiV.size() / 2]);
		averageM.push_back(hold3);
		namaiV.clear();
	}

	void finalGradeM(double vidurkis, double egzaminas) {
		vidurkisGM = 0.4 * vidurkis + 0.6 * egzaminas;
		galutinisM.push_back(vidurkisGM);
	}

	void input_main(int iki, string sarasas) {
		fstream input(sarasas, ios::in);
		if (input.is_open()) {
			getline(input, dummy);
			getline(input, dummy);
			for (int p = 0; p < iki; p++)
			{
				progressBar1->Value++;

				input >> pavardeT;
				pavardeV.push_back(pavardeT);

				input >> vardasT;
				vardasV.push_back(vardasT);

				input >> egzaminasT;
				egzaminasV.push_back(egzaminasT);

				for (int i = 0; i < 5; i++)
				{
					input >> laikom;
					stringstream parser(laikom);
					int x = 0;
					parser >> x;
					namaiV.push_back(x);
				}
				vidurkisV();
				finalGradeV(averageV[p], egzaminasV[p]);
				vidurkisM();
				finalGradeM(averageM[p], egzaminasV[p]);
				namaiV.clear();
				getline(input, dummy);
			}
			input.close();
		}
		else {
			cout << "Something went wrong! Check if sarasas[i].txt exist!";
		}
	}

	void input_output(int iki, ofstream& vargsiukai, ofstream& kietiakiai) {
		vargsiukai << "Pavarde           " << "Vardas            " << "Egz.           " << "Gal. (M)      " << "Gal. (V)" << endl;
		vargsiukai << "----------------------------------------------------------------------------------------" << endl;
		kietiakiai << "Pavarde           " << "Vardas            " << "Egz.           " << "Gal. (M)      " << "Gal. (V)" << endl;
		kietiakiai << "----------------------------------------------------------------------------------------" << endl;
		for (int i = 0; i < iki; i++)
		{
			if (galutinisV[i] < 5.00) {
				vargsiukai << left << setw(nameWidth) << setfill(separator) << pavardeV[i];
				if (i < 10) {
					vargsiukai << "  ";
				}
				if (i > 10 && i < 100) {
					vargsiukai << " ";
				}
				vargsiukai << left << setw(nameWidth) << setfill(separator) << vardasV[i];
				if (i < 10) {
					vargsiukai << "  ";
				}
				if (i > 10 && i < 100) {
					vargsiukai << " ";
				}
				vargsiukai << left << setw(nameWidth) << setfill(separator) << setprecision(2) << fixed << egzaminasV[i];
				vargsiukai << left << setw(nameWidth) << setfill(separator) << setprecision(2) << fixed << galutinisM[i];
				vargsiukai << left << setw(nameWidth) << setfill(separator) << setprecision(2) << fixed << galutinisV[i] << endl;
			}
			if (galutinisV[i] >= 5.00) {
				kietiakiai << left << setw(16) << setfill(separator) << pavardeV[i];
				if (i < 9) {
					kietiakiai << " ";
				}
				kietiakiai << left << setw(16) << setfill(separator) << vardasV[i];
				if (i < 9) {
					kietiakiai << " ";
				}				
				kietiakiai << left << setw(14) << setfill(separator) << setprecision(2) << fixed << egzaminasV[i];
				if (egzaminasV[i] < 10) {
					kietiakiai << " ";
				}
				kietiakiai << left << setw(nameWidth) << setfill(separator) << setprecision(2) << fixed << galutinisM[i];
				kietiakiai << left << setw(nameWidth) << setfill(separator) << setprecision(2) << fixed << galutinisV[i] << endl;
			}
		}
		resetVectors();
	}

	void output_sarasas1() {
		pictureBox6->Visible = true;
		pictureBox7->Visible = true;
		System::Windows::Forms::Application::DoEvents();
		progressBar1->Maximum = 1000;

		ofstream sarasas1_vargsiukai{"sarasas1-vargsiukai.txt"};
		ofstream sarasas1_kietiakiai{"sarasas1-kietiakiai.txt"};

		input_main(1000, "sarasas1.txt");
		input_output(1000, sarasas1_vargsiukai, sarasas1_kietiakiai);

		sarasas1_vargsiukai.close();
		sarasas1_kietiakiai.close();

		System::Windows::Forms::Application::DoEvents();
		StreamReader^ readFileVarg1 = gcnew StreamReader("sarasas1-vargsiukai.txt");
		richTextBox6->Text = readFileVarg1->ReadToEnd();
		readFileVarg1->Close();

		System::Windows::Forms::Application::DoEvents();
		StreamReader^ readFileKiet1 = gcnew StreamReader("sarasas1-kietiakiai.txt");
		richTextBox7->Text = readFileKiet1->ReadToEnd();
		readFileKiet1->Close();

		System::Windows::Forms::Application::DoEvents();
		progressBar1->Value = 0;
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		MessageBox::Show("Sarasas 1 splicing is completed.", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	void output_sarasas2() {
		pictureBox8->Visible = true;
		pictureBox9->Visible = true;
		System::Windows::Forms::Application::DoEvents();
		progressBar1->Maximum = 10000;

		ofstream sarasas2_vargsiukai{ "sarasas2-vargsiukai.txt" };
		ofstream sarasas2_kietiakiai{ "sarasas2-kietiakiai.txt" };

		input_main(10000, "sarasas2.txt");
		input_output(10000, sarasas2_vargsiukai, sarasas2_kietiakiai);

		sarasas2_vargsiukai.close();
		sarasas2_kietiakiai.close();

		System::Windows::Forms::Application::DoEvents();
		StreamReader^ readFileVarg2 = gcnew StreamReader("sarasas2-vargsiukai.txt");
		richTextBox8->Text = readFileVarg2->ReadToEnd();
		readFileVarg2->Close();

		System::Windows::Forms::Application::DoEvents();
		StreamReader^ readFileKiet2 = gcnew StreamReader("sarasas2-kietiakiai.txt");
		richTextBox9->Text = readFileKiet2->ReadToEnd();
		readFileKiet2->Close();

		System::Windows::Forms::Application::DoEvents();
		progressBar1->Value = 0;
		pictureBox8->Visible = false;
		pictureBox9->Visible = false;
		MessageBox::Show("Sarasas 2 splicing is completed.", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	void output_sarasas3() {
		pictureBox10->Visible = true;
		pictureBox11->Visible = true;
		System::Windows::Forms::Application::DoEvents();
		progressBar1->Maximum = 100000;

		ofstream sarasas3_vargsiukai{ "sarasas3-vargsiukai.txt" };
		ofstream sarasas3_kietiakiai{ "sarasas3-kietiakiai.txt" };

		input_main(100000, "sarasas3.txt");
		input_output(100000, sarasas3_vargsiukai, sarasas3_kietiakiai);

		sarasas3_vargsiukai.close();
		sarasas3_kietiakiai.close();

		System::Windows::Forms::Application::DoEvents();
		StreamReader^ readFileVarg3 = gcnew StreamReader("sarasas3-vargsiukai.txt");
		richTextBox10->Text = readFileVarg3->ReadToEnd();
		readFileVarg3->Close();

		System::Windows::Forms::Application::DoEvents();
		StreamReader^ readFileKiet3 = gcnew StreamReader("sarasas3-kietiakiai.txt");
		richTextBox11->Text = readFileKiet3->ReadToEnd();
		readFileKiet3->Close();

		System::Windows::Forms::Application::DoEvents();
		progressBar1->Value = 0;
		pictureBox10->Visible = false;
		pictureBox11->Visible = false;
		MessageBox::Show("Sarasas 3 splicing is completed.", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	void output_sarasas4() {
		pictureBox12->Visible = true;
		pictureBox13->Visible = true;
		System::Windows::Forms::Application::DoEvents();
		progressBar1->Maximum = 1000000;

		ofstream sarasas4_vargsiukai{ "sarasas4-vargsiukai.txt" };
		ofstream sarasas4_kietiakiai{ "sarasas4-kietiakiai.txt" };

		input_main(1000000, "sarasas4.txt");
		input_output(1000000, sarasas4_vargsiukai, sarasas4_kietiakiai);

		sarasas4_vargsiukai.close();
		sarasas4_kietiakiai.close();

		System::Windows::Forms::Application::DoEvents();
		StreamReader^ readFileVarg4 = gcnew StreamReader("sarasas4-vargsiukai.txt");
		richTextBox12->Text = readFileVarg4->ReadToEnd();
		readFileVarg4->Close();

		System::Windows::Forms::Application::DoEvents();
		StreamReader^ readFileKiet4 = gcnew StreamReader("sarasas4-kietiakiai.txt");
		richTextBox13->Text = readFileKiet4->ReadToEnd();
		readFileKiet4->Close();

		System::Windows::Forms::Application::DoEvents();
		progressBar1->Value = 0;
		pictureBox12->Visible = false;
		pictureBox13->Visible = false;
		MessageBox::Show("Sarasas 4 splicing is completed.", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	void output_sarasas5() {
		pictureBox14->Visible = true;
		pictureBox15->Visible = true;
		System::Windows::Forms::Application::DoEvents();
		progressBar1->Maximum = 10000000;

		ofstream sarasas5_vargsiukai{ "sarasas5-vargsiukai.txt" };
		ofstream sarasas5_kietiakiai{ "sarasas5-kietiakiai.txt" };

		input_main(10000000, "sarasas5.txt");
		input_output(10000000, sarasas5_vargsiukai, sarasas5_kietiakiai);

		sarasas5_vargsiukai.close();
		sarasas5_kietiakiai.close();

		System::Windows::Forms::Application::DoEvents();
		StreamReader^ readFileVarg5 = gcnew StreamReader("sarasas5-vargsiukai.txt");
		richTextBox14->Text = readFileVarg5->ReadToEnd();
		readFileVarg5->Close();

		System::Windows::Forms::Application::DoEvents();
		StreamReader^ readFileKiet5 = gcnew StreamReader("sarasas5-kietiakiai.txt");
		richTextBox15->Text = readFileKiet5->ReadToEnd();
		readFileKiet5->Close();

		System::Windows::Forms::Application::DoEvents();
		progressBar1->Value = 0;
		pictureBox14->Visible = false;
		pictureBox15->Visible = false;
		MessageBox::Show("Sarasas 5 splicing is completed.", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		output_sarasas1();
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		output_sarasas2();
	}

	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		output_sarasas3();
	}

	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		output_sarasas4();
	}

	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		output_sarasas5();
	}

	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox6->Visible = true;
		pictureBox7->Visible = true;
		pictureBox8->Visible = true;
		pictureBox9->Visible = true;
		pictureBox10->Visible = true;
		pictureBox11->Visible = true;
		pictureBox12->Visible = true;
		pictureBox13->Visible = true;
		pictureBox14->Visible = true;
		pictureBox15->Visible = true;
		System::Windows::Forms::Application::DoEvents();

		output_sarasas1();
		output_sarasas2();
		output_sarasas3();
		output_sarasas4();
		output_sarasas5();

		System::Windows::Forms::Application::DoEvents();
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		pictureBox8->Visible = false;
		pictureBox9->Visible = false;
		pictureBox10->Visible = false;
		pictureBox11->Visible = false;
		pictureBox12->Visible = false;
		pictureBox13->Visible = false;
		pictureBox14->Visible = false;
		pictureBox15->Visible = false;
		MessageBox::Show("Sarasu skirstymas pavyko!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void rusiuotiSarasa1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		output_sarasas1();
	}

	private: System::Void rusiuotiSarasa2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		output_sarasas2();
	}

	private: System::Void rusiuotiSarasaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		output_sarasas3();
	}

	private: System::Void rusiuotiSarasa4ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		output_sarasas4();
	}

	private: System::Void rusiuotiSarasa5ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		output_sarasas5();
	}

	private: System::Void rusiuotiVisus5SarasusToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox6->Visible = true;
		pictureBox7->Visible = true;
		pictureBox8->Visible = true;
		pictureBox9->Visible = true;
		pictureBox10->Visible = true;
		pictureBox11->Visible = true;
		pictureBox12->Visible = true;
		pictureBox13->Visible = true;
		pictureBox14->Visible = true;
		pictureBox15->Visible = true;
		System::Windows::Forms::Application::DoEvents();

		output_sarasas1();
		output_sarasas2();
		output_sarasas3();
		output_sarasas4();
		output_sarasas5();

		System::Windows::Forms::Application::DoEvents();
		pictureBox6->Visible = false;
		pictureBox7->Visible = false;
		pictureBox8->Visible = false;
		pictureBox9->Visible = false;
		pictureBox10->Visible = false;
		pictureBox11->Visible = false;
		pictureBox12->Visible = false;
		pictureBox13->Visible = false;
		pictureBox14->Visible = false;
		pictureBox15->Visible = false;
		MessageBox::Show("Sarasu skirstymas pavyko!", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((tabControl1->SelectedTab) == (tabPage1)) {
			richTextBox1->Text = "Pavarde		Vardas		Egz	ND1 - ND5" + "\r\n" + "--------------------------------------------------------------------------------------------------";
		}

		if ((tabControl1->SelectedTab) == (tabPage2)) {
			richTextBox2->Text = "Pavarde		Vardas		Egz	ND1 - ND5" + "\r\n" + "--------------------------------------------------------------------------------------------------";

		}

		if ((tabControl1->SelectedTab) == (tabPage3)) {
			richTextBox3->Text = "Pavarde		Vardas		Egz	ND1 - ND5" + "\r\n" + "--------------------------------------------------------------------------------------------------";
		}

		if ((tabControl1->SelectedTab) == (tabPage4)) {
			richTextBox4->Text = "Pavarde		Vardas		Egz	ND1 - ND5" + "\r\n" + "--------------------------------------------------------------------------------------------------";
		}

		if ((tabControl1->SelectedTab) == (tabPage5)) {
			richTextBox5->Text = "Pavarde		Vardas		Egz	ND1 - ND5" + "\r\n" + "--------------------------------------------------------------------------------------------------";
		}
	}

	private: System::Void naujasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if ((tabControl1->SelectedTab) == (tabPage1)) {
			richTextBox1->Text = "Pavarde		Vardas		Egz	ND1 - ND5" + "\r\n" + "--------------------------------------------------------------------------------------------------";
		}

		if ((tabControl1->SelectedTab) == (tabPage2)) {
			richTextBox2->Text = "Pavarde		Vardas		Egz	ND1 - ND5" + "\r\n" + "--------------------------------------------------------------------------------------------------";

		}

		if ((tabControl1->SelectedTab) == (tabPage3)) {
			richTextBox3->Text = "Pavarde		Vardas		Egz	ND1 - ND5" + "\r\n" + "--------------------------------------------------------------------------------------------------";
		}

		if ((tabControl1->SelectedTab) == (tabPage4)) {
			richTextBox4->Text = "Pavarde		Vardas		Egz	ND1 - ND5" + "\r\n" + "--------------------------------------------------------------------------------------------------";
		}

		if ((tabControl1->SelectedTab) == (tabPage5)) {
			richTextBox5->Text = "Pavarde		Vardas		Egz	ND1 - ND5" + "\r\n" + "--------------------------------------------------------------------------------------------------";
		}
	}
	private: System::Void apieProgramaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Programos kurejas: Arnas Tomas Markunas VVK-PIT 2021", "Programa", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
