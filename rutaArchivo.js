document.write("<h2>¡Contenido agregado por JavaScript!</h2>");

let nombre = "Ana";
var edad = 32;
const nombreSinCambio = "Daniel";

let entero = 10;
let decimal = 3.14;
let suma = entero + decimal;
console.log(suma);

let botonInicio = document.getElementById('boton');

window.addEventListener('scroll', funcionEjemplo);

function funcionEjemplo() {
    console.log("Scroll aplicado");
}
