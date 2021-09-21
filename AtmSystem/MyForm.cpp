

#include "MyForm.h"



using namespace System;
using namespace System::Windows::Forms;
using namespace AtmSystem;




[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    AtmSystem::MyForm form;
  Application::Run(% form);
  
  

  }

    



   

