#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>
#include "map.h"
#define TAILLE 30
int main(){
    
    //bnc * bnc=malloc(sizeof(bnc));
    //bnc->tab=malloc(100*sizeof(int));
    //bnc->a=1;
    //bnc->tab[0]=13;
    //bnc->tab[1]=13;
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window   * window;
    window = SDL_CreateWindow("SDL2 Programme 0.1", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 1000, SDL_WINDOW_RESIZABLE);
    
    SDL_Renderer *renderer; //Initialisation of the renderer
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED ); //Creat the renderer
    
    int tab[TAILLE][TAILLE]={{0}};
   
    
    
    map(tab);
    
    
    afficher_sdl(tab,window,renderer);
    //afficher_bnc(bnc,window,renderer);
    int a=1,b=1,anca=1,ancb=1,p=1,e=1,m=1;
    int up=0,down=0,r=1,l=0,tmp=1;
    int limite=200000,i=0;
    while(p){
        
        
        
        
        while( p && e){
            
            SDL_Event event;
            if((i < limite && m!=0) || SDL_PollEvent(&event)){
                if(event.type == SDL_KEYDOWN){
                    switch(event.key.keysym.sym){
                        case SDLK_UP : a-=1;e=0;up=1;down=0;r=0;l=0;m=0;break; 
                        case SDLK_DOWN :a+=1;e=0;up=0;down=1;r=0;l=0;m=0; break;
                        case SDLK_RIGHT : b+=1;e=0;up=0;down=0;r=1;l=0;m=0;break;
                        case SDLK_LEFT : b-=1;e=0;up=0;down=0;r=0;l=1;m=0;break;
                        default: break;
                    }
                    
                }
                if(SDL_PollEvent(&event)){
                    switch(event.type){  // the cases of the events
                        case SDL_QUIT : p = 0;e=0;  break; // if we cilck the X button
                        default: break;
                    }
                }
                i++;
                

            }else{
                
                
                
                if(up) a--;
                if (down) a++;
                if(r) b++;
                if(l) b--;
                if(tab[a][b]==1){
                    tmp=up;
                    up=down;
                    down=tmp;
                    tmp=r;
                    r=l;
                    l=tmp;
                    a=anca;
                    b=ancb;
                    afficher_pac(a,b,anca,ancb,window,renderer,0);
                }else{
                    afficher_pac(a,b,anca,ancb,window,renderer,1);
                    anca=a;
                    ancb=b;
                }

                
                i=0;

            }
            if(!m){
                if(tab[a][b]==1){
                    tmp=up;
                    up=down;
                    down=tmp;
                    tmp=r;
                    r=l;
                    l=tmp;
                    a=anca;
                    b=ancb;
                    afficher_pac(a,b,anca,ancb,window,renderer,0);
                }else{
                    afficher_pac(a,b,anca,ancb,window,renderer,1);
                    anca=a;
                    ancb=b;
                }
                i=0;
                m=1;
            }   
            
                  
            
        }
    

          
         
        
        
        
        e=1;
    }
    
    return 0;
}