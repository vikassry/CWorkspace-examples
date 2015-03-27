file=$1
gcc -c ${file}.c binary_print.c && gcc ${file}.o binary_print.o -o ${file}