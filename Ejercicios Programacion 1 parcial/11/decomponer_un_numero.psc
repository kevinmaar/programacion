Algoritmo decomponer_un_numero
	//Kevin Marzul Jeronimo Rojano
	Definir numer, digito Como Real
	Escribir "Ingresa un numero dentro del rango de 1000 a 9999: "
	Leer numer
	si numer>1000 Entonces
		si numer<9999
			Mientras numer>0 Hacer
				digito = numer%10
				Escribir digito
				numer=numer-digito
				numer=numer/10
			FinMientras
		FinSi
	SiNo
		escribir "Eso no es posible"
	FinSi
FinAlgoritmo
