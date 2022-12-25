/*
*************************************************************************************
* Лабораторная работа № 6                                                           *
* Задача № 1                                                                        *
*                                                                                   *
* Условие:                                                                          *
* Разработать приложение WinForms на C++ со следующими параметрами:                 *
* - нахождение определителя матрицы (методами Коэффициентов,Гаусса,Треугольников)   *
* - транспонирование матрицы                                                        *
* - сложение, вычитание и произведение матриц                                       *
* - умножение матрицы на число                                                      *
* - возведение матрицы в степень                                                    *
* - заполнение матриц: ручное и генератором случайных чисел                         *
* - выполнить задание по варианту                                                   *
* - сохранение результатов в файл используя стандартные диалоговые окна             *
*                                                                                   *
* Выполнила:                                                                        *
* Кызылова Полина Андреевна                                                         *
* Группа: ПКТб-20-1                                                                 *
*                                                                                   *
* Дата: 21.05.2021                                                                  *
*************************************************************************************
*/

#pragma once

#include "UnitAbout.h"
#include "UnitHelp.h"
#include <cmath>

namespace Lab6_Kyzylova_Task1_Matrix {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для UnitMain
	/// </summary>
	public ref class UnitMain : public System::Windows::Forms::Form
	{
	public:
		UnitMain(void)
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
		~UnitMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panelCalcMenu;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonV11Menu;

	private: System::Windows::Forms::Button^  buttonMatrixDegreeMenu;

	private: System::Windows::Forms::Button^  buttonOperNumberMenu;

	private: System::Windows::Forms::Button^  buttonOperMatrixMenu;

	private: System::Windows::Forms::Button^  buttonTranspMenu;
	private: System::Windows::Forms::Button^  buttonOpredMenu;
	private: System::Windows::Forms::Panel^  panelMain;





	private: System::Windows::Forms::TextBox^  textBoxCols;


	private: System::Windows::Forms::TextBox^  textBoxRows;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  labelOperation;

	private: System::Windows::Forms::Button^  buttonExit1;

	private: System::Windows::Forms::Button^  buttonMatrixSave;

	private: System::Windows::Forms::Button^  buttonMatrixClear;

	private: System::Windows::Forms::Button^  buttonMatrixGeneration;







	private: System::Windows::Forms::DataGridView^  dataGridViewMatrix;









	private: System::Windows::Forms::Panel^  panelTransp;

	private: System::Windows::Forms::Button^  buttonSaveTrsnsp;
	private: System::Windows::Forms::Button^  buttonTransp;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::DataGridView^  dataGridViewTransp;
	private: System::Windows::Forms::Panel^  panelOperMatrix;
	private: System::Windows::Forms::Panel^  panelV11;



	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Panel^  panelOpred;
	private: System::Windows::Forms::TextBox^  textBoxTriangle;
	private: System::Windows::Forms::TextBox^  textBoxKoeff;
	private: System::Windows::Forms::TextBox^  textBoxGauss;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  buttonOpredTriangle;
	private: System::Windows::Forms::Button^  buttonOpredKoeff;
	private: System::Windows::Forms::Button^  buttonOpredGauss;
	private: System::Windows::Forms::Panel^  panelOperN;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBoxOperN;
	private: System::Windows::Forms::Button^  buttonSaveOperN;
	private: System::Windows::Forms::Button^  buttonOperN;
	private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::DataGridView^  dataGridViewOperN;
private: System::Windows::Forms::Panel^  panelDegree;

private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::TextBox^  textBoxDegree;
private: System::Windows::Forms::Button^  buttonSaveDegree;
private: System::Windows::Forms::Button^  buttonDegree;
private: System::Windows::Forms::DataGridView^  dataGridViewDegree;
private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  помощьToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  оПрограммеToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  помощьСВычислениямиToolStripMenuItem;
private: System::Windows::Forms::TextBox^  textBoxColsB;

private: System::Windows::Forms::TextBox^  textBoxRowsB;

private: System::Windows::Forms::TextBox^  textBoxColsA;

private: System::Windows::Forms::TextBox^  textBoxRowsA;

private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Button^  buttonExit2;

private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Button^  buttonSaveABResult;

private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Button^  buttonMultiply;

private: System::Windows::Forms::Button^  buttonMinus;

private: System::Windows::Forms::Button^  buttonPlus;
private: System::Windows::Forms::Button^  buttonSaveB;


private: System::Windows::Forms::Button^  buttonClearB;

private: System::Windows::Forms::Button^  buttonGenerB;

private: System::Windows::Forms::Button^  buttonSaveA;

private: System::Windows::Forms::Button^  buttonClearA;

private: System::Windows::Forms::Button^  buttonGenerA;

private: System::Windows::Forms::DataGridView^  dataGridViewABResult;

private: System::Windows::Forms::DataGridView^  dataGridViewB;

private: System::Windows::Forms::DataGridView^  dataGridViewA;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Button^  buttonV11Res;
private: System::Windows::Forms::TextBox^  textBoxV11L;

private: System::Windows::Forms::TextBox^  textBoxV11K;
private: System::Windows::Forms::TextBox^  textBoxV11Res;



private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::RichTextBox^  richTextBoxV11;
private: System::Windows::Forms::Button^  buttonExit3;
private: System::Windows::Forms::TextBox^  textBoxV11Cols;
private: System::Windows::Forms::TextBox^  textBoxV11Rows;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Button^  buttonV11Save;
private: System::Windows::Forms::Button^  buttonV11Clear;
private: System::Windows::Forms::Button^  buttonV11Gener;
private: System::Windows::Forms::DataGridView^  dataGridViewV11;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::TextBox^  textBoxV11N2;
private: System::Windows::Forms::TextBox^  textBoxV11N1;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::TextBox^  textBoxV11C;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::RichTextBox^  richTextBox1;
private: System::Windows::Forms::Label^  label35;
























	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(UnitMain::typeid));
			this->panelCalcMenu = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonV11Menu = (gcnew System::Windows::Forms::Button());
			this->buttonMatrixDegreeMenu = (gcnew System::Windows::Forms::Button());
			this->buttonOperNumberMenu = (gcnew System::Windows::Forms::Button());
			this->buttonOperMatrixMenu = (gcnew System::Windows::Forms::Button());
			this->buttonTranspMenu = (gcnew System::Windows::Forms::Button());
			this->buttonOpredMenu = (gcnew System::Windows::Forms::Button());
			this->panelV11 = (gcnew System::Windows::Forms::Panel());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBoxV11N2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxV11N1 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBoxV11C = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->buttonV11Res = (gcnew System::Windows::Forms::Button());
			this->textBoxV11L = (gcnew System::Windows::Forms::TextBox());
			this->textBoxV11K = (gcnew System::Windows::Forms::TextBox());
			this->textBoxV11Res = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->richTextBoxV11 = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonExit3 = (gcnew System::Windows::Forms::Button());
			this->textBoxV11Cols = (gcnew System::Windows::Forms::TextBox());
			this->textBoxV11Rows = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->buttonV11Save = (gcnew System::Windows::Forms::Button());
			this->buttonV11Clear = (gcnew System::Windows::Forms::Button());
			this->buttonV11Gener = (gcnew System::Windows::Forms::Button());
			this->dataGridViewV11 = (gcnew System::Windows::Forms::DataGridView());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->panelOperMatrix = (gcnew System::Windows::Forms::Panel());
			this->textBoxColsB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRowsB = (gcnew System::Windows::Forms::TextBox());
			this->textBoxColsA = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRowsA = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->buttonExit2 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->buttonSaveABResult = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonSaveB = (gcnew System::Windows::Forms::Button());
			this->buttonClearB = (gcnew System::Windows::Forms::Button());
			this->buttonGenerB = (gcnew System::Windows::Forms::Button());
			this->buttonSaveA = (gcnew System::Windows::Forms::Button());
			this->buttonClearA = (gcnew System::Windows::Forms::Button());
			this->buttonGenerA = (gcnew System::Windows::Forms::Button());
			this->dataGridViewABResult = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewB = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewA = (gcnew System::Windows::Forms::DataGridView());
			this->panelMain = (gcnew System::Windows::Forms::Panel());
			this->panelDegree = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBoxDegree = (gcnew System::Windows::Forms::TextBox());
			this->buttonSaveDegree = (gcnew System::Windows::Forms::Button());
			this->buttonDegree = (gcnew System::Windows::Forms::Button());
			this->dataGridViewDegree = (gcnew System::Windows::Forms::DataGridView());
			this->panelOperN = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBoxOperN = (gcnew System::Windows::Forms::TextBox());
			this->buttonSaveOperN = (gcnew System::Windows::Forms::Button());
			this->buttonOperN = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewOperN = (gcnew System::Windows::Forms::DataGridView());
			this->panelOpred = (gcnew System::Windows::Forms::Panel());
			this->textBoxTriangle = (gcnew System::Windows::Forms::TextBox());
			this->textBoxKoeff = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGauss = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonOpredTriangle = (gcnew System::Windows::Forms::Button());
			this->buttonOpredKoeff = (gcnew System::Windows::Forms::Button());
			this->buttonOpredGauss = (gcnew System::Windows::Forms::Button());
			this->textBoxCols = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRows = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->labelOperation = (gcnew System::Windows::Forms::Label());
			this->panelTransp = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonSaveTrsnsp = (gcnew System::Windows::Forms::Button());
			this->buttonTransp = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewTransp = (gcnew System::Windows::Forms::DataGridView());
			this->buttonExit1 = (gcnew System::Windows::Forms::Button());
			this->buttonMatrixSave = (gcnew System::Windows::Forms::Button());
			this->buttonMatrixClear = (gcnew System::Windows::Forms::Button());
			this->buttonMatrixGeneration = (gcnew System::Windows::Forms::Button());
			this->dataGridViewMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->помощьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->помощьСВычислениямиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panelCalcMenu->SuspendLayout();
			this->panelV11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewV11))->BeginInit();
			this->panelOperMatrix->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewABResult))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewA))->BeginInit();
			this->panelMain->SuspendLayout();
			this->panelDegree->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDegree))->BeginInit();
			this->panelOperN->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewOperN))->BeginInit();
			this->panelOpred->SuspendLayout();
			this->panelTransp->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTransp))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrix))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelCalcMenu
			// 
			this->panelCalcMenu->BackColor = System::Drawing::Color::Orchid;
			this->panelCalcMenu->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelCalcMenu->Controls->Add(this->label1);
			this->panelCalcMenu->Controls->Add(this->buttonV11Menu);
			this->panelCalcMenu->Controls->Add(this->buttonMatrixDegreeMenu);
			this->panelCalcMenu->Controls->Add(this->buttonOperNumberMenu);
			this->panelCalcMenu->Controls->Add(this->buttonOperMatrixMenu);
			this->panelCalcMenu->Controls->Add(this->buttonTranspMenu);
			this->panelCalcMenu->Controls->Add(this->buttonOpredMenu);
			this->panelCalcMenu->Location = System::Drawing::Point(16, 44);
			this->panelCalcMenu->Name = L"panelCalcMenu";
			this->panelCalcMenu->Size = System::Drawing::Size(255, 420);
			this->panelCalcMenu->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(97, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Меню";
			this->label1->Click += gcnew System::EventHandler(this, &UnitMain::label1_Click);
			// 
			// buttonV11Menu
			// 
			this->buttonV11Menu->BackColor = System::Drawing::Color::White;
			this->buttonV11Menu->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonV11Menu->FlatAppearance->BorderSize = 2;
			this->buttonV11Menu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonV11Menu->Location = System::Drawing::Point(18, 334);
			this->buttonV11Menu->Name = L"buttonV11Menu";
			this->buttonV11Menu->Size = System::Drawing::Size(217, 50);
			this->buttonV11Menu->TabIndex = 5;
			this->buttonV11Menu->Text = L"Вариант 11";
			this->buttonV11Menu->UseVisualStyleBackColor = false;
			this->buttonV11Menu->Click += gcnew System::EventHandler(this, &UnitMain::buttonV11Menu_Click);
			this->buttonV11Menu->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonV11Menu_MouseLeave);
			this->buttonV11Menu->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonV11Menu_MouseMove);
			// 
			// buttonMatrixDegreeMenu
			// 
			this->buttonMatrixDegreeMenu->BackColor = System::Drawing::Color::White;
			this->buttonMatrixDegreeMenu->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonMatrixDegreeMenu->FlatAppearance->BorderSize = 2;
			this->buttonMatrixDegreeMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMatrixDegreeMenu->Location = System::Drawing::Point(18, 278);
			this->buttonMatrixDegreeMenu->Name = L"buttonMatrixDegreeMenu";
			this->buttonMatrixDegreeMenu->Size = System::Drawing::Size(217, 50);
			this->buttonMatrixDegreeMenu->TabIndex = 4;
			this->buttonMatrixDegreeMenu->Text = L"Возведение матрицы в степень";
			this->buttonMatrixDegreeMenu->UseVisualStyleBackColor = false;
			this->buttonMatrixDegreeMenu->Click += gcnew System::EventHandler(this, &UnitMain::buttonMatrixDegreeMenu_Click);
			this->buttonMatrixDegreeMenu->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonMatrixDegreeMenu_MouseLeave);
			this->buttonMatrixDegreeMenu->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonMatrixDegreeMenu_MouseMove);
			// 
			// buttonOperNumberMenu
			// 
			this->buttonOperNumberMenu->BackColor = System::Drawing::Color::White;
			this->buttonOperNumberMenu->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonOperNumberMenu->FlatAppearance->BorderSize = 2;
			this->buttonOperNumberMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonOperNumberMenu->Location = System::Drawing::Point(18, 222);
			this->buttonOperNumberMenu->Name = L"buttonOperNumberMenu";
			this->buttonOperNumberMenu->Size = System::Drawing::Size(217, 50);
			this->buttonOperNumberMenu->TabIndex = 3;
			this->buttonOperNumberMenu->Text = L"Умножение матрицы на число";
			this->buttonOperNumberMenu->UseVisualStyleBackColor = false;
			this->buttonOperNumberMenu->Click += gcnew System::EventHandler(this, &UnitMain::buttonOperNumberMenu_Click);
			this->buttonOperNumberMenu->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonOperNumberMenu_MouseLeave);
			this->buttonOperNumberMenu->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonOperNumberMenu_MouseMove);
			// 
			// buttonOperMatrixMenu
			// 
			this->buttonOperMatrixMenu->BackColor = System::Drawing::Color::White;
			this->buttonOperMatrixMenu->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonOperMatrixMenu->FlatAppearance->BorderSize = 2;
			this->buttonOperMatrixMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonOperMatrixMenu->Location = System::Drawing::Point(18, 166);
			this->buttonOperMatrixMenu->Name = L"buttonOperMatrixMenu";
			this->buttonOperMatrixMenu->Size = System::Drawing::Size(217, 50);
			this->buttonOperMatrixMenu->TabIndex = 2;
			this->buttonOperMatrixMenu->Text = L"Операции с матрицами";
			this->buttonOperMatrixMenu->UseVisualStyleBackColor = false;
			this->buttonOperMatrixMenu->Click += gcnew System::EventHandler(this, &UnitMain::buttonOperMatrixMenu_Click);
			this->buttonOperMatrixMenu->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonOperMatrixMenu_MouseLeave);
			this->buttonOperMatrixMenu->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonOperMatrixMenu_MouseMove);
			// 
			// buttonTranspMenu
			// 
			this->buttonTranspMenu->BackColor = System::Drawing::Color::White;
			this->buttonTranspMenu->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonTranspMenu->FlatAppearance->BorderSize = 2;
			this->buttonTranspMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTranspMenu->Location = System::Drawing::Point(18, 110);
			this->buttonTranspMenu->Name = L"buttonTranspMenu";
			this->buttonTranspMenu->Size = System::Drawing::Size(217, 50);
			this->buttonTranspMenu->TabIndex = 1;
			this->buttonTranspMenu->Text = L"Транспонирование матрицы";
			this->buttonTranspMenu->UseVisualStyleBackColor = false;
			this->buttonTranspMenu->Click += gcnew System::EventHandler(this, &UnitMain::buttonTranspMenu_Click);
			this->buttonTranspMenu->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonTranspMenu_MouseLeave);
			this->buttonTranspMenu->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonTranspMenu_MouseMove);
			// 
			// buttonOpredMenu
			// 
			this->buttonOpredMenu->BackColor = System::Drawing::Color::White;
			this->buttonOpredMenu->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonOpredMenu->FlatAppearance->BorderSize = 2;
			this->buttonOpredMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonOpredMenu->ForeColor = System::Drawing::SystemColors::ControlText;
			this->buttonOpredMenu->Location = System::Drawing::Point(18, 54);
			this->buttonOpredMenu->Name = L"buttonOpredMenu";
			this->buttonOpredMenu->Size = System::Drawing::Size(217, 50);
			this->buttonOpredMenu->TabIndex = 0;
			this->buttonOpredMenu->Text = L"Определитель матрицы";
			this->buttonOpredMenu->UseVisualStyleBackColor = false;
			this->buttonOpredMenu->Click += gcnew System::EventHandler(this, &UnitMain::buttonOpredMenu_Click);
			this->buttonOpredMenu->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonOpredMenu_MouseLeave);
			this->buttonOpredMenu->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonOpredMenu_MouseMove);
			// 
			// panelV11
			// 
			this->panelV11->BackColor = System::Drawing::Color::Orchid;
			this->panelV11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelV11->Controls->Add(this->label35);
			this->panelV11->Controls->Add(this->richTextBox1);
			this->panelV11->Controls->Add(this->label34);
			this->panelV11->Controls->Add(this->label33);
			this->panelV11->Controls->Add(this->textBoxV11N2);
			this->panelV11->Controls->Add(this->textBoxV11N1);
			this->panelV11->Controls->Add(this->label32);
			this->panelV11->Controls->Add(this->label30);
			this->panelV11->Controls->Add(this->textBoxV11C);
			this->panelV11->Controls->Add(this->label31);
			this->panelV11->Controls->Add(this->label29);
			this->panelV11->Controls->Add(this->buttonV11Res);
			this->panelV11->Controls->Add(this->textBoxV11L);
			this->panelV11->Controls->Add(this->textBoxV11K);
			this->panelV11->Controls->Add(this->textBoxV11Res);
			this->panelV11->Controls->Add(this->label28);
			this->panelV11->Controls->Add(this->label27);
			this->panelV11->Controls->Add(this->label26);
			this->panelV11->Controls->Add(this->richTextBoxV11);
			this->panelV11->Controls->Add(this->buttonExit3);
			this->panelV11->Controls->Add(this->textBoxV11Cols);
			this->panelV11->Controls->Add(this->textBoxV11Rows);
			this->panelV11->Controls->Add(this->label25);
			this->panelV11->Controls->Add(this->label24);
			this->panelV11->Controls->Add(this->buttonV11Save);
			this->panelV11->Controls->Add(this->buttonV11Clear);
			this->panelV11->Controls->Add(this->buttonV11Gener);
			this->panelV11->Controls->Add(this->dataGridViewV11);
			this->panelV11->Controls->Add(this->label23);
			this->panelV11->Location = System::Drawing::Point(327, 32);
			this->panelV11->MinimumSize = System::Drawing::Size(679, 527);
			this->panelV11->Name = L"panelV11";
			this->panelV11->Size = System::Drawing::Size(679, 527);
			this->panelV11->TabIndex = 3;
			this->panelV11->Visible = false;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->Location = System::Drawing::Point(43, 336);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(251, 15);
			this->label35->TabIndex = 37;
			this->label35->Text = L"Введите диапазон генерации чисел:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(24, 52);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(248, 215);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label34->Location = System::Drawing::Point(496, 303);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(41, 15);
			this->label34->TabIndex = 36;
			this->label34->Text = L"До L:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label33->Location = System::Drawing::Point(364, 303);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(42, 15);
			this->label33->TabIndex = 35;
			this->label33->Text = L"От K:";
			// 
			// textBoxV11N2
			// 
			this->textBoxV11N2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxV11N2->Location = System::Drawing::Point(212, 358);
			this->textBoxV11N2->Name = L"textBoxV11N2";
			this->textBoxV11N2->Size = System::Drawing::Size(73, 21);
			this->textBoxV11N2->TabIndex = 34;
			// 
			// textBoxV11N1
			// 
			this->textBoxV11N1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxV11N1->Location = System::Drawing::Point(83, 358);
			this->textBoxV11N1->Name = L"textBoxV11N1";
			this->textBoxV11N1->Size = System::Drawing::Size(73, 21);
			this->textBoxV11N1->TabIndex = 33;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->Location = System::Drawing::Point(162, 361);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(49, 15);
			this->label32->TabIndex = 32;
			this->label32->Text = L"До n2:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(32, 361);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(49, 15);
			this->label30->TabIndex = 31;
			this->label30->Text = L"От n1:";
			// 
			// textBoxV11C
			// 
			this->textBoxV11C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxV11C->Location = System::Drawing::Point(466, 221);
			this->textBoxV11C->Name = L"textBoxV11C";
			this->textBoxV11C->Size = System::Drawing::Size(73, 21);
			this->textBoxV11C->TabIndex = 30;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(439, 223);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(20, 15);
			this->label31->TabIndex = 29;
			this->label31->Text = L"С:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(417, 411);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(53, 15);
			this->label29->TabIndex = 27;
			this->label29->Text = L"Ответ:";
			// 
			// buttonV11Res
			// 
			this->buttonV11Res->BackColor = System::Drawing::Color::White;
			this->buttonV11Res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonV11Res->Location = System::Drawing::Point(440, 345);
			this->buttonV11Res->Name = L"buttonV11Res";
			this->buttonV11Res->Size = System::Drawing::Size(145, 40);
			this->buttonV11Res->TabIndex = 26;
			this->buttonV11Res->Text = L"Рассчитать";
			this->buttonV11Res->UseVisualStyleBackColor = false;
			this->buttonV11Res->Click += gcnew System::EventHandler(this, &UnitMain::buttonV11Res_Click);
			this->buttonV11Res->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonV11Res_MouseLeave);
			this->buttonV11Res->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonV11Res_MouseMove);
			// 
			// textBoxV11L
			// 
			this->textBoxV11L->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxV11L->Location = System::Drawing::Point(540, 300);
			this->textBoxV11L->Name = L"textBoxV11L";
			this->textBoxV11L->Size = System::Drawing::Size(73, 21);
			this->textBoxV11L->TabIndex = 25;
			// 
			// textBoxV11K
			// 
			this->textBoxV11K->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxV11K->Location = System::Drawing::Point(409, 300);
			this->textBoxV11K->Name = L"textBoxV11K";
			this->textBoxV11K->Size = System::Drawing::Size(73, 21);
			this->textBoxV11K->TabIndex = 24;
			// 
			// textBoxV11Res
			// 
			this->textBoxV11Res->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxV11Res->Location = System::Drawing::Point(476, 408);
			this->textBoxV11Res->Name = L"textBoxV11Res";
			this->textBoxV11Res->Size = System::Drawing::Size(73, 21);
			this->textBoxV11Res->TabIndex = 23;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(303, 8);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(106, 20);
			this->label28->TabIndex = 22;
			this->label28->Text = L"Вариант 11";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(134, 25);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(75, 18);
			this->label27->TabIndex = 19;
			this->label27->Text = L"Матрица";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(329, 197);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(319, 15);
			this->label26->TabIndex = 11;
			this->label26->Text = L"Введите номер строки поиска (нумерация с 0)";
			// 
			// richTextBoxV11
			// 
			this->richTextBoxV11->BackColor = System::Drawing::Color::White;
			this->richTextBoxV11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBoxV11->Location = System::Drawing::Point(325, 59);
			this->richTextBoxV11->Name = L"richTextBoxV11";
			this->richTextBoxV11->ReadOnly = true;
			this->richTextBoxV11->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBoxV11->Size = System::Drawing::Size(327, 114);
			this->richTextBoxV11->TabIndex = 10;
			this->richTextBoxV11->Text = resources->GetString(L"richTextBoxV11.Text");
			// 
			// buttonExit3
			// 
			this->buttonExit3->BackColor = System::Drawing::Color::Silver;
			this->buttonExit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit3->Location = System::Drawing::Point(507, 460);
			this->buttonExit3->Name = L"buttonExit3";
			this->buttonExit3->Size = System::Drawing::Size(145, 40);
			this->buttonExit3->TabIndex = 9;
			this->buttonExit3->Text = L"Вернуться в меню";
			this->buttonExit3->UseVisualStyleBackColor = false;
			this->buttonExit3->Click += gcnew System::EventHandler(this, &UnitMain::buttonExit3_Click);
			this->buttonExit3->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonExit3_MouseLeave);
			this->buttonExit3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonExit3_MouseMove);
			// 
			// textBoxV11Cols
			// 
			this->textBoxV11Cols->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxV11Cols->Location = System::Drawing::Point(212, 304);
			this->textBoxV11Cols->Name = L"textBoxV11Cols";
			this->textBoxV11Cols->Size = System::Drawing::Size(73, 21);
			this->textBoxV11Cols->TabIndex = 8;
			// 
			// textBoxV11Rows
			// 
			this->textBoxV11Rows->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxV11Rows->Location = System::Drawing::Point(212, 277);
			this->textBoxV11Rows->Name = L"textBoxV11Rows";
			this->textBoxV11Rows->Size = System::Drawing::Size(73, 21);
			this->textBoxV11Rows->TabIndex = 7;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(52, 306);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(157, 15);
			this->label25->TabIndex = 6;
			this->label25->Text = L"Количество столбцов:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(77, 283);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(132, 15);
			this->label24->TabIndex = 5;
			this->label24->Text = L"Количество строк:";
			// 
			// buttonV11Save
			// 
			this->buttonV11Save->BackColor = System::Drawing::Color::White;
			this->buttonV11Save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonV11Save->Location = System::Drawing::Point(67, 465);
			this->buttonV11Save->Name = L"buttonV11Save";
			this->buttonV11Save->Size = System::Drawing::Size(203, 35);
			this->buttonV11Save->TabIndex = 4;
			this->buttonV11Save->Text = L"Сохранить матрицу";
			this->buttonV11Save->UseVisualStyleBackColor = false;
			this->buttonV11Save->Click += gcnew System::EventHandler(this, &UnitMain::buttonV11Save_Click);
			this->buttonV11Save->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonV11Save_MouseLeave);
			this->buttonV11Save->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonV11Save_MouseMove);
			// 
			// buttonV11Clear
			// 
			this->buttonV11Clear->BackColor = System::Drawing::Color::White;
			this->buttonV11Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonV11Clear->Location = System::Drawing::Point(67, 426);
			this->buttonV11Clear->Name = L"buttonV11Clear";
			this->buttonV11Clear->Size = System::Drawing::Size(203, 35);
			this->buttonV11Clear->TabIndex = 3;
			this->buttonV11Clear->Text = L"Отчистить матрицу";
			this->buttonV11Clear->UseVisualStyleBackColor = false;
			this->buttonV11Clear->Click += gcnew System::EventHandler(this, &UnitMain::buttonV11Clear_Click);
			this->buttonV11Clear->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonV11Clear_MouseLeave);
			this->buttonV11Clear->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonV11Clear_MouseMove);
			// 
			// buttonV11Gener
			// 
			this->buttonV11Gener->BackColor = System::Drawing::Color::White;
			this->buttonV11Gener->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonV11Gener->Location = System::Drawing::Point(67, 387);
			this->buttonV11Gener->Name = L"buttonV11Gener";
			this->buttonV11Gener->Size = System::Drawing::Size(203, 35);
			this->buttonV11Gener->TabIndex = 2;
			this->buttonV11Gener->Text = L"Сгенерировать матрицу";
			this->buttonV11Gener->UseVisualStyleBackColor = false;
			this->buttonV11Gener->Click += gcnew System::EventHandler(this, &UnitMain::buttonV11Gener_Click);
			this->buttonV11Gener->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonV11Gener_MouseLeave);
			this->buttonV11Gener->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonV11Gener_MouseMove);
			// 
			// dataGridViewV11
			// 
			this->dataGridViewV11->AllowUserToDeleteRows = false;
			this->dataGridViewV11->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewV11->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewV11->GridColor = System::Drawing::Color::White;
			this->dataGridViewV11->Location = System::Drawing::Point(24, 50);
			this->dataGridViewV11->Name = L"dataGridViewV11";
			this->dataGridViewV11->Size = System::Drawing::Size(281, 217);
			this->dataGridViewV11->TabIndex = 1;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(358, 266);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(280, 15);
			this->label23->TabIndex = 0;
			this->label23->Text = L"Введите диапазон нечётных элементов:";
			// 
			// panelOperMatrix
			// 
			this->panelOperMatrix->BackColor = System::Drawing::Color::Orchid;
			this->panelOperMatrix->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelOperMatrix->Controls->Add(this->textBoxColsB);
			this->panelOperMatrix->Controls->Add(this->textBoxRowsB);
			this->panelOperMatrix->Controls->Add(this->textBoxColsA);
			this->panelOperMatrix->Controls->Add(this->textBoxRowsA);
			this->panelOperMatrix->Controls->Add(this->label17);
			this->panelOperMatrix->Controls->Add(this->label16);
			this->panelOperMatrix->Controls->Add(this->label15);
			this->panelOperMatrix->Controls->Add(this->label14);
			this->panelOperMatrix->Controls->Add(this->buttonExit2);
			this->panelOperMatrix->Controls->Add(this->label22);
			this->panelOperMatrix->Controls->Add(this->label21);
			this->panelOperMatrix->Controls->Add(this->label20);
			this->panelOperMatrix->Controls->Add(this->label19);
			this->panelOperMatrix->Controls->Add(this->buttonSaveABResult);
			this->panelOperMatrix->Controls->Add(this->label18);
			this->panelOperMatrix->Controls->Add(this->buttonMultiply);
			this->panelOperMatrix->Controls->Add(this->buttonMinus);
			this->panelOperMatrix->Controls->Add(this->buttonPlus);
			this->panelOperMatrix->Controls->Add(this->buttonSaveB);
			this->panelOperMatrix->Controls->Add(this->buttonClearB);
			this->panelOperMatrix->Controls->Add(this->buttonGenerB);
			this->panelOperMatrix->Controls->Add(this->buttonSaveA);
			this->panelOperMatrix->Controls->Add(this->buttonClearA);
			this->panelOperMatrix->Controls->Add(this->buttonGenerA);
			this->panelOperMatrix->Controls->Add(this->dataGridViewABResult);
			this->panelOperMatrix->Controls->Add(this->dataGridViewB);
			this->panelOperMatrix->Controls->Add(this->dataGridViewA);
			this->panelOperMatrix->Location = System::Drawing::Point(406, 27);
			this->panelOperMatrix->MinimumSize = System::Drawing::Size(800, 464);
			this->panelOperMatrix->Name = L"panelOperMatrix";
			this->panelOperMatrix->Size = System::Drawing::Size(800, 464);
			this->panelOperMatrix->TabIndex = 2;
			this->panelOperMatrix->Visible = false;
			// 
			// textBoxColsB
			// 
			this->textBoxColsB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxColsB->Location = System::Drawing::Point(451, 300);
			this->textBoxColsB->Name = L"textBoxColsB";
			this->textBoxColsB->Size = System::Drawing::Size(73, 21);
			this->textBoxColsB->TabIndex = 30;
			// 
			// textBoxRowsB
			// 
			this->textBoxRowsB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRowsB->Location = System::Drawing::Point(451, 276);
			this->textBoxRowsB->Name = L"textBoxRowsB";
			this->textBoxRowsB->Size = System::Drawing::Size(73, 21);
			this->textBoxRowsB->TabIndex = 29;
			// 
			// textBoxColsA
			// 
			this->textBoxColsA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxColsA->Location = System::Drawing::Point(164, 300);
			this->textBoxColsA->Name = L"textBoxColsA";
			this->textBoxColsA->Size = System::Drawing::Size(73, 21);
			this->textBoxColsA->TabIndex = 28;
			// 
			// textBoxRowsA
			// 
			this->textBoxRowsA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRowsA->Location = System::Drawing::Point(164, 276);
			this->textBoxRowsA->Name = L"textBoxRowsA";
			this->textBoxRowsA->Size = System::Drawing::Size(73, 21);
			this->textBoxRowsA->TabIndex = 27;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(291, 302);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(157, 15);
			this->label17->TabIndex = 26;
			this->label17->Text = L"Количество столбцов:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(313, 279);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(132, 15);
			this->label16->TabIndex = 25;
			this->label16->Text = L"Количество строк:";
			this->label16->Click += gcnew System::EventHandler(this, &UnitMain::label16_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(31, 279);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(132, 15);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Количество строк:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(6, 302);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(157, 15);
			this->label14->TabIndex = 23;
			this->label14->Text = L"Количество столбцов:";
			// 
			// buttonExit2
			// 
			this->buttonExit2->BackColor = System::Drawing::Color::Silver;
			this->buttonExit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit2->Location = System::Drawing::Point(635, 404);
			this->buttonExit2->Name = L"buttonExit2";
			this->buttonExit2->Size = System::Drawing::Size(145, 40);
			this->buttonExit2->TabIndex = 22;
			this->buttonExit2->Text = L"Вернуться в меню";
			this->buttonExit2->UseVisualStyleBackColor = false;
			this->buttonExit2->Click += gcnew System::EventHandler(this, &UnitMain::buttonExit2_Click);
			this->buttonExit2->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonExit2_MouseLeave);
			this->buttonExit2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonExit2_MouseMove);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(290, 3);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(205, 20);
			this->label22->TabIndex = 21;
			this->label22->Text = L"Операции с матрицами";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(629, 26);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(89, 18);
			this->label21->TabIndex = 20;
			this->label21->Text = L"Результат";
			this->label21->Click += gcnew System::EventHandler(this, &UnitMain::label21_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(367, 26);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(91, 18);
			this->label20->TabIndex = 19;
			this->label20->Text = L"Матрица B";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(79, 26);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(90, 18);
			this->label19->TabIndex = 18;
			this->label19->Text = L"Матрица A";
			// 
			// buttonSaveABResult
			// 
			this->buttonSaveABResult->BackColor = System::Drawing::Color::White;
			this->buttonSaveABResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSaveABResult->Location = System::Drawing::Point(604, 292);
			this->buttonSaveABResult->Name = L"buttonSaveABResult";
			this->buttonSaveABResult->Size = System::Drawing::Size(176, 35);
			this->buttonSaveABResult->TabIndex = 17;
			this->buttonSaveABResult->Text = L"Сохранить результат";
			this->buttonSaveABResult->UseVisualStyleBackColor = false;
			this->buttonSaveABResult->Click += gcnew System::EventHandler(this, &UnitMain::buttonSaveABResult_Click);
			this->buttonSaveABResult->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonSaveABResult_MouseLeave);
			this->buttonSaveABResult->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonSaveABResult_MouseMove);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(530, 149);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(22, 24);
			this->label18->TabIndex = 16;
			this->label18->Text = L"=";
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->BackColor = System::Drawing::Color::White;
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMultiply->Location = System::Drawing::Point(247, 193);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(49, 41);
			this->buttonMultiply->TabIndex = 15;
			this->buttonMultiply->Text = L"*";
			this->buttonMultiply->UseVisualStyleBackColor = false;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &UnitMain::buttonMultiply_Click);
			this->buttonMultiply->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonMultiply_MouseLeave);
			this->buttonMultiply->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonMultiply_MouseMove);
			// 
			// buttonMinus
			// 
			this->buttonMinus->BackColor = System::Drawing::Color::White;
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMinus->Location = System::Drawing::Point(247, 135);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(49, 41);
			this->buttonMinus->TabIndex = 14;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = false;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &UnitMain::buttonMinus_Click);
			this->buttonMinus->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonMinus_MouseLeave);
			this->buttonMinus->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonMinus_MouseMove);
			// 
			// buttonPlus
			// 
			this->buttonPlus->BackColor = System::Drawing::Color::White;
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPlus->Location = System::Drawing::Point(247, 76);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(49, 41);
			this->buttonPlus->TabIndex = 13;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = false;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &UnitMain::buttonPlus_Click);
			this->buttonPlus->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonPlus_MouseLeave);
			this->buttonPlus->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonPlus_MouseMove);
			// 
			// buttonSaveB
			// 
			this->buttonSaveB->BackColor = System::Drawing::Color::White;
			this->buttonSaveB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSaveB->Location = System::Drawing::Point(314, 409);
			this->buttonSaveB->Name = L"buttonSaveB";
			this->buttonSaveB->Size = System::Drawing::Size(203, 35);
			this->buttonSaveB->TabIndex = 12;
			this->buttonSaveB->Text = L"Сохранить матрицу B ";
			this->buttonSaveB->UseVisualStyleBackColor = false;
			this->buttonSaveB->Click += gcnew System::EventHandler(this, &UnitMain::buttonSaveB_Click);
			this->buttonSaveB->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonSaveB_MouseLeave);
			this->buttonSaveB->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonSaveB_MouseMove);
			// 
			// buttonClearB
			// 
			this->buttonClearB->BackColor = System::Drawing::Color::White;
			this->buttonClearB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClearB->Location = System::Drawing::Point(314, 368);
			this->buttonClearB->Name = L"buttonClearB";
			this->buttonClearB->Size = System::Drawing::Size(203, 35);
			this->buttonClearB->TabIndex = 11;
			this->buttonClearB->Text = L"Отчистить матрицу B ";
			this->buttonClearB->UseVisualStyleBackColor = false;
			this->buttonClearB->Click += gcnew System::EventHandler(this, &UnitMain::buttonClearB_Click);
			this->buttonClearB->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonClearB_MouseLeave);
			this->buttonClearB->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonClearB_MouseMove);
			// 
			// buttonGenerB
			// 
			this->buttonGenerB->BackColor = System::Drawing::Color::White;
			this->buttonGenerB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonGenerB->Location = System::Drawing::Point(314, 327);
			this->buttonGenerB->Name = L"buttonGenerB";
			this->buttonGenerB->Size = System::Drawing::Size(203, 35);
			this->buttonGenerB->TabIndex = 10;
			this->buttonGenerB->Text = L"Сгенерировать матрицу B ";
			this->buttonGenerB->UseVisualStyleBackColor = false;
			this->buttonGenerB->Click += gcnew System::EventHandler(this, &UnitMain::buttonGenerB_Click);
			this->buttonGenerB->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonGenerB_MouseLeave);
			this->buttonGenerB->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonGenerB_MouseMove);
			// 
			// buttonSaveA
			// 
			this->buttonSaveA->BackColor = System::Drawing::Color::White;
			this->buttonSaveA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSaveA->Location = System::Drawing::Point(20, 409);
			this->buttonSaveA->Name = L"buttonSaveA";
			this->buttonSaveA->Size = System::Drawing::Size(203, 35);
			this->buttonSaveA->TabIndex = 9;
			this->buttonSaveA->Text = L"Сохранить матрицу А";
			this->buttonSaveA->UseVisualStyleBackColor = false;
			this->buttonSaveA->Click += gcnew System::EventHandler(this, &UnitMain::buttonSaveA_Click);
			this->buttonSaveA->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonSaveA_MouseLeave);
			this->buttonSaveA->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonSaveA_MouseMove);
			// 
			// buttonClearA
			// 
			this->buttonClearA->BackColor = System::Drawing::Color::White;
			this->buttonClearA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClearA->Location = System::Drawing::Point(20, 368);
			this->buttonClearA->Name = L"buttonClearA";
			this->buttonClearA->Size = System::Drawing::Size(203, 35);
			this->buttonClearA->TabIndex = 8;
			this->buttonClearA->Text = L"Отчистить матрицу А";
			this->buttonClearA->UseVisualStyleBackColor = false;
			this->buttonClearA->Click += gcnew System::EventHandler(this, &UnitMain::buttonClearA_Click);
			this->buttonClearA->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonClearA_MouseLeave);
			this->buttonClearA->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonClearA_MouseMove);
			// 
			// buttonGenerA
			// 
			this->buttonGenerA->BackColor = System::Drawing::Color::White;
			this->buttonGenerA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonGenerA->Location = System::Drawing::Point(20, 327);
			this->buttonGenerA->Name = L"buttonGenerA";
			this->buttonGenerA->Size = System::Drawing::Size(203, 35);
			this->buttonGenerA->TabIndex = 7;
			this->buttonGenerA->Text = L"Сгенерировать матрицу А";
			this->buttonGenerA->UseVisualStyleBackColor = false;
			this->buttonGenerA->Click += gcnew System::EventHandler(this, &UnitMain::buttonGenerA_Click);
			this->buttonGenerA->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonGenerA_MouseLeave);
			this->buttonGenerA->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonGenerA_MouseMove);
			// 
			// dataGridViewABResult
			// 
			this->dataGridViewABResult->AllowUserToDeleteRows = false;
			this->dataGridViewABResult->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewABResult->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewABResult->GridColor = System::Drawing::Color::White;
			this->dataGridViewABResult->Location = System::Drawing::Point(558, 47);
			this->dataGridViewABResult->Name = L"dataGridViewABResult";
			this->dataGridViewABResult->ReadOnly = true;
			this->dataGridViewABResult->Size = System::Drawing::Size(222, 217);
			this->dataGridViewABResult->TabIndex = 2;
			// 
			// dataGridViewB
			// 
			this->dataGridViewB->AllowUserToDeleteRows = false;
			this->dataGridViewB->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewB->GridColor = System::Drawing::Color::White;
			this->dataGridViewB->Location = System::Drawing::Point(302, 47);
			this->dataGridViewB->Name = L"dataGridViewB";
			this->dataGridViewB->Size = System::Drawing::Size(222, 217);
			this->dataGridViewB->TabIndex = 1;
			// 
			// dataGridViewA
			// 
			this->dataGridViewA->AllowUserToDeleteRows = false;
			this->dataGridViewA->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewA->GridColor = System::Drawing::Color::White;
			this->dataGridViewA->Location = System::Drawing::Point(15, 47);
			this->dataGridViewA->Name = L"dataGridViewA";
			this->dataGridViewA->Size = System::Drawing::Size(222, 217);
			this->dataGridViewA->TabIndex = 0;
			// 
			// panelMain
			// 
			this->panelMain->BackColor = System::Drawing::Color::Orchid;
			this->panelMain->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panelMain->Controls->Add(this->panelDegree);
			this->panelMain->Controls->Add(this->panelOperN);
			this->panelMain->Controls->Add(this->panelOpred);
			this->panelMain->Controls->Add(this->textBoxCols);
			this->panelMain->Controls->Add(this->textBoxRows);
			this->panelMain->Controls->Add(this->label8);
			this->panelMain->Controls->Add(this->label7);
			this->panelMain->Controls->Add(this->label3);
			this->panelMain->Controls->Add(this->labelOperation);
			this->panelMain->Controls->Add(this->panelTransp);
			this->panelMain->Controls->Add(this->buttonExit1);
			this->panelMain->Controls->Add(this->buttonMatrixSave);
			this->panelMain->Controls->Add(this->buttonMatrixClear);
			this->panelMain->Controls->Add(this->buttonMatrixGeneration);
			this->panelMain->Controls->Add(this->dataGridViewMatrix);
			this->panelMain->Location = System::Drawing::Point(291, 44);
			this->panelMain->MinimumSize = System::Drawing::Size(679, 464);
			this->panelMain->Name = L"panelMain";
			this->panelMain->Size = System::Drawing::Size(679, 464);
			this->panelMain->TabIndex = 1;
			this->panelMain->Visible = false;
			// 
			// panelDegree
			// 
			this->panelDegree->Controls->Add(this->label13);
			this->panelDegree->Controls->Add(this->label12);
			this->panelDegree->Controls->Add(this->textBoxDegree);
			this->panelDegree->Controls->Add(this->buttonSaveDegree);
			this->panelDegree->Controls->Add(this->buttonDegree);
			this->panelDegree->Controls->Add(this->dataGridViewDegree);
			this->panelDegree->Location = System::Drawing::Point(312, 33);
			this->panelDegree->Name = L"panelDegree";
			this->panelDegree->Size = System::Drawing::Size(360, 345);
			this->panelDegree->TabIndex = 33;
			this->panelDegree->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(14, 113);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(28, 29);
			this->label13->TabIndex = 15;
			this->label13->Text = L"=";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(158, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 18);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Результат";
			// 
			// textBoxDegree
			// 
			this->textBoxDegree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxDegree->Location = System::Drawing::Point(69, 252);
			this->textBoxDegree->Name = L"textBoxDegree";
			this->textBoxDegree->Size = System::Drawing::Size(84, 21);
			this->textBoxDegree->TabIndex = 3;
			// 
			// buttonSaveDegree
			// 
			this->buttonSaveDegree->BackColor = System::Drawing::Color::White;
			this->buttonSaveDegree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSaveDegree->Location = System::Drawing::Point(159, 283);
			this->buttonSaveDegree->Name = L"buttonSaveDegree";
			this->buttonSaveDegree->Size = System::Drawing::Size(183, 35);
			this->buttonSaveDegree->TabIndex = 2;
			this->buttonSaveDegree->Text = L"Сохранить результат";
			this->buttonSaveDegree->UseVisualStyleBackColor = false;
			this->buttonSaveDegree->Click += gcnew System::EventHandler(this, &UnitMain::buttonSaveDegree_Click);
			this->buttonSaveDegree->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonSaveDegree_MouseLeave);
			this->buttonSaveDegree->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonSaveDegree_MouseMove);
			// 
			// buttonDegree
			// 
			this->buttonDegree->BackColor = System::Drawing::Color::White;
			this->buttonDegree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDegree->Location = System::Drawing::Point(159, 243);
			this->buttonDegree->Name = L"buttonDegree";
			this->buttonDegree->Size = System::Drawing::Size(183, 35);
			this->buttonDegree->TabIndex = 1;
			this->buttonDegree->Text = L"Возвести в степень";
			this->buttonDegree->UseVisualStyleBackColor = false;
			this->buttonDegree->Click += gcnew System::EventHandler(this, &UnitMain::buttonDegree_Click);
			this->buttonDegree->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonDegree_MouseLeave);
			this->buttonDegree->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonDegree_MouseMove);
			// 
			// dataGridViewDegree
			// 
			this->dataGridViewDegree->AllowUserToDeleteRows = false;
			this->dataGridViewDegree->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewDegree->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewDegree->GridColor = System::Drawing::Color::White;
			this->dataGridViewDegree->Location = System::Drawing::Point(60, 21);
			this->dataGridViewDegree->Name = L"dataGridViewDegree";
			this->dataGridViewDegree->ReadOnly = true;
			this->dataGridViewDegree->Size = System::Drawing::Size(285, 207);
			this->dataGridViewDegree->TabIndex = 0;
			// 
			// panelOperN
			// 
			this->panelOperN->Controls->Add(this->label11);
			this->panelOperN->Controls->Add(this->textBoxOperN);
			this->panelOperN->Controls->Add(this->buttonSaveOperN);
			this->panelOperN->Controls->Add(this->buttonOperN);
			this->panelOperN->Controls->Add(this->label10);
			this->panelOperN->Controls->Add(this->dataGridViewOperN);
			this->panelOperN->Location = System::Drawing::Point(312, 36);
			this->panelOperN->Name = L"panelOperN";
			this->panelOperN->Size = System::Drawing::Size(357, 345);
			this->panelOperN->TabIndex = 32;
			this->panelOperN->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(12, 113);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 29);
			this->label11->TabIndex = 14;
			this->label11->Text = L"=";
			// 
			// textBoxOperN
			// 
			this->textBoxOperN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxOperN->Location = System::Drawing::Point(58, 254);
			this->textBoxOperN->Name = L"textBoxOperN";
			this->textBoxOperN->Size = System::Drawing::Size(84, 21);
			this->textBoxOperN->TabIndex = 13;
			// 
			// buttonSaveOperN
			// 
			this->buttonSaveOperN->BackColor = System::Drawing::Color::White;
			this->buttonSaveOperN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSaveOperN->Location = System::Drawing::Point(148, 291);
			this->buttonSaveOperN->Name = L"buttonSaveOperN";
			this->buttonSaveOperN->Size = System::Drawing::Size(183, 35);
			this->buttonSaveOperN->TabIndex = 12;
			this->buttonSaveOperN->Text = L"Сохранить результат";
			this->buttonSaveOperN->UseVisualStyleBackColor = false;
			this->buttonSaveOperN->Click += gcnew System::EventHandler(this, &UnitMain::buttonSaveOperN_Click);
			this->buttonSaveOperN->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonSaveOperN_MouseLeave);
			this->buttonSaveOperN->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonSaveOperN_MouseMove);
			// 
			// buttonOperN
			// 
			this->buttonOperN->BackColor = System::Drawing::Color::White;
			this->buttonOperN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonOperN->Location = System::Drawing::Point(148, 245);
			this->buttonOperN->Name = L"buttonOperN";
			this->buttonOperN->Size = System::Drawing::Size(183, 35);
			this->buttonOperN->TabIndex = 11;
			this->buttonOperN->Text = L"Умножить матрицу";
			this->buttonOperN->UseVisualStyleBackColor = false;
			this->buttonOperN->Click += gcnew System::EventHandler(this, &UnitMain::buttonOperN_Click);
			this->buttonOperN->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonOperN_MouseLeave);
			this->buttonOperN->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonOperN_MouseMove);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(156, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(89, 18);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Результат";
			// 
			// dataGridViewOperN
			// 
			this->dataGridViewOperN->AllowUserToDeleteRows = false;
			this->dataGridViewOperN->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewOperN->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewOperN->GridColor = System::Drawing::Color::White;
			this->dataGridViewOperN->Location = System::Drawing::Point(55, 21);
			this->dataGridViewOperN->Name = L"dataGridViewOperN";
			this->dataGridViewOperN->ReadOnly = true;
			this->dataGridViewOperN->Size = System::Drawing::Size(285, 207);
			this->dataGridViewOperN->TabIndex = 0;
			// 
			// panelOpred
			// 
			this->panelOpred->Controls->Add(this->textBoxTriangle);
			this->panelOpred->Controls->Add(this->textBoxKoeff);
			this->panelOpred->Controls->Add(this->textBoxGauss);
			this->panelOpred->Controls->Add(this->label6);
			this->panelOpred->Controls->Add(this->label5);
			this->panelOpred->Controls->Add(this->label4);
			this->panelOpred->Controls->Add(this->buttonOpredTriangle);
			this->panelOpred->Controls->Add(this->buttonOpredKoeff);
			this->panelOpred->Controls->Add(this->buttonOpredGauss);
			this->panelOpred->Location = System::Drawing::Point(315, 25);
			this->panelOpred->Name = L"panelOpred";
			this->panelOpred->Size = System::Drawing::Size(340, 343);
			this->panelOpred->TabIndex = 31;
			this->panelOpred->Visible = false;
			// 
			// textBoxTriangle
			// 
			this->textBoxTriangle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxTriangle->Location = System::Drawing::Point(214, 275);
			this->textBoxTriangle->Name = L"textBoxTriangle";
			this->textBoxTriangle->ReadOnly = true;
			this->textBoxTriangle->Size = System::Drawing::Size(95, 21);
			this->textBoxTriangle->TabIndex = 47;
			// 
			// textBoxKoeff
			// 
			this->textBoxKoeff->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxKoeff->Location = System::Drawing::Point(214, 170);
			this->textBoxKoeff->Name = L"textBoxKoeff";
			this->textBoxKoeff->ReadOnly = true;
			this->textBoxKoeff->Size = System::Drawing::Size(95, 21);
			this->textBoxKoeff->TabIndex = 46;
			// 
			// textBoxGauss
			// 
			this->textBoxGauss->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxGauss->Location = System::Drawing::Point(214, 66);
			this->textBoxGauss->Name = L"textBoxGauss";
			this->textBoxGauss->ReadOnly = true;
			this->textBoxGauss->Size = System::Drawing::Size(95, 21);
			this->textBoxGauss->TabIndex = 45;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(95, 128);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(192, 18);
			this->label6->TabIndex = 44;
			this->label6->Text = L"Метод коэффициентов";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(95, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 18);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Метод треугольников";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(128, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 18);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Метод Гаусса";
			// 
			// buttonOpredTriangle
			// 
			this->buttonOpredTriangle->BackColor = System::Drawing::Color::White;
			this->buttonOpredTriangle->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonOpredTriangle->FlatAppearance->BorderSize = 2;
			this->buttonOpredTriangle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonOpredTriangle->Location = System::Drawing::Point(18, 263);
			this->buttonOpredTriangle->Name = L"buttonOpredTriangle";
			this->buttonOpredTriangle->Size = System::Drawing::Size(190, 40);
			this->buttonOpredTriangle->TabIndex = 41;
			this->buttonOpredTriangle->Text = L"Расчитать определитель";
			this->buttonOpredTriangle->UseVisualStyleBackColor = false;
			this->buttonOpredTriangle->Click += gcnew System::EventHandler(this, &UnitMain::buttonOpredTriangle_Click);
			// 
			// buttonOpredKoeff
			// 
			this->buttonOpredKoeff->BackColor = System::Drawing::Color::White;
			this->buttonOpredKoeff->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonOpredKoeff->FlatAppearance->BorderSize = 2;
			this->buttonOpredKoeff->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonOpredKoeff->Location = System::Drawing::Point(18, 160);
			this->buttonOpredKoeff->Name = L"buttonOpredKoeff";
			this->buttonOpredKoeff->Size = System::Drawing::Size(190, 40);
			this->buttonOpredKoeff->TabIndex = 40;
			this->buttonOpredKoeff->Text = L"Расчитать определитель";
			this->buttonOpredKoeff->UseVisualStyleBackColor = false;
			this->buttonOpredKoeff->Click += gcnew System::EventHandler(this, &UnitMain::buttonOpredKoeff_Click);
			// 
			// buttonOpredGauss
			// 
			this->buttonOpredGauss->BackColor = System::Drawing::Color::White;
			this->buttonOpredGauss->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonOpredGauss->FlatAppearance->BorderSize = 2;
			this->buttonOpredGauss->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonOpredGauss->Location = System::Drawing::Point(18, 54);
			this->buttonOpredGauss->Name = L"buttonOpredGauss";
			this->buttonOpredGauss->Size = System::Drawing::Size(190, 40);
			this->buttonOpredGauss->TabIndex = 39;
			this->buttonOpredGauss->Text = L"Расчитать определитель";
			this->buttonOpredGauss->UseVisualStyleBackColor = false;
			this->buttonOpredGauss->Click += gcnew System::EventHandler(this, &UnitMain::buttonOpredGauss_Click);
			this->buttonOpredGauss->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonOpredGauss_MouseLeave_1);
			this->buttonOpredGauss->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonOpredGauss_MouseMove_1);
			// 
			// textBoxCols
			// 
			this->textBoxCols->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxCols->Location = System::Drawing::Point(200, 297);
			this->textBoxCols->Name = L"textBoxCols";
			this->textBoxCols->Size = System::Drawing::Size(84, 21);
			this->textBoxCols->TabIndex = 16;
			// 
			// textBoxRows
			// 
			this->textBoxRows->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxRows->Location = System::Drawing::Point(200, 273);
			this->textBoxRows->Name = L"textBoxRows";
			this->textBoxRows->Size = System::Drawing::Size(84, 21);
			this->textBoxRows->TabIndex = 15;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(37, 298);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(157, 15);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Количество столбцов:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(62, 278);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(132, 15);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Количество строк:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(130, 33);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(75, 18);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Матрица";
			// 
			// labelOperation
			// 
			this->labelOperation->AutoSize = true;
			this->labelOperation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelOperation->Location = System::Drawing::Point(167, 6);
			this->labelOperation->Name = L"labelOperation";
			this->labelOperation->Size = System::Drawing::Size(57, 20);
			this->labelOperation->TabIndex = 8;
			this->labelOperation->Text = L"label2";
			// 
			// panelTransp
			// 
			this->panelTransp->BackColor = System::Drawing::Color::Orchid;
			this->panelTransp->Controls->Add(this->label9);
			this->panelTransp->Controls->Add(this->buttonSaveTrsnsp);
			this->panelTransp->Controls->Add(this->buttonTransp);
			this->panelTransp->Controls->Add(this->label2);
			this->panelTransp->Controls->Add(this->dataGridViewTransp);
			this->panelTransp->Location = System::Drawing::Point(312, 33);
			this->panelTransp->Name = L"panelTransp";
			this->panelTransp->Size = System::Drawing::Size(360, 351);
			this->panelTransp->TabIndex = 20;
			this->panelTransp->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(12, 113);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(28, 29);
			this->label9->TabIndex = 13;
			this->label9->Text = L"=";
			// 
			// buttonSaveTrsnsp
			// 
			this->buttonSaveTrsnsp->BackColor = System::Drawing::Color::White;
			this->buttonSaveTrsnsp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSaveTrsnsp->Location = System::Drawing::Point(143, 286);
			this->buttonSaveTrsnsp->Name = L"buttonSaveTrsnsp";
			this->buttonSaveTrsnsp->Size = System::Drawing::Size(183, 35);
			this->buttonSaveTrsnsp->TabIndex = 12;
			this->buttonSaveTrsnsp->Text = L"Сохранить результат";
			this->buttonSaveTrsnsp->UseVisualStyleBackColor = false;
			this->buttonSaveTrsnsp->Click += gcnew System::EventHandler(this, &UnitMain::buttonSaveTrsnsp_Click);
			this->buttonSaveTrsnsp->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonSaveTrsnsp_MouseLeave);
			this->buttonSaveTrsnsp->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonSaveTrsnsp_MouseMove);
			// 
			// buttonTransp
			// 
			this->buttonTransp->BackColor = System::Drawing::Color::White;
			this->buttonTransp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonTransp->Location = System::Drawing::Point(143, 245);
			this->buttonTransp->Name = L"buttonTransp";
			this->buttonTransp->Size = System::Drawing::Size(183, 35);
			this->buttonTransp->TabIndex = 11;
			this->buttonTransp->Text = L"Транспонировать";
			this->buttonTransp->UseVisualStyleBackColor = false;
			this->buttonTransp->Click += gcnew System::EventHandler(this, &UnitMain::buttonTransp_Click);
			this->buttonTransp->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonTransp_MouseLeave);
			this->buttonTransp->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonTransp_MouseMove);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(156, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 18);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Результат";
			// 
			// dataGridViewTransp
			// 
			this->dataGridViewTransp->AllowUserToDeleteRows = false;
			this->dataGridViewTransp->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewTransp->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewTransp->GridColor = System::Drawing::Color::White;
			this->dataGridViewTransp->Location = System::Drawing::Point(58, 21);
			this->dataGridViewTransp->Name = L"dataGridViewTransp";
			this->dataGridViewTransp->ReadOnly = true;
			this->dataGridViewTransp->Size = System::Drawing::Size(285, 207);
			this->dataGridViewTransp->TabIndex = 0;
			// 
			// buttonExit1
			// 
			this->buttonExit1->BackColor = System::Drawing::Color::Silver;
			this->buttonExit1->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonExit1->FlatAppearance->BorderSize = 2;
			this->buttonExit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonExit1->Location = System::Drawing::Point(510, 400);
			this->buttonExit1->Name = L"buttonExit1";
			this->buttonExit1->Size = System::Drawing::Size(145, 40);
			this->buttonExit1->TabIndex = 7;
			this->buttonExit1->Text = L"Вернуться в меню";
			this->buttonExit1->UseVisualStyleBackColor = false;
			this->buttonExit1->Click += gcnew System::EventHandler(this, &UnitMain::buttonExit1_Click);
			this->buttonExit1->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonExit1_MouseLeave);
			this->buttonExit1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonExit1_MouseMove);
			// 
			// buttonMatrixSave
			// 
			this->buttonMatrixSave->BackColor = System::Drawing::Color::White;
			this->buttonMatrixSave->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonMatrixSave->FlatAppearance->BorderSize = 2;
			this->buttonMatrixSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMatrixSave->Location = System::Drawing::Point(78, 405);
			this->buttonMatrixSave->Name = L"buttonMatrixSave";
			this->buttonMatrixSave->Size = System::Drawing::Size(183, 35);
			this->buttonMatrixSave->TabIndex = 6;
			this->buttonMatrixSave->Text = L"Сохранить матрицу";
			this->buttonMatrixSave->UseVisualStyleBackColor = false;
			this->buttonMatrixSave->Click += gcnew System::EventHandler(this, &UnitMain::buttonMatrixSave_Click);
			this->buttonMatrixSave->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonMatrixSave_MouseLeave);
			this->buttonMatrixSave->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonMatrixSave_MouseMove);
			// 
			// buttonMatrixClear
			// 
			this->buttonMatrixClear->BackColor = System::Drawing::Color::White;
			this->buttonMatrixClear->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonMatrixClear->FlatAppearance->BorderSize = 2;
			this->buttonMatrixClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMatrixClear->Location = System::Drawing::Point(78, 364);
			this->buttonMatrixClear->Name = L"buttonMatrixClear";
			this->buttonMatrixClear->Size = System::Drawing::Size(183, 35);
			this->buttonMatrixClear->TabIndex = 5;
			this->buttonMatrixClear->Text = L"Отчистить матрицу";
			this->buttonMatrixClear->UseVisualStyleBackColor = false;
			this->buttonMatrixClear->Click += gcnew System::EventHandler(this, &UnitMain::buttonMatrixClear_Click);
			this->buttonMatrixClear->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonMatrixClear_MouseLeave);
			this->buttonMatrixClear->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonMatrixClear_MouseMove);
			// 
			// buttonMatrixGeneration
			// 
			this->buttonMatrixGeneration->BackColor = System::Drawing::Color::White;
			this->buttonMatrixGeneration->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->buttonMatrixGeneration->FlatAppearance->BorderSize = 2;
			this->buttonMatrixGeneration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMatrixGeneration->Location = System::Drawing::Point(78, 323);
			this->buttonMatrixGeneration->Name = L"buttonMatrixGeneration";
			this->buttonMatrixGeneration->Size = System::Drawing::Size(183, 35);
			this->buttonMatrixGeneration->TabIndex = 4;
			this->buttonMatrixGeneration->Text = L"Сгенерировать матрицу";
			this->buttonMatrixGeneration->UseVisualStyleBackColor = false;
			this->buttonMatrixGeneration->Click += gcnew System::EventHandler(this, &UnitMain::buttonMatrixGeneration_Click);
			this->buttonMatrixGeneration->MouseLeave += gcnew System::EventHandler(this, &UnitMain::buttonMatrixGeneration_MouseLeave);
			this->buttonMatrixGeneration->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UnitMain::buttonMatrixGeneration_MouseMove);
			// 
			// dataGridViewMatrix
			// 
			this->dataGridViewMatrix->AllowUserToDeleteRows = false;
			this->dataGridViewMatrix->BackgroundColor = System::Drawing::Color::White;
			this->dataGridViewMatrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMatrix->GridColor = System::Drawing::Color::White;
			this->dataGridViewMatrix->Location = System::Drawing::Point(21, 54);
			this->dataGridViewMatrix->Name = L"dataGridViewMatrix";
			this->dataGridViewMatrix->Size = System::Drawing::Size(285, 207);
			this->dataGridViewMatrix->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Silver;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->помощьToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(287, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// помощьToolStripMenuItem
			// 
			this->помощьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->оПрограммеToolStripMenuItem,
					this->помощьСВычислениямиToolStripMenuItem
			});
			this->помощьToolStripMenuItem->Name = L"помощьToolStripMenuItem";
			this->помощьToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->помощьToolStripMenuItem->Text = L"Помощь";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(219, 22);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &UnitMain::оПрограммеToolStripMenuItem_Click);
			// 
			// помощьСВычислениямиToolStripMenuItem
			// 
			this->помощьСВычислениямиToolStripMenuItem->Name = L"помощьСВычислениямиToolStripMenuItem";
			this->помощьСВычислениямиToolStripMenuItem->Size = System::Drawing::Size(219, 22);
			this->помощьСВычислениямиToolStripMenuItem->Text = L"Помощь с вычислениями";
			this->помощьСВычислениямиToolStripMenuItem->Click += gcnew System::EventHandler(this, &UnitMain::помощьСВычислениямиToolStripMenuItem_Click);
			// 
			// UnitMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(287, 484);
			this->Controls->Add(this->panelV11);
			this->Controls->Add(this->panelOperMatrix);
			this->Controls->Add(this->panelMain);
			this->Controls->Add(this->panelCalcMenu);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(302, 521);
			this->Name = L"UnitMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор матриц";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &UnitMain::UnitMain_FormClosing);
			this->panelCalcMenu->ResumeLayout(false);
			this->panelCalcMenu->PerformLayout();
			this->panelV11->ResumeLayout(false);
			this->panelV11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewV11))->EndInit();
			this->panelOperMatrix->ResumeLayout(false);
			this->panelOperMatrix->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewABResult))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewA))->EndInit();
			this->panelMain->ResumeLayout(false);
			this->panelMain->PerformLayout();
			this->panelDegree->ResumeLayout(false);
			this->panelDegree->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewDegree))->EndInit();
			this->panelOperN->ResumeLayout(false);
			this->panelOperN->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewOperN))->EndInit();
			this->panelOpred->ResumeLayout(false);
			this->panelOpred->PerformLayout();
			this->panelTransp->ResumeLayout(false);
			this->panelTransp->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewTransp))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrix))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void buttonOpredMenu_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonOpredMenu->BackColor = Color::Purple;
}
private: System::Void buttonOpredMenu_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonOpredMenu->BackColor = Color::White;
}
private: System::Void buttonOpredMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelCalcMenu->Visible = false;
			 this->Size = System::Drawing::Size(728,566);
			 panelMain->Visible = true;
			 panelTransp->Visible = false;
			 panelOpred->Visible = true;
			 panelMain->Location = Point(16,44);
			 labelOperation->Text = "Нахождение определителя матрицы";
			 labelOperation->Location = Point(167, 6);
			 panelOperN->Visible = false;
			 panelDegree->Visible = false;
			 panelOperMatrix->Visible = false;
			 panelV11->Visible = false;
			 dataGridViewMatrix->ColumnCount = 20;
			 dataGridViewMatrix->RowCount = 20;

			 for (int i = 0; i < dataGridViewMatrix->ColumnCount; i++)
			 {
				 for (int j = 0; j < dataGridViewMatrix->ColumnCount; j++)
				 {
					 dataGridViewMatrix->Columns[i]->Width = 50;
				 }
			 }
}
private: System::Void buttonTranspMenu_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonTranspMenu->BackColor = Color::Purple;
}
private: System::Void buttonTranspMenu_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonTranspMenu->BackColor = Color::White;
}
private: System::Void buttonOperMatrixMenu_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonOperMatrixMenu->BackColor = Color::Purple;
}
private: System::Void buttonOperMatrixMenu_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonOperMatrixMenu->BackColor = Color::White;
}
private: System::Void buttonOperNumberMenu_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonOperNumberMenu->BackColor = Color::Purple;
}
private: System::Void buttonOperNumberMenu_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonOperNumberMenu->BackColor = Color::White;
}
private: System::Void buttonMatrixDegreeMenu_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonMatrixDegreeMenu->BackColor = Color::Purple;
}
private: System::Void buttonMatrixDegreeMenu_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonMatrixDegreeMenu->BackColor = Color::White;
}
private: System::Void buttonV11Menu_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonV11Menu->BackColor = Color::Purple;
}
private: System::Void buttonV11Menu_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonV11Menu->BackColor = Color::White;
}
private: System::Void button4_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
}
private: System::Void buttonMatrixGeneration_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonMatrixGeneration->BackColor = Color::Purple;
}
private: System::Void buttonMatrixGeneration_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonMatrixGeneration->BackColor = Color::White;
}
private: System::Void buttonMatrixClear_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonMatrixClear->BackColor = Color::Purple;
}
private: System::Void buttonMatrixClear_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonMatrixClear->BackColor = Color::White;
}
private: System::Void buttonMatrixSave_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonMatrixSave->BackColor = Color::Purple;
}
private: System::Void buttonMatrixSave_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonMatrixSave->BackColor = Color::White;
}
private: System::Void buttonOpredGauss_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonOpredGauss->BackColor = Color::Purple;
}
private: System::Void buttonOpredGauss_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonOpredGauss->BackColor = Color::White;
}
private: System::Void buttonOpredKoeff_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonOpredKoeff->BackColor = Color::Purple;
}
private: System::Void buttonOpredKoeff_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonOpredKoeff->BackColor = Color::White;
}
private: System::Void buttonOpredTriangle_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonOpredTriangle->BackColor = Color::Purple;
}
private: System::Void buttonOpredTriangle_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonOpredTriangle->BackColor = Color::White;
}
private: System::Void buttonExit1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonExit1->BackColor = Color::Gray;
}
private: System::Void buttonExit1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonExit1->BackColor = Color::Silver;
}
private: System::Void buttonExit1_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelCalcMenu->Visible = true;
			 this->Size = System::Drawing::Size(303, 505);
			 panelMain->Visible = false;
			 panelOperMatrix->Visible = false;
			 panelV11->Visible = false;

			 if ((textBoxCols->Text != "") || (textBoxRows->Text != ""))
			 { 
		    	 if ((dataGridViewMatrix->RowCount > 0) || (dataGridViewMatrix->ColumnCount > 0))
				 {
					 for (int i = 0; i < dataGridViewMatrix->ColumnCount; i++)
					 {
						 for (int j = 0; j < dataGridViewMatrix->RowCount; j++)
						 {
							 dataGridViewMatrix[i, j]->Value = "";
						 }
					 }
				 }

				 if ((dataGridViewTransp->RowCount > 0) || (dataGridViewTransp->ColumnCount > 0))
				 {
					 for (int i = 0; i < dataGridViewTransp->ColumnCount; i++)
					 {
						 for (int j = 0; j < dataGridViewTransp->RowCount; j++)
						 {
							 dataGridViewTransp[i, j]->Value = "";
						 }
					 }
				 }

				 if ((dataGridViewOperN->RowCount > 0) || (dataGridViewOperN->ColumnCount > 0))
				 {
					 for (int i = 0; i < dataGridViewOperN->ColumnCount; i++)
					 {
						 for (int j = 0; j < dataGridViewOperN->RowCount; j++)
						 {
							 dataGridViewOperN[i, j]->Value = "";
						 }
					 }
					 textBoxOperN->Text = "";
				 }

				 if ((dataGridViewDegree->RowCount > 0) || (dataGridViewDegree->ColumnCount > 0))
				 {
					 for (int i = 0; i < dataGridViewDegree->ColumnCount; i++)
					 {
						 for (int j = 0; j < dataGridViewDegree->RowCount; j++)
						 {
							 dataGridViewDegree[i, j]->Value = "";
						 }
					 }
					 textBoxDegree->Text = "";
				 }
			 }
			 
			 textBoxCols->ReadOnly = false;
			 textBoxRows->ReadOnly = false;

			 textBoxCols->Text = "";
			 textBoxRows->Text = "";
			 textBoxGauss->Text = "";
			 textBoxKoeff->Text = "";
			 textBoxTriangle->Text = "";
}
private: System::Void buttonMatrixGeneration_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cols, rows;
			 int i, j;

			 Random^ rand = gcnew Random();

			 cols = System::Convert::ToInt32(textBoxCols->Text);
			 rows = System::Convert::ToInt32(textBoxRows->Text);

			 dataGridViewMatrix->RowCount = rows;
			 dataGridViewMatrix->ColumnCount = cols;

			 for (i = 0; i < cols; i++)
			 {
				 for (j = 0; j < rows; j++)
				 {
					 dataGridViewMatrix[i, j]->Value = rand->Next(100);
					 dataGridViewMatrix->Columns[i]->Width = 50;
				 }
			 }

			 textBoxCols->ReadOnly = true;
			 textBoxRows->ReadOnly = true;
}
private: System::Void buttonMatrixClear_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cols, rows;
			 int i, j;

			 cols = System::Convert::ToInt32(textBoxCols->Text);
			 rows = System::Convert::ToInt32(textBoxRows->Text);

			 for (i = 0; i < cols; i++)
			 {
				 for (j = 0; j < rows; j++)
				 {
					 dataGridViewMatrix[i, j]->Value = "";
				 }
			 }

			 textBoxCols->ReadOnly = false;
			 textBoxRows->ReadOnly = false;
}
private: System::Void buttonOpredKoeff_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cols, rows;
			 int i, j;
			 double sum1, sum2, sum3, sum_res;

			 cols = System::Convert::ToInt32(textBoxCols->Text);
			 rows = System::Convert::ToInt32(textBoxRows->Text);

			 if (cols == rows)
			 {
				 if (cols != 3)
				 {
					 MessageBox::Show("Нахождение определителя методом коэффициентов применятется только для матриц размера 3х3", 
						 "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 textBoxKoeff->Text = "";
				 }
				 else
				 {

					 double** matrix = new double*[cols];
					 for (i = 0; i < cols; i++)
					 {
						 matrix[i] = new double[rows];
					 }

					 for (i = 0; i < cols; i++)
					 {
						 for (j = 0; j < rows; j++)
						 {
							 matrix[i][j] = System::Convert::ToDouble(dataGridViewMatrix[i, j]->Value);
						 }
					 }

					 sum1 = pow(-1, 2) * matrix[0][0] * (matrix[1][1] * matrix[2][2] -
						 matrix[1][2] * matrix[2][1]);

					 sum2 = pow(-1, 3) * matrix[0][1] * (matrix[1][0] * matrix[2][2] -
						 matrix[1][2] * matrix[2][0]);

					 sum3 = pow(-1, 4) * matrix[0][2] * (matrix[1][0] * matrix[2][1] -
						 matrix[1][1] * matrix[2][0]);

					 sum_res = sum1 + sum2 + sum3;

					 textBoxKoeff->Text = System::Convert::ToString(sum_res);

					 for (i = 0; i < cols; i++)
					 {
						 delete[] matrix[i];
					 }
					 delete[] matrix;
				 }
			 }
			 else
			 {
				 MessageBox::Show("Нахождение определителя возможно только для квадратной матрицы!", "Ошибка",
					 MessageBoxButtons::OK, MessageBoxIcon::Error);
				 textBoxKoeff->Text = "";
			 }
}
private: System::Void buttonOpredTriangle_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cols, rows;
			 int i, j;
			 double sum1, sum2, det_triang;

			 cols = System::Convert::ToInt32(textBoxCols->Text);
			 rows = System::Convert::ToInt32(textBoxRows->Text);

			 if (cols == rows)
			 {
				 if (cols != 3)
				 {
					 MessageBox::Show("Нахождение определителя методом треугольников применятется только для матриц размера 3х3",
						 "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
					 textBoxTriangle->Text = "";
				 }
				 else
				 {
					 double** matrix = new double*[cols];
					 for (i = 0; i < cols; i++)
					 {
						 matrix[i] = new double[rows];
					 }

					 for (i = 0; i < cols; i++)
					 {
						 for (j = 0; j < rows; j++)
						 {
							 matrix[i][j] = System::Convert::ToDouble(dataGridViewMatrix[i, j]->Value);
						 }
					 }

				     sum1 = (matrix[0][0] * matrix[1][1] * matrix[2][2]) +
					 (matrix[0][1] * matrix[1][2] * matrix[2][0]) +
					 (matrix[0][2] * matrix[1][0] * matrix[2][1]);

				     sum2 = (matrix[2][0] * matrix[1][1] * matrix[0][2]) +
					 (matrix[0][1] * matrix[1][0] * matrix[2][2]) +
					 (matrix[0][0] * matrix[1][2] * matrix[2][1]);

					 det_triang = sum1 - sum2;

					 textBoxTriangle->Text = System::Convert::ToString(det_triang);

					 for (i = 0; i < cols; i++)
					 {
						 delete[] matrix[i];
					 }
					 delete[] matrix;
				 }
			 }
			 else
			 {
				 MessageBox::Show("Нахождение определителя возможно только для квадратной матрицы!", "Ошибка",
					 MessageBoxButtons::OK, MessageBoxIcon::Error);
				 textBoxTriangle->Text = "";
			 }
}
private: System::Void buttonTranspMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelCalcMenu->Visible = false;
			 this->Size = System::Drawing::Size(728, 566);
			 panelMain->Visible = true;
			 panelMain->Location = Point(16, 44);
			 labelOperation->Text = "Транспонирование матрицы";
			 labelOperation->Location = Point(210, 6);
			 panelTransp->Visible = true;
			 panelOpred->Visible = false;
			 panelOperN->Visible = false;
			 panelDegree->Visible = false;
			 panelOperMatrix->Visible = false;
			 panelV11->Visible = false;
			 dataGridViewMatrix->ColumnCount = 20;
			 dataGridViewMatrix->RowCount = 20;

			 for (int i = 0; i < dataGridViewMatrix->ColumnCount; i++)
			 {
				 for (int j = 0; j < dataGridViewMatrix->ColumnCount; j++)
				 {
					 dataGridViewMatrix->Columns[i]->Width = 50;
				 }
			 }
}

private: System::Void buttonTransp_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonTransp->BackColor = Color::Purple;
}
private: System::Void buttonTransp_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonTransp->BackColor = Color::White;
}
private: System::Void buttonSaveTrsnsp_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonSaveTrsnsp->BackColor = Color::Purple;
}
private: System::Void buttonSaveTrsnsp_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonSaveTrsnsp->BackColor = Color::White;
}
private: System::Void buttonOpredGauss_MouseMove_1(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonOpredGauss->BackColor = Color::Purple;
}
private: System::Void buttonOpredGauss_MouseLeave_1(System::Object^  sender, System::EventArgs^  e) {
			 buttonOpredGauss->BackColor = Color::White;
}
private: System::Void buttonOperNumberMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelCalcMenu->Visible = false;
			 this->Size = System::Drawing::Size(728, 566);
			 panelMain->Visible = true;
			 panelMain->Location = Point(16, 44);
			 labelOperation->Text = "Умножение матрицы на число";
			 labelOperation->Location = Point(210, 6);
			 panelTransp->Visible = false;
			 panelOpred->Visible = false;
			 panelOperN->Visible = true;
			 panelDegree->Visible = false;
			 panelOperMatrix->Visible = false;
			 panelV11->Visible = false;
			 dataGridViewMatrix->ColumnCount = 20;
			 dataGridViewMatrix->RowCount = 20;
			 
			 for (int i = 0; i < dataGridViewMatrix->ColumnCount; i++)
			 {
				 for (int j = 0; j < dataGridViewMatrix->ColumnCount; j++)
				 {
					 dataGridViewMatrix->Columns[i]->Width = 50;
				 }
			 }
}
private: System::Void buttonOperN_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonOperN->BackColor = Color::Purple;
}
private: System::Void buttonOperN_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonOperN->BackColor = Color::White;
}
private: System::Void buttonSaveOperN_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonSaveOperN->BackColor = Color::Purple;
}
private: System::Void buttonSaveOperN_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonSaveOperN->BackColor = Color::White;
}
private: System::Void buttonOpredGauss_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cols, rows;
			 int i, j;
			 double numberr;
			 double gauss_result;
			 int l, m, n;
			 int number;

			 cols = System::Convert::ToInt32(textBoxCols->Text);
			 rows = System::Convert::ToInt32(textBoxRows->Text);

			 if (cols == rows)
			 {
				 double** matrix = new double*[cols];
				 for (i = 0; i < cols; i++)
				 {
					 matrix[i] = new double[rows];
				 }

				 for (i = 0; i < cols; i++)
				 {
					 for (j = 0; j < rows; j++)
					 {
						 matrix[i][j] = System::Convert::ToDouble(dataGridViewMatrix[i, j]->Value);
					 }
				 }

				 n = 1;

				 for (number = 0; number < cols - 1; number++)
				 {
					 for (m = n; m < cols; m++)
					 {
						 numberr = matrix[m][number] / matrix[number][number];
						 for (l = 0; l < cols; l++)
						 {
							 matrix[m][l] = matrix[m][l] - matrix[number][l] * numberr;
						 }
					 }
					 n = n + 1;
				 }

				 gauss_result = 1;

				 for (i = 0; i < cols; i++)
				 {
					 gauss_result = gauss_result * matrix[i][i];
				 }

				 textBoxGauss->Text = System::Convert::ToString(gauss_result);

				 for (i = 0; i < cols; i++)
				 {
					 delete[] matrix[i];
				 }
				 delete[] matrix;
			 }
			 else
			 {
				 MessageBox::Show("Нахождение определителя возможно только для квадратной матрицы!", "Ошибка",
					 MessageBoxButtons::OK, MessageBoxIcon::Error);
				 textBoxGauss->Text = "";
			 }
}
private: System::Void buttonTransp_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cols, rows;
			 int i, j;

			 cols = System::Convert::ToInt32(textBoxCols->Text);
			 rows = System::Convert::ToInt32(textBoxRows->Text);

			 dataGridViewTransp->RowCount = cols;
			 dataGridViewTransp->ColumnCount = rows;

			 for (i = 0; i < rows; i++)
			 {
				 for (j = 0; j < cols; j++)
				 {
					 dataGridViewTransp[i, j]->Value = dataGridViewMatrix[j, i]->Value;
					 dataGridViewTransp->Columns[i]->Width = 50;
				 }
			 }
}
private: System::Void buttonOperN_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cols, rows;
			 int i, j;
			 double res, number;

			 cols = System::Convert::ToInt32(textBoxCols->Text);
			 rows = System::Convert::ToInt32(textBoxRows->Text);
			 number = System::Convert::ToDouble(textBoxOperN->Text);

			 dataGridViewOperN->RowCount = rows;
			 dataGridViewOperN->ColumnCount = cols;

			 for (i = 0; i < cols; i++)
			 {
				 for (j = 0; j < rows; j++)
				 {
					 dataGridViewOperN[i, j]->Value = dataGridViewMatrix[i, j]->Value;
					 dataGridViewOperN->Columns[i]->Width = 50;
				 }
			 }

			 for (i = 0; i < cols; i++)
			 {
				 for (j = 0; j < rows; j++)
				 {
					 res = System::Convert::ToDouble(dataGridViewOperN[i, j]->Value);
					 res *= number;
					 dataGridViewOperN[i, j]->Value = System::Convert::ToString(res);
				 }
			 }
}
private: System::Void buttonDegree_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonDegree->BackColor = Color::Purple;
}
private: System::Void buttonDegree_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonDegree->BackColor = Color::White;
}
private: System::Void buttonSaveDegree_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonSaveDegree->BackColor = Color::Purple;
}
private: System::Void buttonSaveDegree_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonSaveDegree->BackColor = Color::White;
}
private: System::Void buttonDegree_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cols, rows;
			 int i, j, k;
			 double sum;
			 int degree;
			 int count;
			 
			 cols = System::Convert::ToInt32(textBoxCols->Text);
			 rows = System::Convert::ToInt32(textBoxRows->Text);

			 dataGridViewDegree->RowCount = rows;
			 dataGridViewDegree->ColumnCount = cols;

			 double** matrix = new double*[cols];
			 for (i = 0; i < cols; i++)
			 {
				 matrix[i] = new double[rows];
			 }

			 degree = System::Convert::ToInt32(textBoxDegree->Text);
			 count = 1;

			 for (i = 0; i < cols; i++)
			 {
				 for (j = 0; j < rows; j++)
				 {
					 dataGridViewDegree[i, j]->Value = dataGridViewMatrix[i, j]->Value;
					 dataGridViewDegree->Columns[i]->Width = 50;
				 }
			 }


			 if (dataGridViewMatrix->RowCount == dataGridViewMatrix->ColumnCount)
			 {
				 while (count != degree)
				 {
					 for (i = 0; i < cols; i++)
					 {
						 for (j = 0; j < rows; j++)
						 {
							 matrix[i][j] = System::Convert::ToDouble(dataGridViewDegree[i, j]->Value);
						 }
					 }

					 for (i = 0; i < cols; i++)
					 {
						 for (j = 0; j < rows; j++)
						 {
							 sum = 0;
							 for (k = 0; k < rows; k++)
							 {
								 sum += System::Convert::ToDouble(dataGridViewMatrix[i, k]->Value) * matrix[k][j];
								 dataGridViewDegree[i, j]->Value = System::Convert::ToString(sum);
							 }
						 }
					 }
					 count += 1;
				 }
			 }
			 else
			 {
				 MessageBox::Show("Невозможно возвести матрицу в степень! Матрица должна быть квадратоной (кол-во строк равно кол-ву столбцов)",
					 "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }	

			 for (i = 0; i < cols; i++)
			 {
				 delete[] matrix[i];
			 }
			 delete[] matrix;
}
private: System::Void buttonMatrixDegreeMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelCalcMenu->Visible = false;
			 this->Size = System::Drawing::Size(728, 566);
			 panelMain->Visible = true;
			 panelDegree->Visible = true;
			 panelMain->Location = Point(16, 44);
			 labelOperation->Text = "Возведение матрицы в степень";
			 labelOperation->Location = Point(210, 6);
			 panelTransp->Visible = false;
			 panelOpred->Visible = false;
			 panelOperN->Visible = false;
			 panelOperMatrix->Visible = false;
			 panelV11->Visible = false;
			 dataGridViewMatrix->ColumnCount = 20;
			 dataGridViewMatrix->RowCount = 20;

			 for (int i = 0; i < dataGridViewMatrix->ColumnCount; i++)
			 {
				 for (int j = 0; j < dataGridViewMatrix->ColumnCount; j++)
				 {
					 dataGridViewMatrix->Columns[i]->Width = 50;
				 }
			 }
}
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitAbout^ form2 = gcnew UnitAbout;
			 form2->ShowDialog();
}
private: System::Void помощьСВычислениямиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 UnitHelp^ form3 = gcnew UnitHelp;
			 form3->ShowDialog();
}
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label21_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void buttonGenerA_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cols, rows;
			 int i, j;

			 Random^ rand = gcnew Random();

			 cols = System::Convert::ToInt32(textBoxColsA->Text);
			 rows = System::Convert::ToInt32(textBoxRowsA->Text);

			 dataGridViewA->RowCount = rows;
			 dataGridViewA->ColumnCount = cols;

			 for (i = 0; i < cols; i++)
			 {
				 for (j = 0; j < rows; j++)
				 {
					 dataGridViewA[i, j]->Value = rand->Next(100);
					 dataGridViewA->Columns[i]->Width = 50;
				 }
			 }

			 textBoxColsA->ReadOnly = true;
			 textBoxRowsA->ReadOnly = true;
}
private: System::Void buttonGenerB_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cols, rows;
			 int i, j;

			 Random^ rand = gcnew Random();

			 cols = System::Convert::ToInt32(textBoxColsB->Text);
			 rows = System::Convert::ToInt32(textBoxRowsB->Text);

			 dataGridViewB->RowCount = rows;
			 dataGridViewB->ColumnCount = cols;

			 for (i = 0; i < cols; i++)
			 {
				 for (j = 0; j < rows; j++)
				 {
					 dataGridViewB[i, j]->Value = rand->Next(100);
					 dataGridViewB->Columns[i]->Width = 50;
				 }
			 }

			 textBoxColsB->ReadOnly = true;
			 textBoxRowsB->ReadOnly = true;
}
private: System::Void buttonClearA_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cols, rows;
			 int i, j;

			 cols = System::Convert::ToInt32(textBoxColsA->Text);
			 rows = System::Convert::ToInt32(textBoxRowsA->Text);

			 for (i = 0; i < cols; i++)
			 {
				 for (j = 0; j < rows; j++)
				 {
					 dataGridViewA[i, j]->Value = "";
				 }
			 }

			 textBoxColsA->ReadOnly = false;
			 textBoxRowsA->ReadOnly = false;
}
private: System::Void buttonClearB_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cols, rows;
			 int i, j;

			 cols = System::Convert::ToInt32(textBoxColsB->Text);
			 rows = System::Convert::ToInt32(textBoxRowsB->Text);

			 for (i = 0; i < cols; i++)
			 {
				 for (j = 0; j < rows; j++)
				 {
					 dataGridViewB[i, j]->Value = "";
				 }
			 }

			 textBoxColsB->ReadOnly = false;
			 textBoxRowsB->ReadOnly = false;
}
private: System::Void buttonPlus_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i, j;
			 int colsA, rowsA;
			 int colsB, rowsB;
			 int sum;

			 colsA = System::Convert::ToInt32(textBoxColsA->Text);
			 rowsA = System::Convert::ToInt32(textBoxRowsA->Text);
			 colsB = System::Convert::ToInt32(textBoxColsB->Text);
			 rowsB = System::Convert::ToInt32(textBoxRowsB->Text);

			 if ((colsA != rowsA) || (colsA != colsB) || (colsB != rowsB) || (rowsA != rowsB))
			 {
				 MessageBox::Show("Складывать можно только матрицы одинаковых размеров!",
					 "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
			 else
			 {
				 dataGridViewABResult->RowCount = rowsA;
				 dataGridViewABResult->ColumnCount = colsA;

				 for (i = 0; i < colsA; i++)
				 {
					 for (j = 0; j < rowsA; j++)
					 {
						 sum = System::Convert::ToInt32(dataGridViewA[i, j]->Value)
							 + System::Convert::ToInt32(dataGridViewB[i, j]->Value);
						  dataGridViewABResult[i, j]->Value = System::Convert::ToString(sum);
						  dataGridViewABResult->Columns[i]->Width = 50;
					 }
				 }
			 }
}
private: System::Void buttonMinus_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i, j;
			 int colsA, rowsA;
			 int colsB, rowsB;
			 int sum;

			 colsA = System::Convert::ToInt32(textBoxColsA->Text);
			 rowsA = System::Convert::ToInt32(textBoxRowsA->Text);
			 colsB = System::Convert::ToInt32(textBoxColsB->Text);
			 rowsB = System::Convert::ToInt32(textBoxRowsB->Text);

			 if ((colsA != rowsA) || (colsA != colsB) || (colsB != rowsB) || (rowsA != rowsB))
			 {
				 MessageBox::Show("Вычитать можно только матрицы одинаковых размеров!",
					 "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
			 else
			 {
				 dataGridViewABResult->RowCount = rowsA;
				 dataGridViewABResult->ColumnCount = colsA;

				 for (i = 0; i < colsA; i++)
				 {
					 for (j = 0; j < rowsA; j++)
					 {
						 sum = System::Convert::ToInt32(dataGridViewA[i, j]->Value)
							 - System::Convert::ToInt32(dataGridViewB[i, j]->Value);
						 dataGridViewABResult[i, j]->Value = System::Convert::ToString(sum);
						 dataGridViewABResult->Columns[i]->Width = 50;
					 }
				 }
			 }
}
private: System::Void buttonMultiply_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i, j, k;
			 int colsA, rowsA;
			 int colsB, rowsB;
			 int sum;

			 colsA = System::Convert::ToInt32(textBoxColsA->Text);
			 rowsA = System::Convert::ToInt32(textBoxRowsA->Text);
			 colsB = System::Convert::ToInt32(textBoxColsB->Text);
			 rowsB = System::Convert::ToInt32(textBoxRowsB->Text);

			 if (colsA == rowsB)
			 {
				 dataGridViewABResult->RowCount = rowsA;
				 dataGridViewABResult->ColumnCount = colsB;

				 for (i = 0; i < rowsA; i++)
				 {
					 for (j = 0; j < colsB; j++)
					 {
						 sum = 0;
						 for (k = 0; k < colsA; k++)
						 {
							 sum += System::Convert::ToInt32(dataGridViewA[k, i]->Value)
								 * System::Convert::ToInt32(dataGridViewB[j, k]->Value);
							 dataGridViewABResult[j, i]->Value = System::Convert::ToString(sum);
							 dataGridViewABResult->Columns[j]->Width = 50;
						 }
					 }
				 }
			 }
			 else
			 {
				 MessageBox::Show("Умножать две матрицы можно только если количество столбцов первой матрицы равно количеству строк второй матрицы!",
					 "Сообщение", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			 }
			 
}
private: System::Void buttonPlus_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonPlus->BackColor = Color::Purple;
}
private: System::Void buttonPlus_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonPlus->BackColor = Color::White;
}
private: System::Void buttonMinus_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonMinus->BackColor = Color::Purple;
}
private: System::Void buttonMinus_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonMinus->BackColor = Color::White;
}
private: System::Void buttonMultiply_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonMultiply->BackColor = Color::Purple;
}
private: System::Void buttonMultiply_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonMultiply->BackColor = Color::White;
}
private: System::Void buttonGenerA_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonGenerA->BackColor = Color::Purple;
}
private: System::Void buttonGenerA_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonGenerA->BackColor = Color::White;
}
private: System::Void buttonClearA_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonClearA->BackColor = Color::Purple;
}
private: System::Void buttonClearA_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonClearA->BackColor = Color::White;
}
private: System::Void buttonSaveA_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonSaveA->BackColor = Color::Purple;
}
private: System::Void buttonSaveA_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonSaveA->BackColor = Color::White;
}
private: System::Void buttonGenerB_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonGenerB->BackColor = Color::Purple;
}
private: System::Void buttonGenerB_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonGenerB->BackColor = Color::White;
}
private: System::Void buttonClearB_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonClearB->BackColor = Color::Purple;
}
private: System::Void buttonClearB_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonClearB->BackColor = Color::White;
}
private: System::Void buttonSaveB_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonSaveB->BackColor = Color::Purple;
}
private: System::Void buttonSaveB_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonSaveB->BackColor = Color::White;
}
private: System::Void buttonSaveABResult_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonSaveABResult->BackColor = Color::Purple;
}
private: System::Void buttonSaveABResult_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonSaveABResult->BackColor = Color::White;
}
private: System::Void buttonExit2_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonExit2->BackColor = Color::Gray;
}
private: System::Void buttonExit2_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonExit2->BackColor = Color::Silver;
}
private: System::Void buttonExit2_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i, j;
			 int cols, rows;

			 panelCalcMenu->Visible = true;
			 this->Size = System::Drawing::Size(303, 505);
			 panelMain->Visible = false;
			 panelOperMatrix->Visible = false;
			 panelV11->Visible = false;

			 if ((textBoxColsA->Text != "") && (textBoxRowsA->Text != "") || (textBoxColsB->Text != "") && (textBoxRowsB->Text != ""))
			 {
				 if ((dataGridViewA->ColumnCount > 0) || (dataGridViewA->RowCount > 0))
				 {
					 for (i = 0; i < dataGridViewA->ColumnCount; i++)
					 {
						 for (j = 0; j < dataGridViewA->RowCount; j++)
						 {
							 dataGridViewA[i, j]->Value = "";
						 }
					 }	 
				 }

				 if ((dataGridViewB->ColumnCount > 0) || (dataGridViewB->RowCount > 0))
				 {
					 for (i = 0; i < dataGridViewB->ColumnCount; i++)
					 {
						 for (j = 0; j < dataGridViewB->RowCount; j++)
						 {
							 dataGridViewB[i, j]->Value = "";
						 }
					 }
				 }

				 if ((dataGridViewABResult->ColumnCount > 0) || (dataGridViewABResult->RowCount > 0))
				 {
					 for (i = 0; i < dataGridViewABResult->ColumnCount; i++)
					 {
						 for (j = 0; j < dataGridViewABResult->RowCount; j++)
						 {
							 dataGridViewABResult[i, j]->Value = "";
						 }
					 }
				 }
			 }

			 textBoxColsA->Text = "";
			 textBoxRowsA->Text = "";
			 textBoxColsB->Text = "";
			 textBoxRowsB->Text = "";

			 textBoxColsA->ReadOnly = false;
			 textBoxRowsA->ReadOnly = false;
			 textBoxColsB->ReadOnly = false;
			 textBoxRowsB->ReadOnly = false;
}
private: System::Void buttonOperMatrixMenu_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelCalcMenu->Visible = false;
			 this->Size = System::Drawing::Size(850, 566);
			 panelMain->Visible = false;
			 panelTransp->Visible = false;
			 panelOpred->Visible = false;
			 panelOperMatrix->Location = Point(16, 44);
			 panelOperN->Visible = false;
			 panelDegree->Visible = false;
			 panelOperMatrix->Visible = true;
			 panelV11->Visible = false;
			 dataGridViewA->ColumnCount = 20;
			 dataGridViewA->RowCount = 20;

			 for (int i = 0; i < dataGridViewA->ColumnCount; i++)
			 {
				 for (int j = 0; j < dataGridViewA->ColumnCount; j++)
				 {
					 dataGridViewA->Columns[i]->Width = 50;
				 }
			 }

			 dataGridViewB->ColumnCount = 20;
			 dataGridViewB->RowCount = 20;

			 for (int i = 0; i < dataGridViewB->ColumnCount; i++)
			 {
				 for (int j = 0; j < dataGridViewB->ColumnCount; j++)
				 {
					 dataGridViewB->Columns[i]->Width = 50;
				 }
			 }
}
private: System::Void buttonV11Gener_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonV11Gener->BackColor = Color::Purple;
}
private: System::Void buttonV11Gener_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonV11Gener->BackColor = Color::White;
}
private: System::Void buttonV11Clear_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonV11Clear->BackColor = Color::Purple;
}
private: System::Void buttonV11Clear_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonV11Clear->BackColor = Color::White;
}
private: System::Void buttonV11Save_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonV11Save->BackColor = Color::Purple;
}
private: System::Void buttonV11Save_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonV11Save->BackColor = Color::White;
}
private: System::Void buttonV11Res_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonV11Res->BackColor = Color::Purple;
}
private: System::Void buttonV11Res_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonV11Res->BackColor = Color::White;
}
private: System::Void buttonExit3_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 buttonExit3->BackColor = Color::Gray;
}
private: System::Void buttonExit3_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 buttonExit3->BackColor = Color::Silver;
}
private: System::Void buttonV11Menu_Click(System::Object^  sender, System::EventArgs^  e) {
			 panelCalcMenu->Visible = false;
			 this->Size = System::Drawing::Size(730, 630);
			 panelMain->Visible = false;
			 panelDegree->Visible = false;
			 panelV11->Location = Point(16, 44);
			 panelTransp->Visible = false;
			 panelOpred->Visible = false;
			 panelOperN->Visible = false;
			 panelOperMatrix->Visible = false;
			 panelV11->Visible = true;
}
private: System::Void buttonExit3_Click(System::Object^  sender, System::EventArgs^  e) {
			 int i, j;
			 int cols, rows;

			 panelCalcMenu->Visible = true;
			 this->Size = System::Drawing::Size(303, 505);
			 panelMain->Visible = false;
			 panelOperMatrix->Visible = false;
			 panelV11->Visible = false;

			 if ((textBoxV11Cols->Text != "") && (textBoxV11Rows->Text != ""))
			 {
				 if ((dataGridViewV11->ColumnCount > 0) || (dataGridViewV11->RowCount > 0))
				 {
					 cols = System::Convert::ToInt32(textBoxV11Cols->Text);
					 rows = System::Convert::ToInt32(textBoxV11Rows->Text);

					 for (i = 0; i < cols; i++)
					 {
						 for (j = 0; j < rows; j++)
						 {
							 dataGridViewV11[i, j]->Value = "";
						 }
					 }
				 }

				 textBoxV11N1->Text = "";
				 textBoxV11N2->Text = "";
				 textBoxV11C->Text = "";
				 textBoxV11K->Text = "";
				 textBoxV11L->Text = "";
			 }

			 textBoxV11Cols->Text = "";
			 textBoxV11Rows->Text = "";
			 
			 textBoxV11Cols->ReadOnly = false;
			 textBoxV11Rows->ReadOnly = false;
}
private: System::Void buttonV11Gener_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cols, rows;
			 int i, j, k;
			 int n1, n2;
			 int number;

			 Random^ rand = gcnew Random();

			 cols = System::Convert::ToInt32(textBoxV11Cols->Text);
			 rows = System::Convert::ToInt32(textBoxV11Rows->Text);
			 dataGridViewV11->RowCount = rows;
			 dataGridViewV11->ColumnCount = cols;

			 n1 = System::Convert::ToInt32(textBoxV11N1->Text);
			 n2 = System::Convert::ToInt32(textBoxV11N2->Text);
			 
			 if (n1 < n2)
			 {
				 for (i = 0; i < cols; i++)
				 {
					 for (j = 0; j < rows; j++)
					 {
						 dataGridViewV11[i, j]->Value = n1 + rand->Next() % (n2 + 1);
						 dataGridViewV11->Columns[i]->Width = 50;
					 }
				 }

				 for (i = 0; i < cols; i++)
				 {
					 for (k = 0; k < rows; k += 2)
					 {
						 number = System::Convert::ToInt32(dataGridViewV11[i, k]->Value);
						 number *= -1;
						 dataGridViewV11[i, k]->Value = System::Convert::ToString(number);
					 }
				 }

				 textBoxV11Cols->ReadOnly = true;
				 textBoxV11Rows->ReadOnly = true;
			 }
			 else
			 {
				 MessageBox::Show("Ошибка ввода параметров n1, n2. n1 < n2!",
					 "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
}
private: System::Void buttonV11Res_Click(System::Object^  sender, System::EventArgs^  e) {
			 int c, k, l;
			 int cols, rows;
			 int i;
			 double sum;

			 cols = System::Convert::ToInt32(textBoxV11Cols->Text);
			 rows = System::Convert::ToInt32(textBoxV11Rows->Text);

			 c = System::Convert::ToInt32(textBoxV11C->Text);
			 k = System::Convert::ToInt32(textBoxV11K->Text);
			 l = System::Convert::ToInt32(textBoxV11L->Text);

			 if (k >= l)
			 {
				 MessageBox::Show("Ошибка ввода параметров K, L. K < L!",
					 "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }

			 if ((k % 2 == 0) || (l % 2 == 0))
			 {
				 MessageBox::Show("Ошибка ввода параметров K, L. K и L - нечётные целые числа!",
					 "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }

			 if ((c < 0) || (c > rows))
			 {
				 MessageBox::Show("Ошибка ввода параметра С. С не может превышать количество строк в массиве или быть отрицательным!",
					 "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			 }
			 else
			 {
				 sum = 1;
				 for (i = k; i < cols; i += 2)
				 {
					 sum *= System::Convert::ToDouble(dataGridViewV11[i, c]->Value);
				 }
				 textBoxV11Res->Text = System::Convert::ToString(sum);
			 }
}

private: System::Void buttonV11Clear_Click(System::Object^  sender, System::EventArgs^  e) {
			 int cols, rows;
			 int i, j;

			 cols = System::Convert::ToInt32(textBoxV11Cols->Text);
			 rows = System::Convert::ToInt32(textBoxV11Rows->Text);

			 for (i = 0; i < cols; i++)
			 {
				 for (j = 0; j < rows; j++)
				 {
					 dataGridViewV11[i, j]->Value = "";
				 }
			 }

			 textBoxV11Cols->ReadOnly = false;
			 textBoxV11Rows->ReadOnly = false;
}
private: System::Void buttonMatrixSave_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ st;
			 for (int i = 0; i < dataGridViewMatrix->RowCount; i++)
			 {
				 for (int j = 0; j < dataGridViewMatrix->ColumnCount; j++)
				 {
					 st += Convert::ToString(dataGridViewMatrix[j, i]->Value) + " ";
				 }
				 richTextBox1->AppendText(st + "\n");
				 st = "";
			 }

			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
			 saveFileDialog1->Filter = "text|*.txt";
			 saveFileDialog1->DefaultExt = "*.txt";

			 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 richTextBox1->SaveFile(saveFileDialog1->FileName);
			 }

			 for (int i = 0; i < dataGridViewMatrix->RowCount; i++)
			 {
				 richTextBox1->AppendText("" + "\n");
			 }
}
private: System::Void buttonV11Save_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ st; 
			 for (int i = 0; i < dataGridViewV11->RowCount; i++)
			 {
				 for (int j = 0; j < dataGridViewV11->ColumnCount; j++)
				 {
					 st += Convert::ToString(dataGridViewV11[j, i]->Value) + " ";
				 }
				 richTextBox1->AppendText(st + "\n");
				 st = "";
			 }

			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
			 saveFileDialog1->Filter = "text|*.txt";
			 saveFileDialog1->DefaultExt = "*.txt";

			 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 richTextBox1->SaveFile(saveFileDialog1->FileName);
			 }

			 for (int i = 0; i < dataGridViewV11->RowCount; i++)
			 {
				 richTextBox1->AppendText("" + "\n");
			 }
}
private: System::Void buttonSaveA_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ st;
			 for (int i = 0; i < dataGridViewA->RowCount; i++)
			 {
				 for (int j = 0; j < dataGridViewA->ColumnCount; j++)
				 {
					 st += Convert::ToString(dataGridViewA[j, i]->Value) + " ";
				 }
				 richTextBox1->AppendText(st + "\n");
				 st = "";
			 }

			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
			 saveFileDialog1->Filter = "text|*.txt";
			 saveFileDialog1->DefaultExt = "*.txt";

			 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 richTextBox1->SaveFile(saveFileDialog1->FileName);
			 }

			 for (int i = 0; i < dataGridViewA->RowCount; i++)
			 {
				 richTextBox1->AppendText("" + "\n");
			 }
}
private: System::Void buttonSaveB_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ st;
			 for (int i = 0; i < dataGridViewB->RowCount; i++)
			 {
				 for (int j = 0; j < dataGridViewB->ColumnCount; j++)
				 {
					 st += Convert::ToString(dataGridViewB[j, i]->Value) + " ";
				 }
				 richTextBox1->AppendText(st + "\n");
				 st = "";
			 }

			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
			 saveFileDialog1->Filter = "text|*.txt";
			 saveFileDialog1->DefaultExt = "*.txt";

			 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 richTextBox1->SaveFile(saveFileDialog1->FileName);
			 }

			 for (int i = 0; i < dataGridViewB->RowCount; i++)
			 {
				 richTextBox1->AppendText("" + "\n");
			 }
}
private: System::Void buttonSaveABResult_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ st;
			 for (int i = 0; i < dataGridViewABResult->RowCount; i++)
			 {
				 for (int j = 0; j < dataGridViewABResult->ColumnCount; j++)
				 {
					 st += Convert::ToString(dataGridViewABResult[j, i]->Value) + " ";
				 }
				 richTextBox1->AppendText(st + "\n");
				 st = "";
			 }

			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
			 saveFileDialog1->Filter = "text|*.txt";
			 saveFileDialog1->DefaultExt = "*.txt";

			 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 richTextBox1->SaveFile(saveFileDialog1->FileName);
			 }

			 for (int i = 0; i < dataGridViewABResult->RowCount; i++)
			 {
				 richTextBox1->AppendText("" + "\n");
			 }
}
private: System::Void buttonSaveDegree_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ st;
			 for (int i = 0; i < dataGridViewDegree->RowCount; i++)
			 {
				 for (int j = 0; j < dataGridViewDegree->ColumnCount; j++)
				 {
					 st += Convert::ToString(dataGridViewDegree[j, i]->Value) + " ";
				 }
				 richTextBox1->AppendText(st + "\n");
				 st = "";
			 }

			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
			 saveFileDialog1->Filter = "text|*.txt";
			 saveFileDialog1->DefaultExt = "*.txt";

			 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 richTextBox1->SaveFile(saveFileDialog1->FileName);
			 }

			 for (int i = 0; i < dataGridViewDegree->RowCount; i++)
			 {
				 richTextBox1->AppendText("" + "\n");
			 }
}
private: System::Void buttonSaveOperN_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ st;
			 for (int i = 0; i < dataGridViewOperN->RowCount; i++)
			 {
				 for (int j = 0; j < dataGridViewOperN->ColumnCount; j++)
				 {
					 st += Convert::ToString(dataGridViewOperN[j, i]->Value) + " ";
				 }
				 richTextBox1->AppendText(st + "\n");
				 st = "";
			 }

			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
			 saveFileDialog1->Filter = "text|*.txt";
			 saveFileDialog1->DefaultExt = "*.txt";

			 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 richTextBox1->SaveFile(saveFileDialog1->FileName);
			 }

			 for (int i = 0; i < dataGridViewOperN->RowCount; i++)
			 {
				 richTextBox1->AppendText("" + "\n");
			 }
}
private: System::Void buttonSaveTrsnsp_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ st;
			 for (int i = 0; i < dataGridViewTransp->RowCount; i++)
			 {
				 for (int j = 0; j < dataGridViewTransp->ColumnCount; j++)
				 {
					 st += Convert::ToString(dataGridViewTransp[j, i]->Value) + " ";
				 }
				 richTextBox1->AppendText(st + "\n");
				 st = "";
			 }

			 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
			 saveFileDialog1->Filter = "text|*.txt";
			 saveFileDialog1->DefaultExt = "*.txt";

			 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 richTextBox1->SaveFile(saveFileDialog1->FileName);
			 }

			 for (int i = 0; i < dataGridViewTransp->RowCount; i++)
			 {
				 richTextBox1->AppendText("" + "\n");
			 }
}
private: System::Void UnitMain_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 MessageBox::Show("Закрыть приложение?",
				 "Сообщение", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
}
};
}
