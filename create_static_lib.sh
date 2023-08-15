#!/bin/bash


gcc -wall -pedantic -werror -wextra -std=gnu89 -c*.c

ar -rc libschool.a *.o ranlib libschool.a
