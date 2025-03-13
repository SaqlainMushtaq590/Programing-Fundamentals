#include <iostream>
#include <iomanip>

using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "\nRestaurant Menu:" << endl;
    cout << "1. Burger - $5.99" << endl;
    cout << "2. Pizza - $8.99" << endl;
    cout << "3. Pasta - $7.49" << endl;
    cout << "4. Salad - $4.99" << endl;
    cout << "5. Soda - $1.99" << endl;
    cout << "6. Exit" << endl;
}

// Function to calculate the cost of an item
double calculateItemCost(double price, int quantity) {
    return price * quantity;
}

// Function to calculate final bill with tax
double calculateFinalBill(double subtotal, double taxRate) {
    return subtotal + (subtotal * taxRate / 100);
}

int main() {
    const double TAX_RATE = 10.0; // 10% tax
    double prices[] = {5.99, 8.99, 7.49, 4.99, 1.99};
    double subtotal = 0.0;
    int choice, quantity;
    
    do {
        displayMenu();
        cout << "\nEnter the number of the item you want to order (or 6 to exit): ";
        cin >> choice;
        
        if (choice >= 1 && choice <= 5) {
            cout << "Enter quantity: ";
            cin >> quantity;
            
            double itemTotal = calculateItemCost(prices[choice - 1], quantity);
            subtotal += itemTotal;
            
            cout << "Added to bill: $" << fixed << setprecision(2) << itemTotal << "\n";
        } else if (choice != 6) {
            cout << "Invalid choice. Please select a valid menu item.\n";
        }
        
    } while (choice != 6);
    
    if (subtotal > 0) {
        double finalTotal = calculateFinalBill(subtotal, TAX_RATE);
        cout << "\nSubtotal: $" << fixed << setprecision(2) << subtotal << endl;
        cout << "Total after " << TAX_RATE << "% tax: $" << finalTotal << endl;
    } else {
        cout << "No items ordered. Thank you!\n";
    }
    
    return 0;
}

