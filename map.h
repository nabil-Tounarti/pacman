#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>


#define TAILLE 30

void map(int tab[TAILLE][TAILLE]);
void afficher_grille(int tab[TAILLE][TAILLE]);
void afficher_sdl(int tab[TAILLE][TAILLE],SDL_Window   * window,SDL_Renderer *renderer);
void afficher_pac(int a,int b,int anca,int ancb ,SDL_Window   * window,SDL_Renderer *renderer,int u);
//void afficher_bnc(bnc * bnc,SDL_Window   * window,SDL_Renderer *renderer);