function calcularDesconto() {

    var valor = parseFloat(document.getElementById('valor').value);

    var desconto = (parseFloat(document.getElementById('desconto').value))/100;

    var total = valor - (desconto * valor);

    document.getElementById('total').value = total;

}