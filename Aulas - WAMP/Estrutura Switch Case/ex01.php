<?php 

$primeiro = $_POST['primeiro'];
$segundo = $_POST['segundo'];
$opcao = $_POST['opcao'];

switch ($opcao) {
	case '1':
		echo $primeiro. ' + ' .$segundo. ' = ' .($primeiro + $segundo);
 		break;


    case '2';
       echo $primeiro. ' - ' .$segundo. ' = ' .($primeiro - $segundo);
       break;



    case '3';
       echo $primeiro. ' X ' .$segundo. ' = ' .($primeiro * $segundo);
       break;




    case '4';
       echo $primeiro. ' / ' .$segundo. ' = ' .($primeiro / $segundo);
       break;




    case '5';
       echo $primeiro. ' Média ' .$segundo. ' = ' .(($primeiro + $segundo)/2);
       break;





	
	default:
	    echo "Opção inválida";

		break;
}

 ?>