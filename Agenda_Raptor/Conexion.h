#pragma once
using namespace System::Data::SqlClient;
using namespace System;
ref class Conexion
{
private:
	::SqlConnection cnn;
	::SqlCommand propietario;
	::SqlCommand Contacto;
	
public:
	Conexion(void)
	{ 
	}
	void SetPropietario(::String^ Query);
	void SetContacto(::String^ Query);

};
