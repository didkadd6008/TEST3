#include <stdio.h>

int main(int argc,char* argv[]){
    FILE* f1 = fopen("variant1binary.txt","rb");
    if (NULL == f1)
    {
       perror("Error!");
       return 1;
    }
     FILE* f2 = fopen("variant1.txt","w");
    
    char ch;
    while(ch = fgetc(f1) != EOF){
        fputc(ch,f2);
    }
    
    
   fclose(f1);
   fclose(f2);

   FILE* fp1 = fopen(argv[1],"r");
    if (NULL == fp1)
    {
       perror("Error!");
       return 1;
    }
   FILE* fp2 = fopen(argv[2],"wb");
  
  int num;

   while (!feof(fp1)){
    fread(&ch, sizeof(char), 1, fp1);
              
                num = ch;
                
                fwrite(&num, sizeof(int), 1, fp2);
   }

        fclose(fp1);
        fclose(fp2);
        return 0;
        
}
   

