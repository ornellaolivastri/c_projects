#DONT FORGET: makefiles are blank space sensitive
#format:
#target: dependencies
#(tab)action


# if I want to create more excecutables with this makefile, 
# I must do the same as the first 3 rules, but then in terminal 
# we must write "make (and here goes the excecutable name 
# of the one I want)" and then the code goes directly to that one.
# Tipicaly, this is done with an "all" recepy, where we list each of the
# targets that we want to build by default (in this case we only have one).

all: executable_file_created_with_make 

#name_of_the_excecutable: list of objects that will be needed 
#in the linking fase where all objects create this program
executable_file_created_with_make: main.o message.o
	gcc main.o message.o -o executable_file_created_with_make
#under the excecutable[..] line goes the instruction that will create the excecutable 


#than go the diferent objects and how they will be created -------------------------

#the object main.o is created with main.cpp
main.o: main.c
	gcc -c main.c
#and this is created with that instruction

#same with this one
message.o: message.c message.h
	gcc -c message.c


# Another common rule is clean. This one errases
# anything we want. For example, we could want to erase everything
# that our makefile does: objetct files and excecutables
#
clean: 
	del *.o, del executable_file_created_with_make.exe

# rm is a command to erase things
# *.o represents anything that matches an extention .o
# executable_file_created_with_make is our only excecutable
# IMPORTANT NOTE: NEVER LEAVE A SPACE AFTER THE * BECAUSE IT'LL DELETE ALL YOUR FILES