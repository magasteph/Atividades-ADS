<?php
	// salvar como logar.php
	// 1 - Receberá os elementos login e senha
	// do form. 
	$login = $_POST["login"] ;
	$senha = $_POST["senha"] ;
	
	// 2 - Conectará no MYSQL
	$con=mysqli_connect("localhost", "root", "");
	
	// 3 - Abrirá o banco PETSHOP
	mysqli_select_db( $con, "petshop") or 
		die(
			"Erro na abertura do banco." . 
			mysqli_error($con)
		);
	
	// 4 - Fazer a busca do login n/tabela usuarios
	// Criar uma variável com o comando SQL de 
	// seleção de dados
	$sql="SELECT * FROM usuarios WHERE login='$login'";

	// Mostro temporariamente o comando na tela
	// copio o resultado da tela p/o console do mysql
	// se der erro, arrumo
	// se funcionar, escondo a exibição do comando abaixo
	// echo $sql;
	
	// Enviar este comando de seleção que está na variável 
	// p/o MYSQL
	$registros = mysqli_query($con, $sql) or 
		die(
		"Erro na execução da localização do usuário:" .
			mysqli_error($con)
		);
	
	// Variável c/ número de registros obtidos
	$linhas = mysqli_num_rows($registros);
	
	// Exibir o número de linhas / registros na tela
	echo "Encontrados $linhas registros<br>";

	// Se for menor que 1 é porque não encontrou
	// o/a usuário/a
	if ($linhas < 1)
	{
		die("Usuário (a) informado (a) não encontrado(a)");
	}
	
	// Puxar a senha de $registros (do banco de dados)
	$dados=mysqli_fetch_array($registros);
	
	// Validar o usuário
	// é verificar se a senha informada ($senha)
	// é igual à senha do banco de dados: $dados["senha"];

	if ($senha==$dados["senha"])
	{
		echo "Acesso liberado!";
	}
	else
	{
		echo "Usuário ou senha incorreta.";
	}

?>