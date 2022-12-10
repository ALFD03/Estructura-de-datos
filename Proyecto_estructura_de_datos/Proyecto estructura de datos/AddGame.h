#pragma once

namespace Proyecto_estructura_de_datos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de AddGame
	/// </summary>
	public ref class AddGame : public System::Windows::Forms::Form
	{
	public:
		AddGame(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~AddGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ GameName;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Developer;


	private: System::Windows::Forms::TextBox^ Genre;

	private: System::Windows::Forms::TextBox^ Plataforms;

	private: System::Windows::Forms::TextBox^ Rating;

	private: System::Windows::Forms::TextBox^ ReleaseDate;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ Save;
	private: System::Windows::Forms::Button^ Return;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddGame::typeid));
			this->GameName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Developer = (gcnew System::Windows::Forms::TextBox());
			this->Genre = (gcnew System::Windows::Forms::TextBox());
			this->Plataforms = (gcnew System::Windows::Forms::TextBox());
			this->Rating = (gcnew System::Windows::Forms::TextBox());
			this->ReleaseDate = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Save = (gcnew System::Windows::Forms::Button());
			this->Return = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// GameName
			// 
			this->GameName->Location = System::Drawing::Point(3, 46);
			this->GameName->Multiline = true;
			this->GameName->Name = L"GameName";
			this->GameName->Size = System::Drawing::Size(228, 28);
			this->GameName->TabIndex = 0;
			this->GameName->TextChanged += gcnew System::EventHandler(this, &AddGame::GameName_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(-1, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre del juego: ";
			this->label1->Click += gcnew System::EventHandler(this, &AddGame::label1_Click);
			// 
			// Developer
			// 
			this->Developer->Location = System::Drawing::Point(3, 383);
			this->Developer->Multiline = true;
			this->Developer->Name = L"Developer";
			this->Developer->Size = System::Drawing::Size(228, 28);
			this->Developer->TabIndex = 2;
			// 
			// Genre
			// 
			this->Genre->Location = System::Drawing::Point(3, 316);
			this->Genre->Multiline = true;
			this->Genre->Name = L"Genre";
			this->Genre->Size = System::Drawing::Size(228, 28);
			this->Genre->TabIndex = 3;
			this->Genre->TextChanged += gcnew System::EventHandler(this, &AddGame::textBox2_TextChanged);
			// 
			// Plataforms
			// 
			this->Plataforms->Location = System::Drawing::Point(3, 248);
			this->Plataforms->Multiline = true;
			this->Plataforms->Name = L"Plataforms";
			this->Plataforms->Size = System::Drawing::Size(228, 28);
			this->Plataforms->TabIndex = 4;
			// 
			// Rating
			// 
			this->Rating->Location = System::Drawing::Point(3, 181);
			this->Rating->Multiline = true;
			this->Rating->Name = L"Rating";
			this->Rating->Size = System::Drawing::Size(228, 28);
			this->Rating->TabIndex = 5;
			// 
			// ReleaseDate
			// 
			this->ReleaseDate->Location = System::Drawing::Point(3, 113);
			this->ReleaseDate->Multiline = true;
			this->ReleaseDate->Name = L"ReleaseDate";
			this->ReleaseDate->Size = System::Drawing::Size(228, 28);
			this->ReleaseDate->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(3, 347);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 24);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Desarrollador: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Location = System::Drawing::Point(-1, 279);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 24);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Genero: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label4->Location = System::Drawing::Point(3, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 24);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Plataformas:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label5->Location = System::Drawing::Point(-1, 144);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(117, 24);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Valoracion: ";
			this->label5->Click += gcnew System::EventHandler(this, &AddGame::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label6->Location = System::Drawing::Point(-1, 77);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(208, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Fecha de lanzamiento:";
			this->label6->Click += gcnew System::EventHandler(this, &AddGame::label6_Click);
			// 
			// Save
			// 
			this->Save->BackColor = System::Drawing::Color::White;
			this->Save->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Save->Location = System::Drawing::Point(151, 444);
			this->Save->Name = L"Save";
			this->Save->Size = System::Drawing::Size(80, 44);
			this->Save->TabIndex = 12;
			this->Save->Text = L"Guardar";
			this->Save->UseVisualStyleBackColor = false;
			// 
			// Return
			// 
			this->Return->BackColor = System::Drawing::Color::White;
			this->Return->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Return->Location = System::Drawing::Point(517, 444);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(80, 44);
			this->Return->TabIndex = 13;
			this->Return->Text = L"Regresar";
			this->Return->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->Save);
			this->panel1->Controls->Add(this->GameName);
			this->panel1->Controls->Add(this->Developer);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->Genre);
			this->panel1->Controls->Add(this->Plataforms);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->Rating);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->ReleaseDate);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(251, 500);
			this->panel1->TabIndex = 14;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->Return);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(251, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(649, 500);
			this->panel2->TabIndex = 0;
			// 
			// AddGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(900, 500);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AddGame";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddGame";
			this->Load += gcnew System::EventHandler(this, &AddGame::AddGame_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void GameName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddGame_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
