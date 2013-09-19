#pragma once

ref class guardar
{
private:
	
public:
    guardar(void);
	void setus(System::String^ usuario);
	System::String* getus();
	void setcontr(System::String^ contrasena);
	System::String^ getcontr();
	void setnom(System::String^ nombre);
	System::String^ getnom();
	void setmat(System::String^ materno);
	System::String^ getmat();
	void setpart(System::String^ contrasena);
	System::String^ getpart();
	void setof(System::String^ contrasena);
	System::String^ getof();
	void setcel(System::String^ contrasena);
	System::String^ getcel();
	void setfot(System::String^ contrasena);
	System::String^ getfot();
};
