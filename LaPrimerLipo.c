#include <stdio.h>
#include <stdlib.h>
int main()
{  
int precio,opc;
float preciodescuento;
puts("MENU");
puts("1. Consultar precios");
puts("2. Agendar una cita");
puts("3. Salir");
puts("Que opcion quieres? ");
scanf("%d",&opc);  
do 
{
  case 1:
  puts("Precio        Zonas a cubrir                   Cuidados post operatorio");
  puts("------------------------------------------------------------------------------");
  puts("45,000        Abdomen o papada                        N/A ");
  puts("100,000    Abdomen,papada,brazos,esopalda       Fajas, medicamentos ");
  puts("140,000    Abdomen,papada,brazos,esopalda       Fajas, masajes linfaticos,
                         muslos y axilas                 medicamentos");  
break;
case 2: puts("Cita agendada");
		printf("Ingrese su nombre");
		scanf("s%",nom);
		printf("Ingrese su edad");
		scanf("d%",&edad);
		printf("Ingrese la cantidad a pagar");
		scanf("d%",&precio);
		if (precio<45000){
			preintf("Precio menor de 45000 no valido");
		}
		system ("pause");
		break;
