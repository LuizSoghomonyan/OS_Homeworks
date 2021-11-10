#task1
read -p "введите файл: " FILE
if [ -f "$FILE" ]; then
    echo "$FILE найден."
else 
    echo "$FILE не найден."
fi

chmod 444 $FILE
ls -l $FILE
