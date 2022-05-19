<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<meta charset="utf-8">
	<link rel="stylesheet" type="text/css" href="css/estilo.css">
	<title>Aula repetição</title>
</head>
<body>
 <header>
 	<nav>
 		<ul>
 			<li><a href="php/repeticao01.php">Exercício 01</a></li>
 			<li><a href="php/repeticao02.php">Exercício 02</a></li>
 			<li><a href="php/repeticao03.php">Exercício 03</a></li>
 		</ul>
 	</nav>
 	<h1>Exercícios com Repetição</h1>
 </header>
 <section id="meio">
 	<h3>Números de 0 a 10 com (somente números pares) - FOR</h3>
 	<?php
 	   for($i = 0; $i <= 10; $i++){
 	   
 	   	if($i %2==0){
	
 	   echo $i."<br>";

 	   	}
 	   } 
 	 ?>
 </section>
 <footer>
 	<h5>Prof Clayton</h5>
 </footer>
</body>
</html