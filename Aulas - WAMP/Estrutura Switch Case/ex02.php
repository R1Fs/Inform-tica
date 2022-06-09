<?php 


$a = 7;

echo "<h1>";

switch ($a) {
	case 1:
	case 2:
	case 3:	
	echo "primeiro trimestre";
		break;
	case 4:
	case 5:
	case 6:	
	echo "segundo trimestre";
		break;
	case 7:
	case 8:
	case 9:	
	echo "terceiro trimestre";
		break;
    case 10:
	case 11:
	case 12:	
	echo "quarto trimestre";
		break;        
        default;
        echo "mêS inválido";
}


echo "</h1>";


 ?>