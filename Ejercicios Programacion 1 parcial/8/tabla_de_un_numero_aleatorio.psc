Algoritmo tabla_de_un_numero_aleatorio
	Definir num, tabla Como Real
	Definir contador Como Entero
	Escribir "Inserta el numero del cual deseas la tabla de multiplicar: "
	Leer num
	contador<-0
	Mientras contador<11 Hacer
		tabla<-num*contador
		Escribir num "*" contador "=" tabla
		contador<- contador+1
	FinMientras
FinAlgoritmo
