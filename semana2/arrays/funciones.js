let arreglo =[]

arreglo.push(5)
arreglo.push(10)
arreglo.push(6)
arreglo.push(23)
/*
console.log(arreglo)

arreglo.pop()
console.log(arreglo)


function fnSaludar(msj){
    console.log(msj)
    let suma = 8+1
    return suma
}

console.log("El valor de una suma es:", fnSaludar("Este es un mensaje"))
*/

let test = function (){
   return "Funcion anonima"
}

//() => {} Funcion de tipo Flecha

let testFlecha = () => 5;

console.log(test())
console.log(testFlecha())



console.log( 
    arreglo.filter( (numero) => numero >=10 ) 
)

// IF Ternario 
// (a>b) ? true : false 

//function filter( fn(?){? return true|false} )