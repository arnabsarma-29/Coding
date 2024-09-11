<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta http-equiv="X-UA-Compatible" content="IE=edge">
	<meta name="viewport" content="width=\, initial-scale=1.0">
	<title>Document</title>
</head>
<body>
</body>
</html>
<?php
include "Database Connection.php";
$txtname=$_post['txtName'];
$txtEmail=$_post['txtEmail'];
$txtphone=$post['txtphone'];
$txtmessage=$_post['txtmessage'];
$sql="INSERT INTO 'registration'('id','fldEmail','fldphone','fldmessage');
VALUES('0','$txtName','$txtEmail','$txtphone','$txtMessage')";
//insert into database
$rs=mysqli_query($conn,$sql);
if($rs)
{
	echo"Contact records inserted";
	}