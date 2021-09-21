# list/Makefile
#
# Makefile for list implementation and test file.
#
# <Gerone Hamilton Jr.>
list: main.c list.c list.h
	gcc main.c list.c -o final -I.