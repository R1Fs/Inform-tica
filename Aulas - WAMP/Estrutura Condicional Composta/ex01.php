<?php

echo "Estrutura Condicional Composta<br><br>";

$x = $_POST['primeiro'];
$y = $_POST['segundo']; 

if ($x > $y) {
	
	echo "$x é maior que $y";


}elseif("$x < $y") {

   echo "$x é menor que $y";


}else{

	echo "$x é igual a $y";


}






?>