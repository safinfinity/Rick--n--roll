#include <raylib.h>
#include "player_setup.h"

void UpdatePlayerSetup(void)
{

}

void DrawPlayerSetup(void)
{
    ClearBackground(RAYWHITE);

    DrawText(
        "Player Setup",
        430,
        120,
        45,
        BLACK
    );

    DrawText(
        "Select Number of Players",
        360,
        220,
        30,
        DARKGRAY
    );

    DrawText(
        "Coming Next...",
        450,
        320,
        30,
        GRAY
    );
}