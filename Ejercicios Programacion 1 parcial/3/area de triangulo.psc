Algoritmo area
	definir aux, areatotal, lado1, lado2, lado3 Como Real
	escribir "dame el lado1"
	leer lado1
	escribir "dame el lado2"
	leer lado2
	Escribir "dame el lado3"
	leer lado3
	aux<- ((lado1+lado2+lado3)/2)
	areatotal<- rc( (aux*(aux-lado1)*(aux-lado2)*(aux-lado3) ))
	imprimir "el area del triangulo es:" areatotal
FinAlgoritmo
