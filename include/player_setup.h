#ifndef PLAYER_SETUP_H
#define PLAYER_SETUP_H

typedef enum
{
    PLAYER_SETUP_NONE,
    PLAYER_SETUP_CONTINUE,
    PLAYER_SETUP_BACK

} PlayerSetupAction;

PlayerSetupAction UpdatePlayerSetup(void);
void DrawPlayerSetup(void);

#endif