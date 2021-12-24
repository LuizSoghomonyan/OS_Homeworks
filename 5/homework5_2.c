//2. Написать программу на Си, которая получает на вход 2 файла A и B. Далле открывает/создает новый файл C и копирует содержимое первого файла A в файл C, после чего добавляет содержимое второго файла B в конец файла C.
#include <stdio.h> 
#include <fcntl.h> // for open
#include <unistd.h> // for close

int main(int argc, char **argv) {

int fp1 = open(argv[1], O_RDONLY,0);


if(remove(argv[1])) {
printf("Error removing file\n");

}

  close(fp1);
  return 0;
}

