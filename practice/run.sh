g++ "$1"
if [ "$2" == "" ]
then 
  ./a.out 
else
  ./a.out < "$2"
fi

