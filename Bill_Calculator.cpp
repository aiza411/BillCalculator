#include <iostream>
#include <iomanip>

using namespace std;

double calculateDiscount(double totalBill)
{
    if (totalBill <= 1000)
    {
        return totalBill * 0.05;
    }

    else if (totalBill <= 1500)
    {
        return totalBill * 0.1;
    }

    else if (totalBill <= 2000)
    {
        return totalBill * 0.15;
    }

    else if (totalBill <= 2500)
    {
        return totalBill * 0.2;
    }

    else if (totalBill <= 3000)
    {
        return totalBill * 0.3;
    }

    else
    {
        return totalBill * 0.5;
    }
}

int main()
{
    int option;
    double totalBill = 0.0;

    do
    {
        cout << "***********welcome to main menu***************\n";
        cout << "Press 1 to select TAKEAWAY\n";
        cout << "Press 2 to select DINE IN\n";
        cout << "Press 3 to select DELIVERY\n";
        cout << "Press 0 to exit\n";
        cout << "Which category you want to choose: ";
        cin >> option;

        while (cin.fail())
        {
            cout << "\n\t\tYOU HAVE NOT ENTERED A DIGIT!!!!!!";
            cout << "\n\t\tENTER THE CATERGORY YOU WANT TO CHOOSE AGAIN";
            cin.clear();
            cin.ignore(256, '\n');
            cin >> option;
        }

        while (option < 0)
        {
            cout << "\n\t\tYOU HAVE ENTERED A NEGATIVE NUMBER!!!!!!";
            cout << "\n\t\tENTER THE CATERGORY YOU WANT TO CHOOSE AGAIN";
            cin >> option;
        }

        switch (option)
        {
        case 1:
        {
            int choice;
            do
            {
                cout << "***********welcome to takeaway menu***************\n";
                cout << "_____PRESS 1 FOR BURGER_____\n";
                cout << "_____PRESS 2 FOR PARATHA ROLL _____\n";
                cout << "_____PRESS 3 FOR PAKISTANI FOOD _____\n";
                cout << "_____PRESS enter END ORDER _____\n";
                cout << "_____PRESS 0 FOR MAIN MENU _____\n";
                cout << "Which category you want to choose: ";
                cin >> choice;

                switch (choice)
                {
                case 1:
                    cout << "Select burger type:\n";
                    cout << "1) Mack___________699\n";
                    cout << "2) Zinger___________599\n";
                    cout << "3) Hot___________449\n";
                    cout << "4) Patty Burger___________699\n";
                    cout << "5) To end order\n";
                    cout << "6) To exit burger category\n";
                    cout << "Burger option: ";
                    int burgerOption;
                    cin >> burgerOption;
                    switch (burgerOption)
                    {
                    case 1:
                        totalBill += 699;
                        break;
                    case 2:
                        totalBill += 599;
                        break;
                    case 3:
                        totalBill += 449;
                        break;
                    case 4:
                        totalBill += 699;
                        break;
                    default:
                        break;
                    }
                    break;
                case 2:
                    cout << "Select paratha roll type:\n";
                    cout << "1) platter___________299\n";
                    cout << "2) cheese___________349\n";
                    cout << "3) crispy___________399\n";
                    cout << "4) double trouble___________699\n";
                    cout << "5) To end order\n";
                    cout << "6) To exit paratha roll category\n";
                    cout << "Paratha roll option: ";
                    int parathaRollOption;
                    cin >> parathaRollOption;
                    switch (parathaRollOption)
                    {
                    case 1:
                        totalBill += 299;
                        break;
                    case 2:
                        totalBill += 349;
                        break;
                    case 3:
                        totalBill += 399;
                        break;
                    case 4:
                        totalBill += 699;
                        break;
                    default:
                        break;
                    }
                    break;
                case 3:
                    cout << "Select Pakistani food type:\n";
                    cout << "1) Haleem___________199\n";
                    cout << "2) Nihaari___________199\n";
                    cout << "3) Daal___________149\n";
                    cout << "4) Ghosht___________249\n";
                    cout << "5) To end order\n";
                    cout << "6) To exit pakistani food category\n";
                    cout << "Pakistani food option: ";
                    int pakistaniFoodOption;
                    cin >> pakistaniFoodOption;
                    switch (pakistaniFoodOption)
                    {
                    case 1:
                        totalBill += 199;
                        break;
                    case 2:
                        totalBill += 199;
                        break;
                    case 3:
                        totalBill += 149;
                        break;
                    case 4:
                        totalBill += 249;
                        break;
                    default:
                        break;
                    }
                    break;
                case 0:
                    break;
                default:
                    cout << "Invalid choice!\n";
                }
            } while (choice != 0);
            break;
        }
        case 2:
            // Dine In
            totalBill *= 1.16; // Adding 16% GST
            break;
        case 3:
            // Delivery
            totalBill += 200; // Flat 200 Rs delivery charge
            break;
        case 0:
            break;
        default:
            cout << "Invalid choice!\n";
        }

    } while (option != 0);

    double discount = calculateDiscount(totalBill);
    cout << "Total bill: " << fixed << setprecision(2) << totalBill << endl;
    cout << "Discount applied: " << fixed << setprecision(2) << discount << endl;
    cout << "Amount to pay: " << fixed << setprecision(2) << (totalBill - discount) << endl;

    return 0;
}
