Algoritmo temporizador
	Definir hor,min,seg Como Entero
	Escribir "Introduce las horas: "
	Leer hor
	Escribir "Introduce los minutos: "
	leer min
	Escribir "Introduce los segundos: "
	Leer seg
	Mientras seg>0 o min>0 o hor>0 Hacer
		Escribir hor ":" min ":" seg
		seg<-seg-1
		si seg<0 Entonces
			min=min-1
			seg=59
		FinSi
		si min<0 Entonces
			hor=hor-1
			min=59
		FinSi
	FinMientras
FinAlgoritmo
