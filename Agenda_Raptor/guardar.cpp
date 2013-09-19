#include "StdAfx.h"
#include "guardar.h"

guardar::guardar(void)
{
}
void guardar::setus(System::String usuario)
{
	this->usuario=usuario;	
}
System::String* guardar::getus()
{
	return* usuario;
}