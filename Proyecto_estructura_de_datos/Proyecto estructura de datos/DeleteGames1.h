#pragma once

namespace Proyecto_estructura_de_datos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de DeleteGames
	/// </summary>
	public ref class DeleteGames : public System::Windows::Forms::Form
	{
	public:
		DeleteGames(void)
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
		~DeleteGames()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::ListBox^ ListGame;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ GameName;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Return;
	private: System::Windows::Forms::Button^ DeleteGame;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DeleteGames::typeid));
			this->ListGame = (gcnew System::Windows::Forms::ListBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->GameName = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Return = (gcnew System::Windows::Forms::Button());
			this->DeleteGame = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// ListGame
			// 
			this->ListGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ListGame->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ListGame->Dock = System::Windows::Forms::DockStyle::Right;
			this->ListGame->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ListGame->ForeColor = System::Drawing::Color::White;
			this->ListGame->FormattingEnabled = true;
			this->ListGame->ItemHeight = 24;
			this->ListGame->Location = System::Drawing::Point(705, 0);
			this->ListGame->Name = L"ListGame";
			this->ListGame->Size = System::Drawing::Size(195, 500);
			this->ListGame->TabIndex = 4;
			this->ListGame->SelectedIndexChanged += gcnew System::EventHandler(this, &DeleteGames::listBox1_SelectedIndexChanged);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->GameName);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Return);
			this->panel1->Controls->Add(this->DeleteGame);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(705, 500);
			this->panel1->TabIndex = 5;
			// 
			// GameName
			// 
			this->GameName->Location = System::Drawing::Point(368, 50);
			this->GameName->Multiline = true;
			this->GameName->Name = L"GameName";
			this->GameName->Size = System::Drawing::Size(219, 33);
			this->GameName->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(350, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ingrese Nombre del Juego a Eliminar: ";
			this->label1->Click += gcnew System::EventHandler(this, &DeleteGames::label1_Click);
			// 
			// Return
			// 
			this->Return->Location = System::Drawing::Point(12, 455);
			this->Return->Name = L"Return";
			this->Return->Size = System::Drawing::Size(91, 33);
			this->Return->TabIndex = 1;
			this->Return->Text = L"Regresar";
			this->Return->UseVisualStyleBackColor = true;
			// 
			// DeleteGame
			// 
			this->DeleteGame->Location = System::Drawing::Point(608, 50);
			this->DeleteGame->Name = L"DeleteGame";
			this->DeleteGame->Size = System::Drawing::Size(91, 33);
			this->DeleteGame->TabIndex = 0;
			this->DeleteGame->Text = L"Eliminar";
			this->DeleteGame->UseVisualStyleBackColor = true;
			// 
			// DeleteGames
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 500);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->ListGame);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DeleteGames";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
