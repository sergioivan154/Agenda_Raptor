#pragma once
#using <system.dll>
#include "reg.h"
using namespace System::IO;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Agenda_Raptor {

	/// <summary>
	/// Resumen de Contactos
	///
	/// ADVERTENCIA: si cambia el nombre de esta clase, deberá cambiar la
	///          propiedad 'Nombre de archivos de recursos' de la herramienta de compilación de recursos administrados
	///          asociada con todos los archivos .resx de los que depende esta clase. De lo contrario,
	///          los diseñadores no podrán interactuar correctamente con los
	///          recursos adaptados asociados con este formulario.
	/// </summary>
	public ref class Contactos : public System::Windows::Forms::Form
	{
	
	private:
		::String ^Nombre;
		int total,index;
			private:
		 String^ usuar; 
	private:
		static array<String^>^ gente=gcnew array<String^>(1000);
		 	private:
       
         String^ paterno;
		 	private:
         String^ materno;
		 	private:
        String^ particular;
			private:
       String^ oficina;
	   	private:
        String^ celular;
		// 	private:
        //String^ fotografia;
			private:

        String^ email;

	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  Nuevo;

	private: System::Windows::Forms::Button^  actualizar;





	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  sig;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
















	private: System::Windows::Forms::Button^  salir;

		
	public:

		Contactos(::String ^dato,String^ usuarion,String^ paternon,String^ maternon, String^ particularn,String^ oficinan, String^ celularn, String^ emailn)
		{
			Nombre=dato;
			 usuar=usuarion; 
		 	
		 paterno=paternon;
		 materno=maternon;
		 	particular=particularn;
			oficina=oficinan;
	   celular=celularn;
		email=emailn;
		
			InitializeComponent();
			

		}
		

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Contactos()
		{
			if (components)
			{
				delete components;
			}
		}





	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  Usuario;
	private: System::Windows::Forms::Label^  name;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;



	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Contactos::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Usuario = (gcnew System::Windows::Forms::Label());
			this->name = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Nuevo = (gcnew System::Windows::Forms::Button());
			this->actualizar = (gcnew System::Windows::Forms::Button());
			this->salir = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->sig = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(3, 28);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(174, 134);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(510, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Mi Agenda";
			// 
			// Usuario
			// 
			this->Usuario->AutoSize = true;
			this->Usuario->Location = System::Drawing::Point(12, 163);
			this->Usuario->Name = L"Usuario";
			this->Usuario->Size = System::Drawing::Size(43, 13);
			this->Usuario->TabIndex = 7;
			this->Usuario->Text = L"Usuario";
			// 
			// name
			// 
			this->name->AutoSize = true;
			this->name->Location = System::Drawing::Point(12, 187);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(44, 13);
			this->name->TabIndex = 8;
			this->name->Text = L"Nombre";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 212);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Apellido Paterno";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 235);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Apellido Materno";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 259);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 13);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Telefono Particular";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(109, 259);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(109, 235);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 15;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(109, 212);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 14;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(109, 187);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(109, 163);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 12;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 307);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(85, 13);
			this->label13->TabIndex = 18;
			this->label13->Text = L"Telefono Oficina";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(12, 283);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(84, 13);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Telefono Celular";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(98, 307);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(108, 283);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(110, 334);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 13);
			this->label12->TabIndex = 22;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(13, 334);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(38, 13);
			this->label15->TabIndex = 21;
			this->label15->Text = L"Correo";
			// 
			// Nuevo
			// 
			this->Nuevo->Location = System::Drawing::Point(829, 362);
			this->Nuevo->Name = L"Nuevo";
			this->Nuevo->Size = System::Drawing::Size(75, 23);
			this->Nuevo->TabIndex = 23;
			this->Nuevo->Text = L"Nuevo";
			this->Nuevo->UseVisualStyleBackColor = true;
			this->Nuevo->Click += gcnew System::EventHandler(this, &Contactos::Nuevo_Click);
			// 
			// actualizar
			// 
			this->actualizar->Location = System::Drawing::Point(910, 362);
			this->actualizar->Name = L"actualizar";
			this->actualizar->Size = System::Drawing::Size(75, 23);
			this->actualizar->TabIndex = 24;
			this->actualizar->Text = L"Actualizar";
			this->actualizar->UseVisualStyleBackColor = true;
			this->actualizar->Click += gcnew System::EventHandler(this, &Contactos::actualizar_Click);
			// 
			// salir
			// 
			this->salir->Location = System::Drawing::Point(991, 362);
			this->salir->Name = L"salir";
			this->salir->Size = System::Drawing::Size(75, 23);
			this->salir->TabIndex = 25;
			this->salir->Text = L"Salir";
			this->salir->UseVisualStyleBackColor = true;
			this->salir->Click += gcnew System::EventHandler(this, &Contactos::salir_Click);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(980, 113);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(38, 13);
			this->label16->TabIndex = 32;
			this->label16->Text = L"Correo";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(855, 113);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(85, 13);
			this->label17->TabIndex = 31;
			this->label17->Text = L"Telefono Oficina";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(731, 113);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(84, 13);
			this->label18->TabIndex = 30;
			this->label18->Text = L"Telefono Celular";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(595, 113);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(96, 13);
			this->label19->TabIndex = 29;
			this->label19->Text = L"Telefono Particular";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(469, 113);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(86, 13);
			this->label20->TabIndex = 28;
			this->label20->Text = L"Apellido Materno";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(345, 113);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(84, 13);
			this->label21->TabIndex = 27;
			this->label21->Text = L"Apellido Paterno";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(190, 113);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(44, 13);
			this->label22->TabIndex = 26;
			this->label22->Text = L"Nombre";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(184, 142);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(156, 20);
			this->textBox1->TabIndex = 33;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(346, 142);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(117, 20);
			this->textBox2->TabIndex = 34;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(469, 142);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(119, 20);
			this->textBox3->TabIndex = 35;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(717, 142);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(119, 20);
			this->textBox4->TabIndex = 37;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(594, 142);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(117, 20);
			this->textBox5->TabIndex = 36;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(842, 142);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(121, 20);
			this->textBox6->TabIndex = 39;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(968, 142);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(117, 20);
			this->textBox7->TabIndex = 38;
			// 
			// sig
			// 
			this->sig->Location = System::Drawing::Point(914, 28);
			this->sig->Name = L"sig";
			this->sig->Size = System::Drawing::Size(75, 23);
			this->sig->TabIndex = 40;
			this->sig->Text = L"Siguiente";
			this->sig->UseVisualStyleBackColor = true;
			this->sig->Click += gcnew System::EventHandler(this, &Contactos::sig_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(910, 213);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(146, 134);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 41;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(837, 28);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 42;
			this->button1->Text = L"Anterior";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Contactos::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(756, 28);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 44;
			this->button2->Text = L"Primero";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Contactos::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(991, 28);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 43;
			this->button3->Text = L"Ultimo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Contactos::button3_Click);
			// 
			// Contactos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1091, 397);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->sig);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->salir);
			this->Controls->Add(this->actualizar);
			this->Controls->Add(this->Nuevo);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->name);
			this->Controls->Add(this->Usuario);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Contactos";
			this->Text = L"Agenda";
			this->Load += gcnew System::EventHandler(this, &Contactos::Contactos_Load);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Contactos::Contactos_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripButton1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Contactos_Load(System::Object^  sender, System::EventArgs^  e) {
				
				 	
				
				 total=0;
				 
		 try{
					  FileStream^ fs = gcnew FileStream("C:\\Program Files\\NeoMem\\Agenda\\"+usuar+"\\data.bin", FileMode::Open);
						BinaryReader^ br = gcnew BinaryReader(fs);
::String ^us;


						while ((br->BaseStream->Position < br->BaseStream->Length))
						{
							us=br->ReadString()->Replace("\n","");
							if(us->Contains("contacto:")){
								
								textBox1->Text=us->Substring(9);
							total+=1;
							if(total-1>=0)
							gente[total-1]=us->Substring(9);
								
							
								
							}
						}
						total-=1;
						fs->Close();
						index=total;
		 }
		 catch(::Exception ^)
		 {}


				 ::MessageBox::Show("Buenos Dias");

				 Actualiza(total);
		  if(::File::Exists("C:\\Program Files\\NeoMem\\Agenda\\"+usuar+"\\Perfil\\"+usuar+".bmp"))
					 pictureBox1->Image=gcnew Bitmap("C:\\Program Files\\NeoMem\\Agenda\\"+usuar+"\\Perfil\\"+usuar+".bmp");
				 else
				 {
					 pictureBox1->Image=gcnew Bitmap("C:\\Program Files\\NeoMem\\Agenda\\agenda.jpg");
			
				 }
				 label9->Text=usuar;
				 label8->Text=Nombre;
				 label7->Text=paterno;
				 label6->Text=materno;
				 label3->Text=particular;
				 label10->Text=oficina;
				 label11->Text=celular;
				 label12->Text=email;
			 }
			 private: System::Void Actualiza(int numero_reg)
					  {
						 try{
					
//Abrimos su informacion
							 if(numero_reg>=0){
					  FileStream^ contacto = gcnew FileStream("C:\\Program Files\\NeoMem\\Agenda\\"+usuar+"\\Contactos\\"+gente[numero_reg]+"\\"+gente[numero_reg]+".bin", FileMode::Open);
						BinaryReader^ Dat_contacto = gcnew BinaryReader(contacto);


int i=0;
						while ((Dat_contacto->BaseStream->Position < Dat_contacto->BaseStream->Length))
						{
							::String ^info=Dat_contacto->ReadString()->Replace("\n","");
							switch(i){
							case 0:
								textBox1->Text=info->Substring(7);
								break;
							case 1:
							textBox2->Text=info->Substring(8);
							break;
							case 2:
							textBox3->Text=info->Substring(8);
							break;
							case 3:
							textBox5->Text=info->Substring(11);
							break;
							case 4:
							textBox4->Text=info->Substring(8);
							break;
							case 5:
							textBox6->Text=info->Substring(8);
							break;
							case 6:
							textBox7->Text=info->Substring(6);
							break;
							case 7:
							
								if(::File::Exists(info->Substring(5)))
								{
									::fflush(stdin);pictureBox2->Image=nullptr;
									pictureBox2->Image=gcnew Bitmap(info->Substring(5));
								}
							
							  break;
							}
							++i;
						}
						contacto->Close();
							 }
			 }
			 catch(::Exception^ f)
			 {
				 ::MessageBox::Show(f->ToString());
			 }
  
				
				
					  }


private: System::Void Contactos_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
			 ::Application::ExitThread();
		 }

private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
private: System::Void salir_Click(System::Object^  sender, System::EventArgs^  e) {
			 ::Application::ExitThread();
		 }
private: System::Void actualizar_Click(System::Object^  sender, System::EventArgs^  e) {
 total=0;
				 
		 try{
					  FileStream^ fs = gcnew FileStream("C:\\Program Files\\NeoMem\\Agenda\\"+usuar+"\\data.bin", FileMode::Open);
						BinaryReader^ br = gcnew BinaryReader(fs);
::String ^us;


						while ((br->BaseStream->Position < br->BaseStream->Length))
						{
							us=br->ReadString()->Replace("\n","");
							if(us->Contains("contacto:")){
								textBox1->Text=us->Substring(9);
							total+=1;
							gente[total-1]=us->Substring(9);
								
							
								
							}
						}
						total-=1;
						fs->Close();
						index=total;
		 }
		 catch(::Exception ^)
		 {}

			 Actualiza(total);

		 }
private: System::Void Nuevo_Click(System::Object^  sender, System::EventArgs^  e) {
reg^ registro=gcnew reg(false,usuar);

registro->Show();

		 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(total>=0){
			 index=0;
Actualiza(index);
			 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
if(total>=0){			
			 if(index-1<0)
				 index=0;
			 else
				 index-=1;
			 Actualiza(index);
			
}
		 }
private: System::Void sig_Click(System::Object^  sender, System::EventArgs^  e) {
if(total>=0){			
			 if(index+1>total)
				 index=total;
			 else
				 index+=1;
			 Actualiza(index);
		 }
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
if(total>=0){			
			 index=total;
			  Actualiza(index);
		 }
		 }
};
}
