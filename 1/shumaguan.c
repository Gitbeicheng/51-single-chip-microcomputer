#include <REGX52.H>
void shumaguan(int keyNumber)
{
			if(keyNumber==0)
			{P0=0x3F;}
			if(keyNumber==1)
			{P0=0x06;}
			if(keyNumber==2)
			{P0=0x5B;}
			if(keyNumber==3)
			{P0=0x4F;}
			if(keyNumber==4)
			{P0=0x66;}
			if(keyNumber==5)
			{P0=0x6D;}
			if(keyNumber==6)
			{P0=0x7D;}
			if(keyNumber==7)
			{P0=0x07;}
			if(keyNumber==8)
			{P0=0x7F;}
			if(keyNumber==9)
			{P0=0x6F;}
			if(keyNumber>=10)
			{P0=0x40;}
}