#3.1.  Сохранить историю (history) терминала в файле и заменить все команды “ls” на “list directory”
history > hl_file.txt
sed -i 's/ls/list directory/' hl_file.txt
cat hl_file.txt


