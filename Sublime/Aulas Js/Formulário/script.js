function calcularPreco(){
    var preco = parseFloat(document.getElementById('preco').value);

    var quantidade = parseInt(document.getElementById('quantidade').value);

    var total = preco * quantidade;

    document.getElementById('total').value = total;
}
/*
function mensagem(){
    alert('Preço Calculado com sucesso!!!');
}
*/