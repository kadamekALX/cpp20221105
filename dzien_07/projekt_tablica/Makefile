# cel : wymagania
# 	polecenia prowadzące do stworzenia celu

# domyślnie uruchamiany jest pierwszy cel z pliku

FILES=main.o Tablica.o
CXXFLAGS=-Wall

all : program

program : $(FILES)
	g++ $^ -o $@ $(CXXFLAGS)

%.o : %.cpp
	g++ $^ -c $(CXXFLAGS)

clean :
	rm -f program $(FILES)

rebuild :
	make clean
	make all

#instrukcje w celach oznaczonych jako .PHONY wykonają się zawsze
.PHONY : clean all rebuild
