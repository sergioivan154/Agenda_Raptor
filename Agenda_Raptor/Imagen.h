#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Agenda_Raptor {

	/// <summary>
	/// Resumen de Imagen
	///
	/// ADVERTENCIA: si cambia el nombre de esta clase, deberá cambiar la
	///          propiedad 'Nombre de archivos de recursos' de la herramienta de compilación de recursos administrados
	///          asociada con todos los archivos .resx de los que depende esta clase. De lo contrario,
	///          los diseñadores no podrán interactuar correctamente con los
	///          recursos adaptados asociados con este formulario.
	/// </summary>
	public ref class Imagen : public System::Windows::Forms::Form
	{
        
		private:
		HWND videoHandle;
	public:
		Imagen(void)
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
		~Imagen()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Button^  btnFotografia;
    protected: 
    private: System::Windows::Forms::Panel^  pnlVideo;
    private: System::Windows::Forms::Button^  btnDetener;


    private: System::Windows::Forms::Button^  btnlisto;

    private: System::Windows::Forms::Button^  button1;



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
			this->btnFotografia = (gcnew System::Windows::Forms::Button());
			this->pnlVideo = (gcnew System::Windows::Forms::Panel());
			this->btnDetener = (gcnew System::Windows::Forms::Button());
			this->btnlisto = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnFotografia
			// 
			this->btnFotografia->Location = System::Drawing::Point(13, 212);
			this->btnFotografia->Name = L"btnFotografia";
			this->btnFotografia->Size = System::Drawing::Size(75, 23);
			this->btnFotografia->TabIndex = 7;
			this->btnFotografia->Text = L"Fotografia";
			this->btnFotografia->UseVisualStyleBackColor = true;
			this->btnFotografia->Click += gcnew System::EventHandler(this, &Imagen::btnFotografia_Click);
			// 
			// pnlVideo
			// 
			this->pnlVideo->Location = System::Drawing::Point(33, 27);
			this->pnlVideo->Name = L"pnlVideo";
			this->pnlVideo->Size = System::Drawing::Size(227, 162);
			this->pnlVideo->TabIndex = 6;
			this->pnlVideo->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Imagen::pnlVideo_Paint);
			// 
			// btnDetener
			// 
			this->btnDetener->Location = System::Drawing::Point(212, 253);
			this->btnDetener->Name = L"btnDetener";
			this->btnDetener->Size = System::Drawing::Size(75, 23);
			this->btnDetener->TabIndex = 5;
			this->btnDetener->Text = L"Cancelar";
			this->btnDetener->UseVisualStyleBackColor = true;
			this->btnDetener->Click += gcnew System::EventHandler(this, &Imagen::btnDetener_Click);
			// 
			// btnlisto
			// 
			this->btnlisto->Enabled = false;
			this->btnlisto->Location = System::Drawing::Point(197, 212);
			this->btnlisto->Name = L"btnlisto";
			this->btnlisto->Size = System::Drawing::Size(75, 23);
			this->btnlisto->TabIndex = 10;
			this->btnlisto->Text = L"Listo";
			this->btnlisto->UseVisualStyleBackColor = true;
			this->btnlisto->Click += gcnew System::EventHandler(this, &Imagen::btnlisto_Click);
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(100, 212);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 23);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Tomar nueva\r\n";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Imagen::button1_Click);
			// 
			// Imagen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(291, 277);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnlisto);
			this->Controls->Add(this->btnFotografia);
			this->Controls->Add(this->pnlVideo);
			this->Controls->Add(this->btnDetener);
			this->Name = L"Imagen";
			this->Text = L"Imagen";
			this->Load += gcnew System::EventHandler(this, &Imagen::Imagen_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
    private: System::Void Imagen_Load(System::Object^  sender, System::EventArgs^  e) {
                 		 // Si el video ya ha sido inicializado no hacemos nada

				 if (videoHandle) return;
// Creamos la ventana de captura de video y asignamos el
// handle a nuestra variable videoHandle
videoHandle = ::capCreateCaptureWindowA("Ventana de captura",
                        WS_CHILD | WS_VISIBLE,
                        0, 0, pnlVideo->Width, pnlVideo->Height,
                        (HWND)pnlVideo->Handle.ToInt32(), 0);
// Si no se pudo crear la ventana de captura no hacemos nada
if (!videoHandle){
	::MessageBox::Show("Camara no conectada","",::MessageBoxButtons::OK,::MessageBoxIcon::Error);
	return;
	}

// Conectar con el driver de la cámara
::SendMessage(videoHandle, WM_CAP_DRIVER_CONNECT, 0, 0);
// Configuramos la escala a 1 (100%)
::SendMessage(videoHandle, WM_CAP_SET_SCALE, 1, 0);
// Ponemos el tiempo entre cuadros a 60 milisegundos
::SendMessage(videoHandle, WM_CAP_SET_PREVIEWRATE, 60, 0);
// Inicializamos el video en modo vista previa
::SendMessage(videoHandle, WM_CAP_SET_PREVIEW, 1, 0);

     }
    private: System::Void btnFotografia_Click(System::Object^  sender, System::EventArgs^  e) {

                 if (!videoHandle) return;
// Copiamos la imagen de la ventana de captura al porta papeles
capEditCopy(videoHandle);
// Verificamos que en el porta papeles exista una imagen
if (Clipboard::ContainsImage())
{
    // Obtenemos la imagen desde el porta papeles
    Image ^imagen = Clipboard::GetImage();
    // La guardamos como bmp


    
    imagen->Save("foto.bmp", Imaging::ImageFormat::Bmp);
    
    System::Diagnostics::Process::Start("foto.bmp");
     // Si la ventana de captura no se ha inicializado no hacemos nada

			if (!videoHandle) return;
			// Mandamos un mensaje para desconectar la cámara web
			::SendMessage(videoHandle, WM_CAP_DRIVER_DISCONNECT, 0, 0);
			// Limpiamos nuestra variable
			videoHandle = 0;
            pnlVideo->Visible=false;
			btnlisto->Enabled=true;
			button1->Enabled=true;
			btnFotografia->Enabled=false;
}

             }
private: System::Void btnDetener_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 this->Hide();
            
         }

private: System::Void btnlisto_Click(System::Object^  sender, System::EventArgs^  e) {
this->Hide();           
             
         }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 if (videoHandle) return;
// Creamos la ventana de captura de video y asignamos el
// handle a nuestra variable videoHandle
videoHandle = ::capCreateCaptureWindowA("Ventana de captura",
                        WS_CHILD | WS_VISIBLE,
                        0, 0, pnlVideo->Width, pnlVideo->Height,
                        (HWND)pnlVideo->Handle.ToInt32(), 0);
// Si no se pudo crear la ventana de captura no hacemos nada
if (!videoHandle) return;
// Conectar con el driver de la cámara
::SendMessage(videoHandle, WM_CAP_DRIVER_CONNECT, 0, 0);
// Configuramos la escala a 1 (100%)
::SendMessage(videoHandle, WM_CAP_SET_SCALE, 1, 0);
// Ponemos el tiempo entre cuadros a 60 milisegundos
::SendMessage(videoHandle, WM_CAP_SET_PREVIEWRATE, 60, 0);
// Inicializamos el video en modo vista previa
::SendMessage(videoHandle, WM_CAP_SET_PREVIEW, 1, 0);
pnlVideo->Visible=true;
btnlisto->Enabled=false;
button1->Enabled=false;
btnFotografia->Enabled=true;
         }
private: System::Void pnlVideo_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
}
