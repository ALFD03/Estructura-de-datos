#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ AddGame;
	private: System::Windows::Forms::Button^ Exit;
	private: System::Windows::Forms::Button^ ModifyGame;
	private: System::Windows::Forms::Button^ DeleteGame;
	private: System::Windows::Forms::Button^ SearchGame;
	private: System::Windows::Forms::Button^ ShowAllGames;
	private: System::Windows::Forms::Panel^ panel2;


	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->ModifyGame = (gcnew System::Windows::Forms::Button());
			this->DeleteGame = (gcnew System::Windows::Forms::Button());
			this->SearchGame = (gcnew System::Windows::Forms::Button());
			this->ShowAllGames = (gcnew System::Windows::Forms::Button());
			this->AddGame = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Maroon;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->Exit);
			this->panel1->Controls->Add(this->ModifyGame);
			this->panel1->Controls->Add(this->DeleteGame);
			this->panel1->Controls->Add(this->SearchGame);
			this->panel1->Controls->Add(this->ShowAllGames);
			this->panel1->Controls->Add(this->AddGame);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(178, 500);
			this->panel1->TabIndex = 0;
			// 
			// Exit
			// 
			this->Exit->BackColor = System::Drawing::Color::White;
			this->Exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit->ForeColor = System::Drawing::Color::Black;
			this->Exit->Location = System::Drawing::Point(0, 471);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(178, 29);
			this->Exit->TabIndex = 6;
			this->Exit->Text = L"Salir";
			this->Exit->UseVisualStyleBackColor = false;
			// 
			// ModifyGame
			// 
			this->ModifyGame->BackColor = System::Drawing::Color::White;
			this->ModifyGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ModifyGame->ForeColor = System::Drawing::Color::Black;
			this->ModifyGame->Location = System::Drawing::Point(0, 216);
			this->ModifyGame->Name = L"ModifyGame";
			this->ModifyGame->Size = System::Drawing::Size(178, 29);
			this->ModifyGame->TabIndex = 2;
			this->ModifyGame->Text = L"Modificar";
			this->ModifyGame->UseVisualStyleBackColor = false;
			// 
			// DeleteGame
			// 
			this->DeleteGame->BackColor = System::Drawing::Color::White;
			this->DeleteGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DeleteGame->ForeColor = System::Drawing::Color::Black;
			this->DeleteGame->Location = System::Drawing::Point(0, 172);
			this->DeleteGame->Name = L"DeleteGame";
			this->DeleteGame->Size = System::Drawing::Size(178, 29);
			this->DeleteGame->TabIndex = 5;
			this->DeleteGame->Text = L"Borrar";
			this->DeleteGame->UseVisualStyleBackColor = false;
			// 
			// SearchGame
			// 
			this->SearchGame->BackColor = System::Drawing::Color::White;
			this->SearchGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SearchGame->ForeColor = System::Drawing::Color::Black;
			this->SearchGame->Location = System::Drawing::Point(0, 261);
			this->SearchGame->Name = L"SearchGame";
			this->SearchGame->Size = System::Drawing::Size(178, 29);
			this->SearchGame->TabIndex = 4;
			this->SearchGame->Text = L"Buscar";
			this->SearchGame->UseVisualStyleBackColor = false;
			// 
			// ShowAllGames
			// 
			this->ShowAllGames->BackColor = System::Drawing::Color::White;
			this->ShowAllGames->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ShowAllGames->ForeColor = System::Drawing::Color::Black;
			this->ShowAllGames->Location = System::Drawing::Point(0, 306);
			this->ShowAllGames->Name = L"ShowAllGames";
			this->ShowAllGames->Size = System::Drawing::Size(178, 29);
			this->ShowAllGames->TabIndex = 3;
			this->ShowAllGames->Text = L"Mostrar";
			this->ShowAllGames->UseVisualStyleBackColor = false;
			// 
			// AddGame
			// 
			this->AddGame->BackColor = System::Drawing::Color::White;
			this->AddGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddGame->ForeColor = System::Drawing::Color::Black;
			this->AddGame->Location = System::Drawing::Point(0, 128);
			this->AddGame->Name = L"AddGame";
			this->AddGame->Size = System::Drawing::Size(178, 29);
			this->AddGame->TabIndex = 1;
			this->AddGame->Text = L"Añadir";
			this->AddGame->UseVisualStyleBackColor = false;
			this->AddGame->Click += gcnew System::EventHandler(this, &Form1::AddGame_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(178, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(722, 500);
			this->panel2->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 500);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AddGame_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
