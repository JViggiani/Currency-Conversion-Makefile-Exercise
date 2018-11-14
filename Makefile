INCLUDE_DIRS = -I. -I/home/ibutt/googletest-master/googletest/include
WARNINGS = -Wall -Werror
OBJECTS = currencyconversion.o currencyconversion.t.o
CXX = g++
CPPFLAGS = -std=c++11 $(INCLUDE_DIRS) $(WARNINGS)
GOOGTESTMAIN = /home/ibutt/googletest-master/googletest/make/gtest_main.a

currencyconversion : $(OBJECTS)
	g++ -lpthread -o currencyconversion $(GOOGTESTMAIN) $(OBJECTS)

currencyconversion.o : currencyconversion.h

currencyconversion.t.o : currencyconversion.h

clean : 
	rm $(OBJECTS) currencyconversion
