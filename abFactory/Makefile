CC=g++
EXEC=abfactory
OBJ=main.o AbstractFactory.o Product.o

$(EXEC):$(OBJ)
	$(CC) $(LDFLAGS) $^ -o $@

clean:
	@rm *.o $(EXEC)
