
"""
   + sumar
    - resta
    / dividir
    * multiplicar
    ** potencia
    IDENTACION ??
 """

if __name__ == '__main__':
    nombreEstudiante = "Juan Pablo"
    precioBoleto= 5.40
    cantidadVentas=50
    
    print(nombreEstudiante)
    print(precioBoleto)
    print(cantidadVentas)
    
    precioBoleto="Texto"
    
    print("antes era numerica, ahora es texto: " + precioBoleto)
    
    print(2**5)
    print(nombreEstudiante*4)
    print(nombreEstudiante[::-1])
    cantidadVentas+=1
    print(cantidadVentas)
    
    if (cantidadVentas>=100 and cantidadVentas<200):
        print("cumple")
    elif cantidadVentas>=200:
        print("cumple segunda condicion")
    else:
        print("Final")
        
    # Array en Python
    calificaicon= [4.5,13,4,"Hola"]
    print("Vamos a reccorer un arreglo: ")
    for cont in range(4):
        print(calificaicon[cont])
        
        #range(punto inicial, punto final, saltos)
        #range(0,5,1)