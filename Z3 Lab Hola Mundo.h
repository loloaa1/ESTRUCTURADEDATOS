#pragma once

namespace Hola_mundo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtmensaje;
	protected: 
	private: System::Windows::Forms::Button^  btnmensaje;
	private: System::Windows::Forms::Label^  label1;

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
			this->txtmensaje = (gcnew System::Windows::Forms::TextBox());
			this->btnmensaje = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtmensaje
			// 
			this->txtmensaje->Location = System::Drawing::Point(76, 53);
			this->txtmensaje->Name = L"txtmensaje";
			this->txtmensaje->Size = System::Drawing::Size(139, 22);
			this->txtmensaje->TabIndex = 0;
			// 
			// btnmensaje
			// 
			this->btnmensaje->Location = System::Drawing::Point(108, 130);
			this->btnmensaje->Name = L"btnmensaje";
			this->btnmensaje->Size = System::Drawing::Size(75, 23);
			this->btnmensaje->TabIndex = 1;
			this->btnmensaje->Text = L"Presioname";
			this->btnmensaje->UseVisualStyleBackColor = true;
			this->btnmensaje->Click += gcnew System::EventHandler(this, &Form1::btnmensaje_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(120, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Hola_Mundo";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnmensaje);
			this->Controls->Add(this->txtmensaje);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btnmensaje_Click(System::Object^  sender, System::EventArgs^  e) {txtmensaje -> Text = "Hola Mundo";
			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}

