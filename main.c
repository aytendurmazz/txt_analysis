    #include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char character;
    int frequency[5]={0};
    if((dosya=fopen("a.txt","r"))!=NULL)
     {
         character=fgetc(dosya);
         while(character!=EOF)
         {
            if((isspace(character)>0)  ){
                frequency[0]++;
            }
            else if ((isdigit(character))> 0){
                frequency[1]++;
            }
            else if((isupper(character))> 0){
                frequency[2]++;
            }
            else if((islower(character))>0){
                frequency[3]++;
            }
            else if((ispunct(character))>0){
                frequency[4]++;
            }
            character=fgetc(dosya);
         }
         frequency[0]++;

         fclose(dosya);
     }
    else
    {
        printf("File is not found");
    }
    printf(" %30s%4d    ","Word Number :",frequency[0]);
         for(int i = 0 ; i< frequency[0];i++){
            printf("%c",'*');
         }
         printf("\n");
         printf(" %30s%4d    ","Number of digits :",frequency[1]);
         for(int j = 0 ; j< frequency[1];j++){
            printf("%c",'*');
         }
         printf("\n");
         printf(" %30s%4d    ","Number of capital letters :",frequency[2]);
         for(int k = 0 ; k< frequency[2];k++){
            printf("%c",'*');
         }
         printf("\n");
         printf(" %30s%4d    ","Number of lowercase letters :",frequency[3]);
         for(int l = 0 ; l< frequency[3];l++){
            printf("%c",'*');
         }
         printf("\n");
         printf(" %30s%4d    ","Number of punctuation marks :",frequency[4]);
         for(int m = 0 ; m< frequency[4];m++){
            printf("%c",'*');
         }
    return 0 ;
}
