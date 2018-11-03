/*origen*/

#include <stdio.h>

/*b) Productor – Consumidor con mensajes.*/

void despachante (void) { 
int café; 
message m; /*almacén de mensajes*/
 
while (TRUE) /* se repite siempre */
 { servir_café(&café); 
 receive(mozo,&m); 
 crearmensaje(&m,café); /*envía mensaje q tiene el café*/ 
 send(mozo,&m); } 
 }

 void mozo (void) { 
 int café,i; message m; 
 for (i=0;i<X;i++) send(despachante,&m); /*envía X mensajes vacíos*/ while (TRUE) { receive(despachante,&m); retira_café(&m,café); send(despachante,&m); sirve_café(café); } 
 }