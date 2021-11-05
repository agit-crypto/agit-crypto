//2.1 Написать программу на Си, которая печатает информацию о  времени создания, имени и размера файлов в заданной диреткории.

#include <sys/stat.h>
#include <stdio.h>
#include <sys/uio.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char **argv){
    struct stat t_stat;
    stat("file1.txt", &t_stat);
    struct tm * timeinfo = localtime(&t_stat.st_ctime);
    int fileSize = t_stat.st_size;
    printf("File creation time and date: %s", asctime(timeinfo));
    printf("Total file size: %lu bytes\n", t_stat.st_size);
}