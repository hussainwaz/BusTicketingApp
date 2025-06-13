#include "SIGNUP.h"

using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	JOURNEZ::SIGNUP form;
	Application::Run(% form);
}