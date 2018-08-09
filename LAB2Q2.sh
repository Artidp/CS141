# 1/bin/bash


echo "What is your name?"
read NAME
echo "Welcome $NAME"
echo "This file is programmed by NIKHIL KESHAV-1811097"
mkdir $NAME
cd $NAME
for i in 1 2 3 4 5
do 
	touch $NAME"$i".cpp
done

