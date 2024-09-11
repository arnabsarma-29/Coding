echo "Enter the string : "
read s
echo "Enter the charecter : "
read c
x=`expr index $s $c`
echo "Position Of Charecter Is : $x"