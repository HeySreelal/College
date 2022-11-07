-- Question 1:

-- Create a table Student with fields rollno, name, gender and mark with rollno as 
-- primary key and assign suitable constraints(like check and not null) for each attributes.

-- Answers:

CREATE TABLE Student(
    rollno INT PRIMARY KEY,
    name VARCHAR(30) NOT NULL, 
    gender VARCHAR(10),
    mark INT CHECK(mark>=0 AND mark<=100)
);

-- a) Insert 5 records into the table.

INSERT INTO Student(rollno, name, gender, mark) VALUES 
    (1, "Mia", "F", 45),
    (2, "John", "M", 65),
    (3, "Sara", "F", 75),
    (4, "David", "M", 85),
    (5, "Alex", "M", 55);

-- b) Display all boy students with their name.

SELECT name FROM Student WHERE gender = "M";

-- c) Find the Average mark

SELECT AVG(mark) FROM Student;

-- d) Display the rollno, name and mark of a student who got highest mark.

SELECT rollno, name, mark FROM Student WHERE mark = (SELECT MAX(mark) FROM Student);

-- e) Alter the table by adding one more field place.

ALTER TABLE Student ADD place VARCHAR(30);

-- f) Update the field place

UPDATE Student SET place = "Delhi" WHERE rollno = 1;
UPDATE Student SET place = "Mumbai" WHERE rollno = 2;
UPDATE Student SET place = "Chennai" WHERE rollno = 3;
UPDATE Student SET place = "Kolkata" WHERE rollno = 4;
UPDATE Student SET place = "Bangalore" WHERE rollno = 5;

-- g) Display the name and place of all girl students who have marks greater than 35 and less than 70

SELECT name, place FROM Student WHERE gender = "F" AND mark > 35 AND mark < 70;
