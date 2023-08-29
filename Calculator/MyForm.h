#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btnclear;
	private: System::Windows::Forms::Button^ btnmin;
	private: System::Windows::Forms::Button^ btnplus;
	private: System::Windows::Forms::Button^ btnequal;
	private: System::Windows::Forms::Button^ btndot;
	private: System::Windows::Forms::Button^ btntimes;
	private: System::Windows::Forms::Button^ btndevide;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnclear = (gcnew System::Windows::Forms::Button());
			this->btnmin = (gcnew System::Windows::Forms::Button());
			this->btnplus = (gcnew System::Windows::Forms::Button());
			this->btnequal = (gcnew System::Windows::Forms::Button());
			this->btndot = (gcnew System::Windows::Forms::Button());
			this->btntimes = (gcnew System::Windows::Forms::Button());
			this->btndevide = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(298, 89);
			this->textBox1->TabIndex = 1;
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn0->Location = System::Drawing::Point(12, 411);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(146, 70);
			this->btn0->TabIndex = 0;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn1->Location = System::Drawing::Point(12, 335);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(70, 70);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn2->Location = System::Drawing::Point(88, 335);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(70, 70);
			this->btn2->TabIndex = 0;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn3->Location = System::Drawing::Point(164, 335);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(70, 70);
			this->btn3->TabIndex = 0;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn4->Location = System::Drawing::Point(12, 259);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(70, 70);
			this->btn4->TabIndex = 0;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn5->Location = System::Drawing::Point(88, 259);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(70, 70);
			this->btn5->TabIndex = 0;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn6->Location = System::Drawing::Point(164, 259);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(70, 70);
			this->btn6->TabIndex = 0;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn7->Location = System::Drawing::Point(12, 183);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(70, 70);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn8->Location = System::Drawing::Point(88, 183);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(70, 70);
			this->btn8->TabIndex = 0;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btn9->Location = System::Drawing::Point(164, 183);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(70, 70);
			this->btn9->TabIndex = 0;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btnclear
			// 
			this->btnclear->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnclear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnclear->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnclear->Location = System::Drawing::Point(12, 107);
			this->btnclear->Name = L"btnclear";
			this->btnclear->Size = System::Drawing::Size(70, 70);
			this->btnclear->TabIndex = 0;
			this->btnclear->Text = L"Clear";
			this->btnclear->UseVisualStyleBackColor = false;
			this->btnclear->Click += gcnew System::EventHandler(this, &MyForm::btnclear_Click);
			// 
			// btnmin
			// 
			this->btnmin->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnmin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnmin->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnmin->Location = System::Drawing::Point(240, 107);
			this->btnmin->Name = L"btnmin";
			this->btnmin->Size = System::Drawing::Size(70, 70);
			this->btnmin->TabIndex = 0;
			this->btnmin->Text = L"-";
			this->btnmin->UseVisualStyleBackColor = false;
			this->btnmin->Click += gcnew System::EventHandler(this, &MyForm::btnmin_Click);
			// 
			// btnplus
			// 
			this->btnplus->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnplus->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnplus->Location = System::Drawing::Point(240, 183);
			this->btnplus->Name = L"btnplus";
			this->btnplus->Size = System::Drawing::Size(70, 146);
			this->btnplus->TabIndex = 0;
			this->btnplus->Text = L"+";
			this->btnplus->UseVisualStyleBackColor = false;
			this->btnplus->Click += gcnew System::EventHandler(this, &MyForm::btnplus_Click);
			// 
			// btntimes
			// 
			this->btntimes->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btntimes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btntimes->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btntimes->Location = System::Drawing::Point(164, 107);
			this->btntimes->Name = L"btntimes";
			this->btntimes->Size = System::Drawing::Size(70, 70);
			this->btntimes->TabIndex = 2;
			this->btntimes->Text = L"*";
			this->btntimes->UseVisualStyleBackColor = false;
			this->btntimes->Click += gcnew System::EventHandler(this, &MyForm::btntimes_Click);
			// 
			// btndevide
			// 
			this->btndevide->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btndevide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndevide->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btndevide->Location = System::Drawing::Point(88, 107);
			this->btndevide->Name = L"btndevide";
			this->btndevide->Size = System::Drawing::Size(70, 70);
			this->btndevide->TabIndex = 3;
			this->btndevide->Text = L"/";
			this->btndevide->UseVisualStyleBackColor = false;
			this->btndevide->Click += gcnew System::EventHandler(this, &MyForm::btndevide_Click);
			// 
			// btnequal
			// 
			this->btnequal->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnequal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnequal->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnequal->Location = System::Drawing::Point(240, 335);
			this->btnequal->Name = L"btnequal";
			this->btnequal->Size = System::Drawing::Size(70, 144);
			this->btnequal->TabIndex = 0;
			this->btnequal->Text = L"=";
			this->btnequal->UseVisualStyleBackColor = false;
			this->btnequal->Click += gcnew System::EventHandler(this, &MyForm::btnequal_Click);
			// 
			// btndot
			// 
			this->btndot->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btndot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btndot->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btndot->Location = System::Drawing::Point(164, 409);
			this->btndot->Name = L"btndot";
			this->btndot->Size = System::Drawing::Size(70, 70);
			this->btndot->TabIndex = 0;
			this->btndot->Text = L".";
			this->btndot->UseVisualStyleBackColor = false;
			this->btndot->Click += gcnew System::EventHandler(this, &MyForm::btndot_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(318, 486);		
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnequal);
			this->Controls->Add(this->btnplus);
			this->Controls->Add(this->btnmin);
			this->Controls->Add(this->btntimes);
			this->Controls->Add(this->btndevide);
			this->Controls->Add(this->btnclear);
			this->Controls->Add(this->btndot);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double first, second = first = 0.0;
		char Operator;

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0")
			textBox1->Clear();
		textBox1->Text += "1";
	}
	
	private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0")
			textBox1->Clear();
		textBox1->Text += "2";
}
	private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0")
			textBox1->Clear();
		textBox1->Text += "3";
	}
	private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0")
			textBox1->Clear();
		textBox1->Text += "4";
	}
	private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0")
			textBox1->Clear();
		textBox1->Text += "5";
	}
	private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0")
			textBox1->Clear();
		textBox1->Text += "6";
	}
	private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0")
			textBox1->Clear();
		textBox1->Text += "7";
	}
	private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0")
			textBox1->Clear();
		textBox1->Text += "8";
	}
	private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "0")
			textBox1->Clear();
		textBox1->Text += "9";
	}
	private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "" || (textBox1->Text != "0" && textBox1->Text != "-"))
			textBox1->Text += "0";
	}
	private: System::Void btndot_Click(System::Object^ sender, System::EventArgs^ e) {
		bool flag = true;
		String^ str = textBox1->Text;
		for(int i=0;i<str->Length;i++)
			if (str[i] == ',') {
				flag = false;
				break;
			}
		if (textBox1->Text != "" && flag)
			textBox1->Text += ",";
	}
	private: System::Void btnplus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "-")
			textBox1->Clear();
		else if (textBox1->Text != "" ) {
			first = double::Parse(textBox1->Text);
			Operator = '+';
			textBox1->Clear();
		}
	}
	private: System::Void btnmin_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "" && textBox1->Text != "-")
			textBox1->Text += "-";
		else if (textBox1->Text != "" && textBox1->Text != "-") {
			first = double::Parse(textBox1->Text);
			Operator = '-';
			textBox1->Clear();
		}
	}
	private: System::Void btntimes_Click(System::Object^ sender, System::EventArgs^ e) {
		(textBox1->Text != "");
		first = double::Parse(textBox1->Text);
		Operator = '*';
		textBox1->Clear();
	}
	private: System::Void btndevide_Click(System::Object^ sender, System::EventArgs^ e) {
		(textBox1->Text != "");
		first = double::Parse(textBox1->Text);
		Operator = '/';
		textBox1->Clear();
	}
	private: System::Void btnequal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "" && textBox1->Text != "-")
			second = double::Parse(textBox1->Text);

		if (Operator == '+')
			textBox1->Text = System::Convert::ToString(first + second);
		else if (Operator == '-')
			textBox1->Text = Convert::ToString(first - second);
		else if (Operator == '*')
			textBox1->Text = Convert::ToString(first * second);
		else if (Operator == '/')
			textBox1->Text = Convert::ToString(first / second);
	}

	private: System::Void btnclear_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Clear();
		first = second = 0;
		Operator = ' ';
	}
	
};
}
