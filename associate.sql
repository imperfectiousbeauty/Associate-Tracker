/*MySQL database to store information for
 * the c++ program to interpret and display
 * in a web interface.
 */

CREATE TABLE employees(
	e_id int(10) NOT NULL AUTO_INCREMENT,
	fname varchar(255),
	lname varchar(255),
	PRIMARY KEY (e_id)
);

CREATE TABLE esp(
	esp_id int(10) NOT NULL AUTO_INCREMENT,
	w_id int (10),
	e_id int (10),
	dollars float(4),
	PRIMARY KEY (esp_id)
);

/*Market Basket*/
CREATE TABLE mb(
	mb_id int(10) NOT NULL AUTO_INCREMENT,
	w_id int(10),
	e_id int(10),
	dollars float(4),
	PRIMARY KEY (mb_id)
);

/*for year*/
CREATE TABLE yr(
	y_id int(10) NOT NULL AUTO_INCREMENT,
	yr int(10),
	PRIMARY KEY (y_id)
);

/*for week*/
CREATE TABLE wk(
	w_id int(10) NOT NULL AUTO_INCREMENT,
	y_id int(10),
	PRIMARY KEY (w_id)
);


/*Setting Foriegn Keys*/

ALTER TABLE esp
	ADD FOREIGN KEY (e_id)
	REFERENCES employees(e_id)
	ON DELETE CASCADE
	ON UPDATE CASCADE;

ALTER TABLE esp
	ADD FOREIGN KEY (w_id)
	REFERENCES wk(w_id)
	ON DELETE CASCADE
	ON UPDATE CASCADE;

ALTER TABLE mb
	ADD FOREIGN KEY (w_id)
	REFERENCES wk(w_id)
	ON DELETE CASCADE
	ON UPDATE CASCADE;

ALTER TABLE mb
	ADD FOREIGN KEY (e_id)
	REFERENCES employees(e_id)
	ON DELETE CASCADE
	ON UPDATE CASCADE;

ALTER TABLE wk
	ADD FOREIGN KEY (y_id)
	REFERENCES yr(y_id)
	ON DELETE CASCADE
	ON UPDATE CASCADE;

/*Inserting Initial Data*/

/*Employees*/
INSERT INTO employees(fname, lname) VALUES ('Alyssa', 'Christopher');
INSERT INTO employees(fname, lname) VALUES ('Jesse', 'Brown');
INSERT INTO employees(fname, lname) VALUES ('Hiddekel', 'Cantenero');
INSERT INTO employees(fname, lname) VALUES ('Connor', 'Gordon');
INSERT INTO employees(fname, lname) VALUES ('Trevor', 'Richey');
INSERT INTO employees(fname, lname) VALUES ('Mason', 'McGinley');
INSERT INTO employees(fname, lname) VALUES ('Regan', 'Carwile');
INSERT INTO employees(fname, lname) VALUES ('Upper', 'Management');
INSERT INTO employees(fname, lname) VALUES ('Copy', 'Center');