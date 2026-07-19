#ifndef GAME_H
#define GAME_H

#include <raylib.h>

typedef enum
{
    GAME_MENU,
    GAME_PLAYER_SETUP,
    GAME_CLASSIC,
    GAME_LADDER,
    GAME_EXIT
} GameState;

void InitGame(void);
void UpdateGame(void);
void DrawGame(void);
void CloseGame(void);

#endif