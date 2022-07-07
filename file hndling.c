#include <stdio.h>
#include <stdlib.h>
//comment
int main(){
   FILE *f1, *f2;
   char fname[100], c, ch;
   printf("Enter the filename to open for reading ");
   scanf("%s",fname);
   f1 = fopen(fname, "r");
   if (f1 == NULL){
      printf("Cannot open file %s \n", fname);
      exit(0);
   }
   printf("Enter the filename to open for writing ");
   scanf("%s", fname);
   f2 = fopen(fname, "w");
   if (f2 == NULL){
      printf("Cannot open file %s \n", fname);
      exit(0);
   }
   c = fgetc(f1);
   while (c != EOF){
      fputc(c,f2);
      c=fgetc(f1);
   }
   printf("\nCopied to %s", fname);
   c=fgetc(f2);
   do {
        ch=fgetc(f2);
        printf("%c", ch);
    } while (ch!= EOF);
   fclose(f1);
   fclose(f2);
   return 0;
}
