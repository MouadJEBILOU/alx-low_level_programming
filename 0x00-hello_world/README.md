TASK 0 : Write a script that runs a C file through the preprocessor and save the result into another file :
#!/bin/bash
[ -z "$CFILE" ] || [ ! -f "$CFILE" ] && echo "CFILE is not defined or the file does not exist" || gcc -E "$CFILE" -o c

TASK 1 : Write a script that compiles a C file but does not link :
