touch result.txt

file1 = "first.txt"
file2 = "second.txt"

a = 10
b = 5

head --n $a $file1 > result.txt

tail --n $b $file2 >> result.txt

cat result.txt

