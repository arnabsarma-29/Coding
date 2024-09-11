echo "Enter 2 numbers : "
read a b
Addition=`expr $a + $b`
Substraction=`expr $a - $b`
Multiplication=`expr $a \* $b`
Division=`expr $a / $b`
echo "Addition = $Addition"
echo "Substraction = $Substraction"
echo "Multiplication = $Multiplication"
echo "Division = $Division"