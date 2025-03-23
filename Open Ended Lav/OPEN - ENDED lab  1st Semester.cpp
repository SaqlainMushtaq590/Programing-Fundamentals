#include <iostream>
#include <iomanip>
#include <ctime>
#include <windows.h>
using namespace std;
	HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
// Structure for menu items
struct MenuItem {
    string name;                                         // Don't be confused of such a lines[ SetConsoleTextAttribute(hConsole,7);]
    double price;                                          // these are used for coloring to output display
};

// Function to get current meal time
string getMealTime() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int hour = ltm->tm_hour;

    if      (hour >= 5 && hour < 11) return "breakfast";
    else if (hour >= 11 && hour < 17) return "lunch";
    else if (hour >= 19 && hour < 1) return "dinner";
    else return "\t\t closed";
}

// Function to display breakfast menu
void displayBreakfastMenu(MenuItem menu[], int size) {
    cout << "\n \t\t<========{ BREAKFAST MENU }======>\n";
    for (int i = 0; i < size; i++) {
    	SetConsoleTextAttribute(hConsole,10);
        cout <<"\t\t"<< i + 1 << ". " << menu[i].name;
		SetConsoleTextAttribute(hConsole,6);
		cout << " - PKR. " << fixed << setprecision(2) << menu[i].price << endl;
		SetConsoleTextAttribute(hConsole,7);
    }
}

// Function to display lunch menu
void displayLunchMenu(MenuItem menu[], int size) {
    cout << "\n\t\t <========{ LUNCH MENU }========>\n";
    for (int i = 0; i < size; i++) {
    	SetConsoleTextAttribute(hConsole,9);
        cout <<"\t\t"<< i + 1 << ". " << menu[i].name;
		SetConsoleTextAttribute(hConsole,6);
		cout << " - PKR. " << fixed << setprecision(2) << menu[i].price << endl;
		SetConsoleTextAttribute(hConsole,7);
    }
}

// Function to display dinner menu
void displayDinnerMenu(MenuItem menu[], int size) {
    cout << "\n \t\t<========{ DINNER MENU }=======>\n";
    for (int i = 0; i < size; i++) {
    	SetConsoleTextAttribute(hConsole,9);
        cout<< i + 1 << ". " << menu[i].name ;
        SetConsoleTextAttribute(hConsole,6);
		cout<< " - PKR. " << fixed << setprecision(2) << menu[i].price << endl;
     SetConsoleTextAttribute(hConsole,7);
}
}

// Function to display the menu and get item selection
double selectMenuItem(MenuItem menu[], int size) {
    int choice, quantity;
    double total = 0;
    
    while (true) {
        cout << "\n\t\tSelect an item (or " << size + 1 << " to finish): ";
        cin >> choice;
        
        if (choice == size + 1){
		 break;
		 }
		
        if (choice < 1 || choice > size) {
        	SetConsoleTextAttribute(hConsole,4);
            cout<< "\n\t\tInvalid choice! Try again.\n";
            SetConsoleTextAttribute(hConsole,7);
			continue;
        }
        
        cout << "\n\t\tEnter quantity: ";
        cin >> quantity;
        total += menu[choice - 1].price * quantity;
    }
    return total;
}

// Function to calculate final bill
double calculateFinalBill(double subtotal) {
    const double TAX_RATE = 10.0;
    const double DISCOUNT_RATE = 200.0;
    double discount = (subtotal > 2000) ? (subtotal * DISCOUNT_RATE / 100) : 0;
    double total = subtotal - discount;
    total += total * TAX_RATE / 100;
    
    SetConsoleTextAttribute(hConsole,14);
    cout <<"\n\n\t\t ***************************************\n";
    cout <<   "\t\t              BILL RECEIPT\n";
    cout <<   "\t\t|****************************************|";
    cout << "\n\t\t| Subtotal:PKR.                 " << fixed << setprecision(2) << subtotal<<"  |"<<endl;
    if (discount > 0)
	cout << "\t\t| Discount Applied (-20%): PKR. " << discount<<"   |"<<endl;
    cout << "\t\t| Tax (+10%):PKR.               " << total * TAX_RATE / 100<<"   |"<<endl;
    cout << "\t\t| Final Bill:PKR.               " << total <<"  |"<< endl;
    cout <<   "\t\t|****************************************|\n\n";
    
    SetConsoleTextAttribute(hConsole,7);
    return total;
}

// Function for payment processing
void processPayment(double total) {
    int method;
    double paidAmount;
    
    cout << "\n\tSelect method of payment by entering number";
	SetConsoleTextAttribute(hConsole,2);
	cout<<" \n\n\t\t<| Payment Methods:|>\n\t\t<| 1. Easypaisa    |>\n\t\t<| 2. Cash         |>\n\t\t<| 3. Card         |>\n\t\t<| 4. Bank         |>\n\t\t+___________________+";
	SetConsoleTextAttribute(hConsole,15);
    cout << "\n\tChoose Payment Method: ";
    cin >> method;
    
    if (method == 2) {
    	SetConsoleTextAttribute(hConsole,11);
        cout << "\n\tEnter cash amount: PKR ";
        cin >> paidAmount;
        if (paidAmount >= total) {
        	SetConsoleTextAttribute(hConsole,13);
            cout << "\n\tChange Returned: PKR " << fixed << setprecision(2) << (paidAmount - total) << endl;
        } else {
        	SetConsoleTextAttribute(hConsole,4);
            cout << "\n\t Insufficient cash! Please try again.\n"<<endl;
            processPayment(total);
            SetConsoleTextAttribute(hConsole,7);
            return;
        }
    } else {
    	SetConsoleTextAttribute(hConsole,13);
        cout << "\t\tProcessing "  << " payment of PKR " << fixed << setprecision(2) << total << "...\n\n\tPayment Successful!";
    }
    
    SetConsoleTextAttribute(hConsole,10);
    cout << "\n\t\t^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^- $ -^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-^-\n";
    cout << "\t\t<<=============><> Thank you for dining with us! Have a great day! <><==============>>\n";
    cout << "\t\t________________________________________________________________________________________\n";
	SetConsoleTextAttribute(hConsole,7);
}

int main() {

	
	
    string mealTime = getMealTime();
    if (mealTime != "breakfast"&& mealTime != "lunch" && mealTime != "dinner") {
    	SetConsoleTextAttribute(hConsole,14);
		cout << " \t\t ____________________________________________________________________________________________\n";
        cout << " \n\t\t <><><><><><><><>---    Sorry, we are closed. Come back during meal hours!   ---<><><><><><><>\n";
        cout << " \n\t\t =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n";
        SetConsoleTextAttribute(hConsole,7);
        return 0;
    }
    
    
    
    SetConsoleTextAttribute(hConsole,5);
    cout << "  __        __    _                            " << "\n";
    cout << "  \\ \\      / /   | |                             " << "\n";
    cout << "   \\ \\ /\\ / / __ | | ___ ___  _ __ ___   ___   " << "\n";
    cout << "    \\ V  V //  _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\  " << "\n";
    cout << "     \\_/\\_/ |  __/ | (_| (_) | | | | | |  __/   " << "\n";
    cout << "             \\__ |_|\\___\\___/|_| |_| |_|\\___|  " << "\n";
    cout << "                                                       " << "\n";
    SetConsoleTextAttribute(hConsole,6);
    cout << "\n\n\t<<<<<<  It's " << mealTime << " time. >>>>>>\n";
     SetConsoleTextAttribute(hConsole,5);
    cout<<"    ___   ___  \n";
	cout<<"   |   \\ /   | _______   _  _____   ____ ____   \n";
	cout<<"   |    Y    |/  ____ \\ |        \\ |    |    | \n";
	cout<<"   |         ||   ____/ |   Y    | |    |    |  \n";
	cout<<"   |____|____|\\________>|___|____| \\_________/  \n";
    SetConsoleTextAttribute(hConsole,7);
    MenuItem breakfastMenu[11] = { {"Pancakes      ", 400}, {"Omelette      ", 180}, {"Coffee        ", 500}, {"Juice         ", 100}, 
                                   {"Nan Chany     ", 200}, {"Anda Paratha  ", 250}, {"Halwa Puri    ", 450}, {"Siri Paya     ",100},
								   {"Aloo Paratha  ",200}, {"Subz chai    ",  120},  {"Tea          ",   80} };
                              
                              
    MenuItem lunchMenu[17] = { {"Burger       ", 600}, {"Salad        ", 300}, {"Juice        ", 200}, {"Sandwich     ", 150},
	                           {"Soup         ", 300}, {"Pizza        ",1200}, {"Soda         ", 400}, {"Beef pulao   ", 1000 },
	                           {"Biryani      ", 500}, {"Nihari      ", 1500}, {"Haleem      ",  300},  {"Shami Kabab ",  400},{"kharahi     ",1300},
							   {"Red Anar     ", 140}, {"Big Lichlee  ", 160}, {"Pkola       ",  150}, {"Vimto        ", 170} };
							  
							  
    MenuItem dinnerMenu[16] = { {"Steak                ",  800}, {"Pasta                ",  970}, {"CokaCola             ", 200}, {"Seafood              ", 1400},
	                            {"Grilled Chicken      ", 1380}, {"Rice Bowl            ", 1200}, {"Kadhi Pakora         ",1250},
								{"Chicken Kormma       ", 1100}, {"Beef korma           ", 1350}, {"Chapli kebab        ",  500},
							 	{"Briyani             ",  1200}, {"Daal mash           ",   500}, {"Big Lichlee         ",160}, {"Red Anar            ", 140},
								{"Pkola               ", 150},   {"Vimto               ", 170}};
							 	
							 	
    
    
    MenuItem *menu;
    int menuSize;
    
    
    
    if (mealTime == "breakfast") {
        menu = breakfastMenu;
        menuSize = 11;
        displayBreakfastMenu(menu, menuSize);
        
        
        
    } else if (mealTime == "lunch") {
        menu = lunchMenu;
        menuSize = 17;
        displayLunchMenu(menu, menuSize);
    }
        
    else if(mealTime=="dinner")
	 {
        menu = dinnerMenu;
        menuSize = 16;
        displayDinnerMenu(menu, menuSize);
    }
    
    double subtotal = selectMenuItem(menu, menuSize);
    double finalAmount = calculateFinalBill(subtotal);
    
    processPayment(finalAmount);
    
    return 0;
}

