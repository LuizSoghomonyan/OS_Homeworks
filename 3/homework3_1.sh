#Homework3.1
#1.  Сохранить историю (history) терминала в файле и заменить все команды “ls” на “list directory”
history > history_list.txt
sed -i 's/ls/list directory/' history_list.txt
cat history_list.txt



