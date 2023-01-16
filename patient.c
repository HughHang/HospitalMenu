

#include "string.h"
#include "stdio.h"
#include "patient.h"

// ADD DOCUMENTATION



/********************************************************************/
//Print single patient's information
void printPatient(PersonRec person)

{

    	char name[33];

	sprintf(name, "%s %s", person.firstName, person.familyName);
	
        int totalCost = person.patient.dailyCost * person.patient.numDaysInHospital;
        
        printf("%-20s dept: %-2d days in hospital: %-3d severity: %-2d daily cost: %-3d total cost: %-5d\n", name, person.patient.department, person.patient.numDaysInHospital, person.patient.severity, person.patient.dailyCost, totalCost);
        
}

/********************************************************************/
void printPatients(PersonRec *person, int numRecords)
{

    // add code
    	
	for(int i = 0; i < numRecords; i++){
		
		//Check if person is patient
		if(person->emplyeeOrPatient == 1){
		
			printPatient(*person);	
			
		}
		
		person++;

	}
    

}


/********************************************************************/
void printPatientSummary(PersonRec *person, int numRecords)
{

    	//Overall variables
    	int numOfPat = 0;
    	float totalCost = 0;
    	float averageTotalCost = 0;
    	
	//Department variables
	int numDep1 = 0;
	float cost1 = 0;
	float dailyCost1 = 0;
	float averageCost1 = 0;

	int numDep2 = 0;
	float dailyCost2 = 0;
	float cost2 = 0;
	float averageCost2 = 0;

	int numDep3 = 0;
	float cost3 = 0;
	float dailyCost3 = 0;
	float averageCost3 = 0;

	int numDep4 = 0;
	float cost4 = 0;
	float dailyCost4 = 0;
	float averageCost4 = 0;

	int numDep5= 0;
	float cost5 = 0;
	float dailyCost5 = 0;
	float averageCost5 = 0;
	
	int numDep6= 0;
	float cost6 = 0;
	float dailyCost6 = 0;
	float averageCost6 = 0;

	for(int i = 0; i < numRecords; i++){

		//Check if employee
		if(person->emplyeeOrPatient == 1){
		
			numOfPat += 1;
			totalCost += (person->patient.dailyCost * person->patient.numDaysInHospital);
			
			//Add to variables corresponding to position
			switch(person->patient.department){
			
				case 1:
				
					numDep1 += 1;
					cost1 += (person->patient.dailyCost * person->patient.numDaysInHospital);
					dailyCost1 += person->patient.dailyCost;
					
					break;
					
				case 2:
				
					numDep2 += 1;
					cost2 += (person->patient.dailyCost * person->patient.numDaysInHospital);
					dailyCost2 += person->patient.dailyCost;
					
					break;
					
				case 3:
				
					numDep3 += 1;
					cost3 += (person->patient.dailyCost * person->patient.numDaysInHospital);
					dailyCost3 += person->patient.dailyCost;
					
					break;
					
				case 4:
				
					numDep4 += 1;
					cost4 += (person->patient.dailyCost * person->patient.numDaysInHospital);
					dailyCost4 += person->patient.dailyCost;
										
					break;
					
				case 5:
				
					numDep5 += 1;
					cost5 += (person->patient.dailyCost * person->patient.numDaysInHospital);
					dailyCost5 += person->patient.dailyCost;
					
					break;
					
				case 6: 
				
					numDep6 += 1;
					cost6 += (person->patient.dailyCost * person->patient.numDaysInHospital);
					dailyCost6 += person->patient.dailyCost;
					
					break;
				}
			}
		
			
		person++;
			
	}
		
	

	averageTotalCost = totalCost/numOfPat;
	
	printf("\nPatient Summary\n");
	printf("Total number of patients: %-3d, total cost to-date: %-7.2f average cost per patient to-date: %.2f\n", numOfPat, totalCost, averageTotalCost);


	printf("\nSummary by Department\n");
	
	
	printf("Department[1] - patients: %-2d total cost to-date: %-7.2f daily cost = %-7.2f average daily cost per patient = %.2f\n", numDep1, cost1, dailyCost1, (dailyCost1 / numDep1));

	printf("Department[2] - patients: %-2d total cost to-date: %-7.2f daily cost = %-7.2f average daily cost per patient = %.2f\n", numDep2, cost2, dailyCost2, (dailyCost2 / numDep2));

	printf("Department[3] - patients: %-2d total cost to-date: %-7.2f daily cost = %-7.2f average daily cost per patient = %.2f\n", numDep3, cost3, dailyCost3, (dailyCost3 / numDep3));

	printf("Department[4] - patients: %-2d total cost to-date: %-7.2f daily cost = %-7.2f average daily cost per patient = %.2f\n", numDep4, cost4, dailyCost4, (dailyCost4 / numDep4));

	printf("Department[5] - patients: %-2d total cost to-date: %-7.2f daily cost = %-7.2f average daily cost per patient = %.2f\n", numDep5, cost5, dailyCost5, (dailyCost5 / numDep5));

	printf("Department[6] - patients: %-2d total cost to-date: %-7.2f daily cost = %-7.2f average daily cost per patient = %.2f\n", numDep6, cost6, dailyCost6, (dailyCost6 / numDep6));

}		
		



/********************************************************************/
void searchPatients(PersonRec *person, int numRecords)

{

	

}
