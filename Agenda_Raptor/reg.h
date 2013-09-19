#pragma once
#include "Imagen.h"

using namespace System;
using namespace System::IO;
#using <system.dll>


using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;



namespace Agenda_Raptor {

	/// <summary>
	/// Resumen de reg
	///
	/// ADVERTENCIA: si cambia el nombre de esta clase, deberá cambiar la
	///          propiedad 'Nombre de archivos de recursos' de la herramienta de compilación de recursos administrados
	///          asociada con todos los archivos .resx de los que depende esta clase. De lo contrario,
	///          los diseñadores no podrán interactuar correctamente con los
	///          recursos adaptados asociados con este formulario.
	/// </summary>

	public ref class reg : public System::Windows::Forms::Form
	{
	private:
		bool tipo;//Es true si se esta ingresando la primera vez, es false si se agrega un contacto
	private: System::Windows::Forms::Button^  button2;
			 ::String ^deno;
			 ::String ^imagen;
	public:
		reg(bool nuevo,::String^ dueno)
		{
			tipo=nuevo;
			deno=dueno;
			imagen="";
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}
		
	

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~reg()
		{
			if (components)
			{
				delete components;
			}
		}

    private: System::Windows::Forms::Button^  cancel;
    protected: 










    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::TextBox^  Usuario;

    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::TextBox^  Contrasena;

    private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::TextBox^  textBox3;
    private: System::Windows::Forms::Label^  Valido;
    private: System::Windows::Forms::Label^  label4;
    private: System::Windows::Forms::Panel^  NombreUsuario;
    private: System::Windows::Forms::TextBox^  Paterno;

    private: System::Windows::Forms::Label^  label6;
    private: System::Windows::Forms::TextBox^  Nombre;

    private: System::Windows::Forms::Label^  label5;


















    private: System::Windows::Forms::Label^  label11;











	private: System::Windows::Forms::Button^  save;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  Foto;
	private: System::Windows::Forms::MaskedTextBox^  Celular;
	private: System::Windows::Forms::MaskedTextBox^  Oficina;
	private: System::Windows::Forms::MaskedTextBox^  Particular;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  Materno;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  Email;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Panel^  baner;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;



















































    protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(reg::typeid));
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Usuario = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Contrasena = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->Valido = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->NombreUsuario = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Foto = (gcnew System::Windows::Forms::Button());
			this->Celular = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Oficina = (gcnew System::Windows::Forms::MaskedTextBox());
			this->Particular = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Materno = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Paterno = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Nombre = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->save = (gcnew System::Windows::Forms::Button());
			this->baner = (gcnew System::Windows::Forms::Panel());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->NombreUsuario->SuspendLayout();
			this->baner->SuspendLayout();
			this->SuspendLayout();
			// 
			// cancel
			// 
			this->cancel->Location = System::Drawing::Point(12, 415);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(75, 23);
			this->cancel->TabIndex = 9;
			this->cancel->Text = L"Cancelar";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &reg::cancel_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Nombre de usuario";
			// 
			// Usuario
			// 
			this->Usuario->Location = System::Drawing::Point(166, 26);
			this->Usuario->Name = L"Usuario";
			this->Usuario->Size = System::Drawing::Size(100, 20);
			this->Usuario->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Contraseña";
			// 
			// Contrasena
			// 
			this->Contrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Contrasena->Location = System::Drawing::Point(166, 70);
			this->Contrasena->MaxLength = 12;
			this->Contrasena->Name = L"Contrasena";
			this->Contrasena->PasswordChar = '*';
			this->Contrasena->Size = System::Drawing::Size(100, 22);
			this->Contrasena->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Repetir contraseña";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(166, 113);
			this->textBox3->MaxLength = 12;
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &reg::textBox3_TextChanged);
			// 
			// Valido
			// 
			this->Valido->AutoSize = true;
			this->Valido->Location = System::Drawing::Point(281, 29);
			this->Valido->Name = L"Valido";
			this->Valido->Size = System::Drawing::Size(58, 13);
			this->Valido->TabIndex = 15;
			this->Valido->Text = L"Comprobar";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(281, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 26);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Entre 6 y doce \r\ncaracteres";
			// 
			// NombreUsuario
			// 
			this->NombreUsuario->Controls->Add(this->button2);
			this->NombreUsuario->Controls->Add(this->Email);
			this->NombreUsuario->Controls->Add(this->label12);
			this->NombreUsuario->Controls->Add(this->button1);
			this->NombreUsuario->Controls->Add(this->Foto);
			this->NombreUsuario->Controls->Add(this->Celular);
			this->NombreUsuario->Controls->Add(this->Oficina);
			this->NombreUsuario->Controls->Add(this->Particular);
			this->NombreUsuario->Controls->Add(this->label10);
			this->NombreUsuario->Controls->Add(this->label9);
			this->NombreUsuario->Controls->Add(this->label8);
			this->NombreUsuario->Controls->Add(this->Materno);
			this->NombreUsuario->Controls->Add(this->label7);
			this->NombreUsuario->Controls->Add(this->label11);
			this->NombreUsuario->Controls->Add(this->Paterno);
			this->NombreUsuario->Controls->Add(this->label6);
			this->NombreUsuario->Controls->Add(this->Nombre);
			this->NombreUsuario->Controls->Add(this->label5);
			this->NombreUsuario->Controls->Add(this->label4);
			this->NombreUsuario->Controls->Add(this->Valido);
			this->NombreUsuario->Controls->Add(this->textBox3);
			this->NombreUsuario->Controls->Add(this->label3);
			this->NombreUsuario->Controls->Add(this->Contrasena);
			this->NombreUsuario->Controls->Add(this->label2);
			this->NombreUsuario->Controls->Add(this->Usuario);
			this->NombreUsuario->Controls->Add(this->label1);
			this->NombreUsuario->Location = System::Drawing::Point(9, 12);
			this->NombreUsuario->Name = L"NombreUsuario";
			this->NombreUsuario->Size = System::Drawing::Size(404, 387);
			this->NombreUsuario->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(169, 361);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(108, 24);
			this->button2->TabIndex = 33;
			this->button2->Text = L"Buscar imagen";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &reg::button2_Click);
			// 
			// Email
			// 
			this->Email->Location = System::Drawing::Point(169, 335);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(189, 20);
			this->Email->TabIndex = 9;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(16, 338);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 13);
			this->label12->TabIndex = 32;
			this->label12->Text = L"Correo Electronico";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(296, 361);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(108, 24);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ver Foto";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &reg::button1_Click);
			// 
			// Foto
			// 
			this->Foto->Location = System::Drawing::Point(6, 361);
			this->Foto->Name = L"Foto";
			this->Foto->Size = System::Drawing::Size(108, 24);
			this->Foto->TabIndex = 18;
			this->Foto->Text = L"Tomar Fotografia";
			this->Foto->UseVisualStyleBackColor = true;
			this->Foto->Click += gcnew System::EventHandler(this, &reg::Foto_Click);
			// 
			// Celular
			// 
			this->Celular->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Celular->Location = System::Drawing::Point(169, 308);
			this->Celular->Mask = L"99-99999999";
			this->Celular->Name = L"Celular";
			this->Celular->Size = System::Drawing::Size(189, 20);
			this->Celular->TabIndex = 8;
			// 
			// Oficina
			// 
			this->Oficina->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Oficina->Location = System::Drawing::Point(169, 279);
			this->Oficina->Mask = L"99999999";
			this->Oficina->Name = L"Oficina";
			this->Oficina->Size = System::Drawing::Size(189, 20);
			this->Oficina->TabIndex = 7;
			// 
			// Particular
			// 
			this->Particular->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Particular->Location = System::Drawing::Point(169, 253);
			this->Particular->Mask = L"99999999";
			this->Particular->Name = L"Particular";
			this->Particular->Size = System::Drawing::Size(189, 20);
			this->Particular->TabIndex = 6;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(16, 308);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(79, 13);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Numero Celular";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(16, 253);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(90, 13);
			this->label9->TabIndex = 24;
			this->label9->Text = L"Numero particular";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(16, 282);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 13);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Numero oficina";
			// 
			// Materno
			// 
			this->Materno->Location = System::Drawing::Point(169, 221);
			this->Materno->Name = L"Materno";
			this->Materno->Size = System::Drawing::Size(189, 20);
			this->Materno->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(16, 224);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Apellido Materno";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(281, 113);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 21;
			// 
			// Paterno
			// 
			this->Paterno->Location = System::Drawing::Point(169, 192);
			this->Paterno->Name = L"Paterno";
			this->Paterno->Size = System::Drawing::Size(189, 20);
			this->Paterno->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(16, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Apellido Paterno";
			// 
			// Nombre
			// 
			this->Nombre->Location = System::Drawing::Point(169, 167);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(189, 20);
			this->Nombre->TabIndex = 3;
			this->Nombre->TextChanged += gcnew System::EventHandler(this, &reg::Nombre_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 170);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(44, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Nombre";
			// 
			// save
			// 
			this->save->Location = System::Drawing::Point(335, 415);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(75, 23);
			this->save->TabIndex = 0;
			this->save->Text = L"Guardar";
			this->save->UseVisualStyleBackColor = true;
			this->save->Visible = false;
			this->save->Click += gcnew System::EventHandler(this, &reg::save_Click);
			// 
			// baner
			// 
			this->baner->Controls->Add(this->monthCalendar1);
			this->baner->Location = System::Drawing::Point(-1, 2);
			this->baner->Name = L"baner";
			this->baner->Size = System::Drawing::Size(426, 170);
			this->baner->TabIndex = 12;
			this->baner->Visible = false;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(100, 2);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 0;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &reg::monthCalendar1_DateChanged);
			// 
			// reg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(427, 440);
			this->Controls->Add(this->baner);
			this->Controls->Add(this->save);
			this->Controls->Add(this->NombreUsuario);
			this->Controls->Add(this->cancel);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(443, 478);
			this->Name = L"reg";
			this->Text = L"Registro";
			this->Load += gcnew System::EventHandler(this, &reg::reg_Load);
			this->NombreUsuario->ResumeLayout(false);
			this->NombreUsuario->PerformLayout();
			this->baner->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
             if(((Contrasena->Text)==(textBox3->Text))&&((Contrasena->Text->Length)>=6))
             {
                 label11->Text="Correcto";
				 save->Visible=true;
             }
             else
             {
                 label11->Text="Contraseña erronea";
			 }
         }

private: System::Void save_Click(System::Object^  sender, System::EventArgs^  e) {
			 ::Boolean bandera=true;	
			 ::Boolean u=true;
			//crea la carpeta
if(tipo)
if(::Directory::Exists("C:\\Program Files\\NeoMem\\Agenda\\"+Usuario->Text+"\\Perfil"))
{
::MessageBox::Show("El usuario ya existe");
u=false;}
else
					 System::IO::Directory::CreateDirectory("C:\\Program Files\\NeoMem\\Agenda\\"+Usuario->Text+"\\Perfil");
else
if(::Directory::Exists("C:\\Program Files\\NeoMem\\Agenda\\"+deno+"\\Contactos\\"+Nombre->Text)){
::MessageBox::Show("El usuario ya existe");
u=false;
}
else
System::IO::Directory::CreateDirectory("C:\\Program Files\\NeoMem\\Agenda\\"+deno+"\\Contactos\\"+Nombre->Text);

if(u){	 
			 if(System::IO::File::Exists("foto.bmp"))
             {
				 if(!System::IO::File::Exists("C:\\Program Files\\NeoMem\\"+Usuario->Text+""))
		 

				  try{
					  //Se copia la fotografia tomada
					  if(tipo){
						  if(System::IO::File::Exists("foto.bmp")){
					  System::IO::File::Copy("foto.bmp","C:\\Program Files\\NeoMem\\Agenda\\"+Usuario->Text+"\\Perfil\\"+Usuario->Text+".bmp");
					imagen="C:\\Program Files\\NeoMem\\Agenda\\"+Usuario->Text+"\\Perfil\\"+Usuario->Text+".bmp";			
						  }
					  }
					  else
						{
							if(System::IO::File::Exists("foto.bmp")){
					  System::IO::File::Copy("foto.bmp","C:\\Program Files\\NeoMem\\Agenda\\"+deno+"\\Contactos\\"+Nombre->Text+"\\"+Nombre->Text+".bmp");
						imagen="C:\\Program Files\\NeoMem\\Agenda\\"+deno+"\\Contactos\\"+Nombre->Text+"\\"+Nombre->Text+".bmp";
							}
						}
					  }
			 catch(char c)
				{
					c=1;
					::MessageBox::Show("Su fotografia no se copio correctamente, esta siendo utilizado por otro proceso o ya existe");
				}	
			
			 }

             else
             {
				 if(imagen!="")
				 {
					 if(tipo)
					 {
						 if(System::IO::File::Exists(imagen))
					  System::IO::File::Copy(imagen,"C:\\Program Files\\NeoMem\\Agenda\\"+Usuario->Text+"\\Perfil\\"+Usuario->Text+".bmp");
					imagen="C:\\Program Files\\NeoMem\\Agenda\\"+Usuario->Text+"\\Perfil\\"+Usuario->Text+".bmp";			
					 }
					 else
					 {
						if(System::IO::File::Exists(imagen))
					  System::IO::File::Copy(imagen,"C:\\Program Files\\NeoMem\\Agenda\\"+deno+"\\Contactos\\"+Nombre->Text+"\\"+Nombre->Text+".bmp");
						imagen="C:\\Program Files\\NeoMem\\Agenda\\"+deno+"\\Contactos\\"+Nombre->Text+"\\"+Nombre->Text+".bmp";
						
					 }
				 }
				 else{
                 if(MessageBox::Show("¿Seguro que desea guardar sin tomarse una foto?","",MessageBoxButtons::YesNo,MessageBoxIcon::Warning) ==::DialogResult::Yes)
				 {
					//Funcion de guardado true sin foto
			guardar(false);
bandera=false;
				 }
				 else
				 {
					bandera=false;
				 }
				 }

             }
			 if(bandera==true)
			 {
	

		//Funcion de guardado true con foto
		guardar(true);
  
			 }
			 }
		 }
private: System::Void guardar(bool foto)
		 {
			 ::String ^elemnto_padre;
			 ::String ^Bpert;//Base a la que pertenece al padre o a el contacto
			 if(tipo==true)
			 {
				 elemnto_padre=Usuario->Text;
				 Bpert="data";
			 }
			 else{
				 elemnto_padre=deno;
				 Bpert=Nombre->Text;
			 }
			  FileStream^ fs ;
			 if(tipo)
  fs= gcnew FileStream("C:\\Program Files\\NeoMem\\Agenda\\"+elemnto_padre+"\\"+Bpert+".bin", FileMode::Create);
			 else
fs = gcnew FileStream("C:\\Program Files\\NeoMem\\Agenda\\"+elemnto_padre+"\\Contactos\\"+Bpert+"\\"+Bpert+".bin", FileMode::Create);
		
			 BinaryWriter^ w = gcnew BinaryWriter(fs);

   try 
   {
			if(tipo==true)
			{
	   w->Write("usuario:"+Usuario->Text+"\n");
	   w->Write("contrasena:"+Contrasena->Text+"\n");
			}
	   w->Write("nombre:"+Nombre->Text+"\n");
	   w->Write("paterno:"+Paterno->Text+"\n");
	   w->Write("materno:"+Materno->Text+"\n");
	   w->Write("particular:"+Particular->Text+"\n");
	   w->Write("oficina:"+Oficina->Text+"\n");
	   w->Write("celular:"+Celular->Text+"\n");
	   w->Write("email:"+Email->Text+"\n");
	   if(!tipo)
	   { FileStream^ Archivo_padre ;//para escribir el nombre del contacto y buscarlo posteriormente
	   Archivo_padre= gcnew FileStream("C:\\Program Files\\NeoMem\\Agenda\\"+elemnto_padre+"\\data.bin", FileMode::Append);
		    BinaryWriter^ wc = gcnew BinaryWriter(Archivo_padre);


			wc->Write("contacto:"+Nombre->Text+"\n");
	 Archivo_padre->Close();
	   }
	   if(foto)
	   {
		   
			   w->Write("Foto:"+imagen+"\n");
		 

		   
	   }
	   else
	   {
		    if(tipo)
		w->Write("Foto:"+"C:\\Program Files\\NeoMem\\Agenda\\agenda.jpg");
			else
				w->Write("Foto:"+"C:\\Program Files\\NeoMem\\Agenda\\simple.jpg");

	   }
       fs->Close();
   ::MessageBox::Show("Registro Guardado");

   this->Hide(); 
   Usuario->Text="";
	   Contrasena->Text="";
	   Nombre->Text="";
	  Paterno->Text="";
	   Oficina->Text="";
	   Celular->Text="";
	Email->Text="";
	System::IO::File::Delete("foto.bmp");
   }
   catch (Exception^) 
   {
     
     fs->Close();
    
   }
		 }
private: System::Void cancel_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Hide();
		 }
private: System::Void atra_Click(System::Object^  sender, System::EventArgs^  e) {
save->Visible=false;
		 }
private: System::Void sig_Click(System::Object^  sender, System::EventArgs^  e) {
			if((Contrasena->Text==textBox3->Text)&&(Usuario->Text!="")){
			save->Visible=true;
			 }
			else
			{
				label11->Text="Contraseña invalida";
			}
		 }
private: System::Void Foto_Click(System::Object^  sender, System::EventArgs^  e) {
			 Imagen^ img=gcnew Imagen();
img->Show();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(System::IO::File::Exists("foto.bmp")){
             System::Diagnostics::Process::Start("foto.bmp");
			 }
			 else
			 {
				 if(MessageBox::Show("Usted no tiene una foto existente\nDesea tomarse una?\n","",MessageBoxButtons::YesNo)==::DialogResult::Yes)
				 {
					 Imagen^ img=gcnew Imagen();
					img->Show();
					}
			 }
		 }

private: System::Void reg_Load(System::Object^  sender, System::EventArgs^  e) {
			 if((this->tipo==false))
			 {
				 baner->Visible=true;
				 
			 }
		 }
private: System::Void monthCalendar1_DateChanged(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e) {
		 }
private: System::Void Nombre_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 if((tipo==false)&&(Nombre->Text!=""))
			 {
				 save->Visible=true;
			 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 
   
    
   
      OpenFileDialog^ examinar = gcnew OpenFileDialog;

      
      examinar->Filter = "jpg (*.jpg)|*.jpg|Bmp (*.bmp)|*.bmp|gif (*.gif)|*.gif|png (*.png)|*.png";

     

      if ( examinar->ShowDialog() == ::DialogResult::OK )
      {
         if ( examinar->OpenFile() != nullptr )
         {
			 imagen=examinar->FileName;
         }
      }

		 }
};
}
