#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int argc,char * argv[]){
   int source,destination;
   source = open(argv[1], O_RDONLY);
if (source < 0 )
 { 
   printf("Could not open the file");
   return -1;
 }
destination = open(argv[2],O_CREAT | O_RDWR | S_IWUSR, 0666);

if(destination < 0){
    printf("Could not create the file");
    return -1;
 }
int size = atoi(argv[3]);
int buffer[size];
int counter = 0;
while((counter = read(source, buffer, size)) >0)
write(destination,buffer,size);


close(source);
close(destination);
return 0;
}
