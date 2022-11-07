OBJS	= main.o map.o
SOURCE	= main.c map.c
HEADER	= map.h
OUT	=  prog
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS) -lSDL2 -lSDL2_gfx -lSDL2_image -lSDL2_ttf -lSDL2_mixer -lSDL2_net

main.o: main.c
	$(CC) $(FLAGS) main.c -lSDL2 -lSDL2_gfx -lSDL2_image -lSDL2_ttf -lSDL2_mixer -lSDL2_net

map.o: map.c
	$(CC) $(FLAGS) map.c -lSDL2 -lSDL2_gfx -lSDL2_image -lSDL2_ttf -lSDL2_mixer -lSDL2_net


clean:
	rm -f $(OBJS) $(OUT)
