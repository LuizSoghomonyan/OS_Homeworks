touch file3.txt
file1="file1.txt"
file2="file2.txt"
n1=10
n2=5
head -n $n1 $file1 > file3.txt

tail -n $n2 $file2 >> file3.txt
cat file3.txt

#rm file3.txt
