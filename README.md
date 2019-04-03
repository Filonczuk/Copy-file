Two programs to copy files:

- c_library.c - program using the library functions of the language C fread / fopen / fclose / fwrite. 
- copy_linux_functions.c -program using system calls Linux read / open / close / write.

You can call them in the following way:
$ ./copy source destination bsize
 
Where 'copy' is the name of the program, source is the name of the source file, the 'destination' is the target file 
and the 'bsize' is an integer specifying the size of dynamically alloceted buffer.
 
Remmember to compile the program befor running.
gcc copy.c -o program

