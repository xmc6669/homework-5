#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<int> robotA(5,0);
    vector<int> robotB(5,0);
    vector<int> robotC(5,0);
    int choice=0;
    while(choice != 2){
       cout << "(1)Create" << endl;
       cout << "(2)Exit" << endl;
       cin >> choice;
       if(choice == 1){
        int choice2;
        while(choice2 != 3){
        cout << "(1)Create Robot Part" << endl;
        cout << "(2)Create Robot Model" << endl;
        cout << "(3)Exit" << endl;
        cin >> choice2;
        if(choice2 == 1){
            int choice3;
            cout << "Create a part for which robot?,(1)robotA,(2)robotB,(3)robotC"<< endl;
        cin >> choice3;
            if(choice3 == 1){
                int choice4;
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
                    cout << "Enter how many locomotors" << endl;
                  cin >> amount;
                    robotA[4] += amount;
                }
            }
            if(choice3 == 2){
                int choice4;
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
                    cout << "Enter how many locomotors" << endl;
                  cin >> amount;
                    robotB[4] += amount;
                }
            }
            if(choice3 == 3){
                int choice4;
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
                    cout << "Enter how many locomotors" << endl;
                  cin >> amount;
                    robotC[4] += amount;
                }
            }
        }
       }
       choice = 0;
        }
       }
       }












