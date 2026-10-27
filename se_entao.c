#include <stdio.h>

int main (){   
  
   
int hora;
// se =if
printf("Digite a hora atual(0-23):");
scanf("%d",&hora);

if(hora < 12){ 


printf("bom dia\n ");
}
else if(hora < 18)
{
printf("boa tarde\n");
}
else {
printf("Boa Noite\n");
}
return 0;



}