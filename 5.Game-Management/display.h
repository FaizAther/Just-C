//	Mohammad Faiz ATHER === UQ 2020
//
//	display.h
//	an ADT for a Display
//

#include <stdio.h>
#include <string.h>

#ifndef DISPLAY_H_
#define DISPLAY_H_

#define DISPLAY_MISS        "MISS"
#define DISPLAY_HIT         "HIT"
#define DISPLAY_BAD_GUESS   "BAD GUESS"
#define DISPLAY_REPEAT_MOVE "REPEATED GUESS"

#define DISPLAY_CPU_MOVE    " player 2 guessed "
#define DISPLAY_PLAYER_MOVE " player 1 guessed "

#define DISPLAY_SHIP_SUNK   "SHIP SUNK"

#define DISPLAY_GAME_OVER   "GAME OVER - "

#define DISPLAY_YOU_WIN     "player 1 wins"
#define DISPLAY_YOU_LOOSE   "player 2 wins"

#define DISPLAY_CPU_GIVESUP "CPU gives up"
#define DISPLAY_ILLEGAL     "BAD GUESS"

#define DISPLAY_ROUND       "ROUND "

#define DISPLAY_STARS       "**********"

#define UNKNOWN             "Unknown\n"


static inline void
display_message (char *m, char *addon, char *newline, FILE *stream)
{
    fprintf (stream, "%s%s%s", m, addon, newline);
    fflush (stream);
}

static char *
display_selector (int r)
{
    char *show;
    switch (r)
    {
        case MISS: show = DISPLAY_MISS; break;
        case HIT: show = DISPLAY_HIT; break;
        case DOWN: show = DISPLAY_SHIP_SUNK; break;
        case BAD: show = DISPLAY_BAD_GUESS; break;
        case REPEAT: show = DISPLAY_REPEAT_MOVE; break;
        case EXHAUST_MOVES_CPU: show = DISPLAY_CPU_GIVESUP; break;
        case ILLEGAL_M: show = DISPLAY_ILLEGAL; break;
        case GAME_ON: show = "\0"; break;
        default: show = UNKNOWN;
    }
    return show;
}

static void
display_result (int r, FILE *stream)
{
    char *show = NULL;
    switch (r)
    {
        case MISS: show = DISPLAY_MISS; break;
        case WIN_PLAYER: display_message (DISPLAY_GAME_OVER, DISPLAY_YOU_WIN, "\n", stream); return;
        case WIN_CPU: display_message (DISPLAY_GAME_OVER, DISPLAY_YOU_LOOSE, "\n", stream); return;
        case HIT: show = DISPLAY_HIT; break;
        case DOWN: show = DISPLAY_SHIP_SUNK; break;
        case BAD: show = DISPLAY_BAD_GUESS; break;
        case REPEAT: show = DISPLAY_REPEAT_MOVE; break;
        case EXHAUST_MOVES_CPU: show = DISPLAY_CPU_GIVESUP; break;
        case ILLEGAL_M: show = DISPLAY_ILLEGAL; break;
        case GAME_ON: show = "\0"; break;
        default: show = UNKNOWN;
    }
    display_message (show, "\0", "\0", stream);
}

#endif
