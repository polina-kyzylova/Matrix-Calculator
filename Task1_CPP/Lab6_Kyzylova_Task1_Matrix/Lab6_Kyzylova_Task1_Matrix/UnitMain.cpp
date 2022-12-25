#include "UnitMain.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Lab6_Kyzylova_Task1_Matrix::UnitMain form;
	Application::Run(%form);
}


