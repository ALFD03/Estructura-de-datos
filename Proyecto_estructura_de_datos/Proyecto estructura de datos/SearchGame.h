#pragma once

namespace Proyecto_estructura_de_datos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SearchGame
	/// </summary>
	public ref class SearchGame : public System::Windows::Forms::Form
	{
	public:
		SearchGame(void)
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
		~SearchGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ GameName;
	protected:

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::ListBox^ ListGame;
	private: System::Windows::Forms::TextBox^ Developer;


	private: System::Windows::Forms::TextBox^ Genre;

	private: System::Windows::Forms::TextBox^ Plataforms;

	private: System::Windows::Forms::TextBox^ Rating;

	private: System::Windows::Forms::TextBox^ ReleaseDate;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Return;
	private: System::Windows::Forms::Button^ Searchaction;
	private: System::Windows::Forms::TextBox^ Search;
	private: System::Windows::Forms::Label^ label7;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchGame::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Developer = (gcnew System::Windows::Forms::TextBox());
			this->Genre = (gcnew System::Windows::Forms::TextBox());
			this->Plataforms = (gcnew System::Windows::Forms::TextBox());
			this->Rating = (gcnew System::Windows::Forms::TextBox());
			this->ReleaseDate = (gcnew System::Windows::Forms::TextBox());
			this->GameName = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Return = (gcnew System::Windows::Forms::Button());
			this->Searchaction = (gcnew System::Windows::Forms::Button());
			this->Search = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->ListGame = (gcnew System::Windows::Forms::ListBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Developer);
			this->panel1->Controls->Add(this->Genre);
			this->panel1->Controls->Add(this->Plataforms);
			this->panel1->Controls->Add(this->Rating);
			this->panel1->Controls->Add(this->ReleaseDate);
			this->panel1->Controls->Add(this->GameName);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(230, 500);
			this->panel1->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Blue;
			this->label6->Location = System::Drawing::Point(12, 368);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Desarrollador:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Aqua;
			this->label5->Location = System::Drawing::Point(12, 297);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 24);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Genero:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Lime;
			this->label4->Location = System::Drawing::Point(12, 226);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 24);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Plataformas:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(12, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 24);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Valoracion:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(208, 24);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Fecha de lanzamiento:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Nombre del Juego:";
			// 
			// Developer
			// 
			this->Developer->Enabled = false;
			this->Developer->Location = System::Drawing::Point(3, 395);
			this->Developer->Name = L"Developer";
			this->Developer->Size = System::Drawing::Size(221, 32);
			this->Developer->TabIndex = 6;
			// 
			// Genre
			// 
			this->Genre->Enabled = false;
			this->Genre->Location = System::Drawing::Point(3, 324);
			this->Genre->Name = L"Genre";
			this->Genre->Size = System::Drawing::Size(221, 32);
			this->Genre->TabIndex = 5;
			// 
			// Plataforms
			// 
			this->Plataforms->Enabled = false;
			this->Plataforms->Location = System::Drawing::Point(3, 253);
			this->Plataforms->Name = L"Plataforms";
			this->Plataforms->Size = System::Drawing::Size(221, 32);
			this->Plataforms->TabIndex = 4;
			// 
			// Rating
			// 
			this->Rating->Enabled = false;
			this->Rating->Location = System::Drawing::Point(3, 181);
			this->Rating->Name = L"Rating";
			this->Rating->Size = System::Drawing::Size(221, 32);
			this->Rating->TabIndex = 3;
			// 
			// ReleaseDate
			// 
			this->ReleaseDate->Enabled = false;
			this->ReleaseDate->Location = System::Drawing::Point(3, 110);
			this->ReleaseDate->Name = L"ReleaseDate";
			this->ReleaseDate->Size = System::Drawing::Size(221, 32);
			this->ReleaseDate->TabIndex = 2;
			// 
			// GameName
			// 
			this->GameName->Enabled = false;
			this->GameName->Location = System::Drawing::Point(3, 36);
			this->GameName->Name = L"GameName";
			this->GameName->Size = System::Drawing::Size(221, 32);
			this->GameName->TabIndex = 1;
			this->GameName->TextChanged += gcnew System::EventHandler(this, &SearchGame::textBox1_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->Return);
			this->panel2->Controls->Add(this->Searchaction);
			this->panel2->Controls->Add(this->Search);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->ListGame);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(230, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(670, 500);
			this->panel2->TabIndex = 0;
			// 
			// Return
			// 
			this->Return->Location = System::Drawing::Point(400, 457);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(104, 31);
			this->Return->TabIndex = 14;
			this->Return->Text = L"Regresar";
			this->Return->UseVisualStyleBackColor = true;
			// 
			// Searchaction
			// 
			this->Searchaction->Location = System::Drawing::Point(400, 420);
			this->Searchaction->Name = L"Searchaction";
			this->Searchaction->Size = System::Drawing::Size(104, 31);
			this->Searchaction->TabIndex = 13;
			this->Searchaction->Text = L"Buscar";
			this->Searchaction->UseVisualStyleBackColor = true;
			// 
			// Search
			// 
			this->Search->Location = System::Drawing::Point(334, 9);
			this->Search->Name = L"Search";
			this->Search->Size = System::Drawing::Size(170, 32);
			this->Search->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(6, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(322, 24);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Ingrese nombre del Juego a buscar:";
			// 
			// ListGame
			// 
			this->ListGame->BackColor = System::Drawing::Color::Maroon;
			this->ListGame->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ListGame->Dock = System::Windows::Forms::DockStyle::Right;
			this->ListGame->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ListGame->ForeColor = System::Drawing::Color::White;
			this->ListGame->FormattingEnabled = true;
			this->ListGame->ItemHeight = 24;
			this->ListGame->Location = System::Drawing::Point(515, 0);
			this->ListGame->Name = L"ListGame";
			this->ListGame->Size = System::Drawing::Size(155, 500);
			this->ListGame->TabIndex = 0;
			// 
			// SearchGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 500);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"SearchGame";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SearchGame";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
