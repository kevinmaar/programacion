Algoritmo switch
	Definir calif1, calif2, calif3, prom Como Real
	Escribir "Dame la calificacion 1: "
	Leer calif1
	Escribir "Dame la calificacion 2:"
	Leer calif2
	Escribir "Dame la calificacion 3"
	leer calif3
	prom<- trunc((calif1+calif2+calif3)/3)
	Segun prom Hacer
		8:
			Imprimir "Vas muy bien pero puedes ir mejor"
		9:
			Imprimir "muy bien pero todavia puedes mejorar"
		10:
			Imprimir "es tu obligacion"
		De Otro Modo:
			Imprimir "tienes que estudiar mas o reprobaras"
	FinSegun
FinAlgoritmo
