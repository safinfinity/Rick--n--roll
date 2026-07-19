#ifndef MENU_H
#define MENU_H

typedef enum
{
    MENU_NONE,
    MENU_CLASSIC,
    MENU_LADDER,
    MENU_EXIT
} MenuAction;

MenuAction UpdateMenu(void);
void DrawMenu(void);

#endif