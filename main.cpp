#include <iostream>
#include <string>
#include <stdlib.h>
#include <conio.h>
#include <vector>

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

struct notas
{
    string carne;
    string cod_curso;
    string cod_cat;
    int punt_par1;
    int punt_par2;
    int tareas;
    int exam_cort;
    int proyectos;
    int zona;
    int exa_fin;
    int exa_retra; //solo si este perdio 
} notas;
      
struct pagos 
{              
    int cod_pago;
    string nom_pago;
    string cod_alum;
    string facultad;
    int semestre;
    float cuota_pago;
}pag;
              
struct catedraticos
{  
	int cod_cat;
    string nombre_cat;
    string apellido_cat;
    string direc_cat;
    string profes_cat;
    string tel_cat;
    string correo_cat;
} cat;
	   
struct cursos
{                
    int cod_curso;
    string nom_curso;
    string prerre; //PRERREQUISITOS
    string creditos;
    string horario;
} cur;

void ingresarDatos();
void menuProceso();
int main();
		
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
	cout << "!Ingreso de Datos Completado con Exito!\n\n";
	ingresarDatos();
};
void ingresarDatosAlumnos(){
    cout << "\n\tPor Favor Ingrese los Datos del Alumno";
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
	system("cls");
	cout << "!Ingreso de Datos Completado con Exito!\n\n";
	ingresarDatos(); 
};
void ingresarDatosCursos(){
    cout << "\n\tPor Favor Ingrese los Datos de los Cursos\n";
    cin.ignore();
    cout <<"\nIngresa El Codigo del Curso: ";
    cin >> cur.cod_curso;
    cout <<"Ingresa Nombre del Curso: ";
    getline(cin,cur.nom_curso);
    cin.ignore();
    cout << "Ingrese los Prerrequisitos: ";
    getline(cin,cur.prerre);
    cout << "Ingrese los Creditos: ";
    getline(cin,cur.creditos);
    cout << "Ingrese el Horario: ";
    getline(cin,cur.horario);
    cout << "!Ingreso de Datos Completado con Exito!\n\n";
    ingresarDatos();
};
void ingresarDatosCatedraticos(){
    cout << "\n\tPor Favor Ingrese los Datos de los Catedraticos\n";
    cin.ignore();
    cout << "\nIngrese el Codigo del Catedratico: ";
    cin>> cat.cod_cat;
    cout << "Ingrese el Nombre del Catedratico: ";
    getline(cin,cat.nombre_cat);
    cin.ignore();
    cout << "Ingrese el Apellido del Catedratico: ";
    getline(cin,cat.apellido_cat);
    cin.ignore();
    cout << "Ingrese la Direccion: ";
    getline(cin,cat.direc_cat);
    cin.ignore();
    cout << "Ingrese la Profesion: ";
    getline(cin,cat.profes_cat);
    cin.ignore();
    cout << "Ingrese el Telefono: ";
    getline(cin,cat.tel_cat);
    cin.ignore();
    cout << "Ingrese el Correo Electronico: ";
    getline(cin,cat.correo_cat);
    cin.ignore();
    cout << "!Ingreso de Datos Completado con Exito!\n\n";
    ingresarDatos();
};
void ingresarDatosNotas(){
    cout << "\n\tPor Favor Ingrese los Datos de las Notas\n";
    cin.ignore();
    cout << "\nIngrese el Numero de Carne del Alumno: ";
	getline(cin,notas.carne);
	cout << "Ingrese el Codigo del Curso: ";
	getline(cin,notas.cod_curso);
	cout << "Ingrese el Codigo del Catedratico: ";
	getline(cin,notas.cod_cat);
	cout << "Ingrese la Nota del Primer Parcial: ";
	cin >> notas.punt_par1;
	cout << "Ingrese la Nota del Segundo Parcial: ";
	cin >> notas.punt_par2;
	cout << "Ingrese la Zona (Tareas, Examenes Cortos y Proyectos) del Alumno: ";
	cin >> notas.zona;
    cout << "!Ingreso de Datos Completado con Exito!\n\n";
    ingresarDatos();
};
void ingresarPagos(){
    cout << "\n\tPor Favor Ingrese los Datos de los Pagos\n";
    cin.ignore();
    cout << "\nIngrese el Codigo de Pago: ";
    cin >> pag.cod_pago;
	cin.ignore();
    cout << "Ingrese el Nombre de Pago: ";
    getline(cin,pag.nom_pago);
    cout << "Ingrese el Codigo del Alumno: ";
    getline(cin,pag.cod_alum);
    cout << "Ingrese la Facultad: ";
    getline(cin,pag.facultad);
    cout << "Ingrese el Semestre: ";
    cin >> pag.semestre;
    cout << "Ingrese la Cuota de Pago: ";
    cin >> pag.cuota_pago;
    cout << "!Ingreso de Datos Completado con Exito!\n\n";
    ingresarDatos();
};	

// Funciones para la impresión de datos
void imprimirBoletaPago(){
	cout << "\nLa Fecha de la Boleta Es: " << blt.fecha <<endl;
	cout << "El Nombre del Alumno Es: " << blt.alumno <<endl;
	cout << "Semestre No: " << blt.semestre <<endl;
	cout << "Campus: " << blt.campus <<endl;
	cout << "El Banco a Pagar Es: " <<nombreBanco<<endl;
	cout << "El Total de Inscripcion Es: " << totalinscripcion <<endl;
	cin.ignore();
};
void imprimirTalonarioPagos(){
	cout << "\n\tPor Favor Ingrese los Datos de los Pagos\n";
    cin.ignore();
    cout << "\nIngrese el Codigo de Pago: ";
    cin >> pag.cod_pago;
	cin.ignore();
    cout << "Ingrese el Nombre de Pago: ";
    getline(cin,pag.nom_pago);
    cout << "Ingrese el Codigo del Alumno: ";
    getline(cin,pag.cod_alum);
    cout << "Ingrese la Facultad: ";
    getline(cin,pag.facultad);
    cout << "Ingrese el Semestre: ";
    cin >> pag.semestre;
    cout << "Ingrese la Cuota de Pago: ";
    cin >> pag.cuota_pago;
    cout << "!Ingreso de Datos Completado con Exito!\n\n";
    ingresarDatos();
};
void imprimirPensumEstudios(){
	cout <<"\n1. Matematica Discreta\n" <<endl;
	cout <<"\n2. Contabilidad\n" << endl;
	cout <<"\n3. Precalculo\n" << endl;
	cout <<"\n4. Algoritmos\n" << endl;
	cout <<"\n5. Algebra Lineal\n" << endl;
};
void imprimirCursosPorSemestre(){
	cout <<"\n\nLos cursos por semestre a impartir son: ¡5!\n" <<endl;
};
void imprimirNotasPorAlumno(){
	cout <<"El carne del alumno es:" << notas.carne <<endl;
	cout <<"El codigo del curso es:" << notas.cod_curso <<endl;
	cout <<"La nota en el primer parcial es de:"<< notas.punt_par1 <<endl;
	cout <<"La nota en el segundo parcial es de:" << notas.punt_par2 <<endl;
	cout <<"La zona (examenes cortos, proyectos, tareas) del alumno es:" << notas.zona<< endl;
};
void imprimirNotasPorSemestre(){
	cout <<"Por el momento no podemos mostrar sus notas, regrese mas tarde." <<endl;
	cout <<"Gracias por su comprension" <<endl;
};
void imprimirAlumnosInscritos(){
	cout << "\nLa Su Numero de Carnet Es: " << alum.carnet <<endl;
	cout << "Sus Nombre Es: " << alum.nombre << alum.apellido <<endl;
	cout << "Su Fecha de Nacimiento Es: " << alum.nacimiento <<endl;
	cout << "Su Edad Es: " << alum.edad <<endl;
	cout << "Su Direccion Es: " << alum.direccion <<endl;
	cout << "Su Numero de Telefono Es: " << alum.telefono <<endl;
	cout << "Su Direccion de Correo Electronico Es: " << alum.correo <<endl;
	cout << "Su Profesion de Diversificado Es: " << alum.profesion <<endl;
	cout << "El Anio que se Graduo Es: " << alum.graduacion <<endl;
};
void imprimirCursosAprobados(){
	cout <<"\nHemos tenido una falla en el sistema, le mostraremos los cursos aprobados mas tarde.\n" <<endl;
	cout <<"Gracias por su comprension" <<endl;
};
void imprimirCursosReprobados(){
	cout <<"\nHemos tenido una falla en el sistema, le mostraremos los cursos reprobados mas tarde.\n";
	cout <<"Gracias por su comprension" <<endl;
};
void imprimirPagosYDeudas(){
	cout <<"\nSemestres que ha pagado:\n" << pag.semestre <<endl;
	cout <<"Los semestres que no aparecen anteriormente estan pendientes de Pago." <<endl;
};
void imprimirMejoresPromedios(){
	cout <<"No es posible mostrar esta informacion por el momento, regrese mas tarde" << endl;
	cout <<"Gracias por su comprension" <<endl;
};
	
	

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
        	system("cls");
        	menuProceso();
            break;
};

};
void imprimirDatos(){
	
	cout << "\n\tElija Que Datos Desea Imprimir\n";
	cout << "\n1.Impresion de Boleta para Pago de Inscripcion\n";
	cout << "2.Inpresion de Talonario de Pagos\n";
	cout << "3.Impresion de Pensum de Estudios\n";
	cout << "4.Impresion de Cursos por Semestre\n";
	cout << "5.Impresion de Notas por Alumno\n";
	cout << "6.Impresion por semestre de alumnos inscritos en el 2023\n";
	cout << "7.Impresion por alumno de Cursos Aprobados\n";
	cout << "8.Impresion por Alumno de Cursos Reprobados\n";
	cout << "9.Impresion de Pagos Realizados y Suma de Deuda\n";
	cout << "10.Impresion de los Alumnos con los Mejores 3 Promedios por Semestre\n";
	cout << "11.Regresar al Menu Anterior\n";
	cout << "\nElija una Opcion: ";
	
	int imprimir = 0;
	cin >> imprimir;

	switch(imprimir){
		case 1:
			cout << "\n\t¡Sus Datos se han Impreso con Exito!";
			imprimirBoletaPago();
			imprimirDatos();
			break;
		case 2:
			cout << "\n\t¡Sus Datos se han Impreso con Exito!";
			imprimirTalonarioPagos();
			imprimirDatos();
			break;
		case 3:
			cout << "\n\t¡Sus Datos se han Impreso con Exito!";
			imprimirPensumEstudios();
			imprimirDatos();
			break;
		case 4:
			cout << "\n\t¡Sus Datos se han Impreso con Exito!";
			imprimirCursosPorSemestre();
			imprimirDatos();
			break;
		case 5:
			cout << "\n\t¡Sus Datos se han Impreso con Exito!";
			imprimirNotasPorAlumno();
			imprimirDatos();
			break;
		case 6:
			cout << "\n\t¡Sus Datos se an Impreso con Exito!";
			imprimirAlumnosInscritos();
			imprimirDatos();
			break;
		case 7:
			cout << "\n\t¡Sus Datos se han Impreso con Exito!";
			imprimirCursosAprobados();
			imprimirDatos();
			break;
		case 8:
			cout << "\n\t¡Sus Datos se han Impreso con Exito!";
		    imprimirCursosReprobados();
			imprimirDatos();
			break;
		case 9:
			cout << "\n\t¡Sus Datos se han Impreso con Exito!";
		    imprimirPagosYDeudas();
			imprimirDatos();
			break;
		case 10:
			cout << "\n\t¡Sus Datos se han Impreso con Exito!";
		    imprimirMejoresPromedios();
			imprimirDatos();
			break;
		case 11:
			menuProceso();
			break;
	};
};

void menuProceso(){
	int process =0;
	cout << "\n\tElija el Proceso Que Desea Realizar\n";
	cout << "\n1.Ingreso de Datos\n";
	cout << "2.Impresion de Datos\n";
	cout << "3.Regresar al Menu de Carreras\n";
	cout << "4.Colaboradores\n";
	cout << "5.Salir\n";
	cout << "\nProceso a Realizar: ";
	cin >> process;
	
	switch(process){
		case 1:
			cout << "\n\tIngreso de Datos\n";
			ingresarDatos();
			break;
		case 2:
			cout<< "\n\tImpresion de Datos\n";
			imprimirDatos();
			break;
		case 3:
			system("cls");
			main();
			break;
		case 4:
			system("cls");
			cout << "\t\tUn Paso Hacia Delante" << endl;
			cout << "\t\tColaboradores" << endl;
			cout << "\n\t\tMarlon Josue Castillo Garcia";
			cout << "\n\t\tDany Miguel Mateo Hernandez";
			cout << "\n\t\tAbraham Isaac Lima Castillo";
			cout << "\n\t\tLaura Carolina Portillo Portillo";
			cout << "\n\t\tDilan Stihv Zepeda Bernal";
			cout << "\n\t\tVielman Amado Garcia Galvez: Ya no Asiste" << endl;
			cout << "\nGracias por Utilizar Nuestro Sotware !GRANITO DE ARENA¡";
			cin.get(); cin.get();
			menuProceso();
			system("cls");
			break;
		case 5:
			exit(0);
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
    
    for (int i = 0; i<=22 ; i++){
		cout << departamentos[i] << endl;
	}

	int opDepartamento = 0;
	cout << "Elija un Departamento: ";
	cin >> opDepartamento;

    // Imprimimos el string que se va a retornar por la función
	cout << departamentos[opDepartamento - 1] << endl;

	return departamentos[opDepartamento];
}

	
int main()
{
	vector<string> colaboradores;
	vector<string> claves;
	
	//Se añaden usuarios al Vector
	colaboradores.push_back("Marlon");
	colaboradores.push_back("Dany");
	colaboradores.push_back("Abraham");
	
	//Se añaden las claves al Vector
	claves.push_back("MC32057881");
	claves.push_back("Dany123");
	claves.push_back("Lima123");
	
	string usuarios,password;
	int contador = 0;
	bool ingresa = false;
	do {
		system("cls");
		cout << "\t\t---------------------------------" << endl;
		cout << "\t\t--Por Favor Ingrese su Usuario---" << endl;
		cout << "\t\t---------------------------------" << endl;
		cout << "\t\tUSUARIO: ";
		getline(cin,usuarios);
		cout << "\t\tPassword: ";
		
		char pass;
		pass = getch();
		password = "";
		while (pass != 13){
			if (pass != 8){
			password.push_back(pass);
			cout << "*";
			} else{
				if (password.length() > 0){
				cout << "\b \b";
				password = password.substr(0, password.length() -1);
				}
				}
			pass = getch();
		}
		for (int i = 0; i < colaboradores.size(); i++){
			if (colaboradores[i] == usuarios && claves[i] == password){
				ingresa = true;
				system("cls");
				break;
			}
		}
		if (!ingresa){
			cout << "\n\t\tEl Usuario y el Password son Incorrectos" << endl;
				cin.get();
				contador++;
		}
		
	} while(ingresa == false && contador < 3);
	
	if (ingresa == false){
		cout << "\n\t¡Usted No es un Colaborador!, Cerrando Programa..." << endl;
		exit(0);
	}
	
	//array con las carreras
	string carreras[11]={"\n1.Ingenieria en Sistemas","2.Ingenieria Industrial","3.Ingenieria Civil","4.Arquitectura","5.Medicina",
	"6.Psicologia","7.Derecho","8.Auditoria","9.Criminologia","10.Trabajo Social","11.Salir"};
	
	//se imprimen los encabezados
	cout << "Universidad Mariano Galvez de Guatemala, Campus Jutiapa";
	cout << "\nY Conocereis La Verdad Y La Verdad Os Hara Libres\" Juan8:32";
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

