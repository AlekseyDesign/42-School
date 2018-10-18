for src in *.c
do
gcc -Wall -Wextra -Werror -c $src
done
ar -rc libft.a *.o
rm -rf *.o
