#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>

//QUE HOOONNNNDAAAAAAA ESTE COMENTARIO ES UNA PRUEA DE QUE PUDE SUBIR EL ARCHIVO

using namespace std;
int banco;
string nombreBanco;
float totalinscripcion = 800.00;

struct boleta
{
	string fecha;
	string alumno;
	string semestre;
	string campus;
} blt;

struct alumno
{
	string carnet;
	string nombre;
	string apellido;
	string nacimiento;
	char edad[2];
	string direccion;
	char telefono[9];
	string correo;
	string profesion;
	int graduacion;
} alum;

void ingresarDatos();
		
// Funciones para el ingreso de datos	
void ingresarDatosBoletaInscripcion(){
    cout << "\n\tPor Favor Ingrese los Datos de la Boleta\n";
    cin.ignore();
    cout << "\nIngrese la Fecha de la Boleta: ";
	getline(cin,blt.fecha);
	cout << "Ingrese el Nombre del Alumno: ";
	getline(cin,blt.alumno);
	cout << "Ingrese el Semestre: ";
	cin >> blt.semestre;
	cout << "Ingrese el Campus de Estudio: ";
	cin >> blt.campus;
	cout << "Seleccione un Banco para Efectuar el Pago: 1.Banco G&T\t 2.Banco Industrial\n";
	cin >> banco;
		if (banco==1){
			nombreBanco = "Banco G&T";
		} else if(banco==2) {
				nombreBanco = "Banco Industrial";
			}else {cout << "Ingrese un Banco Valido";};
	system("cls");
	cout << "Ingreso de datos completado con exito\n\n";
	ingresarDatos();
};
void ingresarDatosAlumnos(){
    cout << "\n\Por Favor Ingrese los Datos del Alumno";
    cin.ignore();
    cout << "\nIngrese su Carnet: ";
	getline(cin,alum.carnet);
	cout << "Ingrese sus Nombres: ";
	getline(cin,alum.nombre);
	cout << "Ingrese sus Apellidos: ";
	getline(cin,alum.apellido);
	cout << "Ingrese su Fecha de Nacimiento: ";
	getline(cin,alum.nacimiento);
	cout << "Ingrese su Edad: ";
	cin >> alum.edad;
	cin.ignore();
	cout << "Ingrese su Direccion: ";
	getline(cin,alum.direccion);
	cout << "Ingrese su Numero de Telefono: ";
	cin >> alum.telefono;
	cin.ignore();
	cout << "Ingrese su Correo Electronico: ";
	getline(cin,alum.correo);
	cout << "Ingrese su Profesion de Divirsificado: ";
	getline(cin,alum.profesion);
	cout << "Ingrese El Anio que se Graduo: ";
	cin >> alum.graduacion; 
};
void ingresarDatosCursos(){
    cout << "hola ingresa datos";
};
void ingresarDatosCatedraticos(){
    cout << "hola ingresa datos";
};
void ingresarDatosNotas(){
    cout << "hola ingresa datos";
};
void ingresarPagos(){
    cout << "hola ingresa datos";
};	

// Funciones para la impresión de datos
void imprimirBoletaPago();
void imprimirTalonarioPagos();
void imprimirPensumEstudios();
void imprimirCursosPorSemestre();
void imprimirNotasPorAlumno();
void imprimirNotasPorSemestre();
void imprimirAlumnosInscritos();
void imprimirCursosAprobados();
void imprimirCursosReprobados();
void imprimirPagosYDeudas();
void imprimirMejoresPromedios();	
	

//Funciones principales;
void ingresarDatos(){
	
	cout << "\n1.Ingreso de Datos a Boleta de Inscripcion\n";
    cout << "2.Ingreso de Alumnos";
    cout << "\n3.Ingreso de Cursos";
    cout << "\n4.Ingreso de Catedraticos";
    cout << "\n5.Ingreso de Notas";
    cout << "\n6.Pagos";
    cout << "\n7.Regresar al Menu Anterior";

	int opIngreso = 0;
	cout << "\n\nElija una Opcion: ";
	cin >> opIngreso;

	    switch(opIngreso){
        case 1:
            ingresarDatosBoletaInscripcion();
            break;
        case 2:
            ingresarDatosAlumnos();
            break;
        case 3:
            ingresarDatosCursos();
            break;
        case 4:
            ingresarDatosCatedraticos();
            break;
        case 5:
            ingresarDatosNotas();
            break;
        case 6:
            ingresarPagos();
            break;
        case 7:

            break;
};

};
void imprimirDatos(){
	
};
void regresarMenu(){
	
};

void menuProceso(){
	int process =0;
	cout<<"\n\tElija el Proceso Que Desea Realizar\n";
	cout<< "\n1.Ingreso de Datos\n";
	cout<< "2.Impresion de Datos\n";
	cout<< "3.Regresar al Menu de Carreras\n";
	cout<< "\nProceso a Realizar: ";
	cin >> process;
	
	switch(process){
		case 1:
			cout << "\n\tIngreso de Datos\n";
			ingresarDatos();
			break;
		case 2:
			cout<< "\n\tImpresion de Datos\n";
			//imprimirDatos();
			break;
		case 3:
			cout<< "\n\tRegresar al Menu Anterior\n";
			//regresarMenu();
			break;
	}
	
};

string departementosMenu(){
	
	cout << "\n\n\tSeleccione un Departamento";
	string departamentos[] = {"\n\n1.Alta Verapaz","2:Baja Verapaz",
        "3:Chimaltenango","4:Chiquimula","5:El Progreso","6:Escuintla",
        "7:Guatemala","8:Huehuetenango","9:Izabal","10:Jalapa",
        "11:Jutiapa","12:Peten","13:Quetzaltenango",
        "14:Quiche","15:Retalhuleu","16:Sacatepequez","17:San Marcos",
        "18:Santa Rosa","19:Solola","20:Suchitepequez",
        "21:Totonicapan","22:Zacapa",
    };
    
    for (int i = 0; i<=21 ; i++){
		cout << departamentos[i] << endl;
	}

	int opDepartamento = 0;
	cout << "\nElija un Departamento: ";
	cin >> opDepartamento;

    // Imprimimos el string que se va a retornar por la función
	cout << departamentos[opDepartamento - 1] << endl;

	return departamentos[opDepartamento];
}

	
int main()
{
	//array con las carreras
	string carreras[11]={"\n1.Ingenieria en Sistemas","2.Ingenieria Industrial","3.Ingenieria Civil","4.Arquitectura","5.Medicina",
	"6.Psicologia","7.Derecho","8.Auditoria","9.Criminologia","10.Trabajo Social","11.Salir"};
	
	//se imprimen los encabezados
	cout <<"Universidad Mariano Galvez de Guatemala, Campus Jutiapa";
	cout << "\n\n\tElija la Carrera del Estudiante\n";
	
	for (int i = 0; i<=10 ; i++){
		cout << carreras[i] << endl;
	}

	int op = 0;
	cout << "\nElija una Carrera: ";
	cin >> op;

	switch(op){
		case 1:
			cout << carreras[op-1];
			departementosMenu();
			menuProceso();
			break;
		case 2:
			cout << carreras[op-1];
			departementosMenu();
			menuProceso();
			break;
		case 3:
			cout << carreras[op-1];
			departementosMenu();
			menuProceso();
			break;
		case 4:
			cout << carreras[op-1];
			departementosMenu();
			menuProceso();
			break;
		case 5:
			cout << carreras[op-1];
			departementosMenu();
			menuProceso();
			break;
		case 6:
			cout << carreras[op-1];
			departementosMenu();
			menuProceso();
			break;
		case 7:
			cout << carreras[op-1];
			departementosMenu();
			menuProceso();
			break;
		case 8:
			cout << carreras[op-1];
			departementosMenu();
			menuProceso();
			break;
		case 9:
			cout << carreras[op-1];
			departementosMenu();
			menuProceso();
			break;
		case 10:
			cout << carreras[op-1];
			departementosMenu();
			menuProceso();
			break;
		case 11:
			exit(0);
	}
	
	cin.get(), cin.ignore(255);
	system ("PAUSE");
	return 0;
}

