/*UFA-ESPE
* Deber 2 Parcial 2
* Autores: Armas Daniel - Iza Christopher - Rea Denise - Rivadeneira Ricardo
* Fecha de creación 15/06/2022
* Fecha de modificación 17/06/2022
* Grupo 15 - 20
* github del grupo @dnrea@espe.edu.ec @cdiza5@espe.edu.ec daarmas10@espe.edu.ec rxrivadeneira1@espe.edu.ec
*/
#pragma once
#include "ingresoDatos.h"
class transformacion
{
public:
	
	string postfijo(string);
	int esEntero(char);
	int esOperador(char);
	int prcd(char);
	string reverso(string);
	void calculo(string,string);
	bool oper(char);
};

