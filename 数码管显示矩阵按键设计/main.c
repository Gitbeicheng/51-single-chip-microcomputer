#include <REGX52.H>
#include"Delay.h"
#include"key.h"
#include"shumaguan.h"
void main()
{
	int keyNumber;
	while(1)
		{
			keyNumber=key();
			shumaguan(keyNumber);
		}
}
