Algoritmo precio
		definir lado1, lado2, preciom2, total Como Real 
		escribir "Dame el largo del terreno en metros"
		leer lado1
		escribir "Dame el ancho del terreno en metros"
		leer lado2
		escribir "Dame el precio del metro cuadrado"
		leer preciom2
		area<-lado1*lado2
		total<-area*preciom2
		imprimir "El precio por este terreno es de: $" total
FinAlgoritmo