

#include "MyForm.h"
#include<string>




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

  //System::Windows::Forms::TextBox^ textBox1;
  //textBox1->AppendText("Hello");
  
  

  }

    



   

