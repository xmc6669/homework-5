#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
int choice = 0;
int Arobots = 0;
int Brobots = 0;
int Crobots = 0;
int Arobotprice = 5;
int Brobotsprice = 10;
int Crobotsprice = 15;
vector<int> robotA(5,0);
    vector<int> robotB(5,0);
    vector<int> robotC(5,0);
    while (choice != 4)
    {
        cout << "(1)Create" << endl;
        cout << "(2)View Inventory" << endl;
        cout << "(3)Order" << endl;
        cout << "(4)Exit" << endl;

        cin >> choice;
        if (choice == 1)
        {
            int choice2 = 0;
        while(choice2 != 3){
        cout << "(1)Create Robot Part" << endl;
        cout << "(2)Create Robot Model" << endl;
        cout << "(3)Exit" << endl;
        cin >> choice2;
        if(choice2 == 1){
            int choice3=0;
            cout << "Create a part for which robot?,(1)robotA,(2)robotB,(3)robotC"<< endl;
        cin >> choice3;
            if(choice3 == 1){
                int choice4=0;
                cout << "What would you like to build?" << endl;
                cout << "(1)RobotA head" << endl;
                cout << "(2)RobotA arms" << endl;
                cout << "(3)RobotA torso" << endl;
                cout << "(4)RobotA Locomotor" << endl;
                cout << "(5)RobotA Batteries" << endl;
                cin >> choice4;
                if(choice4 == 1){
                        int amount;
                    cout << "Enter how many heads" << endl;
                cin >> amount;
                    robotA[0] += amount;
                }
                if(choice4 == 2){
                        int amount;
                    cout << "Enter how many pairs of arms" << endl;
                  cin >> amount;
                    robotA[1] += amount;
                }
                if(choice4 == 3){
                        int amount;
                    cout << "Enter how many torsos" << endl;
                cin >> amount;
                    robotA[2] += amount;
                }
                if(choice4 == 4){
                        int amount;
                    cout << "Enter how many locomotors" << endl;
                  cin >> amount;
                    robotA[3] += amount;
                }
                if(choice4 == 5){
                        int amount;
                    cout << "Enter how many batteries" << endl;
                  cin >> amount;
                    robotA[4] += amount;
                }
            }
            if(choice3 == 2){
                int choice4=0;
                cout << "What would you like to build?" << endl;
                cout << "(1)RobotB head" << endl;
                cout << "(2)RobotB arms" << endl;
                cout << "(3)RobotB torso" << endl;
                cout << "(4)RobotB Locomotor" << endl;
                cout << "(5)RobotB Batteries" << endl;
                cin >> choice4;
                if(choice4 == 1){
                        int amount;
                    cout << "Enter how many heads" << endl;
                cin >> amount;
                    robotB[0] += amount;
                }
                if(choice4 == 2){
                        int amount;
                    cout << "Enter how many pairs of arms" << endl;
                  cin >> amount;
                    robotB[1] += amount;
                }
                if(choice4 == 3){
                        int amount;
                    cout << "Enter how many torsos" << endl;
                cin >> amount;
                    robotB[2] += amount;
                }
                if(choice4 == 4){
                        int amount;
                    cout << "Enter how many locomotors" << endl;
                  cin >> amount;
                    robotB[3] += amount;
                }
                if(choice4 == 5){
                        int amount;
                    cout << "Enter how many batteries" << endl;
                  cin >> amount;
                    robotB[4] += amount;
                }
            }
            if(choice3 == 3){
                int choice4=0;
                cout << "What would you like to build?" << endl;
                cout << "(1)RobotC head" << endl;
                cout << "(2)RobotC arms" << endl;
                cout << "(3)RobotC torso" << endl;
                cout << "(4)RobotC Locomotor" << endl;
                cout << "(5)RobotC Batteries" << endl;
                cin >> choice4;
                if(choice4 == 1){
                        int amount;
                    cout << "Enter how many heads" << endl;
                cin >> amount;
                    robotC[0] += amount;
                }
                if(choice4 == 2){
                        int amount;
                    cout << "Enter how many pairs of arms" << endl;
                  cin >> amount;
                    robotC[1] += amount;
                }
                if(choice4 == 3){
                        int amount;
                    cout << "Enter how many torsos" << endl;
                cin >> amount;
                    robotC[2] += amount;
                }
                if(choice4 == 4){
                        int amount;
                    cout << "Enter how many locomotors" << endl;
                  cin >> amount;
                    robotC[3] += amount;
                }
                if(choice4 == 5){
                        int amount;
                    cout << "Enter how many batteries" << endl;
                  cin >> amount;
                    robotC[4] += amount;
                }
            }
        }
        if (choice2 == 2){
            cout << endl;
            cout << "Robots assembled with parts in store" << endl;
            cout << endl;
            int smallestA,smallestB,smallestC = 99999999;
            for(int i=0;i<robotA.size();i++){
                if(robotA[i] < smallestA){
                    smallestA = robotA[i];
                }
                if(robotB[i] < smallestB){
                    smallestB = robotB[i];
                }
                if(robotC[i] < smallestC){
                    smallestC = robotC[i];
                }
            }
            Arobots += smallestA;
            robotA[0] = robotA[0]-smallestA;
            robotA[1] = robotA[1]-smallestA;
            robotA[2] = robotA[2]-smallestA;
            robotA[3] = robotA[3]-smallestA;
            robotA[4] = robotA[4]-smallestA;
            Brobots += smallestB;
            robotB[0] = robotB[0]-smallestB;
            robotB[1] = robotB[1]-smallestB;
            robotB[2] = robotB[2]-smallestB;
            robotB[3] = robotB[3]-smallestB;
            robotB[4] = robotB[4]-smallestB;
            Crobots += smallestC;
            robotC[0] = robotC[0]-smallestC;
            robotC[1] = robotC[1]-smallestC;
            robotC[2] = robotC[2]-smallestC;
            robotC[3] = robotC[3]-smallestC;
            robotC[4] = robotC[4]-smallestC;
        }
       }
        }
        if (choice == 2){
            int choice = 0;
            cout << "(1)Print number of robot parts" << endl;
            cout << "(2)Print number of robots" << endl;
            cin >> choice;
            cout << endl;
            if(choice == 1){
        cout << "Type Of Robot||" << " Heads " << "|| Arms " << "|| Torsos " << "|| Locomotors " << "|| Batteries " << endl;
        cout << "RobotA       ||  " << robotA[0] << "        " << robotA[1] << "       " << robotA[2] << "          "  << robotA[3] << "            " << robotA[4] << endl;
        cout << "RobotB       ||  " << robotB[0] << "        " << robotB[1] << "       " << robotB[2] << "          "  << robotB[3] << "            " << robotB[4] << endl;
        cout << "RobotC       ||  " << robotC[0] << "        " << robotC[1] << "       " << robotC[2] << "          "  << robotC[3] << "            " << robotC[4] << endl;
        cout << endl;
            }
            if(choice == 2){
                cout << "Number of robotsA:" << Arobots << endl;
                cout << "Number of robotsB:" << Brobots << endl;
                cout << "Number of robotsC:" << Crobots << endl;
                cout << endl;
            }
        }
        if (choice ==3){
            int type = 0;
            double amount = 0;
            int total = 0;
            cout << "These are the robots in stock" << endl;
            cout << "Arobots:" << Arobots << endl << "Brobots:" << Brobots << endl << "Crobots:" << Crobots << endl;
            cout << "robotA is 5.00$,robotB is 10.00$,robotC is 15.00$" << endl;
            cout << "What robot type do you wish to purchase (1)RobotA,(2)RobotB,(3)RobotC ?" << endl;
            cin >> type;
            cout << "How many do you want to purchase?" << endl;
            cin >> amount;
            if(type == 1){
                if(amount > Arobots){
                    cout << "There are not enough Arobots in stock to complete your order" << endl;
                }
                else{
                    total = 5.00*amount;
                    cout << "You bought " << amount << " Arobots " << " for a total of " << total <<"$" << endl;
                    cout << "Thank you for your purchase" << endl;
                }
            }
            if(type == 2){
                if(amount > Brobots){
                    cout << "There are not enough Brobots in stock to complete your order" << endl;
                }
                else{
                    total = 10.00*amount;
                    cout << "You bought " << amount << " Brobots " << " for a total of " << total <<"$" << endl;
                    cout << "Thank you for your purchase" << endl;
                }
            }
            if(type == 3){
                if(amount > Crobots){
                    cout << "There are not enough Crobots in stock to complete your order" << endl;
                }
                else{
                    total = 15.00*amount;
                    cout << "You bought " << amount << " Crobots " << " for a total of " << total <<"$" << endl;
                    cout << "Thank you for your purchase" << endl;
                }
            }


        }
    }
    return 0;
}



/*


       */








