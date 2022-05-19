#include<stdio.h>
int main()
{
	float km,meter,feet,inches,centimeter;
	printf("Enter distance from Dhanmondi to Ashulia: ");
	scanf("%f",&km);
	meter=km*1000; //1km=1000meters
	feet=km*3280.8399; //1km=3280.8399 feets
	inches=km*39370.078; //1km=39370.078 inches
	centimeter=km*100000; //1km=100000 centimeter
	
	printf("Distance in meter from Dhanmondi to Ashulia:%.2f\n",meter);
	printf("Distance in feet from Dhanmondi to Ashulia:%.2f\n",feet);
	printf("Distance in inches from Dhanmondi to Ashulia:%.2f\n",inches);
	printf("Distance in centimeter from Dhanmondi to Ashulia:%.2f\n",centimeter);
	
	
	
	return 0;
}
