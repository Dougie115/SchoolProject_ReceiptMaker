#include<iostream>
#include<string>
#include <iomanip>


using namespace std;
struct menuItemType 
{
	string menuItem; 
	double menuPrice;  
};
menuItemType menu[9];
void getData(); 
void showMenu(); 
void selectItems();  
void printCheck(); 
int c[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

int main()
{

	cout << "======================================================= \n";
	cout << "Restaurant Menu\n ";
	cout << "Long Beach City College\n ";
	cout << "Author: Douglas Lopez \n";
	cout << "Nov. 24, 2018 \n";
	cout << "======================================================= \n";


	double t;
	getData(); //getData function
	showMenu();//showMenu function
	selectItems(); //selectItems function
	printCheck(); //printCheck function

	system("pause");
	return 0;
	
}

void getData() //Menu Item along with their price
{
	menu[1].menuItem = "Plain Egg";
	menu[1].menuPrice = 1.45;
	menu[2].menuItem = "Bacon and Egg";
	menu[2].menuPrice = 2.45;
	menu[3].menuItem = "Muffin";
	menu[3].menuPrice = 0.99;
	menu[4].menuItem = "French Toast";
	menu[4].menuPrice = 1.99;
	menu[5].menuItem = "Fruit Basket";
	menu[5].menuPrice = 2.49;
	menu[6].menuItem = "Cereal";
	menu[6].menuPrice = 0.69;
	menu[7].menuItem = "Coffee";
	menu[7].menuPrice = 0.50;
	menu[8].menuItem = "Tea";
	menu[8].menuPrice = 0.75;

}
void printCheck() //Prints the Receiept Total for order
{
	double sum = 0, t, amtdue;

	cout << "------------------------------------------------" << endl;
	cout << "         Welcome to Johnny's Restaurant         " << endl;
	cout << "------------------------------------------------" << endl;
	for (int i = 1; i < 9; i++)
	{
		if (c[i] > 0)
		{
			cout << c[i] << " " << menu[i].menuItem << "  $" << menu[i].menuPrice << endl;
			sum = sum + (menu[i].menuPrice*c[i]);
		}

	}

	t = sum * 0.05; //5%  can be modified in decimal form depending on tax percentage
	amtdue = sum + t; //Total price

	cout << "------------------------------------------------" << endl;
	cout << "   Tax 5%         $" <<setprecision(3)<< t << endl;
	cout << "   Amount due     $" <<setprecision(3)<< amtdue << endl;
	cout << "------------------------------------------------" << endl;
	cout << "Thank you for dining with us see you soon!\n" << endl;


}
void showMenu() //Prints out menu items 
{
	cout << "Breakfast Menu " << endl;
	cout << "1." << "\t" << menu[1].menuItem << setw(11) << "$ " << menu[1].menuPrice << endl;
	cout << "2." << "\t" << menu[2].menuItem << setw(7) << "$ " << menu[2].menuPrice << endl;
	cout << "3." << "\t" << menu[3].menuItem << setw(14) << "$ " << menu[3].menuPrice << endl;
	cout << "4." << "\t" << menu[4].menuItem << setw(8) << "$ " << menu[4].menuPrice << endl;
	cout << "5." << "\t" << menu[5].menuItem << setw(8) << "$ " << menu[5].menuPrice << endl;
	cout << "6." << "\t" << menu[6].menuItem << setw(14) << "$ " << menu[6].menuPrice << endl;
	cout << "7." << "\t" << menu[7].menuItem << setw(14) << "$ " << menu[7].menuPrice << endl;
	cout << "8." << "\t" << menu[8].menuItem << setw(17) << "$ " << menu[8].menuPrice << endl;
}
void selectItems()
{
	int choice, qty;
	char con;
	do {  //do loop for order taking
		cout << "\nPlease enter the number of the item you would like to order: ";
		cin >> choice;
		cout << "Please enter the quantity: ";
		cin >> qty;

		switch (choice)
		{
		case 1:
		{
			c[1] = c[1] + qty;
			cout << "Current Order: " << menu[1].menuItem << endl;

			break;
		}
		case 2:
		{
			c[2] = c[2] + qty;
			cout << "Current Order: " << menu[2].menuItem << endl;

			break;
		}
		case 3:
		{
			c[3] = c[3] + qty;
			cout << "Current Order: " << menu[3].menuItem << endl;

			break;
		}
		case 4:
		{
			c[4] = c[4] + qty;
			cout << "Current Order: " << menu[4].menuItem << endl;

			break;
		}
		case 5:
		{
			c[5] = c[5] + qty;
			cout << "Current Order: " << menu[5].menuItem << endl;

			break;
		}
		case 6:
		{
			c[6] = c[6] + qty;
			cout << "Current Order: " << menu[6].menuItem << endl;

			break;
		}
		case 7:
		{
			c[7] = c[7] + qty;
			cout << "Current Order: " << menu[7].menuItem << endl;


			break;
		}
		case 8:
		{
			c[8] = c[8] + qty;
			cout << "Current Order; " << menu[8].menuItem << endl;


			break;
		}
		default:
			cout << "invalid input" << endl;
		}
		cout << "Do you want to order more items (y/n)?: ";
		cin >> con;


	} while (con != 'n');
	cout << endl;
}

