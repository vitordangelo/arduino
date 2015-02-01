<form action=# method=post>
	RED: <input type=text name=red></br>
	<input type=submit name=enviarred value='Enviar'></br>
</form>

<form action=# method=post>
	GREEN: <input type=text name=green></br>
	<input type=submit name=enviargreen value='Enviar'></br>
</form>

<form action=# method=post>
	BLUE: <input type=text name=blue></br>
	<input type=submit name=enviarblue value='Enviar'></br>
</form>

<?php
	$port = fopen("/dev/ttyUSB0", "r"); //Aciona a porta serial. "w+" = leitura e escrita
	if (isset($_POST['enviarred']))
	{
		echo "RED: ".$_POST['red']."<br>";
		echo "Enviado"."<br>";
		echo "<br>";
		$red = $_POST['red'];
		fwrite($port,$red);
	}
	if (isset($_POST['enviargreen']))
	{
		echo "GREEN: ".$_POST['green']."<br>";
		echo "Enviado"."<br>";
		echo "<br>";
		$green = $_POST['green'];
		fwrite($port,$green);
	}
	if (isset($_POST['enviarblue']))
	{
		echo "BLUE: ".$_POST['blue']."<br>";
		echo "Enviado"."<br>";
		echo "<br>";
		$blue = $_POST['blue'];
		fwrite($port,$blue);
	}	

		while (true) 
		{
		 	$bytes = fread($port, 1024); // Lendo uma linha da conexão, até 1024 bytes
			if (strlen($bytes) > 0) // Se o Arduino enviou algo ...
			{ 
		    	echo $bytes; // Imprimimos
		    	sleep(1);
			}
		}
		fclose($port);
		ini_set('max_execution_time', 300); //300 seconds = 5 minutes

	 
	  	
?>