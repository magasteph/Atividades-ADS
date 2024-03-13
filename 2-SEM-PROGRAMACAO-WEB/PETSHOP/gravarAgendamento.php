<!doctype html> 
<html lang="pt-br">
    <head>
        <title>Agendamento de Serviço para Pet</title>
        <meta charset="UTF-8">
    </head>
    <body>
        <h1>Agendamento do Pet</h1>
<?php 
    // salvar como gravarAgendamento.php
	// na pasta PETSHOP
    
    // 1 - Receber os dados em variáveis
    $data        = $_POST["data"];
    $hora        = $_POST["hora"];
    $situacao    = $_POST["situacao"];
    $nomePet     = $_POST["nome"];
    $tipo        = $_POST["tipo"];
    $atendente   = $_POST["atendente"];
    $tipoServico = $_POST["tipoServico"];
    $valor       = $_POST["valor"];
    
    // Tratando o checkbox
    $pago = 0; // valor padrão
    
    // se está ticado, então atualizo a variávei
    if(isset($_POST["pago"]))
        $pago        = $_POST["pago"];
    
    $cupom      = $_POST["cupom"];
    $obs        = $_POST["obs"];
        
    // Recebendo dados do arquivo (se ele tiver sido enviado)
    $ArquivoNome     = $_FILES["documento"]["name"];
    $ArquivoTipo     = $_FILES["documento"]["type"];
    $ArquivoTamanho  = $_FILES["documento"]["size"];
    $ArquivoNomeTmp  = $_FILES["documento"]["tmp_name"];
	
	// Recebendo dados da foto (se ela tiver sido enviado)
    $ArquivoFoto         = $_FILES["foto"]["name"];
    $ArquivoFotoTipo     = $_FILES["foto"]["type"];
    $ArquivoFotoTamanho  = $_FILES["foto"]["size"];
    $ArquivoFotoNomeTmp  = $_FILES["foto"]["tmp_name"];
    
    // 2 - Validação básica
	date_default_timezone_set('America/Sao_Paulo');
	
	
	
    /* if($data < date("Y/m/d") )
    {
            // d = dia com 2 dígitos
            // m = mês com 2 dígitos
            // Y = Ano com 2 dígitos
            // Fomato de saída: DD/MM/AAAA
        die("Data não pode ser menor do que hoje!");
    }
    */
	
    // Situação deve ser: A=Agendado, E=Em execução, F=Finalizado, c=Cancelado
	
    if($situacao!="A")
    {
        if($situacao!="E")
        {
            if($situacao!="F")
            {
                if($situacao!="C")
                {
                    die("A situação não foi selecionada corretamente");
                }
            }
        }
    }
    
    // Tipo deve ser: C=Cachorro, G=Gato, P=Pássaro, R=Réptil, O=Outros
    if($tipo!="C")
    {
        if($tipo!="G")
        {
            if($tipo!="P")
            {
                if($tipo!="R")
                {
                    if($tipo!="O")
                    {
                        die("O tipo não foi selecionado corretamente");
                    }
                }
            }
        }
    }    
    
    // Nome não pode ficar vazio
    if($nomePet=="")
    {
        die("Nome do Pet não pode ficar vazio");
    }    
    
    // Validando o tipo do serviço
    switch($tipoServico){
        case "BNH":
            $textoServico="Banho Simples";
            break;
        case "TOS":
            $textoServico="Tosa Simples";
            break;
        case "BNT":
            $textoServico="Banho Completo com Tosa";
            break;
        case "VET":
            $textoServico="Consulta Veterinária";
            break;
        case "O":
            $textoServico="Serviço Especial";
            break;
        default:
            die("Você deve escolher corretamente o tipo do animal");
    }
    
    // Validando o valor
    if($valor<=0)
        die("Verifique o valor do serviço, pois está incorreto!");
    
    $desconto = 0; // inicializando o valor do desconto - valor padrão=0
    
    if($cupom<>"")
    {
        $cupomValido=true; // flag/ valor padrão da variável
        
        /* Cupom informado - validando...
            BLACKFRIDAY - válido para todos os serviços exceto consulta veterinária
            Desconto de 15%
        */
        if($cupom=="BLACKFRIDAY")
        {
            // Aplicando 15% s/valor
            $desconto=$valor*15/100;
        }
        else
        {
            // BANHOLEGAL - Válido para os banhos 
			// - dá 50% de desconto
            if( ($cupom=="BANHOLEGAL") AND ( ($tipoServico=="BNH") or ($tipoServico=="BNT") )  )
            {
                // Aplicando 50% s/valor
                $desconto=$valor*50/100;
            }
            else
            {
                // Cupom inválido
                // setar flag como invalido
                $cupomValido=false;
            }
        }
    }
    // 3 - Exibir dados
    echo "Data do agendamento: $data <br>";
	echo "Hora do agendamento: $hora <br>";
    echo "Situação: $situacao <br>";
	echo "Nome do Pet: $nomePet <br>";
	echo "Tipo do Pet:$tipo <hr>";
    echo "Tipo de Serviço: $tipoServico <br>";
    echo "Atendente:$atendente <br>";
	echo "Valor do Serviço: R$ ";
	
	echo number_format($valor,2,"," , ".");

	echo "<br>";
	echo "Cupom: $cupom <br>";
	
	if($pago)
	{
		echo "Serviço está pago!";
	}
	else
	{
		echo "Serviço deve ser pago!";
	}
	
	// Exibir dados do documento - caso tenha sido enviado
	if($ArquivoNome<>"") {
		echo "<fieldset>";
		echo "	<legend>Documento</legend>";
		echo "	Nome do arquivo/documento:$ArquivoNome<br>";
		echo "	Tipo: $ArquivoTipo<br>";
		echo "	Tamanho: $ArquivoTamanho bytes <br>";
		echo "	Nome Temporário: $ArquivoNomeTmp<br>";
		echo "</fieldset>";
		
		// mover o arquivo para a pasta docs
		$destino = "docs//$ArquivoNome";
		move_uploaded_file($ArquivoNomeTmp,$destino);
	}
	
	// Exibir dados da foto - caso tenha sido enviado
	if($ArquivoFoto<>"") {
		echo "<fieldset>";
		echo "	<legend>Foto</legend>";
		echo "	Nome do arquivo (foto):$ArquivoFoto<br>";
		echo "	Tipo: $ArquivoFotoTipo<br>";
		echo "	Tamanho: $ArquivoFotoTamanho bytes <br>";
		echo "	Nome Temporário: $ArquivoFotoNomeTmp<br>";
		$destino="imgs//$ArquivoFoto";
		move_uploaded_file($ArquivoFotoNomeTmp,$destino);
		echo "	<img src='$destino' width='250'>";

		echo "</fieldset>";
		
	}
	
    // 4 - Abrindo a conexão com o MYSQL
    $con = mysqli_connect("localhost","root","");
	
	// 5 - Abrindo/selecionando o banco de dados
    mysqli_select_db($con,"petshop") or 
        die("Erro na abertura do banco: " . 
				mysqli_error($con));

    // 6 - Criando o comando de inserção SQL numa variável
    $sql = "INSERT INTO agendamentos
    (data, hora, nomePet , tipo ,atendente ,tipoServico ,valor ,pago, cupom,status, obs,documento) VALUES 
    ('$data', '$hora','$nomePet', '$tipo', '$atendente', '$tipoServico','$valor','$pago', '$cupom','$situacao','$obs','$ArquivoNome')";

	// 7 - Enviando o comando para o mysql
    mysqli_query($con, $sql) or 
        die("Erro na gravação do agendamento: " . mysqli_error($con));
		
    // 8 - Encerrando
    echo "Agendamento efetuado com sucesso!"; 
?>
	Clique <a href="agendamento.html">aqui</a> para realizar um novo agendamento.
 </body>
</html>