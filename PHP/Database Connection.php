<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=, initial-scale=1.0">
	<title>Document</title>
</head>
<body>
</body>
</html>
	<?php
	$servername="localhost";
	$username="root";
	$password="";
	$database="registration";
	//Create Connection
	$conn = new mysqli($servername,$username,$password,$database);
	//check connection
	If($conn->connect_error)
	{
		die("Connection Failed:". $conn->connect_error);
	}
	echo"Connected Successfully";