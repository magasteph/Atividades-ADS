<?php
	// salvar como listaUsuarios.php
	$con=mysqli_connect("localhost","root","");
	
	mysqli_select_db($con, "petshop") or 
		die( mysqli_error($con) );
		
	$sql = "SELECT * FROM usuarios ORDER BY login";
	
	$registros = mysqli_query($con, $sql) or 
		die( mysqli_error($con) );
		
	$linhas = mysqli_num_rows($registros);
	
	if($linhas<1)
		die("Tabela está vazia!");
	
	$n=0;
	while($n<$linhas)
	{
		$dados = mysqli_fetch_array($registros);
		echo "Login: " . $dados["login"]."<br>";
		echo "Senha: " . $dados["senha"]."<hr>";
		$n++;
	}
?>