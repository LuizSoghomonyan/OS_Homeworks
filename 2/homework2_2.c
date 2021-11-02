//2. Написать программу на Си, которая получает на вход 2 файла A и B. Далле открывает/создает новый файл C и копирует содержимое первого файла A в файл C, после чего добавляет содержимое второго файла B в конец файла C.
#include <stdio.h>
int main() {
  FILE *fp1;
  FILE *fp2;
  FILE *fp3;
  char st1[256];
  char st2[256]; 
  char st3[256]; 
fp1 = fopen("file1.txt", "r+");
fp2 = fopen("file2.txt", "r+");
fp3 = fopen("ans.txt", "w");


while((fgets(st1, 256, fp1))!=NULL)
{
	//printf("%s", st1);//распечатывает содержимое файла
	fputs(st1, fp3);//zapis v file
}


while((fgets(st2, 256, fp2))!=NULL)
{
	//printf("%s", st1);//распечатывает содержимое файла
	fputs(st2, fp3);
}

  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  getchar();
  return 0;
}

