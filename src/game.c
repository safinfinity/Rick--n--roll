#include "game.h"
#include "menu.h"

static GameState currentState;

void InitGame(void)
{
    currentState = GAME_MENU;
}

void UpdateGame(void)
{
    switch (currentState)
    {
        case GAME_MENU:
        {
            MenuAction action = UpdateMenu();

            switch (action)
            {
                case MENU_CLASSIC:
                    currentState = GAME_PLAYER_SETUP;
                    break;

                case MENU_LADDER:
                    currentState = GAME_PLAYER_SETUP;
                    break;

                case MENU_EXIT:
                    currentState = GAME_EXIT;
                    break;

                default:
                    break;
            }
            break;
        }

        case GAME_PLAYER_SETUP:
            // Temporary screen for now
            break;

        case GAME_EXIT:
            CloseWindow();
            break;

        default:
            break;
    }
}

void DrawGame(void)
{
    switch (currentState)
    {
        case GAME_MENU:
            DrawMenu();
            break;

        case GAME_PLAYER_SETUP:
            ClearBackground(RAYWHITE);
            DrawText("Player Setup (Coming Next)", 280, 250, 40, BLACK);
            break;

        default:
            break;
    }
}

void CloseGame(void)
{
}