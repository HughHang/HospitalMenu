#include "employee.h"
#include "stdio.h"


// ADD DOCUMENTATION 
//Print single employees information
void printEmployee(PersonRec person)

{

    // add code
    
	char name[33];

	sprintf(name, "%s %s", person.firstName, person.familyName);
	
        
        float salaryToDate = person.emp.salary * person.emp.yearsService;
       
       
        
        printf("%-20s Dept: %-2d salary: %-9.2f position: %-2d years of service: %-4d salary to-date %.2f \n", name, person.emp.department, person.emp.salary, person.emp.position, person.emp.yearsService, salaryToDate);

}

/****************************************/
//Check if employee then print
void printEmployees(PersonRec *person, int numRecords)
{


	// add code
	for(int i = 0; i < numRecords; i++){
	
		if(person->emplyeeOrPatient == 0){
		
			printEmployee(*person);	
			
		}
		
		person++;

	}
    	
}

/********************************************************/
//Print number of employees, salary, average salary
void printEmployeesSummary(PersonRec *person, int numRecords)
{

	//Overall variables
    	int numOfEmp = 0;
	float totalSal = 0;
	float averageSal = 0;
	
	//Position variables
	int numEmp0 = 0;
	float salary0 = 0;
	
	int numEmp1 = 0;
	float salary1 = 0;
	
	int numEmp2 = 0;
	float salary2 = 0;
	
	int numEmp3 = 0;
	float salary3 = 0;
	 

	for(int i = 0; i < numRecords; i++){

		//Check if employee
		if(person->emplyeeOrPatient == 0){
		
			numOfEmp += 1;
			totalSal += person->emp.salary;
			
			//Add to variables corresponding to position
			switch(person->emp.position){
			
				case 0:
				
					numEmp0 += 1;
					salary0 += person->emp.salary;
					
					break;
					
				case 1:
				
					numEmp1 += 1;
					salary1 += person->emp.salary;
					
					break;
					
				case 2:
				
					numEmp2 += 1;
					salary2 += person->emp.salary;
					
					break;
					
				case 3:
				
					numEmp3 += 1;
					salary3 += person->emp.salary;
					
					break;
					
			
			}
			
		}
		
		person++;
		
	}		
		
	averageSal = totalSal/numOfEmp;


	//PRINT ALL INFO
	printf("\nTotal number of employees: %-2d, total salary: %-10.2f, average salary = %-8.2f\n", numOfEmp, totalSal, averageSal);
	
	printf("\nSummary by position\n");
	
	
	printf("position[0] - employees: %-2d total salary: %-9.2f average salary = %-8.2f\n", numEmp0, salary0, (salary0 / numEmp0));
	
	printf("position[1] - employees: %-2d total salary: %-9.2f average salary = %-8.2f\n", numEmp1, salary1, (salary1 / numEmp1));
	
	
	printf("position[2] - employees: %-2d total salary: %-9.2f average salary = %-8.2f\n", numEmp2, salary2, (salary2 / numEmp2));
	
	
	printf("position[3] - employees: %-2d total salary: %-9.2f average salary = %-8.2f\n", numEmp3, salary3, (salary3 / numEmp3));

	

}
