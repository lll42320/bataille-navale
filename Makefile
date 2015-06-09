CC = g++
LIBS = `sdl-config --cflags --libs` -lSDL -lSDLmain -lSDL_image
EXEC = BatailleNavale

all:
	$(CC) src/main.cpp -o $(EXEC) $(LIBS)
