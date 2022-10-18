
#include "main.h"

/**
 * jack_bauer - prints 24 hours
 */
void jack_bauer(void)
{
	int i, cnt, uhr, thr;

	for (thr = 48; thr < 51; thr++)
	{
		for (uhr = 48; uhr < 52; uhr++)
		{
			for (cnt = 48; cnt < 54; cnt++)
			{
				for (i = 48; i < 58; i++)
				{
					_putchar(thr);
					_putchar(uhr);
					_putchar(':');
					_putchar(cnt);
					_putchar(i);
					_putchar('\n');
				}
			}
		}
	}
}
