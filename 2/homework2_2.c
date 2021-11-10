//2. Написать программу на Си, которая получает на вход 2 файла A и B. Далле открывает/создает новый файл C и копирует содержимое первого файла A в файл C, после чего добавляет содержимое второго файла B в конец файла C.
#include <stdio.h> 
#include <fcntl.h> // for open
#include <unistd.h> // for close

int main() {
 // FILE *fp1;
 // FILE *fp2;
 // FILE *fp3;
  int fp1,fp2,fp3;
  char buffer[200];
  ssize_t n_write, n1w,n2w;
//fp1 = open("file1.txt", "r+");
//fp2 = open("file2.txt", "r+");
//fp3 = open("ans.txt", "w");
if ((fp1 = open("file1.txt", O_RDONLY,0)) == -1)
	printf("%-20s", "Не удалось открыть файл - file1.txt\n");
if ((fp2 = open("file2.txt", O_RDONLY,0)) == -1)
	printf("%-20s", "Не удалось открыть файл - file2.txt\n");

if(remove("ans.txt")) {
printf("Error removing file");

}



   //fp3 = open("ans.txt", O_WRONLY | O_APPEND);
 fp3 = open("ans.txt",O_CREAT, 0200|0400);
 if(fp3 < 0)
 	printf("%-20s", "Не удалось создать файл - ans.txt\n");


lseek(fp3, 0, SEEK_SET);
while((n_write = read (fp1,  buffer, 100)) > 0)
{	
	printf("%s\n", buffer);
       n1w = write(fp3, buffer, n_write);
       
       if(n1w < 0) printf("%-20s", "Не удалось записать содержимое файла1\n");
}

 //for(int i = 0; i < 512; i = i + 1)
 //   printf("%c\t",buffer[i]);

  write(fp3, "aaassssssss", 7);
  read (fp3,  buffer, 10) ;
  printf("%s\n", buffer); 
 
  close(fp3);
  close(fp1);
  close(fp2);

  //getchar();
  return 0;
}

