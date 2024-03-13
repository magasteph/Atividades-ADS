<!doctype html> 
<html lang="pt-br">
	<head>
		<meta charset="UTF-8">
		<title>Listagem de usuários</title>
	</head>
	<body>

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
		echo "<table border='1'>";
		echo "	<tr>";
		echo "		<th>Login</th>";
		echo "		<th>Senha</th>";
		echo "	</tr>";
		while($n<$linhas)
		{
			echo "	<tr>";
			$dados = mysqli_fetch_array($registros);
			echo "<td>" . $dados["login"]."</td>";
			echo "<td>" . $dados["senha"]."</td>";
			echo "	</tr>";
			
			$n++;
		}
		echo "</table>";
	?>
	</body>
</html>