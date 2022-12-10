#pragma once

namespace Proyecto_estructura_de_datos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ModifyGames
	/// </summary>
	public ref class ModifyGames : public System::Windows::Forms::Form
	{
	public:
		ModifyGames(void)
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
		~ModifyGames()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ListBox^ ListGame;
	protected:

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ Return;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ SaveChanges;

	private: System::Windows::Forms::TextBox^ GameName;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Developer;
	private: System::Windows::Forms::TextBox^ Genre;
	private: System::Windows::Forms::TextBox^ Plataforms;
	private: System::Windows::Forms::TextBox^ Rating;
	private: System::Windows::Forms::TextBox^ ReleaseDate;





	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ModifyGames::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->ListGame = (gcnew System::Windows::Forms::ListBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Return = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Developer = (gcnew System::Windows::Forms::TextBox());
			this->Genre = (gcnew System::Windows::Forms::TextBox());
			this->Plataforms = (gcnew System::Windows::Forms::TextBox());
			this->Rating = (gcnew System::Windows::Forms::TextBox());
			this->ReleaseDate = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SaveChanges = (gcnew System::Windows::Forms::Button());
			this->GameName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->ListGame);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(153, 500);
			this->panel1->TabIndex = 0;
			// 
			// ListGame
			// 
			this->ListGame->BackColor = System::Drawing::Color::Maroon;
			this->ListGame->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ListGame->Dock = System::Windows::Forms::DockStyle::Left;
			this->ListGame->ForeColor = System::Drawing::Color::White;
			this->ListGame->FormattingEnabled = true;
			this->ListGame->ItemHeight = 24;
			this->ListGame->Location = System::Drawing::Point(0, 0);
			this->ListGame->Name = L"ListGame";
			this->ListGame->Size = System::Drawing::Size(153, 500);
			this->ListGame->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->Return);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(364, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(536, 500);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ModifyGames::panel2_Paint);
			// 
			// Return
			// 
			this->Return->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Return->Location = System::Drawing::Point(435, 455);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(100, 33);
			this->Return->TabIndex = 0;
			this->Return->Text = L"Regresar";
			this->Return->UseVisualStyleBackColor = true;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->Developer);
			this->panel3->Controls->Add(this->Genre);
			this->panel3->Controls->Add(this->Plataforms);
			this->panel3->Controls->Add(this->Rating);
			this->panel3->Controls->Add(this->ReleaseDate);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->SaveChanges);
			this->panel3->Controls->Add(this->GameName);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(153, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(211, 500);
			this->panel3->TabIndex = 0;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::Color::Lime;
			this->label7->Location = System::Drawing::Point(6, 197);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(124, 24);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Plataformas:";
			// 
			// Developer
			// 
			this->Developer->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Developer->Enabled = false;
			this->Developer->Location = System::Drawing::Point(3, 375);
			this->Developer->Multiline = true;
			this->Developer->Name = L"Developer";
			this->Developer->Size = System::Drawing::Size(188, 26);
			this->Developer->TabIndex = 12;
			// 
			// Genre
			// 
			this->Genre->Enabled = false;
			this->Genre->Location = System::Drawing::Point(3, 310);
			this->Genre->Multiline = true;
			this->Genre->Name = L"Genre";
			this->Genre->Size = System::Drawing::Size(188, 26);
			this->Genre->TabIndex = 11;
			// 
			// Plataforms
			// 
			this->Plataforms->Enabled = false;
			this->Plataforms->Location = System::Drawing::Point(6, 245);
			this->Plataforms->Multiline = true;
			this->Plataforms->Name = L"Plataforms";
			this->Plataforms->Size = System::Drawing::Size(188, 26);
			this->Plataforms->TabIndex = 10;
			// 
			// Rating
			// 
			this->Rating->Enabled = false;
			this->Rating->Location = System::Drawing::Point(6, 168);
			this->Rating->Multiline = true;
			this->Rating->Name = L"Rating";
			this->Rating->Size = System::Drawing::Size(188, 26);
			this->Rating->TabIndex = 9;
			// 
			// ReleaseDate
			// 
			this->ReleaseDate->Enabled = false;
			this->ReleaseDate->Location = System::Drawing::Point(6, 101);
			this->ReleaseDate->Multiline = true;
			this->ReleaseDate->Name = L"ReleaseDate";
			this->ReleaseDate->Size = System::Drawing::Size(188, 26);
			this->ReleaseDate->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->ForeColor = System::Drawing::Color::Blue;
			this->label6->Location = System::Drawing::Point(6, 339);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(138, 24);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Desarrollador:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::Color::Aqua;
			this->label5->Location = System::Drawing::Point(6, 274);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 24);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Genero:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Lime;
			this->label4->Location = System::Drawing::Point(6, 208);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 24);
			this->label4->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::Yellow;
			this->label3->Location = System::Drawing::Point(6, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Valoracion:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(3, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(208, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Fecha de lanzamiento:";
			// 
			// SaveChanges
			// 
			this->SaveChanges->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SaveChanges->Location = System::Drawing::Point(101, 457);
			this->SaveChanges->Name = L"SaveChanges";
			this->SaveChanges->Size = System::Drawing::Size(99, 31);
			this->SaveChanges->TabIndex = 2;
			this->SaveChanges->Text = L"Guardar";
			this->SaveChanges->UseVisualStyleBackColor = true;
			// 
			// GameName
			// 
			this->GameName->Enabled = false;
			this->GameName->Location = System::Drawing::Point(6, 36);
			this->GameName->Multiline = true;
			this->GameName->Name = L"GameName";
			this->GameName->Size = System::Drawing::Size(188, 26);
			this->GameName->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(6, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(175, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre del Juego:\r\n";
			// 
			// ModifyGames
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 24);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 500);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"ModifyGames";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ModifyGames";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
};
}
