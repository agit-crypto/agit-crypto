#1. Написать программу, который из командной строки получает целое число N и некоторый текст “Text”. Как результат программа должен создать N файлов (file_1.txt, …, file_N.txt) в каждом из которых написан, “Hello world I”, где значение I совпадает с значением номера файла.




read -p "Enter a positive integer: " count
read -p "Text: " text

for (( i=1; i <= $count; i++ ))
do
	echo $text$i > "File$i"
	cat "File$i"
done
