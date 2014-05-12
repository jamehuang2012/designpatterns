CC=g++
EXEC=iterator
OBJ=main.o Aggregate.o Iterator.o

$(EXEC):$(OBJ)
	$(CC) $(LDFLAGS) $^ -o $@

clean:
	@rm *.o $(EXEC)
