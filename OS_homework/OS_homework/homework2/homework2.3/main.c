//2  Написать программу на Си, которая получает на вход 2 файла A и B. Далле открывает/создает новый файл C и копирует содержимое первого файла A в файл C, после чего добавляет содержимое второго файла B в конец файла C.
#include <stdio.h>
int main(){
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    
    
    char string0[256];
    char string1[256];
    char string2[256];
    
    fp1 = fopen("file1.txt","r+");
    fp2 = fopen("file2.txt","r+");
    fp3 = fopen("ans.txt", "w");
    
    while ((fgets(string0, 256, fp1))!=NULL){
        //printf("%s",string0); 
        fputs(string1, fp3);
    }
     while ((fgets(string1, 256, fp2))!=NULL){
        //printf("%s",string0); 
        fputs(string2, fp3);
    }
    
    
     fclose(fp0);
 fclose(fp1);
 fclose(fp2);
getchar();
return 0;
}