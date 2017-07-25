/*Implimentaion file for associate.h
 *Starts with gets, then sets, constructors/destructors, 
 *then continues with calculation functions
 */

#include "stdafx.h"
#include "associate.h"
using namespace std;

//gets
string Associate::get_name(void) {
	return this->name;
}

float Associate::get_esp_avg(void) {
	return this->esp_avg;
}

float Associate::get_esp_min(void) {
	return this->esp_min;
}

float Associate::get_esp_max(void) {
	return this->esp_max;
}

int Associate::get_mb_zeros(void) {
	return this->mb_zeros;
}

float Associate::get_mb_max(void) {
	return this->mb_max;
}

float Associate::get_mb_avg(void) {
	return this->mb_avg;
}

int Associate::get_mb_amt(void) {
	return this->mb_amt;
}

int Associate::get_esp_amt(void) {
	return this->esp_amt;
}


//sets
void Associate::set_name(string set) {
	this->name = set;
}

void Associate::set_esp_avg(float set) {
	this->esp_avg = set;
}

void Associate::set_esp_min(float set) {
	this->esp_min = set;
}

void Associate::set_esp_max(float set) {
	this->esp_max = set;
}

void Associate::set_mb_zeros(int set) {
	this->mb_zeros = set;
}

void Associate::set_mb_max(float set) {
	this->mb_max = set;
}

void Associate::set_mb_avg(float set) {
	this->mb_avg = set;
}

void Associate::set_mb_amt(int set) {
	this->mb_amt = set;
}

void Associate::set_esp_amt(int set) {
	this->esp_amt = set;
}

//prints the information stored about the associate
void Associate::print_associate(void) {
	cout << this->name << endl;
	cout << this->esp_avg << endl;
	cout << this->esp_min << endl;
	cout << this->esp_max << endl;
	cout << this->esp_amt << endl;
	cout << this->mb_zeros << endl;
	cout << this->mb_max << endl;
	cout << this->mb_avg << endl;
	cout << this->mb_amt << endl;
}

//Constructor and Destructor
Associate::Associate(string set) {
	set_name(set);
	//As I create database and queries, will add more
}
//Setting default values
Associate::Associate() {
	set_name("Test");

	float default_set = 0.0;
	int set = 0;

	set_esp_avg(default_set);
	set_esp_min(default_set);
	set_esp_max(default_set);
	set_esp_amt(set);

	set_mb_zeros(set);
	set_mb_max(default_set);
	set_mb_avg(default_set);
	set_mb_amt(set);
}

Associate::~Associate(void) {
	delete this;
}


//Calculation Functions
//Will make once database creation is done