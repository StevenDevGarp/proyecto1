#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>

using namespace std;	
	
	
// Funciones para el ingreso de datos	
void ingresarDatosBoletaInscripcion(){
    cout << "hola ingresa datos";
};
void ingresarDatosAlumnos(){
    cout << "hola ingresa datos";
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
	
	cout << "Ingreso de datos a boleta de inscripcion\n";
    cout << "Ingreso de alumnos";
    cout << "Ingreso de cursos";
    cout << "Ingreso de catedraticos";
    cout << "Ingreso de notas";
    cout << "Pagos";
    cout << "Regresar al menu anterior";

	int opIngreso = 0;
	cout << "\nElija una opcion: ";
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
	cout<<"Elija el proceso que desea realizar: \n";
	cout<< "Ingreso de datos\n";
	cout<< "Impresion de datos\n";
	cout<< "Regresar al menu de carreras \n";
	cin >> process;
	
	switch(process){
		case 1:
			cout << "ingreso de datos";
			ingresarDatos();
			break;
		case 2:
			cout<< "impresion de datos";
			//imprimirDatos();
			break;
		case 3:
			cout<< "se regreso al menu anterior";
			//regresarMenu();
			break;
	}
	
};

string departementosMenu(){
	
	string departamentos[] = {"\n1:Baja Verapaz",
        "2:Chimaltenango","3:Chiquimula","4:El Progreso","5:Escuintla",
        "6:Guatemala","7:Huehuetenango","8:Izabal","9:Jalapa",
        "10:Jutiapa","11:Peten","12:Quetzaltenango",
        "13:Quiche","14:Retalhuleu","15:Sacatepequez","16:San Marcos",
        "17:Santa Rosa","18:Solola","19:Suchitepequez","20:Totonicapan",
        "21:Zacapa","22:Alta Verapaz",
    	"23:salir"
    };
    
    for (int i = 0; i<=10 ; i++){
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
	cout <<"Universidad Mariano Galvez de Guatemala, Campus Jutiapa \n";
	cout << "Elija la Carrera del Estudiante";
	
	for (int i = 0; i<=10 ; i++){
		cout << carreras[i] << endl;
	}

	int op = 0;
	cout << "\nElija una carrera: ";
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

//PENDIENTE DE AGREGAR EN LOS INGRESO DE DATOS
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
	char carnet[13];
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

int main()
{
	cout << "Ingrese la Fecha de la Boleta: ";
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
		}
			else if(banco==2){
				nombreBanco = "Banco Industrial";
			}
				else {cout << "Ingrese un Banco Valido";
				};
				
	//ESTO SE USARA PARA IMPRESION DE DATOS//
	cout << "\nLa Fecha de la Boleta Es: " << blt.fecha <<endl;
	cout << "El Nombre del Alumno Es: " << blt.alumno <<endl;
	cout << "Semestre No: " << blt.semestre <<endl;
	cout << "Campus: " << blt.campus <<endl;
	cout << "El Banco a Pagar Es: " <<nombreBanco<<endl;
	cout << "El Total de Inscripcion Es: " << totalinscripcion <<endl;
	
	//ESTO SE USA PARA EL INGRESO DE DATOS//
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
	cout << "Ingrese su Direccion: ";
	getline(cin,alum.direccion);
	cout << "Ingrese su Numero de Telefono: ";
	cin >> alum.telefono;
	cout << "Ingrese su Correo Electronico: ";
	getline(cin,alum.correo);
	cout << "Ingrese su Profesion de Divirsificado: ";
	getline(cin,alum.profesion);
	cout << "Ingrese El Anio que se Graduo: ";
	cin >> alum.graduacion; 
		
	//ESTO SE USARA PARA IMPRESION DE DATOS//
	cout << "\nLa Su Numero de Carnet Es: " << alum.carnet <<endl;
	cout << "Sus Nombre Son: " << alum.nombre <<endl;
	cout << "Sus Apellidos Son: " << alum.apellido <<endl;
	cout << "Campus: " << alum.nacimiento <<endl;
	cout << "Su Edad Es: " << alum.edad <<endl;
	cout << "Su Direccion Es: " << alum.direccion <<endl;
	cout << "Su Numero de Telefono Es: " << alum.telefono <<endl;
	cout << "Su Direccion de Correo Electronico Es: " << alum.correo <<endl;
	cout << "Su Profesion de Diversificado Es: " << alum.profesion <<endl;
	cout << "El Anio que se Graduo Es: " << alum.graduacion <<endl;

