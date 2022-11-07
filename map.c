#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>
#include "map.h"

#define TAILLE 30



void map(int tab[TAILLE][TAILLE]){
    for(int i=0;i<TAILLE;i++){
        tab[0][i]=1;
        tab[i][0]=1;
        tab[TAILLE-1][i]=1;
        tab[i][TAILLE-1]=1;
        for(int j=0;j<TAILLE;j++){
            

        }
    }
    tab[2][2]=1;tab[2][3]=1;tab[2][4]=1;tab[2][5]=1;tab[2][6]=1;
    tab[3][2]=1;tab[4][2]=1;tab[5][2]=1;tab[6][2]=1;tab[7][2]=1;tab[8][2]=1;
    tab[4][4]=1;tab[4][5]=1;tab[4][6]=1;tab[4][7]=1;tab[4][8]=1;
    tab[5][4]=1;tab[5][5]=1;tab[5][6]=1;tab[5][7]=1;tab[5][8]=1;
    tab[6][4]=1;tab[6][5]=1;tab[6][6]=1;tab[6][7]=1;tab[6][8]=1;
    tab[8][10]=1;tab[7][10]=1;tab[6][10]=1;tab[5][10]=1;tab[4][10]=1;tab[3][10]=1;tab[2][10]=1;tab[1][10]=1;
    tab[8][9]=1;tab[8][8]=1;tab[8][7]=1;tab[8][6]=1;tab[8][5]=1;tab[8][3]=1;tab[8][2]=1;

    tab[TAILLE-1- 2][2]=1;tab[TAILLE-1-2][3]=1;tab[TAILLE-1-2][4]=1;tab[TAILLE-1-2][5]=1;tab[TAILLE-1-2][6]=1;
    tab[TAILLE-1-3][2]=1;tab[TAILLE-1-4][2]=1;tab[TAILLE-1-5][2]=1;tab[TAILLE-1-6][2]=1;tab[TAILLE-1-7][2]=1;tab[TAILLE-1-8][2]=1;
    tab[TAILLE-1-4][4]=1;tab[TAILLE-1-4][5]=1;tab[TAILLE-1-4][6]=1;tab[TAILLE-1-4][7]=1;tab[TAILLE-1-4][8]=1;
    tab[TAILLE-1-5][4]=1;tab[TAILLE-1-5][5]=1;tab[TAILLE-1-5][6]=1;tab[TAILLE-1-5][7]=1;tab[TAILLE-1-5][8]=1;
    tab[TAILLE-1-6][4]=1;tab[TAILLE-1-6][5]=1;tab[TAILLE-1-6][6]=1;tab[TAILLE-1-6][7]=1;tab[TAILLE-1-6][8]=1;
    tab[TAILLE-1-8][10]=1;tab[TAILLE-1-7][10]=1;tab[TAILLE-1-6][10]=1;tab[TAILLE-1-5][10]=1;tab[TAILLE-1-4][10]=1;tab[TAILLE-1-3][10]=1;tab[TAILLE-1-2][10]=1;tab[TAILLE-1-1][10]=1;
    tab[TAILLE-1-8][9]=1;tab[TAILLE-1-8][8]=1;tab[TAILLE-1-8][7]=1;tab[TAILLE-1-8][6]=1;tab[TAILLE-1-8][5]=1;tab[TAILLE-1-8][3]=1;tab[TAILLE-1-8][2]=1;

    tab[2][TAILLE-1- 2]=1;tab[2][TAILLE-1-3]=1;tab[2][TAILLE-1-4]=1;tab[2][TAILLE-1-5]=1;tab[2][TAILLE-1-6]=1;
    tab[3][TAILLE-1-2]=1;tab[4][TAILLE-1-2]=1;tab[5][TAILLE-1-2]=1;tab[6][TAILLE-1-2]=1;tab[7][TAILLE-1-2]=1;tab[8][TAILLE-1-2]=1;
    tab[4][TAILLE-1-4]=1;tab[4][TAILLE-1-5]=1;tab[4][TAILLE-1-6]=1;tab[4][TAILLE-1-7]=1;tab[4][TAILLE-1-8]=1;
    tab[5][TAILLE-1-4]=1;tab[5][TAILLE-1-5]=1;tab[5][TAILLE-1-6]=1;tab[5][TAILLE-1-7]=1;tab[5][TAILLE-1-8]=1;
    tab[6][TAILLE-1-4]=1;tab[6][TAILLE-1-5]=1;tab[6][TAILLE-1-6]=1;tab[6][TAILLE-1-7]=1;tab[6][TAILLE-1-8]=1;
    tab[8][TAILLE-1-10]=1;tab[7][TAILLE-1-10]=1;tab[6][TAILLE-1-10]=1;tab[5][TAILLE-1-10]=1;tab[4][TAILLE-1-10]=1;tab[3][TAILLE-1-10]=1;tab[2][TAILLE-1-10]=1;tab[1][TAILLE-1-10]=1;
    tab[8][TAILLE-1-9]=1;tab[8][TAILLE-1-8]=1;tab[8][TAILLE-1-7]=1;tab[8][TAILLE-1-6]=1;tab[8][TAILLE-1-5]=1;tab[8][TAILLE-1-3]=1;tab[8][TAILLE-1-2]=1;

    tab[TAILLE-1- 2][TAILLE-1- 2]=1;tab[TAILLE-1-2][TAILLE-1-3]=1;tab[TAILLE-1-2][TAILLE-1-4]=1;tab[TAILLE-1-2][TAILLE-1-5]=1;tab[TAILLE-1-2][TAILLE-1-6]=1;
    tab[TAILLE-1-3][TAILLE-1-2]=1;tab[TAILLE-1-4][TAILLE-1-2]=1;tab[TAILLE-1-5][TAILLE-1-2]=1;tab[TAILLE-1-6][TAILLE-1-2]=1;tab[TAILLE-1-7][TAILLE-1-2]=1;tab[TAILLE-1-8][TAILLE-1-2]=1;
    tab[TAILLE-1-4][TAILLE-1-4]=1;tab[TAILLE-1-4][TAILLE-1-5]=1;tab[TAILLE-1-4][TAILLE-1-6]=1;tab[TAILLE-1-4][TAILLE-1-7]=1;tab[TAILLE-1-4][TAILLE-1-8]=1;
    tab[TAILLE-1-5][TAILLE-1-4]=1;tab[TAILLE-1-5][TAILLE-1-5]=1;tab[TAILLE-1-5][TAILLE-1-6]=1;tab[TAILLE-1-5][TAILLE-1-7]=1;tab[TAILLE-1-5][TAILLE-1-8]=1;
    tab[TAILLE-1-6][TAILLE-1-4]=1;tab[TAILLE-1-6][TAILLE-1-5]=1;tab[TAILLE-1-6][TAILLE-1-6]=1;tab[TAILLE-1-6][TAILLE-1-7]=1;tab[TAILLE-1-6][TAILLE-1-8]=1;
    tab[TAILLE-1-8][TAILLE-1-10]=1;tab[TAILLE-1-7][TAILLE-1-10]=1;tab[TAILLE-1-6][TAILLE-1-10]=1;tab[TAILLE-1-5][TAILLE-1-10]=1;tab[TAILLE-1-4][TAILLE-1-10]=1;tab[TAILLE-1-3][TAILLE-1-10]=1;tab[TAILLE-1-2][TAILLE-1-10]=1;tab[TAILLE-1-1][TAILLE-1-10]=1;
    tab[TAILLE-1-8][TAILLE-1-9]=1;tab[TAILLE-1-8][TAILLE-1-8]=1;tab[TAILLE-1-8][TAILLE-1-7]=1;tab[TAILLE-1-8][TAILLE-1-6]=1;tab[TAILLE-1-8][TAILLE-1-5]=1;tab[TAILLE-1-8][TAILLE-1-3]=1;tab[TAILLE-1-8][TAILLE-1-2]=1;


    for(int i=1;i<TAILLE;i++){
        tab[14][i]=1;
        tab[16][i]=1;
        tab[i][14]=1;
        tab[i][16]=1;
        
        
    }
    tab[14][14]=0;tab[16][16]=0;tab[14][16]=0;tab[16][14]=0;tab[14][6]=0;tab[14][24]=0;tab[16][12]=0;tab[16][18]=0;tab[15][14]=0;tab[15][16]=0;
    tab[6][16]=0;tab[24][16]=0;tab[12][14]=0;tab[18][14]=0;tab[14][15]=0;tab[16][15]=0;

    tab[11][2]=1;tab[11][3]=1;tab[11][4]=1;tab[11][5]=1;tab[11][9]=1;tab[11][10]=1;
    tab[TAILLE-1 -11][2]=1;tab[TAILLE-1-11][3]=1;tab[TAILLE-1-11][4]=1;tab[TAILLE-1-11][5]=1;tab[TAILLE-1-11][9]=1;tab[TAILLE-1-11][10]=1;
    tab[TAILLE-1 -11][TAILLE-1-2]=1;tab[TAILLE-1-11][TAILLE-1-3]=1;tab[TAILLE-1-11][TAILLE-1-4]=1;tab[TAILLE-1-11][TAILLE-1-5]=1;tab[TAILLE-1-11][TAILLE-1-9]=1;tab[TAILLE-1-11][TAILLE-1- 10]=1;
    tab[11][TAILLE-1 -2]=1;tab[11][TAILLE-1 -3]=1;tab[11][TAILLE-1 -4]=1;tab[11][TAILLE-1 -5]=1;tab[11][TAILLE-1 -9]=1;tab[11][TAILLE-1 -10]=1;

}


void afficher_grille(int tab[TAILLE][TAILLE]){
    for(int i=0;i<TAILLE;i++){
        printf("\n");
        for(int j=0;j<TAILLE;j++){
            printf("%d ",tab[i][j]);
        }
    }
    


}
void afficher_sdl(int tab[TAILLE][TAILLE],SDL_Window   * window,SDL_Renderer *renderer) {
    
    SDL_Rect rect;
    /* couleur de fond */
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderClear(renderer);
    for(int j=0;j<TAILLE;j++){
        for(int i=0;i<TAILLE;i++){

            /* dessiner en blanc */
            SDL_SetRenderDrawColor(renderer, (tab[j][i])*50, (tab[j][i])*40, (tab[j][i])*70, 0);
            rect.x = (1000/TAILLE)*i;
            rect.y = (1000/TAILLE)*j;
            rect.w = rect.h = 1000/TAILLE;
            SDL_RenderFillRect(renderer, &rect );
            /* afficher à l'ecran */
            SDL_RenderPresent(renderer);
            
        }
    }

    
    

}

void afficher_pac(int a,int b,int anca,int ancb ,SDL_Window   * window,SDL_Renderer *renderer,int u){

    SDL_Rect rect;
    
    if(u){
        SDL_SetRenderDrawColor(renderer,0, 0,0, 0);
        rect.x = (1000/TAILLE)*ancb;
        rect.y = (1000/TAILLE)*anca;
        rect.w = rect.h = 1000/TAILLE;
        SDL_RenderFillRect(renderer, &rect );
    }
    
    
    /* dessiner en blanc */
    SDL_SetRenderDrawColor(renderer,250, 200,255, 0);
    rect.x = (1000/TAILLE)*b;
    rect.y = (1000/TAILLE)*a;
    rect.w = rect.h = 1000/TAILLE;
    SDL_RenderFillRect(renderer, &rect );
    /* afficher à l'ecran */
    SDL_RenderPresent(renderer);
}

