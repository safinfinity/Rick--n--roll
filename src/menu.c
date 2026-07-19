#include <raylib.h>
#include "menu.h"

static int selectedItem = 0;

MenuAction UpdateMenu(void)
{
    // Keyboard navigation
    if (IsKeyPressed(KEY_UP))
    {
        selectedItem--;

        if (selectedItem < 0)
            selectedItem = 2;
    }

    if (IsKeyPressed(KEY_DOWN))
    {
        selectedItem++;

        if (selectedItem > 2)
            selectedItem = 0;
    }

    // Mouse navigation
    Rectangle classicButton = {420, 250, 250, 40};
    Rectangle ladderButton  = {420, 300, 250, 40};
    Rectangle exitButton    = {420, 350, 250, 40};

    if (CheckCollisionPointRec(GetMousePosition(), classicButton))
    {
        selectedItem = 0;

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
            return MENU_CLASSIC;
    }

    if (CheckCollisionPointRec(GetMousePosition(), ladderButton))
    {
        selectedItem = 1;

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
            return MENU_LADDER;
    }

    if (CheckCollisionPointRec(GetMousePosition(), exitButton))
    {
        selectedItem = 2;

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
            return MENU_EXIT;
    }

    // Keyboard confirm
    if (IsKeyPressed(KEY_ENTER))
    {
        switch (selectedItem)
        {
            case 0: return MENU_CLASSIC;
            case 1: return MENU_LADDER;
            case 2: return MENU_EXIT;
        }
    }

    return MENU_NONE;
}

void DrawMenu(void)
{
    ClearBackground(RAYWHITE);

    DrawText("Pokemon Ludo", 390, 120, 50, BLACK);

    DrawText(
        selectedItem == 0 ? "> Classic Mode" : "Classic Mode",
        420,
        250,
        30,
        selectedItem == 0 ? BLUE : BLACK
    );

    DrawText(
        selectedItem == 1 ? "> Ladder Mode" : "Ladder Mode",
        420,
        300,
        30,
        selectedItem == 1 ? BLUE : BLACK
    );

    DrawText(
        selectedItem == 2 ? "> Exit" : "Exit",
        420,
        350,
        30,
        selectedItem == 2 ? BLUE : BLACK
    );
}