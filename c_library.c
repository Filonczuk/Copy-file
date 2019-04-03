#include<stdio.h>
#include<stdlib.h>
int main(int argc,char * argv[]){
   FILE *source,*destination;
   source = fopen(argv[1],"r");
if (source == NULL)
 { 
   printf("Could not open the file");
   return -1;
 }
destination = fopen(argv[2],"w+");

if(destination == NULL){
    printf("Could not create the file");
    return -1;
 }
int size = atoi(argv[3]);
char buffer[size];
int counter = 0;
while((counter = fread(buffer,sizeof( char ), size, source)) >0)
fwrite(buffer,sizeof(char),counter,destination);


fclose(source);
fclose(destination);
return 0;
}
