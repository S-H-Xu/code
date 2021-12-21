#define _CRT_SECURE_NO_WARNINGS 1
//tvrm.cpp
#include "tvrm.h"
#include <iostream>
using namespace std;

bool Tv::volup()
{
	if (volume < MaxVal)
	{
		volume++;
		return true;
	}
	else
		return false;
}

bool Tv::voldown()
{
	if (volume > MinVal)
	{
		volume--;
		return true;
	}
	else
		return false;
}

void Tv::chanup()
{
	if (channel < maxchannel)
		channel++;
	else
		channel = 1;
}

void Tv::chandown()
{
	if (channel > 1)
		channel--;
	else
		channel = maxchannel;
}

void Tv::settings() const
{
	cout << "TV is " << (state == Off ? "Off" : "On") << endl;
	if (state == On)
	{
		cout << "Volume setting = " << volume << endl;
		cout << "Channel setting = " << channel << endl;
		cout << "Mode = "
			<< (mode == Antenna ? "anteena" : "cable") << endl;
		cout << "Input = "
			<< (input == TV ? "TV" : "DVD") << endl;
	}
}

void Tv::set_cmode(Remote& r)
{
	cout << "TV is " << (state == Off ? "Off" : "On") << endl;
	if (state == On)
		r.set_cmode();
}

void Remote::Show_cmode() const
{
	cout << "connect mode = "
		<< (cn_mode == normal ? "normal" : "interaction") << endl;
}