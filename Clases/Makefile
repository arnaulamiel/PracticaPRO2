 
OPCIONS = -D_JUDGE_ -D_GLIBCXX_DEBUG -O2 -Wall -Wextra -Wno-uninitialized -Wno-sign-compare -std=c++11

program.exe: program.o Cjt_Individus.o Individu.o Cjt_PCr.o BinTreeIOint.o Cjt_Trets.o Tret.o
	g++ -o program.exe *.o
	
Cjt_Individus.o: Cjt_Individus.cc Cjt_Individus.hh
	g++ -c Cjt_Individus.cc $(OPCIONS)
	
BinTreeIOint.o: BinTreeIOint.cc BinTreeIOint.hh BinTree.hh
	g++ -c BinTreeIOint.cc $(OPCIONS)
	
Individu.o: Individu.cc Individu.hh
	g++ -c Individu.cc $(OPCIONS)

Cjt_PCr.o: Cjt_PCr.cc Cjt_PCr.hh
	g++ -c Cjt_PCr.cc $(OPCIONS)
	
Cjt_Trets.o: Cjt_Trets.cc Cjt_Trets.hh
	g++ -c Cjt_Trets.cc $(OPCIONS)
	
Tret.o: Tret.cc Tret.hh
	g++ -c Tret.cc $(OPCIONS)
	
program.o: program.cc
	g++ -c program.cc $(OPCIONS)
	
clean:
	rm *.o
	rm *.exe
	
practica.tar:  *.cc *.hh
	tar -cvf program.tar *.cc *.hh Makefile
	
