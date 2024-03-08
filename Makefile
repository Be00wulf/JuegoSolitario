#IMPORTANTE: en la terminal
#	1-> make, para crear .o		
#	2-> ./programa, para ejecutar 		CAMBIAR NOMBRE programa
#	3-> make clean, es necesario limpiar y reiniciar .o para probar una nueva compilacion

#compilador 
CXX = g++

#opciones de compilacion
CXXFLAGS = -std=c++17 -Wall

#Archivos fuente
#MAIN: Node.cpp		Queue.h		DoublyLinkedList.h		Stack.h
SRCS = main.cpp Carta.cpp Mazo.cpp Barajador.cpp
#SRCS = main.cpp Node.cpp Carta.cpp Mazo.cpp Barajador.cpp 

# .o generados durante la compilacion, sustituye la extensión .cpp por .o para cada archivo fuente
OBJS = $(SRCS:.cpp=.o)

#Archivo ejecutable
TARGET = solitario

#reglas que corresponden a tareas a ejecutar
.PHONY: all clean		

#Comando para generar el archivo ejecutable
all: $(TARGET)	

#compilando .cpp en objetos .o enlazandolos para el ejecutable final
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@		

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Regla para limpiar los archivos compilados y el ejecutable 		
clean:
	rm -f $(OBJS) $(TARGET)	 #IMPORTANTE: 




# solitario: main.o Carta.o Mazo.o Barajador.o Node.o 
# 		   g++ -std=c++17 -Wall main.o Carta.o Mazo.o Barajador.o Node.o -o solitario

# main.o: main.cpp
# 		g++ -std=c++17 -Wall -c main.cpp

# Carta.o: Carta.cpp Carta.h
# 		g++ -std=c++17 -Wall -c Carta.cpp

# Mazo.o: Mazo.cpp Mazo.h
# 		g++ -std=c++17 -Wall -c Mazo.cpp

# Barajador.o: Barajador.cpp Barajador.h
# 			g++ -std=c++17 -Wall -c Barajador.cpp

# Node.o: Node.cpp Node.h
# 		g++ -std=c++17 -Wall -c Node.cpp

# clean: 
# 	rm *.o solitario