//3. Написать программу на Си, которая печатает информацию о  времени создания, имени и размера файлов в заданной диреткории.


#include <sys/stat.h>
#include <time.h>
#include <stdio.h>



int main(int argc, char **argv)
{
    struct stat t_stat;
    stat("file1.txt", &t_stat);
    struct tm * timeinfo = localtime(&t_stat.st_ctime); // or gmtime() depending on what you want
    printf("File time and date: %s", asctime(timeinfo));


    return 0;
}
