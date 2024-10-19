Algoritmo saber_si_un_numero_es_primo
	Definir cont, num,res Como real
	Definir bandera Como Logico
	Escribir "Ingresa el numero el cual deseas saber si es primo: "
	Leer num
	cont<-2
	bandera<-Verdadero
	si num=1 Entonces
		Escribir "no es primo"
	SiNo
		Mientras cont<num y bandera==Verdadero Hacer
			res=num%cont
			cont=cont+1
			si res==0 Entonces
				bandera=Falso
			SiNo
				bandera=Verdadero
			FinSi
		FinMientras
		si bandera=Verdadero
			Escribir "es primo"
		SiNo
			Escribir "no es primo"
		FinSi	
	FinSi
FinAlgoritmo
