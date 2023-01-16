# HospitalMenu
Author:
Hugh Hang

Purpose:
	- Using structures and unions.
	- Declaring variables as sub elements using bit fields
	- Formatting output using printf and sprint functions
	- Using string functions (e.g., strcpy(), strcmp())
	- Pass by reference (an address)
	- Code reuse

Revision Information:
Developer:
  Hugh Hang

Development Date:
  November 22, 2022

How software is organized:
	4 c files:
		employee.c
			- Contains employee functions
		patient.c
			- Contains patient functions
		hospital.c
			- Contains main function, a menu, and tests other functions
		populateRecords.c
			- Contains populating functions

	4 h files:
		employee.h
		patient.h
		populateRecords.h
		struct.h
			Contains prototypes and structs
			

How to compile:
	gcc -o hospital populateRecords.c patient.c hospital.c employee.c employee.h patient.h populateRecords.h struct.h

How to execute:
	./hospital x

x = any number you choose
