#include<iostream>

int main(){
	//initialize variables
	double lethal_mouse_dose, mass_human, mass_mouse, lethal_human_dose, can_mass = 350;
	//ask the user to input the amount of artificial sweetner needed to kill a mouse, the mass of the mouse, and the goal weight of the dieter
	std::cout << "Enter the amount of artificial sweetner (in grams) needed to kill a mouse." << std::endl;
	std::cin >> lethal_mouse_dose;
	std::cout << "Enter the mass of the mouse (in grams)." << std::endl;
	std::cin >> mass_mouse;
	std::cout << "Enter the goal weight (in grams) of the dieter" << std::endl;
	std::cin >> mass_human;

	//to find out the lethal dose ratio, divid the mass of the mouse by the weight in grams of sweetner needed to kill the mouse
	lethal_human_dose = mass_human / (mass_mouse/lethal_mouse_dose);
	//then, divide the mass of the human by that in order to find how much in grams of sweetner it would take to kill a human.
	
	//a can of soda pop has a mass of 350, and contains a tenth of 1% grams of sugar per can, so to find out how many cans it would take to kill a human of the target weight, divide the weight needed to kill the human by the amount in grams of sweetner per can.
	double const percent_sweetner_per_can = 0.001;
	double grams_sweetner_per_can = can_mass * percent_sweetner_per_can;
	int lethal_soda_pop_cans = lethal_human_dose / grams_sweetner_per_can;
	//return the output as the number of cans needed to kill a human of the target weight.
	std::cout << "The amount of soda pop cans you would need to drink to kill yourself is " << lethal_soda_pop_cans << std::endl;
	//somehow restart the program if user prompts it
	return 0;
}
