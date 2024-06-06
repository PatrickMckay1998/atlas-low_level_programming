#include "main.h"

/**
* Jack_Bauer - prints every minute of the day
*
* Return - Always 0
 */

    void jack_bauer(void)
{
        int hour;
        int minute;
        for (hour = 0; hour < 24; hour++)
        {
                for (minute = 0; minute < 60; minute ++)
                {
                        _putchar('0' + (hour / 10));
                        _putchar('0' + (hour % 10));
                        _putchar(':');
                        _putchar('0' + (minute / 10));
                        _putchar('0' + (minute % 10));
                        _putchar('\n');
                }
        }
        return (0);
}