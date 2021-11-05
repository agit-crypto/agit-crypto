read -p "Enter file name: " file
read -p "Enter extension: " extension

mv "$file" "${file%.*}.$extension"