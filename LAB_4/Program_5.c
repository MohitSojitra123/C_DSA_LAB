// Write a program to check if the string is a palindrome or not using Pointer. 

#include<stdio.h>
#include<string.h>
#include<stdbool.h>


int main(){
    
      char str[30];

      printf("Enter Strgin To Check String In Palindrom Or Not : ");
      scanf("%s",&str);

      int ch_len=strlen(str);

      int end=ch_len-1;
      bool Ispalindrom=true; 

    char *start_ptr=str;  
    char *end_ptr=str;  


      for(int i=0; i<ch_len; i++){
            if(i<end){
                  if(*(start_ptr+i) != *(end_ptr+end)){
                       Ispalindrom=false;
                        break;
                  }else{
                        end--;
                  }
            }
      }
      
      if(Ispalindrom){
        printf("Strgin Is Palindrom : %s \n",str);
    }else{
          printf("Strgin Is Not Palindrom : %s \n",str);
      }


}