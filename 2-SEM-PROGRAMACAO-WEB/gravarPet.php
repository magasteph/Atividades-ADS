<!doctype html> 
<!-- Salvar na pasta PETSHOP criada na pasta www
do Wamp Server com nome gravarPet.php -->
<html lang="pt-br">
	<head>
		<meta charset="UTF-8">
		<title>Gravando Pet</title>
	</head>
	
	<body>

	<?php
		/* salvar como gravarPet.php
		 Dados de formulário chegam no php
		 Depende de método de envio: get / post

		 Dados de formulário
		 ====================
		 $_GET["nome do objeto -"]
		 $_POST["nome do objeto do formulário"]
		
		 Arquivos - formulário
		 $_FILE[""
		
		 1 - receber os dados da matriz 
			 passar da matriz para variáveis
		*/
		
		$nome = $_POST["nome"];
		$tipo = $_POST["tipo"];
		$sexo = $_POST["sexo"];
		$idade = $_POST["idade"];
		$peso = $_POST["peso"];
		$dono = $_POST["dono"];
		$vacinado = $_POST["vacinado"];
		
		$ultimaConsulta = $_POST["ultimaConsulta"];
		$medico = $_POST["medico"];
		$obs = $_POST["obs"];
		
		// arquivo vem da matriz $_FILES[]
		$foto   = $_FILES["foto"]["name"];
		$tamanho= $_FILES["foto"]["size"];
		$tipoAr = $_FILES["foto"]["type"];
		$nomeTmp= $_FILES["foto"]["tmp_name"];
		
		// 2 - MOSTRAR AS INFORMAÇÕES QUE CHEGARAM
		echo "<h1>Dados recebidos</h1>";
		//echo "Nome: " . $_POST["nome"] . "<br>";
		echo "<hr>";
		
		echo "Nome: $nome <br>";
		echo "Tipo: $tipo <br>";
		echo "Sexo: $sexo <br>";
		echo "Idade: $idade<br>";
		echo "Peso: $peso<br>";
		echo "Dono: $dono<br>";
		echo "Vacinado: $vacinado<br>";
		echo "Última Consulta: $ultimaConsulta<br>";
		echo "Médico: $medico<br>";
		echo "Observações:<br>$obs<br>";
		echo "<h2>Arquivos recebidos</h2>";
		echo "Nome do arquivo: $foto <br>";
		echo "tamanho: $tamanho bytes <br>";
		echo "Tipo do arquivo: $tipoAr <br>";
		echo "Nome temporário: $nomeTmp <br>";
	?>
	</body>
</html>
<hr>