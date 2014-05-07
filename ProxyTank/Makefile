CC=g++
EXEC=proxy
OBJ=main.o Tank.o Moveable.o TankLogProxy.o TankTimeProxy.o

$(EXEC):$(OBJ)
	$(CC) $(LDFLAGS) $^ -o $@

clean:
	@rm -rf $(EXEC) *.o
