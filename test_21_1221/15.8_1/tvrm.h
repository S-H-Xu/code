//tvrm.h
#ifndef __TVRM_H__
#define __TVRM_H__

class Remote;

class Tv
{
private:
	int state;//on or off
	int volume;//assumed to be digitized
	int maxchannel;//maximum number of channels
	int channel;
	int mode;
	int input;
public:
	friend class Remote;//Remote can access Tv private parts
	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, DVD };

	Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc),
		channel(2), mode(Cable), input(TV) {}
	void onoff() { state = (state == On) ? Off : On; }
	bool ison() const { return state == On; }
	bool volup();
	bool voldown();
	void chanup();
	void chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings() const;//display all settings
	void set_cmode(Remote& r);
};

class Remote
{
private:
	int mode;//controls TV or DVD
	int cn_mode;//connect mode
public:
	enum { normal, interaction };
	friend class Tv;
	Remote(int m = Tv::TV, int c = normal) : mode(m),cn_mode(c) {}
	bool volup(Tv& t) { return t.volup(); }
	bool voldown(Tv& t) { return t.voldown(); }
	void Show_cmode() const;//show connect mode
	void set_cmode() { cn_mode = (cn_mode == normal) ? interaction : normal; }
	void onoff(Tv& t) { return t.onoff(); }
	void chanup(Tv& t) { return t.chanup(); }
	void chandown(Tv& t) { return t.chandown(); }
	void set_chan(Tv& t, int c) { t.channel = c; }
	void set_mode(Tv& t) { t.set_mode(); }
	void set_input(Tv& t) { t.set_input(); }
};

#endif