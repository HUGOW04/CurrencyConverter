#include <iostream>
#include <Windows.h>


int main()
{
    int choice;
    float amount;
    float eurosdollars, dollarseuros, dollarsyen, yendollars, dollarsUKpounds, UKpoundsdollars, dollarkronor, kronordollar, dollarrubles, rublesdollar;
    std::cout << "Enter what currency:"<<std::endl;
    std::cout << "1.eurosdollars, \n2.dollarseuros,\n 3.dollarsyen,\n 4.yendollars,\n 5.dollarsUKpounds,\n 6.UKpoundsdollars,\n 7.dollarkronor,\n 8.kronordollar,\n 9.dollarrubles,\n 10.rublesdollar"<<std::endl;
    std::cout << "Enter choice from 1 to 10: ";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        std::cout << "\nPlease enter the amount of United States Dollars you would like to convert to European Euros: ";
        std::cin >> eurosdollars;
        std::cout << "\nYou have entered " << eurosdollars << " Dollars which is equal to " << eurosdollars * 0.678518116 << " Euros." << std::endl;
        break;
    case 2:
        std::cout << "\nPlease enter the amount of European Euros you would like convert to United States Dollars: ";
        std::cin >> dollarseuros;
        std::cout << "\nYou have entered " << dollarseuros << " Euros which is equal to " << dollarseuros * 1.4738 << " Dollars." << std::endl;
        break;
    case 3:
        std::cout << "\nPlease enter the amount of United States Dollars you would like to convert to Japanese Yen: ";
        std::cin >> dollarsyen;
        std::cout << "\nYou have entered " << dollarsyen << " Dollars which is equal to " << dollarsyen * 95.71255 << " Yen." << std::endl;
        break;
    case 4:
        std::cout << "\nPlease enter the amount of Japanese Yen you would like to convert to United States Dollars: ";
        std::cin >> yendollars;
        std::cout << "\nYou have entered " << yendollars << " Yen which is equal to " << yendollars * 0.0105652 << " Dollars." << std::endl;
        break;
    case 5:
        std::cout << "\nPlease enter the amount of United States Dollars you would like to convert to United Kingdom Pounds: ";
        std::cin >> dollarsUKpounds;
        std::cout << "\nYou have entered " << dollarsUKpounds << " Dollars which is equal to " << dollarsUKpounds * 0.598787 << " United Kingdom Pounds." << std::endl;
        break;
    case 6:
        std::cout << "\nPlease enter the United Kingdom Pounds you would like to covert to United States Dollars: ";
        std::cin >> UKpoundsdollars;
        std::cout << "\nYou have entered " << UKpoundsdollars << " United Kingdom Pounds which is equal to " << UKpoundsdollars * 1.67004 << " Dollars." << std::endl;
        break;
    case 7:
        std::cout << "\nPlease enter the amount of United States Dollars you would like to convert to Sweden Kronor: ";
        std::cin >> dollarkronor;
        std::cout << "\nYou have entered " << dollarkronor << " Dollars which is equal to " << dollarkronor * 7.19434 << " Sweden Kronor." << std::endl;
        break;
    case 8:
        std::cout << "\nPlease enter the amount of Sweden Kronor you would like to convert to United States Dollars: ";
        std::cin >> kronordollar;
        std::cout << "\nYou have entered " << kronordollar << " Kronor which is equal to " << kronordollar * 0.138998 << " United States Dollars." << std::endl;
        break;
    case 9:
        std::cout<<"\nPlease enter the amount of United States Dollars you would like to convert to Russian Rubles: ";
        std::cin >> dollarrubles;
        std::cout << "\nYou have entered " << dollarrubles << " Dollars which is equal to " << dollarrubles * 31.5650 << " Russian Rubles." << std::endl;
        break;
    case 10:
        std::cout << "\nPlease enter the amount of Russian Rubles you would like to convert to United States Dollars: ";
        std::cin >> rublesdollar;
        std::cout << "\nYou have entered " << rublesdollar << " Rubles which is equal to " << rublesdollar * 0.0316807 << " United States Dollar." << std::endl;
        break;

    }
    
}
