 #include<stdio.h>
 
 int main() {
     FILE *ptr;
    //  ptr=fopen("sample.txt","r");// --> Reading The File
     ptr=fopen("sample.txt","w");// --> Writing The File
     
     return 0;
 }