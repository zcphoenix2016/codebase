.SUFFIXES: .cpp .o

.cpp.o:
	echo "Compiling [cpp] file: [$@] ..."
	g++ -c $<

BIN_TARGET = main
OBJS = main.o functions.o

all: $(BIN_TARGET)

$(BIN_TARGET) : $(OBJS)
	echo "Linking [lib] file: [$@] ..."
	g++ $(OBJS) -o $(BIN_TARGET)

clean:
	rm $(BIN_TARGET) $(OBJS)
