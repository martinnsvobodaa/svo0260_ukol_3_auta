#include "Auto.h"

Auto::Auto(int k, int r, int d) {
	this->pocetKol = k;
	this->maxRychlost = r;
	this->pocetDveri = d;
}



int Auto::get_pocetKol(){
	return this->pocetKol;
}
int Auto::get_maxRychlost() {
	return this->maxRychlost;
}
int Auto::get_pocetDveri() {
	return this->pocetDveri;
}