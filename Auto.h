#pragma once
class Auto
{
private:
	int pocetKol;
	int maxRychlost;
	int pocetDveri;
public:
	Auto(int k, int r, int d);

	int get_pocetKol();
	int get_maxRychlost();
	int get_pocetDveri();
};

