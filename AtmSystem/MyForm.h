#pragma once
#include "SerialPort.h"


int id;







namespace AtmSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	//using namespace std;
	using namespace System::Data::SqlClient;

	

	


	




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
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Button^ button23;
	public: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	public:







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Teal;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(44, 29);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(788, 956);
			this->panel1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(480, 9);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(35, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(714, 903);
			this->panel2->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::LightSlateGray;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->button22);
			this->panel4->Controls->Add(this->button21);
			this->panel4->Controls->Add(this->button20);
			this->panel4->Controls->Add(this->button19);
			this->panel4->Controls->Add(this->button18);
			this->panel4->Controls->Add(this->button17);
			this->panel4->Controls->Add(this->button16);
			this->panel4->Controls->Add(this->button15);
			this->panel4->Controls->Add(this->button14);
			this->panel4->Controls->Add(this->button13);
			this->panel4->Controls->Add(this->button12);
			this->panel4->Controls->Add(this->button10);
			this->panel4->Controls->Add(this->button11);
			this->panel4->Controls->Add(this->button9);
			this->panel4->Controls->Add(this->button8);
			this->panel4->Controls->Add(this->button7);
			this->panel4->Location = System::Drawing::Point(60, 482);
			this->panel4->Name = L"panel4";
			this->panel4->Padding = System::Windows::Forms::Padding(3);
			this->panel4->Size = System::Drawing::Size(598, 384);
			this->panel4->TabIndex = 1;
			// 
			// button22
			// 
			this->button22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.BackgroundImage")));
			this->button22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button22->Location = System::Drawing::Point(398, 278);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(153, 72);
			this->button22->TabIndex = 16;
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.BackgroundImage")));
			this->button21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button21->Location = System::Drawing::Point(398, 196);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(154, 76);
			this->button21->TabIndex = 15;
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.BackgroundImage")));
			this->button20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button20->Location = System::Drawing::Point(398, 118);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(155, 73);
			this->button20->TabIndex = 14;
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.BackgroundImage")));
			this->button19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button19->Location = System::Drawing::Point(398, 37);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(156, 75);
			this->button19->TabIndex = 13;
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.BackgroundImage")));
			this->button18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button18->Location = System::Drawing::Point(227, 278);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(85, 72);
			this->button18->TabIndex = 12;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button17
			// 
			this->button17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.BackgroundImage")));
			this->button17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button17->Location = System::Drawing::Point(133, 279);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(88, 72);
			this->button17->TabIndex = 11;
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button16.BackgroundImage")));
			this->button16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button16->Location = System::Drawing::Point(39, 279);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(88, 73);
			this->button16->TabIndex = 10;
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button15->Location = System::Drawing::Point(227, 198);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(86, 74);
			this->button15->TabIndex = 9;
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button14->Location = System::Drawing::Point(227, 118);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(87, 74);
			this->button14->TabIndex = 8;
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button13->Location = System::Drawing::Point(227, 37);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(87, 75);
			this->button13->TabIndex = 7;
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button12->Location = System::Drawing::Point(133, 198);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(88, 74);
			this->button12->TabIndex = 6;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->Location = System::Drawing::Point(133, 118);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(87, 74);
			this->button10->TabIndex = 5;
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button11->Location = System::Drawing::Point(133, 37);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(88, 75);
			this->button11->TabIndex = 4;
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Location = System::Drawing::Point(39, 199);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(88, 74);
			this->button9->TabIndex = 2;
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.BackgroundImage")));
			this->button8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button8->Location = System::Drawing::Point(39, 118);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(88, 75);
			this->button8->TabIndex = 1;
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Location = System::Drawing::Point(39, 37);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(88, 75);
			this->button7->TabIndex = 0;
			this->button7->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->button23);
			this->panel3->Controls->Add(this->pictureBox1);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->button2);
			this->panel3->Controls->Add(this->button1);
			this->panel3->ForeColor = System::Drawing::Color::Black;
			this->panel3->Location = System::Drawing::Point(27, 24);
			this->panel3->Margin = System::Windows::Forms::Padding(5);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(660, 393);
			this->panel3->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(3, 13);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(163, 31);
			this->textBox1->TabIndex = 11;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::SteelBlue;
			this->button23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button23->CausesValidation = false;
			this->button23->Font = (gcnew System::Drawing::Font(L"MV Boli", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(275, 301);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(96, 36);
			this->button23->TabIndex = 10;
			this->button23->Text = L"CLICK";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(139, 53);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(376, 294);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(241, 6);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(174, 38);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Location = System::Drawing::Point(521, 263);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 36);
			this->button6->TabIndex = 6;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Location = System::Drawing::Point(520, 182);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(122, 36);
			this->button5->TabIndex = 5;
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Location = System::Drawing::Point(520, 95);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(124, 36);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Location = System::Drawing::Point(9, 261);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(124, 38);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Location = System::Drawing::Point(7, 180);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(126, 38);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->Location = System::Drawing::Point(7, 95);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(126, 36);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 1033);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
		

		

#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		disable();

		char commport[] = "\\\\.\\COM5";
		char* port = commport;


		SerialPort arduino(port);
		if (arduino.isConnected()) {
			textBox1->AppendText("Connection Established");

			
		}
		else {
			textBox1->AppendText("Error in port");
		}

		MyForm:Show();
		Application::DoEvents();
	    //constring = "Data Source=DESKTOP-L186BBJ;Initial Catalog=project;Integrated Security=True";
		  SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-L186BBJ;Initial Catalog=project;Integrated Security=True");
			
		  con->Open();
		  if (con->State == System::Data::ConnectionState::Open) {
			  textBox2->AppendText("DB Connected");
		  }
		 

		
	}
		   private: System::Void MyForm_Shown(Object sender, EventArgs e) {
			   Application::DoEvents();
			   function();
		   }


	
		   
		  
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}





	private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	

		button23->Visible = false;
		pictureBox1->BackgroundImage = Image::FromFile("c:\\FIRST SCREEN.jpeg");
		pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		//MyForm::Show();
		Application::DoEvents();

		function();

	}



		   private: void function() {
			   char output[MAX_DATA_LENGTH];
			   char commport[] = "\\\\.\\COM5";
			   char* port = commport;


			   SerialPort arduino(port);  


			  // if (arduino.isConnected()) {
				//  textBox1->AppendText("Connection Established2");
			   //}
			   //else {
				 //  textBox1->AppendText("Error in port2");
			   //}
			   arduino.readSerialPort(output, MAX_DATA_LENGTH);
			   

			   while ((*output != 'P') || (*output != 'R') || (*output != 'K')) {
				   arduino.readSerialPort(output, MAX_DATA_LENGTH);
				   Application::DoEvents();


				   if (*output == 'P') {
					   id = 1;
					   pictureBox1->BackgroundImage = Image::FromFile("c:\\SECOND SCREEN.jpeg");
					   textBox1->Text=("Pranshul Thapliyal");
					   enable();

					   break;

				   }
				   else if (*output == 'R') {
					   id = 2;
					   pictureBox1->BackgroundImage = Image::FromFile("c:\\SECOND SCREEN.jpeg");
					   textBox1->Text=("Rohan Rautela");
					   break;
				   }

				   else if (*output == 'K') {
					   id = 3;
					   pictureBox1->BackgroundImage = Image::FromFile("c:\\SECOND SCREEN.jpeg");
					   textBox1->Text=("Kritarth Khanduri");
					   break;
				   }
			   }
		   }


				  private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
				  }

						 private: void enable() {



							 button1->Enabled = true;
							 button2->Enabled = true;
							 button3->Enabled = true;
							 button4->Enabled = true;
							 button5->Enabled = true;
							 button6->Enabled = true;
							 button7->Enabled = true;
							 button8->Enabled = true;
							 button9->Enabled = true;
							 button10->Enabled = true;
							 button11->Enabled = true;
							 button12->Enabled = true;
							 button13->Enabled = true;
							 button14->Enabled = true;
							 button15->Enabled = true;
							 button16->Enabled = true;
							 button17->Enabled = true;
							 button18->Enabled = true;
							 button19->Enabled = true;
							 button20->Enabled = true;
							 button21->Enabled = true;
							 button22->Enabled = true;

						 }

								 private: void disable() {



									 button1->Enabled = false;
									 button2->Enabled = false;
									 button3->Enabled = false;
									 button4->Enabled = false;
									 button5->Enabled = false;
									 button6->Enabled = false;
									 button7->Enabled = false;
									 button8->Enabled = false;
									 button9->Enabled = false;
									 button10->Enabled = false;
									 button11->Enabled = false;
									 button12->Enabled = false;
									 button13->Enabled = false;
									 button14->Enabled = false;
									 button15->Enabled = false;
									 button16->Enabled = false;
									 button17->Enabled = false;
									 button18->Enabled = false;
									 button19->Enabled = false;
									 button20->Enabled = false;
									 button21->Enabled = false;
									 button22->Enabled = false;

								 }


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	SqlConnection^ con = gcnew SqlConnection("Data Source=DESKTOP-L186BBJ;Initial Catalog=project;Integrated Security=True");

	con->Open();
	if (con->State == System::Data::ConnectionState::Open) {
		textBox2->AppendText("DB Connected");
	}


	String^ q = "SELECT * FROM Cred WHERE ID = 1;";
	SqlCommand^ cmd = gcnew SqlCommand(q,con);
	//cmd->ExecuteNonQuery();
	SqlDataReader^ dr = cmd->ExecuteReader();
	while (dr->Read()) {
		//textBox2->Text = dr->GetString(2);
		int tmp = dr->GetInt32(dr->GetOrdinal("Balance"));
		textBox2->Text = tmp.ToString();
	}





}
};
}









