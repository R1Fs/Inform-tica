
function calcularNotas(){
var prova01 = parseFloat(document.getElementById('prova01').value);
var prova02 = parseFloat(document.getElementById('prova02').value);

var media = (prova01 + prova02)/2;
document.getElementById('media').value = media;


if (media >=7) {
document.getElementById('situacao').value = 'Aprovado';
}
else{
document.getElementById('situacao').value = 'Reprovado';
}
}