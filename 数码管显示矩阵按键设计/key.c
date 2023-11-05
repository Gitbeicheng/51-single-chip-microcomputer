#include <REGX52.H>
#include"Delay.h"
int key()
{
	unsigned int KeyNumber;
	P1=0XFF;
	P1_0=0;
	if(P1_4==0){KeyNumber=0;}
	if(P1_5==0){KeyNumber=4;}
	if(P1_6==0){KeyNumber=8;}
	if(P1_7==0){KeyNumber=12;}
	
	P1=0XFF;
	P1_1=0;
	if(P1_4==0){KeyNumber=1;}
	if(P1_5==0){KeyNumber=5;}
	if(P1_6==0){KeyNumber=9;}
	if(P1_7==0){KeyNumber=13;}
	
	P1=0XFF;
	P1_2=0;
	if(P1_4==0){KeyNumber=2;}
	if(P1_5==0){KeyNumber=6;}
	if(P1_6==0){KeyNumber=10;}
	if(P1_7==0){KeyNumber=14;}
	
	P1=0XFF;
	P1_3=0;
	if(P1_4==0){KeyNumber=3;}
	if(P1_5==0){KeyNumber=7;}
	if(P1_6==0){KeyNumber=11;}
	if(P1_7==0){KeyNumber=15;}
	
	return KeyNumber;
}