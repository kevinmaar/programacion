Algoritmo descuento
	Definir precio, preciofin, descuento10, descuento15 Como Real
	Escribir "Ingrese el precio del producto"
	leer precio
	descuento10<-precio*0.10
	descuento15<-precio*0.15
	Si precio>200 Entonces
		preciofin<-precio-descuento15
	SiNo
		preciofin<-precio-descuento10
	FinSi
	Imprimir "El precio final es de:" preciofin
FinAlgoritmo
