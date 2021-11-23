#DONT FORGET: makefiles are blank space sensitive
#format:
#target: dependencies
#(tab)action


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

