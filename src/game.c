#include "game.h"
#include "menu.h"
#include "player_setup.h"
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
{
    PlayerSetupAction action = UpdatePlayerSetup();

    switch (action)
    {
        case PLAYER_SETUP_CONTINUE:
            // Next screen later
            break;

        case PLAYER_SETUP_BACK:
            currentState = GAME_MENU;
            break;

        default:
            break;
    }

    break;
}

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
    DrawPlayerSetup();
    break;

        default:
            break;
    }
}

void CloseGame(void)
{
}