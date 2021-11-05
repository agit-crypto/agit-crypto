//1.2 Написать программу, который из командноՏй строки получает целое число N 
//и некоторый текст “Text”. Как результат программа должен создать N файлов
//(file_1.txt, …, file_N.txt) в каждом из которых написан, “Hello world I”, 
//где значение I совпадает с значением номера файла.


#include <stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include <sys/stat.h>
#include<fcntl.h>
#include <string.h>

int main(void) {
    
  int N;
  scanf("%d", &N);
  while(N != 0)
  {
    char path[25];
    snprintf(path, 25, "file_%d.txt", N);
    creat(path, O_WRONLY);
    int str_open = open (path, O_WRONLY);
    
    char text[25]; //cuz C um normal string chka:)
    snprintf(text, 25, "Hello world%d", N);
    write(str_open, text, 25);
    close(str_open);
    N--;
  }
}