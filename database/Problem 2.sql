-- Question 2:

-- Create a table Department with fields deptid as primary key and dname as not null. 
-- Create another table Employee with fields empid, ename, salary, deptid and DOB. 
-- Assign constraints for empid as primary key, deptid as foreign key, ename, salary and DOB as not null.

CREATE TABLE Department(
    deptid INT PRIMARY KEY,
    dname VARCHAR(30) NOT NULL
);

CREATE TABLE Employee(
    empid INT PRIMARY KEY,
    ename VARCHAR(30) NOT NULL,
    salary INT NOT NULL,
    deptid INT NOT NULL,
    DOB DATE NOT NULL,
    FOREIGN KEY (deptid) REFERENCES Department(deptid)
);

-- a) Insert 5 records into the tables

INSERT INTO Department(deptid, dname) VALUES 
    (1, "CS"),
    (2, "Physics"),
    (3, "Maths"),
    (4, "Geography"),
    (5, "Psychology");

INSERT INTO Employee(empid, ename, salary, deptid, DOB) VALUES 
    (1, "Mia", 19000, 1, "1990-01-01"),
    (2, "John", 8200, 2, "1991-01-01"),
    (3, "Sara", 7500, 3, "1992-01-01"),
    (4, "David", 12500, 4, "1993-01-01"),
    (5, "Alex", 7000, 1, "1994-01-01");

-- b) Display the employees who got salary more than Rs.6000 and less than 10000

SELECT * FROM Employee WHERE salary > 60000 AND salary < 100000;

-- c) Display the dname, ename and salary of employees who got salary more than 5000

SELECT dname, ename, salary FROM Employee, Department WHERE Employee.salary > 5000 AND Employee.deptid = Department.deptid;

-- d) Rename the field ename with empname

ALTER TABLE Employee RENAME COLUMN ename TO empname;

-- e) Create a view named empview with fileds empid, empname and DOB. Display the view

CREATE VIEW empview AS SELECT empid, empname, DOB FROM Employee;

SELECT * FROM empview;

-- f) Display the empid and salary of all employees in descending order of their salary

SELECT empid, salary FROM Employee ORDER BY salary DESC;

-- g) Display the name of department with no employees

SELECT dname FROM Department WHERE deptid NOT IN (SELECT deptid FROM Employee);