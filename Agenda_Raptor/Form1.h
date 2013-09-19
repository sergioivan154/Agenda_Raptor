#pragma once

#include "reg.h"
#include "Contactos.h"
#using <system.dll>
using namespace System::IO;
using namespace System;

namespace Agenda_Raptor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	///
	/// ADVERTENCIA: si cambia el nombre de esta clase, deberá cambiar la
	///          propiedad 'Nombre de archivos de recursos' de la herramienta de compilación de recursos administrados
	///          asociada con todos los archivos .resx de los que depende esta clase. De lo contrario,
	///          los diseñadores no podrán interactuar correctamente con los
	///          recursos adaptados asociados con este formulario.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Registrarse;
	protected: 
	private: System::Windows::Forms::Button^  Entrar;
    private: System::Windows::Forms::PictureBox^  pictureBox1;
    private: System::Windows::Forms::TextBox^  usuario;

    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::TextBox^  contrasena;




	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->Registrarse = (gcnew System::Windows::Forms::Button());
			this->Entrar = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->usuario = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->contrasena = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Registrarse
			// 
			this->Registrarse->Location = System::Drawing::Point(12, 285);
			this->Registrarse->Name = L"Registrarse";
			this->Registrarse->Size = System::Drawing::Size(75, 23);
			this->Registrarse->TabIndex = 0;
			this->Registrarse->Text = L"Registrarse";
			this->Registrarse->UseVisualStyleBackColor = true;
			this->Registrarse->Click += gcnew System::EventHandler(this, &Form1::Registrarse_Click);
			// 
			// Entrar
			// 
			this->Entrar->Location = System::Drawing::Point(176, 285);
			this->Entrar->Name = L"Entrar";
			this->Entrar->Size = System::Drawing::Size(75, 23);
			this->Entrar->TabIndex = 1;
			this->Entrar->Text = L"Entrar";
			this->Entrar->UseVisualStyleBackColor = true;
			this->Entrar->Click += gcnew System::EventHandler(this, &Form1::Entrar_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(384, 257);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// usuario
			// 
			this->usuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->usuario->Location = System::Drawing::Point(303, 288);
			this->usuario->Name = L"usuario";
			this->usuario->Size = System::Drawing::Size(100, 20);
			this->usuario->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(300, 272);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nombre de usuario";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(300, 311);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Contraseña";
			// 
			// contrasena
			// 
			this->contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->contrasena->Location = System::Drawing::Point(303, 327);
			this->contrasena->Name = L"contrasena";
			this->contrasena->PasswordChar = '*';
			this->contrasena->Size = System::Drawing::Size(100, 26);
			this->contrasena->TabIndex = 5;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(414, 370);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->contrasena);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->usuario);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Entrar);
			this->Controls->Add(this->Registrarse);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Inicio";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Registrarse_Click(System::Object^  sender, System::EventArgs^  e) {
				 reg^ registrar=gcnew reg(true,"");
                 registrar->Show();
                
			 }
    private: System::Void Entrar_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 
		String ^Nombre;
		String^ usuar; 
		String^ paterno;
		String^ materno;
		String^ particular;
		String^ oficina;
	    String^ celular;
	    String^ email;

              if(System::IO::File::Exists("C:\\Program Files\\NeoMem\\Agenda\\"+usuario->Text+"\\data.bin"))
			  {
				  bool uru=false;
					  bool pasword=false;
					 
					  
					  ::String ^us;
					
					  FileStream^ fs = gcnew FileStream("C:\\Program Files\\NeoMem\\Agenda\\"+usuario->Text+"\\data.bin", FileMode::Open);
						BinaryReader^ br = gcnew BinaryReader(fs);

						while ((br->BaseStream->Position < br->BaseStream->Length)&&(!(uru&&pasword)))
						{
							us=br->ReadString()->Replace("\n","");

							if(us->Contains("usuario:"))
							{
								if("usuario:"+usuario->Text ==  us){
							uru=true;
							usuar=usuario->Text; 
							

								}
							}
							
								else if(us->Contains("contrasena:"))
								{
									if("contrasena:"+contrasena->Text ==  us)
									{
									pasword=true;
									
									}
								}
						}
						if(uru&&pasword)
				{
					while ((br->BaseStream->Position < br->BaseStream->Length))
						{
							us=br->ReadString()->Replace("\n","");
							
						 if(us->Contains("nombre:"))
								{
							
									Nombre=us->Substring(7);
		
		
								}
						 
							  else if(us->Contains("particular:"))
								{
							particular=us->Substring(11);
									
								}
								 else if(us->Contains("paterno:"))
								{
							
									paterno=us->Substring(8);
		
								}
								  else if(us->Contains("materno:"))
								{
							
									materno=us->Substring(8);
	
		
	   
								}
								  else if(us->Contains("oficina:"))
								{
								oficina=us->Substring(8);
								}
								   else if(us->Contains("celular:"))
								{
							celular=us->Substring(8);
									
	    
								}
								else if(us->Contains("email:"))
								{
							 email=us->Substring(6);
									
								}
						
						}

					Contactos ^ agregar=gcnew Contactos(Nombre,usuario->Text,paterno,materno,particular,oficina,celular,email);
					fs->Close( ); 
					agregar->Show();
					this->Hide();
				}
				else
				{
					::MessageBox::Show("Usuario o contraseña invalidas");
				}
fs->Close( );  
			  }
			  else
			  {
				  ::MessageBox::Show("Usuario no existente intente nuevamente o haga un nuevo registro");
	
				}
						
				
						
					
				
				   
             }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
         }
};
}

