#!/bin/bash

gcc -Wall -Werror -Wextra -c *.c

ar rc libschool.a *.o

ranlib libschool.a

