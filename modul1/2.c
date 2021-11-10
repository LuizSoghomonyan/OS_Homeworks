//Напишите программу, которая в качестве аргумента получает путь к файлу и отображает размер файла в байтах,   идентификатор пользователя-владельца и дату создания.
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <fcntl.h> // for open
#include <unistd.h> // for close

int main(int argc, char **argv)
{
	int fp1,fp2,fp3;
	char *buffer;
	if ((fp1 = open(argv[1], O_RDONLY,0)) == -1)
		printf("%-20s", "Не удалось открыть файл.\n");
		
	struct stat t_stat;
	stat(argv[1], &t_stat);
	struct tm * timeinfo = localtime(&t_stat.st_ctime); 
	printf("дата создания: %s", asctime(timeinfo));
	printf("размер файла в байтах: %ld\n", t_stat.st_size);
	printf("идентификатор пользователя-владельца: %d\n", t_stat.st_uid);

	close(fp1);
    return 0;
}
