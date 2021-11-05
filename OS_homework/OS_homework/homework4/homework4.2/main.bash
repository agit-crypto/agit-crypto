read -p "Enter directory: " dir

if [ -d $dir ]
then
	for elem in `ls $dir`
	do
		echo $elem
	done
else
	echo "directory not found"
fi