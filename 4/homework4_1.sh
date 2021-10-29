read -p "ввведите имя файла: " file
read -p "введите расширения: " extension
#echo "$file" "$extension" 

#echo "$file -> ${file%.*}.$extension"
mv "$file" "${file%.*}.$extension"


