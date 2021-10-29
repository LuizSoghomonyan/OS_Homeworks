read -p "введите директорию: " dir

if [ -d $dir ]
then
	for elem in `ls $dir`
	do
		echo $elem
	done
else
	echo "директория не найдена"
fi
