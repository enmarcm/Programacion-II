//Ejercicio ENMANUEL COLINA 

#include<stdio.h>
#include<stdlib.h>

struct infoDireccion{

    char direccion  [30];
    char ciudad      [20];
    char municipio [20];
};

struct infoFamiliar{
	char edoCivil [30];
	int hijos;
	char tipoVivienda [20];
};

struct servPublicos{
	char agua[10];
	char luz[10];
	char telefono[10];
};

struct empleado{

    char      nombre[20];
    struct infoDireccion dirEmpleado;
    double salario;
    struct infoFamiliar famEmpleado;
    struct servPublicos servEmpleado;

}empleados[2];


int main(){

    int i;

    for(i = 0; i <1; i++){

        fflush(stdin);
        printf("%i Digita tu nombre: ", i +1);
        gets(empleados[i].nombre);

        printf("%i Digita tu Direccion: ", i +1);
        gets(empleados[i].dirEmpleado.direccion);

        printf("%i Digita tu Ciudad: ", i +1);
        gets(empleados[i].dirEmpleado.ciudad);

        printf("%i Digita tu Municipio: ", i +1);
        gets(empleados[i].dirEmpleado.municipio);

        printf("%i Digita tu salario: ", i +1);
        scanf("%lf", &empleados[i].salario);
        
        fflush(stdin);
        printf("%i Digite su Estado Civil: ", i+1);
        gets(empleados[i].famEmpleado.edoCivil);
		
		printf("%i Digite su Numero de Hijos: ", i+1);
        scanf("%lf", &empleados[i].famEmpleado.hijos);
        
        fflush(stdin);
        printf("%i Digite su Tipo de Vivienda: ", i+1);
        gets(empleados[i].famEmpleado.tipoVivienda);
        
        printf("%i Digite si posee Servicio de Agua: ", i+1);
        gets(empleados[i].servEmpleado.agua);
        
        printf("%i Digite si posee Servicio de Electricidad: ", i+1);
        gets(empleados[i].servEmpleado.luz);
        
        printf("%i Digite si posee Servicio de Telefonia: ", i+1);
        gets(empleados[i].servEmpleado.telefono);
        
        
        printf("\n");

    }
       for(i = 0; i <1; i++){

            printf("\n\nDatos del empleado num: %d ", i +1);
            printf("\nNombre  : %s", empleados[i].nombre);
            printf("\nDireccion: %s", empleados[i].dirEmpleado.direccion);
            printf("\nCiudad    : %s", empleados[i].dirEmpleado.ciudad);
            printf("\nMunicipio: %s", empleados[i].dirEmpleado.municipio);
            printf("\nSalario    : %.2lf", empleados[i].salario);
            printf("\nEstado Civil    : %s", empleados[i].famEmpleado.edoCivil);
            printf("\nNumero de Hijos    : %.1lf", empleados[i].famEmpleado.hijos);
            printf("\nTipo de Vivienda    : %s", empleados[i].famEmpleado.tipoVivienda);
            printf("\nPosee Servicio de Agua    : %s", empleados[i].servEmpleado.agua);
            printf("\nPosee Servicio de Electricidad    : %s", empleados[i].servEmpleado.luz);
            printf("\nPosee Servicio de Telefonia    : %s", empleados[i].servEmpleado.telefono);

         }
    printf("\n");
    system("pause");
    return 0;
}
