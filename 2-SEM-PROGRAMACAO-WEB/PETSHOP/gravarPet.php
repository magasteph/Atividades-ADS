<?php
	// salvar na pasta PETSHOP dentro de www
	// salvar como gravarPet.php
	// 1 - Criar variáveis p/cada objeto form
	$nome 	= $_POST["nome"];
	$tipo 	= $_POST["tipo"];
	$sexo 	= $_POST["sexo"];
	$idade	= $_POST["idade"];
	$peso 	= $_POST["peso"];
	$dono 	= $_POST["dono"];
	$vacinado=$_POST["vacinado"];
	$ultimaConsulta=$_POST["ultimaConsulta"];
	$medico	= $_POST["medico"];
	$obs 	= $_POST["obs"];
	
	// 2 - Validar os dados
	// O nome está vazio?
	if ($nome == "")
	{
		die("O nome deve ser informado!");
	}	
	// O tipo foi escolhido?
	if ($tipo =="")
	{
		die("Informe o tipo!");
	}
	// Validar a idade (0 a 99)
	if ( ($idade < 0) or ($idade >99) )
	{
		die("Idade do pet deve estar entre 0 e 99!");
	}
	// Peso deve estar entre 0 e 99.999
	if(($peso <0) or ($peso > 99.999))
	{
		die("Peso deve estar entre 0 e 99.999");
	}	
	// Validando o nome do dono
	if ($dono =="")
	{
		die("Nome do dono deve ser informado!");
	}
	
	// 3 - Mostrar os dados na tela
	echo "<h1>Pet a ser gravado...</h1>";
	echo "Nome: $nome <br>";
	echo "Tipo: $tipo <br>";
	echo "Sexo: $sexo <br>";
	echo "Idade:$idade <br>";
	echo "Peso: $peso <br>";
	echo "Dono: $dono <br>";
	echo "Vacinado: $vacinado <br>";
	echo "Última Consulta: $ultimaConsulta <br>";
	echo "Médico: $medico <br>";
	echo "Observações:<br> $obs <br>";	
	
	// 4 - Conectar no MYSQL
	$con=mysqli_connect("localhost","root" ,"" );
	
	// 5 - Abrir/USAR o banco de dados PETSHOP
	mysqli_select_db( $con, "PETSHOP") or 
		die(
			"Erro na abertura do banco:"  . 
			mysqli_error($con)
		);
/*	CODE SHARE:	https://codeshare.io/bv3DJ6	*/
	// 6 - Criar a variável c/comando inserção SQL
	$sql="INSERT INTO  pets
	(	nome, 	tipo, 	sexo,    
		idade,  peso,   dono, 	
		vacinado,  	ultimaConsulta, 
		medico, obs) VALUES
		
	(	'$nome', '$tipo','$sexo',
		'$idade','$peso','$dono',
		'$vacinado','$ultimaConsulta', 
		'$medico', 	'$obs' )";
		
	// 7 -Enviar a variável SQL p/o MYSQL
	mysqli_query($con, $sql) or 
		die(
			"Erro na inserção:" .
			mysqli_error($con)
		);
	
	// 8 - Não deu erro  avisar usuário
	echo "Pet $nome inserido com sucesso!";
	
?>