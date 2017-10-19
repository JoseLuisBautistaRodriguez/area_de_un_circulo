// Calcular el área de un círculo.

	/*
	------------------------------------------------------------------------------------------
	El programa calcula el área de un círculo con base en el registro del radio por parte del 
	usuario. No acepta valores negativos o 0, tampoco valores ajenos al menú y lleva un regis-
	tro de máximo 25 valores asignados. 
	------------------------------------------------------------------------------------------
	*/
	
#include <stdio.h>
#define PI 3.1416 

void main(){
	
	int i, ib, idd, ic, j, n, comp1, comp2, comp3;
	float fa, fusu;

	float data[25], radios[25];
	for( i = 0 ; i < 25 ; i++){
		
		data[i] = 0 ;
		radios[i] = 0 ; 
		
	}
	
	for(i = 0 ; i < 25 ; i++){
		
		printf("\n	%c%c Calculo del %crea de un c%crculo. %c%c \n\n", 205, 205, 160, 161, 205, 205);

		printf("\n	Ingresa el radio del c%crculo: ", 161);
		scanf("%f", &fusu);	
		
		if ( fusu < 1 ){
			
			printf("\n	Valor no v%clido.\n\n", 160);
			break;
			
		}
		
		fa = PI*( fusu * fusu); 
		
		printf("\n	El %crea del c%crculo es %10.4f.\n\n", 160, 161, fa);
		
		data[i] = fusu ;
		radios[i] = fa ; 
		
		for ( j = 0 ; j < 4 ; j++){
			
				printf("\n	%c %cQuieres continuar? %c%c%c%c\n\n	Si = 1,   no = 2 \n\n	Opci%cn: ", 205, 168, 205, 205, 205, 205, 162);
				scanf("%d", &ib); 
		
			if( ib == 2 ){
			
					i += 25;
					j += 11;
			
			}else if( ib != 1 || ib > 2 || ib < 1){
				
				ic = 3 - j;
				
				printf("\n		%c Ingresaste un valor no v%clido %c\n	 Tienes %d oportunidades para reingresar un valor.\n", 176, 160, 176, ic);
				
				ic = 3 ;
				
			}else {
				
				j += 11 ;
				
			}
					
			if( j == 3){
				
				i = 26 ;
				
			}
		
		}

		system("cls");		
	}
	
	idd = 9;
	comp1 = 1 ; 
	comp2 = 2 ;
	comp3 = 3 ;	
	
		
	for ( j = 0 ; j < 30 ; j++){
				
		comp3 = comp2 ; 
		comp2 = comp1 ;
		comp1 = data[j];
		
		n = comp3 + comp2 + comp1 ;
		
		if( n == 0){
				
			idd = j - 3 ; 
			j = 31;
			
		}
			
	}
	
	idd++;
	printf("\n	%c%c%c Registro: %c%c%c\n\n", 205, 205, 205,  205, 205, 205);
		
	for ( i = 0 ; i < idd ; i++){
		
		printf("	%d - El radio del c%crculo %d fue %10.4f, y su %crea fue %10.4f. \n" , i + 1, 161,  i + 1,data[i], 160, radios[i]);
		
	}
	 
	 if ( idd > 1){
	 
	 	printf("\n\n	El historial guard%c los %cltimos %d elementos v%clidos.\n\n\n ", 162, 163, idd, 160);
	 	
	}else if( idd == 1){
		
		printf("\n\n	El historial guard%c el %cltimo elemento v%clido.\n\n\n ", 162, 163, 160);
		
	}else{
		
		printf("	El progama ha terminado.\n\n\n");
		
	}
	system("pause");
}

	/*
	
	Datos Generales del archivo:
	------------------------------------------------------------------------------------------
	Universidad Nacional Autónoma de México
	Facultad de Ingeniería
	Fundamentos de Programación
	Grupo: 1120
	 
	Autor: Jose Luis Bautista Rodríguez
	Fecha de inicio: 18/10/2017
	------------------------------------------------------------------------------------------
	
	*/
