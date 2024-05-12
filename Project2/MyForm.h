#pragma once

namespace Project2 {

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
	private: System::Windows::Forms::Button^ Num1;

	private: System::Windows::Forms::Button^ Num3;
	private: System::Windows::Forms::Button^ Num4;
	private: System::Windows::Forms::Button^ Num5;
	private: System::Windows::Forms::Button^ Num6;
	private: System::Windows::Forms::Button^ Num7;
	protected:

	protected:






	private: System::Windows::Forms::Button^ Num8;
	private: System::Windows::Forms::Button^ Num9;

	private: System::Windows::Forms::Button^ Num10;
	private: System::Windows::Forms::Button^ Point;
	private: System::Windows::Forms::Button^ Result;
	private: System::Windows::Forms::Button^ Divide;

	private: System::Windows::Forms::Button^ Multiply;

	private: System::Windows::Forms::Button^ Subtract;

	private: System::Windows::Forms::Button^ Add;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;


	private: System::Windows::Forms::Button^ Clear;
	private: System::Windows::Forms::Button^ ClearEverything;
	private: System::Windows::Forms::Button^ Num2;







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
			this->Num1 = (gcnew System::Windows::Forms::Button());
			this->Num3 = (gcnew System::Windows::Forms::Button());
			this->Num4 = (gcnew System::Windows::Forms::Button());
			this->Num5 = (gcnew System::Windows::Forms::Button());
			this->Num6 = (gcnew System::Windows::Forms::Button());
			this->Num7 = (gcnew System::Windows::Forms::Button());
			this->Num8 = (gcnew System::Windows::Forms::Button());
			this->Num9 = (gcnew System::Windows::Forms::Button());
			this->Num10 = (gcnew System::Windows::Forms::Button());
			this->Point = (gcnew System::Windows::Forms::Button());
			this->Result = (gcnew System::Windows::Forms::Button());
			this->Divide = (gcnew System::Windows::Forms::Button());
			this->Multiply = (gcnew System::Windows::Forms::Button());
			this->Subtract = (gcnew System::Windows::Forms::Button());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->Clear = (gcnew System::Windows::Forms::Button());
			this->ClearEverything = (gcnew System::Windows::Forms::Button());
			this->Num2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Num1
			// 
			this->Num1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Num1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Num1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Num1.Image")));
			this->Num1->Location = System::Drawing::Point(12, 139);
			this->Num1->Name = L"Num1";
			this->Num1->Size = System::Drawing::Size(64, 58);
			this->Num1->TabIndex = 0;
			this->Num1->Text = L"1";
			this->Num1->UseVisualStyleBackColor = true;
			this->Num1->Click += gcnew System::EventHandler(this, &MyForm::Num1_Click_1);
			// 
			// Num3
			// 
			this->Num3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Num3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Num3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Num3.Image")));
			this->Num3->Location = System::Drawing::Point(152, 139);
			this->Num3->Name = L"Num3";
			this->Num3->Size = System::Drawing::Size(64, 58);
			this->Num3->TabIndex = 2;
			this->Num3->Text = L"3";
			this->Num3->UseVisualStyleBackColor = true;
			this->Num3->Click += gcnew System::EventHandler(this, &MyForm::Num3_Click);
			// 
			// Num4
			// 
			this->Num4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Num4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Num4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Num4.Image")));
			this->Num4->Location = System::Drawing::Point(12, 203);
			this->Num4->Name = L"Num4";
			this->Num4->Size = System::Drawing::Size(64, 58);
			this->Num4->TabIndex = 3;
			this->Num4->Text = L"4";
			this->Num4->UseVisualStyleBackColor = true;
			this->Num4->Click += gcnew System::EventHandler(this, &MyForm::Num4_Click_1);
			// 
			// Num5
			// 
			this->Num5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Num5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Num5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Num5.Image")));
			this->Num5->Location = System::Drawing::Point(82, 203);
			this->Num5->Name = L"Num5";
			this->Num5->Size = System::Drawing::Size(64, 58);
			this->Num5->TabIndex = 4;
			this->Num5->Text = L"5";
			this->Num5->UseVisualStyleBackColor = true;
			this->Num5->Click += gcnew System::EventHandler(this, &MyForm::Num5_Click);
			// 
			// Num6
			// 
			this->Num6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Num6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Num6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Num6.Image")));
			this->Num6->Location = System::Drawing::Point(152, 203);
			this->Num6->Name = L"Num6";
			this->Num6->Size = System::Drawing::Size(64, 58);
			this->Num6->TabIndex = 5;
			this->Num6->Text = L"6";
			this->Num6->UseVisualStyleBackColor = true;
			this->Num6->Click += gcnew System::EventHandler(this, &MyForm::Num6_Click);
			// 
			// Num7
			// 
			this->Num7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Num7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Num7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Num7.Image")));
			this->Num7->Location = System::Drawing::Point(12, 267);
			this->Num7->Name = L"Num7";
			this->Num7->Size = System::Drawing::Size(64, 58);
			this->Num7->TabIndex = 6;
			this->Num7->Text = L"7";
			this->Num7->UseVisualStyleBackColor = true;
			this->Num7->Click += gcnew System::EventHandler(this, &MyForm::Num7_Click);
			// 
			// Num8
			// 
			this->Num8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Num8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Num8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Num8.Image")));
			this->Num8->Location = System::Drawing::Point(82, 267);
			this->Num8->Name = L"Num8";
			this->Num8->Size = System::Drawing::Size(64, 58);
			this->Num8->TabIndex = 7;
			this->Num8->Text = L"8";
			this->Num8->UseVisualStyleBackColor = true;
			this->Num8->Click += gcnew System::EventHandler(this, &MyForm::Num8_Click);
			// 
			// Num9
			// 
			this->Num9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Num9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Num9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Num9.Image")));
			this->Num9->Location = System::Drawing::Point(152, 267);
			this->Num9->Name = L"Num9";
			this->Num9->Size = System::Drawing::Size(64, 58);
			this->Num9->TabIndex = 8;
			this->Num9->Text = L"9";
			this->Num9->UseVisualStyleBackColor = true;
			this->Num9->Click += gcnew System::EventHandler(this, &MyForm::Num9_Click_1);
			// 
			// Num10
			// 
			this->Num10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Num10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Num10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Num10.Image")));
			this->Num10->Location = System::Drawing::Point(12, 331);
			this->Num10->Name = L"Num10";
			this->Num10->Size = System::Drawing::Size(134, 58);
			this->Num10->TabIndex = 9;
			this->Num10->Text = L"0";
			this->Num10->UseVisualStyleBackColor = true;
			this->Num10->Click += gcnew System::EventHandler(this, &MyForm::Num10_Click);
			// 
			// Point
			// 
			this->Point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Point->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Point->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Point.Image")));
			this->Point->Location = System::Drawing::Point(152, 395);
			this->Point->Name = L"Point";
			this->Point->Size = System::Drawing::Size(64, 58);
			this->Point->TabIndex = 10;
			this->Point->Text = L". ,";
			this->Point->UseVisualStyleBackColor = true;
			this->Point->Click += gcnew System::EventHandler(this, &MyForm::Point_Click);
			// 
			// Result
			// 
			this->Result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Result->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Result->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Result.Image")));
			this->Result->Location = System::Drawing::Point(152, 331);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(64, 58);
			this->Result->TabIndex = 11;
			this->Result->Text = L"=";
			this->Result->UseVisualStyleBackColor = true;
			this->Result->Click += gcnew System::EventHandler(this, &MyForm::Result_Click);
			// 
			// Divide
			// 
			this->Divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Divide->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Divide->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Divide.Image")));
			this->Divide->Location = System::Drawing::Point(222, 331);
			this->Divide->Name = L"Divide";
			this->Divide->Size = System::Drawing::Size(64, 58);
			this->Divide->TabIndex = 12;
			this->Divide->Text = L"/";
			this->Divide->UseVisualStyleBackColor = true;
			this->Divide->Click += gcnew System::EventHandler(this, &MyForm::Divide_Click_1);
			// 
			// Multiply
			// 
			this->Multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Multiply->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Multiply->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Multiply.Image")));
			this->Multiply->Location = System::Drawing::Point(222, 267);
			this->Multiply->Name = L"Multiply";
			this->Multiply->Size = System::Drawing::Size(64, 58);
			this->Multiply->TabIndex = 13;
			this->Multiply->Text = L"*";
			this->Multiply->UseVisualStyleBackColor = true;
			this->Multiply->Click += gcnew System::EventHandler(this, &MyForm::Multiply_Click);
			// 
			// Subtract
			// 
			this->Subtract->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Subtract->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Subtract->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Subtract.Image")));
			this->Subtract->Location = System::Drawing::Point(222, 203);
			this->Subtract->Name = L"Subtract";
			this->Subtract->Size = System::Drawing::Size(64, 58);
			this->Subtract->TabIndex = 14;
			this->Subtract->Text = L"-";
			this->Subtract->UseVisualStyleBackColor = true;
			this->Subtract->Click += gcnew System::EventHandler(this, &MyForm::Subtract_Click);
			// 
			// Add
			// 
			this->Add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Add->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Add->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Add.Image")));
			this->Add->Location = System::Drawing::Point(222, 139);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(64, 58);
			this->Add->TabIndex = 15;
			this->Add->Text = L"+";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &MyForm::Add_Click_1);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(12, 28);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(274, 96);
			this->richTextBox1->TabIndex = 16;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// Clear
			// 
			this->Clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Clear->Location = System::Drawing::Point(12, 395);
			this->Clear->Name = L"Clear";
			this->Clear->Size = System::Drawing::Size(64, 58);
			this->Clear->TabIndex = 19;
			this->Clear->Text = L"C";
			this->Clear->UseVisualStyleBackColor = true;
			this->Clear->Click += gcnew System::EventHandler(this, &MyForm::Clear_Click);
			// 
			// ClearEverything
			// 
			this->ClearEverything->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ClearEverything->Location = System::Drawing::Point(82, 395);
			this->ClearEverything->Name = L"ClearEverything";
			this->ClearEverything->Size = System::Drawing::Size(64, 58);
			this->ClearEverything->TabIndex = 20;
			this->ClearEverything->Text = L"CL";
			this->ClearEverything->UseVisualStyleBackColor = true;
			this->ClearEverything->Click += gcnew System::EventHandler(this, &MyForm::ClearEverything_Click);
			// 
			// Num2
			// 
			this->Num2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Num2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->Num2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Num2.Image")));
			this->Num2->Location = System::Drawing::Point(82, 139);
			this->Num2->Name = L"Num2";
			this->Num2->Size = System::Drawing::Size(64, 58);
			this->Num2->TabIndex = 21;
			this->Num2->Text = L"2";
			this->Num2->UseVisualStyleBackColor = true;
			this->Num2->Click += gcnew System::EventHandler(this, &MyForm::Num2_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(299, 462);
			this->Controls->Add(this->Num2);
			this->Controls->Add(this->ClearEverything);
			this->Controls->Add(this->Clear);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->Subtract);
			this->Controls->Add(this->Multiply);
			this->Controls->Add(this->Divide);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->Point);
			this->Controls->Add(this->Num10);
			this->Controls->Add(this->Num9);
			this->Controls->Add(this->Num8);
			this->Controls->Add(this->Num7);
			this->Controls->Add(this->Num6);
			this->Controls->Add(this->Num5);
			this->Controls->Add(this->Num4);
			this->Controls->Add(this->Num3);
			this->Controls->Add(this->Num1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		double first, second = first = 0;
		char Operator; 
	private: System::Void Num1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->Text == "0")
			richTextBox1->Clear();
		richTextBox1->Text += "1";
	}
private: System::Void Num2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text == "0")
		richTextBox1->Clear();
	richTextBox1->Text += "2";
}
private: System::Void Num3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text == "0")
	{
		richTextBox1->Clear();
	}
	richTextBox1->Text += "3";
}
private: System::Void Num4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text == "0")
		richTextBox1->Clear();
	richTextBox1->Text += "4";
}

private: System::Void Num5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text == "0")
	{
		richTextBox1->Clear();
	}
	richTextBox1->Text += "5";
}
private: System::Void Num6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text == "0")
	{
		richTextBox1->Clear();
	}
	richTextBox1->Text += "6";
}
private: System::Void Num7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text == "0")
	{
		richTextBox1->Clear();
	}
	richTextBox1->Text += "7";
}
private: System::Void Num8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text == "0")
	{
		richTextBox1->Clear();
	}
	richTextBox1->Text += "8";
}
private: System::Void Num9_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text == "0")
		richTextBox1->Clear();
	richTextBox1->Text += "9";
}
private: System::Void Num10_Click(System::Object^ sender, System::EventArgs^ e) {
	if ((richTextBox1->Text == "") || (richTextBox1->Text != "0") && (richTextBox1->Text != "-"))
	{
		richTextBox1->Text += "0";
	}
}
private: System::Void Point_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text != "")
		richTextBox1->Text += ",";
}
private: System::Void Divide_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ClearEverything_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Clear();
}
private: System::Void Add_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text == "-")
		richTextBox1->Clear();
	else if (richTextBox1->Text != "")
		first = double::Parse(richTextBox1->Text);
	    Operator = '+';
		richTextBox1->Clear();
}
private: System::Void Subtract_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text == "" && richTextBox1->Text != "-")
		richTextBox1->Text += "-";
	else if (richTextBox1->Text != "")
		first = double::Parse(richTextBox1->Text);
	    Operator = '-';
	    richTextBox1->Clear();
}
private: System::Void Multiply_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text == "" && richTextBox1->Text != "-")
	{
		richTextBox1->Clear();
	}
	else if (richTextBox1->Text != "")
		first = Double::Parse(richTextBox1->Text);
	Operator = '*';
	richTextBox1->Clear();
}
private: System::Void Divide_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text == "" && richTextBox1->Text != "-")
	{
		richTextBox1->Clear();
	}
	else if (richTextBox1->Text != "")
		first = Double::Parse(richTextBox1->Text);
	Operator = '/';
	richTextBox1->Clear();
}
private: System::Void Result_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text != "" && richTextBox1->Text != "-")
		second = double::Parse(richTextBox1->Text);

	if (Operator == '+')
		richTextBox1->Text = System::Convert::ToString(first + second);
	else if (Operator == '-')
		richTextBox1->Text = System::Convert::ToString(first - second);
	else if (Operator == '*')
		richTextBox1->Text = System::Convert::ToString(first * second);
	else if (Operator == '/')
		richTextBox1->Text = System::Convert::ToString(first / second);
}
private: System::Void Clear_Click(System::Object^ sender, System::EventArgs^ e) {
	if (richTextBox1->Text->Length > 0)
	{
		richTextBox1->Text = richTextBox1->Text->Remove(richTextBox1->Text->Length - 1, 1);
	}
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}

};
};

