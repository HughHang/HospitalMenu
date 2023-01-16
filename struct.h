// file is struct.h
#ifndef STRUCT_HEADER
#define STRUCT_HEADER


// The file contains the structure declarations required by the program 

/***************************************************************/

//DEFINES

#define NAME_SIZE 15	// size of array for patient/employee name (maximum name length is NAME_SIZE - 1)

//Patient related defines
#define PATIENT_TYPE 1      // determine that the record is a patient record
#define NUM_SEVERITIES 4  // number of different states of a patient
#define LIGHT 0
#define STABLE 1
#define ACCUTE 2
#define IMMEDIATE_SURGERY 3

//Employee related defines
#define EMPLOYEE_TYPE 0     // determines that the record is an employee record
#define MAX_POSITIONS 4     // number of different positions
#define DOCTOR 0
#define NURSE 1
#define SURGEON  2
#define ADMIN 3

// Department defines
#define MAX_DEPARTMENTS 6


/*****************************************************************/

// structure contains patient information 
typedef struct patient {

	unsigned short numDaysInHospital : 5;	// number of days in hospital
	unsigned short department : 3;		// department in hospital 
	unsigned short dailyCost : 6;		// cost of hospitalization per day
	unsigned short severity : 2;		// severity of illness
	
} PatientRec;


/*****************************************************************/



// structure contains employee information
typedef struct employee {

	unsigned int position : 2;	// position of employee in hospital
	unsigned int yearsService : 6;	// years of services
	unsigned int department : 3;	// department in hospital
	float salary;	// annual salary
	
} EmployeeRec;


/*****************************************************************/


// structure contains person informSation
typedef struct person {
	char firstName[NAME_SIZE];
	char familyName[NAME_SIZE];
	unsigned int emplyeeOrPatient : 2;
	union {
		EmployeeRec emp;
		PatientRec patient;
	};
} PersonRec;

#endif
