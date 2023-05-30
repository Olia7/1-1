#pragma once
#include <math.h>

namespace lab1_1 {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ xBox;






	private: System::Windows::Forms::Button^ process;
	private: System::Windows::Forms::TextBox^ resultBox;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->xBox = (gcnew System::Windows::Forms::TextBox());
			this->process = (gcnew System::Windows::Forms::Button());
			this->resultBox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(148, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Обчислення значення функції";
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"x = ";
			// 
			// xBox
			// 
			this->xBox->Location = System::Drawing::Point(81, 74);
			this->xBox->Name = L"xBox";
			this->xBox->Size = System::Drawing::Size(100, 22);
			this->xBox->TabIndex = 4;
			// 
			// process
			// 
			this->process->Location = System::Drawing::Point(188, 126);
			this->process->Name = L"process";
			this->process->Size = System::Drawing::Size(104, 23);
			this->process->TabIndex = 7;
			this->process->Text = L"Обчислити";
			this->process->UseVisualStyleBackColor = true;
			this->process->Click += gcnew System::EventHandler(this, &MyForm::process_Click);
			// 
			// resultBox
			// 
			this->resultBox->Location = System::Drawing::Point(188, 74);
			this->resultBox->Name = L"resultBox";
			this->resultBox->Size = System::Drawing::Size(266, 22);
			this->resultBox->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(361, 171);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(93, 16);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Войцехівська Ольга";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(105, 36);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(298, 16);
			this->label4->TabIndex = 10;
			this->label4->Text = L"y = (ln(x^2) + cos^2(x)) / (cos(2x) + x^2) + x^(1/3) / x";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(496, 209);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->resultBox);
			this->Controls->Add(this->process);
			this->Controls->Add(this->xBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void process_Click(System::Object^ sender, System::EventArgs^ e) {
		double x, f;
		x = Convert::ToDouble(this->xBox->Text);
		f = (log(x * x) + 2 * pow(cos(x), 2) / (cos(2 * x) + x * x)) + pow(x, 1 / 3) / x;
		this->resultBox->Text = "f = " + f.ToString("0.00");
	}
	};
}
