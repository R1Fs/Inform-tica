function calcular() {
var prova01 = parseFloat(document.getElementById('prova01').value);
var prova02 = parseFloat(document.getElementById('prova02').value);
var media = (prova01 + prova02) / 2;
document.getElementById('media').value = media;
if (media >= 7) {
document.getElementById('situacao').value = "Aprovado";
}
else if (media < 7 && media >= 6) {
document.getElementById('situacao').value = "Recuperação";
}
else{
document.getElementById('situacao').value = "Reprovado";
}
}