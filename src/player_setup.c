#include <raylib.h>
#include "player_setup.h"

static int playerCount = 2;

PlayerSetupAction UpdatePlayerSetup(void)
{
    if (IsKeyPressed(KEY_RIGHT) && playerCount < 4)
        playerCount++;

    if (IsKeyPressed(KEY_LEFT) && playerCount > 2)
        playerCount--;

    if (IsKeyPressed(KEY_ENTER))
        return PLAYER_SETUP_CONTINUE;

    if (IsKeyPressed(KEY_ESCAPE))
        return PLAYER_SETUP_BACK;

    return PLAYER_SETUP_NONE;
}

void DrawPlayerSetup(void)
{
    ClearBackground(RAYWHITE);

    DrawText("PLAYER SETUP", 380, 80, 40, BLACK);

    DrawText("Number of Players", 350, 180, 30, DARKGRAY);

    DrawText(TextFormat("< %d >", playerCount),
             450,
             260,
             50,
             BLUE);

    DrawText("LEFT / RIGHT : Change", 330, 380, 25, GRAY);
    DrawText("ENTER : Continue", 360, 420, 25, GRAY);
    DrawText("ESC : Back", 400, 460, 25, GRAY);
}