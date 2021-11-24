#  ---------------------     MAKEFILE -----------------------------

all: holamundo 

holamundo: holamundo.o
	gcc holamundo.o -o holamundo


#than go the diferent objects and how they will be created -------------------------

#the object main.o is created with main.cpp
holamundo.o: holamundo.c
	gcc -c holamundo.c


clean: 
	del *.o, del holamundo.exe

# rm is a command to erase things
# *.o represents anything that matches an extention .o
# executable_file_created_with_make is our only excecutable
# IMPORTANT NOTE: NEVER LEAVE A SPACE AFTER THE * BECAUSE IT'LL DELETE ALL YOUR FILES