#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

int main()
{
int choice = 0;
vector<string> partname;
vector<string> modelname;
vector<string> parts;
vector<int> modelnumber;
vector<double> modelprice;
vector<double> partnumber;
vector<string> parttype;
vector<double> partweight;
vector<double> partcost;
vector<int> batterycompartments;
vector<double> speed1;
vector<double> powerconsumed;
vector<double> batteryenergy;
    while (choice != 4)
    {
        cout << "(1)Create" << endl;
        cout << "(2)Browse Catalog" << endl;
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
                string name; double id; string type; double weight; double cost;double consumed;double speed;double energy;double compartments;
                    cin.ignore();
                    cout << "Name this part" << ":";
                    getline(cin,name);
                    cout << "Enter part number" << ":";
                    cin >> id;
                    cout << "Enter type of part(torso, head, arm, locomotor, or battery" << endl;
                    cin >> type;
                    cout << "Enter weight(in pounds)" << ":";
                    cin >> weight;
                    cout << "Enter cost" << ":";
                    cin >> cost;
                    partname.push_back(name);
                    partnumber.push_back(id);
                    parttype.push_back(type);
                    partweight.push_back(weight);
                    partcost.push_back(cost);
                    if(0 == strcmpi(type.c_str(),"head")){
                        batterycompartments.push_back(0);
                        speed1.push_back(0);
                        powerconsumed.push_back(0);
                        batteryenergy.push_back(0);for(int i=0;i<partname.size();++i){
            if(0 == strcmpi(parttype[i].c_str(),"head")){
            cout << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << endl;
            }
            else if(0 == strcmpi(parttype[i].c_str(),"torso")){
            cout << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << "||Battery Compartments:" << batterycompartments[i] << endl;
            }
            else if(0 == strcmpi(parttype[i].c_str(),"arm")){
            cout << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << "||Power Consumed:" << powerconsumed[i] << endl;
            }
            if(0 == strcmpi(parttype[i].c_str(),"locomotor")){
            cout << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << "||Max Speed:" << speed1[i] << "||Power Consumed:" << powerconsumed[i] << endl;
            }
            if(0 == strcmpi(parttype[i].c_str(),"battery")){
            cout << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << "||Battery Energy:" << batteryenergy[i] << endl;
            }
        }

                    }
                    else if(0 == strcmpi(type.c_str(),"arm")){
                        batterycompartments.push_back(0);
                        speed1.push_back(0);
                        batteryenergy.push_back(0);
                        cout << "Enter power consumed while operating in watts:";
                        cin >> consumed;
                        powerconsumed.push_back(consumed);
                    }
                    else if(0 == strcmpi(type.c_str(),"torso")){
                        cout << "Enter number of battery compartments in torso:";
                        cin >> compartments;
                        batterycompartments.push_back(compartments);
                        speed1.push_back(0);
                        batteryenergy.push_back(0);
                        powerconsumed.push_back(0);
                    }
                    else if(0 == strcmpi(type.c_str(),"locomotor")){
                        cout << "Enter max speed in MPH:";
                        cin >> speed;
                        batterycompartments.push_back(0);
                        speed1.push_back(speed);
                        cout << "Enter power consumed while operating in watts:";
                        cin >> consumed;
                        batteryenergy.push_back(0);
                        powerconsumed.push_back(consumed);
                    }
                    else if(0 == strcmpi(type.c_str(),"battery")){
                        cout << "Enter the energy contained in this battery in watts:";
                        cin >> energy;
                        batterycompartments.push_back(0);
                        speed1.push_back(0);
                        batteryenergy.push_back(energy);
                        powerconsumed.push_back(0);
                    }

                }
                if(choice2 == 2){
                        cin.ignore();
                        int option = 1;
                    cout << "Choose a head from these options,enter the part name" << endl;
                    string choice,choice1,choice2,choice3,choice4,choice5,choice6,choice7,choice8;
                    for(int i=0;i<partname.size();++i){
                        if(0 == strcmpi(parttype[i].c_str(),"head")){
            cout << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << endl;
            }
                    }
                    getline(cin,choice);
                    cout << "Choose a torso from these options,enter the part name" << endl;
                    for(int i = 0;i<parttype.size();++i){
                        if(0 == strcmpi(parttype[i].c_str(),"torso")){
            cout << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << "||Battery Compartments:" << batterycompartments[i] << endl;
            }
                    }
                    getline(cin,choice1);
                    cout << "Choose a locomotor from these options,enter the part name" << endl;
                    for(int i = 0;i<parttype.size();++i){
                        if(0 == strcmpi(parttype[i].c_str(),"locomotor")){
            cout << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << "||Max Speed:" << speed1[i] << "||Power Consumed:" << powerconsumed[i] << endl;
            }
                    }
                    getline(cin,choice2);
                    cout << "Choose a arm from these options,enter the part name" << endl;
                    for(int i = 0;i<parttype.size();++i){
                         if(0 == strcmpi(parttype[i].c_str(),"arm")){
            cout << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << "||Power Consumed:" << powerconsumed[i] << endl;
            }
                    }
                    getline(cin,choice3);
                     cout << "Choose another arm from these options,enter the part name" << endl;
                    getline(cin,choice4);
                    for(int i=0;i<parttype.size();++i){
                        if(0 == choice1.compare(partname[i])){
                                for(int x=0;x<partname.size();++x){
            if(0 == strcmpi(parttype[x].c_str(),"battery")){
            cout << "Name:" << partname[x] << "||Part Number:" << partnumber[x] << "||Part type:" << parttype[x] << "||Part Weight:" << partweight[x] << "||Part Cost:" << partcost[x] << "||Battery Energy:" << batteryenergy[x] << endl;
            }
        }
                    if(batterycompartments[i] == 3){
                        cout << "Choose first battery,enter name" << endl;
                        getline(cin,choice5);
                        cout << "Choose second battery,enter name" << endl;
                        getline(cin,choice6);
                        cout << "Choose third battery,enter name" << endl;
                        getline(cin,choice7);
                    }
                    else if(batterycompartments[i] == 2){
                        cout << "Choose first battery,enter name" << endl;
                        getline(cin,choice5);
                        cout << "Choose second battery,enter name" << endl;
                        getline(cin,choice6);
                    }
                    else if(batterycompartments[i] == 1){
                        cout << "Choose battery,enter name" << endl;
                        getline(cin,choice5);
                    }
                        }
                    }
                    string name; double price = 0; int id; double cost=0; string parts1;
                    for(int i=0;i<parttype.size();++i){
                        if(0 == strcmpi(partname[i].c_str(),choice.c_str())){
                        cost += partcost[i];
                        }
                        else if(0 == strcmpi(partname[i].c_str(),choice1.c_str())){
                            cost += partcost[i];
                        }
                        if(0 == strcmpi(partname[i].c_str(),choice2.c_str())){
                            cost += partcost[i];
                        }
                        if(0 == strcmpi(partname[i].c_str(),choice3.c_str())){
                            cost += partcost[i];
                        }
                        if(0 == strcmpi(partname[i].c_str(),choice4.c_str())){
                            cost += partcost[i];
                        }
                        if(0 == strcmpi(partname[i].c_str(),choice5.c_str())){
                            cost += partcost[i];
                        }
                        if(0 == strcmpi(partname[i].c_str(),choice6.c_str())){
                            cost += partcost[i];
                        }
                        if(0 == strcmpi(partname[i].c_str(),choice7.c_str())){
                            cost += partcost[i];
                        }
                    }
                   cout << "Enter this models name:"; getline(cin,name);
                   cout << "Enter model number:"; cin >> id;
                   cout << "This model costs " << cost << "$ to make" << endl;
                   cout << "Enter the price of this model:"; cin >> price;
                   modelname.push_back(name);
                   modelnumber.push_back(id);
                   modelprice.push_back(price);
                   parts1 = choice + "/";
                   if(choice1.size() != 0){
                        parts1 += choice1 + "/";
                   }
                   if(choice2.size() != 0){
                        parts1 += choice2 + "/";
                   }
                   if(choice3.size() != 0){
                        parts1 += choice3 + "/";
                   }
                   if(choice4.size() != 0){
                        parts1 += choice4 + "/";
                   }
                   if(choice5.size() != 0){
                        parts1 += choice5 + "/";
                   }
                   if(choice6.size() != 0){
                        parts1 += choice6 + "/";
                   }
                   if(choice7.size() != 0){
                        parts1 += choice7 + "/";
                   }
                   parts.push_back(parts1);
                }
                }
       }
       if(choice == 2){
            int choice2=0;
       cout << "(1)See parts" << endl;
       cout << "(2)See models" << endl;
       cin >> choice2;
       if(choice2 == 1){
        for(int i=0;i<partname.size();++i){
            if(0 == strcmpi(parttype[i].c_str(),"head")){
            cout << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << endl;
            }
            else if(0 == strcmpi(parttype[i].c_str(),"torso")){
            cout << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << "||Battery Compartments:" << batterycompartments[i] << endl;
            }
            else if(0 == strcmpi(parttype[i].c_str(),"arm")){
            cout << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << "||Power Consumed:" << powerconsumed[i] << endl;
            }
            if(0 == strcmpi(parttype[i].c_str(),"locomotor")){
            cout << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << "||Max Speed:" << speed1[i] << "||Power Consumed:" << powerconsumed[i] << endl;
            }
            if(0 == strcmpi(parttype[i].c_str(),"battery")){
            cout << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << "||Battery Energy:" << batteryenergy[i] << endl;
            }
        }
       }
       if(choice2 == 2){
            for(int i=0;i<modelname.size();++i){
            cout << modelname[i] << ":Name of parts in this model:" << parts[i] << endl;
            }
       }
       }
       if(choice == 3){
        string name; int amount = 0; int cost = 0;
        cout << "Enter the name of the model you want" << endl;
        for(int i=0;i<modelname.size();++i){
            cout << "Name:" << modelname[i] << " Price:" << modelprice[i] << endl;
        }
        cin.ignore();
        getline(cin,name);
        cout << "How many would you like? "; cin >> amount;
        for(int i=0;i<modelname.size();++i){
            if(0 == strcmpi(modelname[i].c_str(),name.c_str())){
                cost = modelprice[i]*amount;
            }
        }
        cout << "You bought " << amount << " " << name << " model(s) for a total cost of " << cost << "$" << endl;
       }
        }


    }



//cout << "Name:" << partname[i] << " Part Number:" << partnumber[i] << " Part type:" << parttype[i] << " Part Weight:" << partweight[i] << " Part Cost:" << partcost[i] << " Battery Compartments:" << batterycompartments[i] << " Speed:" << speed[i] << " Power Consumed:" << powerconsumed[i] << " Battery Energy:" << batteryenergy[i] << endl;
/*
cout << "Choose a battery from these options,enter the part name" << endl;
                    for(int i;i<parttype.size();++i){
                        int option=1;
                        cout << "(" << option << ")" << "Name:" << partname[i] << "||Part Number:" << partnumber[i] << "||Part type:" << parttype[i] << "||Part Weight:" << partweight[i] << "||Part Cost:" << partcost[i] << "||Battery Energy:" << batteryenergy[i] << endl;
                        ++option;
                    }
                    cout << endl;
                    getline(cin,choice4);
            */







