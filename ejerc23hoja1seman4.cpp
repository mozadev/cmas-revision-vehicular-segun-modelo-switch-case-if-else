	/*

Sup�ngase que la fecha de la revisi�n t�cnica depende del modelo (A o B), del �ltimo d�gito de la placa y
 del costo de mantenimiento anual de 
un autom�vil.  
Escribir un programa en C++ que indique el mes en que deber� pasar por revisi�n t�cnica
 un autom�vil si se tiene en cuenta el contenido de la tabla.  
Modelo 
�ltimo d�gito de la placa 
Costo de mantenimiento anual 
Mes de revisi�n t�cnica 
A 
Esta entre 0 y 5 inclusive 
Menor o igual a S/. 500 Enero Mayor a S/. 500 Febrero 
Esta entre 6 y 8 inclusive 
Menor o igual a S/. 700 Junio Mayor a S/. 700 Julio 
Es 9 
Menor o igual a S/. 1000 Octubre Mayor a S/. 1000 Noviembre 
B 
Esta entre 1 y 3 inclusive 
Menor o igual a S/. 500 Marzo Mayor a S/. 500 Abril 
Esta entre 4 y 8 inclusive 
Menor o igual a S/. 700 Mayo Mayor a S/. 700 Septiembre 
Es 9 o 0 
Menor o igual a S/. 1000 Agosto Mayor a S/. 1000 Diciembre  
Ejemplo: Ingrese el modelo: B Ingrese el �ltimo d�gito de la placa: 3 Ingrese el costo de mantenimiento anual: 300 El mes de revisi�n t�cnica es: MARZO 


*/
#include<iostream>
#include<string>
#include<conio.h>

using namespace std;
string CalculaRevision(char modelo, int ultimod, float costom)
{
    string mes;
	switch (modelo)
	{
	case 'A':
		switch (ultimod)
		{
		case 0: case 1: case 2: case 3: case 4: case 5:
			if (costom <= 500)
				mes = "Enera";
			if (costom > 500)
				mes = "Febrero";
			break;
		case 6: case 7: case 8:
			if (costom <= 700)
				mes = "Junio";
			if (costom > 700)
				mes = "Julio";
			break;
		case 9:
			if (costom <= 1000)
				mes = "Octubre";
			if (costom > 1000)
				mes = "Noviembre";
			break;
		default:
			cout << "Error de ultimo digito!";
		}
		break;
		// completar case B
	default:
		cout << "Error de Modelo!";
	}
	return mes;
}
int main()
{
	char modelo;
	int ultimod;
	float costom;
	string mes;
	cout << "Ingrese Modelo:"; cin >> modelo;
	cout << "Ingrese Ultimo digito:"; cin >> ultimod;
	cout << "Ingrese Costo:"; cin >> costom;
	mes = CalculaRevision(modelo, ultimod, costom);
	cout << "El mes de revision es:" << mes;
	_getch();
}

