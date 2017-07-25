// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "stdafx.h"
#include "associate.h"

//mysql includes
#include "mysql_connection.h"
#include "mysql_driver.h"
#include "mysql_error.h"
#include "cppconn\driver.h"
#include "cppconn\resultset.h"
#include "cppconn\statement.h"
#include "cppconn\exception.h"
#include "cppconn\connection.h"


using namespace std;

int main()
{
	Associate *test = new Associate();
	test->print_associate();

	try {
		sql::Driver *driver;
		sql::Connection *con;
		sql::Statement *stmt;
		sql::ResultSet *res;

		cout << "Connecting..." << endl;

		//creating connection
		driver = get_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "alyssa", "honeypot");
		con->setSchema("numbers_db");

		stmt = con->createStatement();
		res = stmt->executeQuery("SHOW TABLES;");
		

		//freeing pointers
		delete res;
		delete stmt;
		delete con;
	}
	catch (sql::SQLException &e) {
		return 0;
	}

    return 0;
}
