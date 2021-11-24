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
	g++ main.o message.o -o executable_file_created_with_make
#under the excecutable[..] line goes the instruction that will create the excecutable 


#than go the diferent objects and how they will be created -------------------------

#the object main.o is created with main.cpp
main.o: main.cpp
	g++ -c main.cpp
#and this is created with that instruction

#same with this one
message.o: message.cpp message.h
	g++ -c message.cpp



