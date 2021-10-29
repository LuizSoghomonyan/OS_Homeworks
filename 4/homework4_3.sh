read -p "введите директорию: " dir
read -p "введите число: " num
if [ -d $dir ]
then
	for elem in `ls $dir`
	do
		if [ ${#elem} -gt $num ]
		then
			echo $elem
		fi	
	done
else
	echo "директория не найдена"
fi
