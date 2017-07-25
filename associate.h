
#ifndef ASSOCIATE_H
#define ASSOCIATE_H
#include <iostream>
#include <string>
using namespace std;

class Associate {
	
private:
	string name;
	
	//ESP Information
	float esp_avg;
	float esp_min;
	float esp_max;
	int esp_amt;

	//Market Basket Information
	int mb_zeros;
	float mb_max;
	float mb_avg;
	int mb_amt;

	//Functions
public:
	//gets
	string get_name(void);
	float get_esp_avg(void);
	float get_esp_min(void);
	float get_esp_max(void);
	int get_mb_zeros(void);
	float get_mb_max(void);
	float get_mb_avg(void);
	int get_mb_amt(void);
	int get_esp_amt(void);

	//sets
	void set_name(string);
	void set_esp_avg(float);
	void set_esp_min(float);
	void set_esp_max(float);
	void set_mb_zeros(int);
	void set_mb_max(float);
	void set_mb_avg(float);
	void set_mb_amt(int);
	void set_esp_amt(int);

	void print_associate(void);

	//basic constructor and destructor
	Associate(string name);
	Associate(void);
	~Associate(void);

	//calculations
	float calculate_esp_avg(void);

};

#endif