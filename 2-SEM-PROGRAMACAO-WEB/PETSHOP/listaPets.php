<!doctype html> 
<html lang="pt-br">
    <head>
        <title>Listagem</title>
        <meta charset="UTF-8">
    </head>
    <body>
        <h1>Listagem Pet</h1>
		<?php 

		// 1 - Abrindo a conexão com o MYSQL
		$con = mysqli_connect("localhost","root","");
	
		// 2 - Abrindo/selecionando o banco de dados
		mysqli_select_db($con,"petshop") or 
			die("Erro na abertura do banco: " . 
					mysqli_error($con));

		// 3 - Criando o comando de inserção SQL numa variável
		$sql = "SELECT * FROM pets";
		
		// 4 - Enviando o comando para o mysql
		$registros = mysqli_query($con, $sql) or 
			die("Erro na gravação do agendamento: " . 
				mysqli_error($con));
				
		// 5 - Quantas linhas tem dentro de $registros?
		$linhas = mysqli_num_rows($registros);
		
		// 6 - se estiver vazio, para, pois não tem pets
		if($linhas==0)
			die("Tabela vazia");
		
		echo "<table border='1'>";
		echo "	<tr>";
		echo "		<th>Nome</th>";
		echo "		<th>Tipo</th>";
		echo "		<th>Idade</th>";
		echo "		<th>Peso</th>";
		echo "	</tr>";
		// mostrar os dados num loop
		for($n=0;$n<$linhas;$n++)
		{
			// mostrar as coisas na tela
			$dadosLinha = mysqli_fetch_array($registros);
			
			$nome = $dadosLinha["nome"] ;
			$tipo = $dadosLinha["tipo"] ;
			$idade= $dadosLinha["idade"] ;
			$peso = $dadosLinha["peso"] ;
			echo "<tr>";
			echo "	<td>$nome</td>";
			echo "	<td>$tipo</td>";
			echo "	<td>$idade</td>";
			echo "	<td>$peso</td>";
			echo "</tr>";
		}
		echo "</table>";
?>

 </body>
</html>