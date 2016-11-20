#include <iostream>
#include <sstream>
#include <stdio.h>
#include <FL/Fl.H>
#include <FL/Fl_Text_Display.H>
#include <FL/fl_draw.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Window.H>
#include <FL/filename.H>    
#include <FL/Fl_Int_Input.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_JPEG_Image.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Slider.H>
#include <string>
#include <FL/Fl_Int_Input.H>
#include <list>
#include <FL/Fl_Color_Chooser.H>
#include <vector>
#include <FL/Fl_Button.H>
#include <FL/Fl_Check_Button.H>
#include <FL/Fl_Tabs.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Output.H>
#include <cstdlib>
using namespace std;
const char* one;
const char* two;
const char* three;
const char* four;
const char* five;
const char* placeholder;
const char* placeholder1;
const char* batteries = "3";
char result[900];
char result2[900];
char result3[900];
//char totalcost;
int price;
double placeholdernum;
//string partsy = "Fishstick";
vector<const char*> customerfirstname;
vector<const char*> customerlastname;
vector<const char*> employeefirstname;
vector<const char*> employeelastname;
vector<const char*> employeeID;
vector<const char*> customerID;
vector<const char*> modelorderamount;
vector<const char*> ordername;
vector<const char*> modelname;
vector<const char*> modelordername;
vector<const char*> modelcost;
vector<double> totalcost;
vector<const char*> partname;
vector<const char*> parts;
vector<int> parttype;
vector<const char*> partnumber;
vector<const char*> partcost;
vector<const char*> batteryenergy;
vector<const char*> batterycompartments;
vector<const char*> weight;
vector<const char*> speed;
vector<const char*> powerconsumed;


void view_customers(Fl_Widget*, void*) {
	Fl_Window *head = new Fl_Window(500, 300, "Customer Database");
	int y = 0;
	Fl_Button *name3 = new Fl_Button(0, y , 120, 30, "First Name");
	Fl_Button *name4 = new Fl_Button(120, y , 120, 30, "Last Name");
	Fl_Button *name6 = new Fl_Button(240, y , 120, 30, "Customer ID");
	for (int i = 0; i < customerfirstname.size(); ++i) {
		Fl_Box *name = new Fl_Box(0, y+30, 120, 30, customerfirstname[i]);
		Fl_Box *name1 = new Fl_Box(120, y+30, 120, 30, customerlastname[i]);
		Fl_Box *name2 = new Fl_Box(240, y+30, 120, 30, customerID[i]);
		y += 40;
	}
	head->show();
}
void view_employees(Fl_Widget*, void*) {
	Fl_Window *head = new Fl_Window(500, 300, "Employee Database");
	int y = 0;
	Fl_Button *name3 = new Fl_Button(0, y, 120, 30, "First Name");
	Fl_Button *name4 = new Fl_Button(120, y, 120, 30, "Last Name");
	Fl_Button *name6 = new Fl_Button(240, y, 120, 30, "Employee ID");
	for (int i = 0; i < employeefirstname.size(); ++i) {
		Fl_Box *name = new Fl_Box(0, y + 30, 120, 30, employeefirstname[i]);
		Fl_Box *name1 = new Fl_Box(120, y + 30, 120, 30, employeelastname[i]);
		Fl_Box *name2 = new Fl_Box(240, y + 30, 120, 30, employeeID[i]);
		y += 40;
	}
	head->show();
}
void first_name_customer(Fl_Widget*,void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	customerfirstname.push_back(placeholder);
}
void first_name_employee(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	employeefirstname.push_back(placeholder);
}
void last_name_employee(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	employeelastname.push_back(placeholder);
}
void last_name_customer(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	customerlastname.push_back(placeholder);
}
void employee_ID(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	employeeID.push_back(placeholder);
}
void customer_ID(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	customerID.push_back(placeholder);
}
void order_name(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	ordername.push_back(placeholder);
}
void enter_amount(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	modelorderamount.push_back(placeholder);
}
void enter_model(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	modelordername.push_back(placeholder);
}
void create_order(Fl_Widget*,void*) {
	Fl_Window *head = new Fl_Window(1000, 600, "Create Order");
	int y = 0;
	string placeholder100 = "Total Cost";
	char placeholder200[900];
	for (int i = 0; i < modelname.size(); ++i) {
		Fl_Button *name = new Fl_Button(0, y, 120, 30, modelname[i]);
		Fl_Button *modelparts = new Fl_Button(120, y, 325, 30, parts[i]);
		Fl_Button *totalmodelcost = new Fl_Button(445, y, 100, 30, modelcost[i]);
		if (i == 0) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_business_can.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
		if (i == 1) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_button_can.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y + 20, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
		if (i == 2) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_humanoid_soldier.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
		if (i == 3) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_medic_can.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y + 20, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
		if (i == 4) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_orange_can.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
		if (i == 5) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_orange_humanoid_meditating.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y + 20, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
		if (i == 6) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_orange_humanoid_with_laptop_computer.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
		if (i == 7) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_white_can_w_antennae.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y + 20, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
	}
	Fl_Input *input = new Fl_Input(125, 550, 120, 30, "Enter Model Name");
	Fl_Button *enter = new Fl_Button(250, 550, 100, 30, "Enter");
	Fl_Input *input2 = new Fl_Input(425, 550, 120, 30, "Amount");
	Fl_Button *enter2 = new Fl_Button(550, 550, 100, 30, "Enter");
	Fl_Input *input3 = new Fl_Input(740, 550, 120, 30, "Order Name");
	Fl_Button *enter3 = new Fl_Button(870, 550, 100, 30, "Enter");
	enter->callback(enter_model, input);
	enter2->callback(enter_amount, input2);
	enter3->callback(order_name, input3);
	head->show();
}
void view_models(Fl_Widget*, void* inp) {
	Fl_Window *head = new Fl_Window(1000, 600, "Robot Models");
	int y = 0;
	string placeholder100 = "Total Cost";
	char placeholder200[900];
	for (int i = 0; i < modelname.size(); ++i) {
		Fl_Button *name = new Fl_Button(0, y, 120, 30, modelname[i]);
		Fl_Button *modelparts = new Fl_Button(120 , y, 325, 30, parts[i]);
		Fl_Button *totalmodelcost = new Fl_Button(445, y, 100, 30, modelcost[i]);
		if (i == 0) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_business_can.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
		if (i == 1) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_button_can.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y+20, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
		if (i == 2) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_humanoid_soldier.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
		if (i == 3) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_medic_can.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y + 20, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
		if (i == 4) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_orange_can.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
		if (i == 5) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_orange_humanoid_meditating.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y + 20, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
		if (i == 6) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_orange_humanoid_with_laptop_computer.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
		if (i == 7) {
			Fl_JPEG_Image* myimage = myimage = new Fl_JPEG_Image("full_white_can_w_antennae.jpg");
			Fl_Box* mypicturebox = new Fl_Box(600, y + 20, 100, 100);
			mypicturebox->image(myimage);
			mypicturebox->redraw();
			y += 100;
		}
	}
	head->show();
}
void model_name(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	modelname.push_back(placeholder);
}
void head_part(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	strcpy_s(result, "/");
	strcat_s(result, placeholder);
	strcat_s(result, "/");
	for (int i = 0; i < partname.size(); ++i) {
		if (strcmp(placeholder, partname[i]) == 0) {
			strcpy_s(result2, "/");
			strcat_s(result2, partcost[i]);
			strcat_s(result2, "/");
		}
	}

}
void torso_part(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	strcat_s(result, placeholder);
	strcat_s(result, "/");
	for (int i = 0; i < partname.size(); ++i) {
		if (strcmp(placeholder, partname[i]) == 0) {
			strcat_s(result2, partcost[i]);
			strcat_s(result2, "/");
		}
		if (strcmp(batterycompartments[i], "3") == 0) {
			strcat_s(result2, batterycompartments[i]);
			strcat_s(result2, "*");
		}
		if (strcmp(batterycompartments[i], "2") == 0) {
			strcat_s(result2, batterycompartments[i]);
			strcat_s(result2, "*");
		}
	}
}
void battery_part(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	strcat_s(result, placeholder);
	strcat_s(result, "/");
	for (int i = 0; i < partname.size(); ++i) {
		if (strcmp(placeholder, partname[i]) == 0) {
				strcat_s(result2, partcost[i]);
				strcat_s(result2, "/");
		}
	}
}
void locomotor_part(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	strcat_s(result, placeholder);
	strcat_s(result, "/");
	for (int i = 0; i < partname.size(); ++i) {
		if (strcmp(placeholder, partname[i]) == 0) {
			strcat_s(result2, partcost[i]);
			strcat_s(result2, "/");
		}
	}
}
void arm_part(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	strcat_s(result, placeholder);
	strcat_s(result, "/");
	parts.push_back(result);
	for (int i = 0; i < partname.size(); ++i) {
		if (strcmp(placeholder, partname[i]) == 0) {
			strcat_s(result2, partcost[i]);
			strcat_s(result2, "/");
		}
	}
	modelcost.push_back(result2);
}
void enter_compartments(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	batterycompartments.push_back(placeholder);
	placeholder = "empty";
	batteryenergy.push_back(placeholder);
	speed.push_back(placeholder);
	powerconsumed.push_back(placeholder);
}
void enter_power(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	powerconsumed.push_back(placeholder);
}
void enter_name(Fl_Widget*,void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	partname.push_back(placeholder);
}
void enter_speed(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	speed.push_back(placeholder);
	placeholder = "empty";
	batteryenergy.push_back(placeholder);
	batterycompartments.push_back(placeholder);
}
void enter_partnumber(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	partnumber.push_back(placeholder);
}
void enter_weight(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	weight.push_back(placeholder);
}
void enter_energystored(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	batteryenergy.push_back(placeholder);
	placeholder = "empty";
	batterycompartments.push_back(placeholder);
	speed.push_back(placeholder);
	powerconsumed.push_back(placeholder);
}
void enter_cost(Fl_Widget*, void* inp) {
	placeholder = static_cast<Fl_Input*>(inp)->value();
	partcost.push_back(placeholder);
}
void Quit_CB(Fl_Widget *, void *) {
	exit(0);
}
void head_window(Fl_Widget *, void *) {
	Fl_Window *head = new Fl_Window(450, 200, "Head");
	Fl_Input *input = new Fl_Input(110, 0, 100, 30, "Name");
	Fl_Input *input1 = new Fl_Input(110, 40, 100, 30, "Part-Number");
	Fl_Input *input2 = new Fl_Input(110, 80, 100, 30, "Weight");
	Fl_Input *input3 = new Fl_Input(110, 120, 100, 30, "Cost");
	Fl_Button *enter = new Fl_Button(275, 0, 100, 30, "Enter");
	Fl_Button *enter1 = new Fl_Button(275, 40, 100, 30, "Enter");
	Fl_Button *enter2 = new Fl_Button(275, 80, 100, 30, "Enter");
	Fl_Button *enter3 = new Fl_Button(275, 120, 100, 30, "Enter");
	placeholder = "empty";
	batteryenergy.push_back(placeholder);
	batterycompartments.push_back(placeholder);
	speed.push_back(placeholder);
	powerconsumed.push_back(placeholder);
	parttype.push_back(1);
	head->show();
	enter->callback(enter_name, input);
	enter1->callback(enter_partnumber, input1);
	enter2->callback(enter_weight, input2);
	enter3->callback(enter_cost, input3);
}
void torso_window(Fl_Widget *, void *) {
	Fl_Window *head = new Fl_Window(450, 250, "Torso");
	Fl_Input *input = new Fl_Input(150, 0, 100, 30, "Name");
	Fl_Input *input1 = new Fl_Input(150, 40, 100, 30, "Part-Number");
	Fl_Input *input2 = new Fl_Input(150, 80, 100, 30, "Weight");
	Fl_Input *input3 = new Fl_Input(150, 120, 100, 30, "Cost");
	Fl_Input *input4 = new Fl_Input(150, 160, 100, 30, "Battery Compartments");
	Fl_Button *enter = new Fl_Button(275, 0, 100, 30, "Enter");
	Fl_Button *enter1 = new Fl_Button(275, 40, 100, 30, "Enter");
	Fl_Button *enter2 = new Fl_Button(275, 80, 100, 30, "Enter");
	Fl_Button *enter3 = new Fl_Button(275, 120, 100, 30, "Enter");
	Fl_Button *enter4 = new Fl_Button(275, 160, 100, 30, "Enter");
	parttype.push_back(2);
	head->show();
	enter->callback(enter_name, input);
	enter1->callback(enter_partnumber, input1);
	enter2->callback(enter_weight, input2);
	enter3->callback(enter_cost, input3);
	enter4->callback(enter_compartments, input4);
}
void locomotor_window(Fl_Widget *, void *) {
	Fl_Window *head = new Fl_Window(450, 300, "Locomotor");
	Fl_Input *input = new Fl_Input(150, 0, 100, 30, "Name");
	Fl_Input *input1 = new Fl_Input(150, 40, 100, 30, "Part-Number");
	Fl_Input *input2 = new Fl_Input(150, 80, 100, 30, "Weight");
	Fl_Input *input3 = new Fl_Input(150, 120, 100, 30, "Cost");
	Fl_Input *input4 = new Fl_Input(150, 160, 100, 30, "Speed(MPH)");
	Fl_Input *input5 = new Fl_Input(150, 200, 100, 30, "Power Consumed(W)");
	Fl_Button *enter = new Fl_Button(275, 0, 100, 30, "Enter");
	Fl_Button *enter1 = new Fl_Button(275, 40, 100, 30, "Enter");
	Fl_Button *enter2 = new Fl_Button(275, 80, 100, 30, "Enter");
	Fl_Button *enter3 = new Fl_Button(275, 120, 100, 30, "Enter");
	Fl_Button *enter4 = new Fl_Button(275, 160, 100, 30, "Enter");
	Fl_Button *enter5 = new Fl_Button(275, 200, 100, 30, "Enter");
	parttype.push_back(3);
	head->show();
	enter->callback(enter_name, input);
	enter1->callback(enter_partnumber, input1);
	enter2->callback(enter_weight, input2);
	enter3->callback(enter_cost, input3);
	enter4->callback(enter_speed, input4);
	enter5->callback(enter_power, input5);
}
void arm_window(Fl_Widget *, void *) {
	Fl_Window *head = new Fl_Window(450, 250, "Arm");
	Fl_Input *input = new Fl_Input(150, 0, 100, 30, "Name");
	Fl_Input *input1 = new Fl_Input(150, 40, 100, 30, "Part-Number");
	Fl_Input *input2 = new Fl_Input(150, 80, 100, 30, "Weight");
	Fl_Input *input3 = new Fl_Input(150, 120, 100, 30, "Cost");
	Fl_Input *input4 = new Fl_Input(150, 160, 100, 30, "Power Consumed(W)");
	Fl_Button *enter = new Fl_Button(275, 0, 100, 30, "Enter");
	Fl_Button *enter1 = new Fl_Button(275, 40, 100, 30, "Enter");
	Fl_Button *enter2 = new Fl_Button(275, 80, 100, 30, "Enter");
	Fl_Button *enter3 = new Fl_Button(275, 120, 100, 30, "Enter");
	Fl_Button *enter4 = new Fl_Button(275, 160, 100, 30, "Enter");
	placeholder = "empty";
	batteryenergy.push_back(placeholder);
	batterycompartments.push_back(placeholder);
	speed.push_back(placeholder);
	parttype.push_back(4);
	head->show();
	enter->callback(enter_name, input);
	enter1->callback(enter_partnumber, input1);
	enter2->callback(enter_weight, input2);
	enter3->callback(enter_cost, input3);
	enter4->callback(enter_power, input4);
}
void battery_window(Fl_Widget *, void *) {
	Fl_Window *head = new Fl_Window(450, 200, "Battery");
	Fl_Input *input = new Fl_Input(150, 0, 100, 30, "Name");
	Fl_Input *input1 = new Fl_Input(150, 40, 100, 30, "Part-Number");
	Fl_Input *input2 = new Fl_Input(150, 80, 100, 30, "Weight");
	Fl_Int_Input *input3 = new Fl_Int_Input(150, 120, 100, 30, "Cost");
	Fl_Input *input4 = new Fl_Input(150, 160, 100, 30, "Energy Stored");
	Fl_Button *enter = new Fl_Button(275, 0, 100, 30, "Enter");
	Fl_Button *enter1 = new Fl_Button(275, 40, 100, 30, "Enter");
	Fl_Button *enter2 = new Fl_Button(275, 80, 100, 30, "Enter");
	Fl_Button *enter3 = new Fl_Button(275, 120, 100, 30, "Enter");
	Fl_Button *enter4 = new Fl_Button(275, 160, 100, 30, "Enter");
	parttype.push_back(5);
	head->show();
	enter->callback(enter_name, input);
	enter1->callback(enter_partnumber, input1);
	enter2->callback(enter_weight, input2);
	enter3->callback(enter_cost, input3);
	enter4->callback(enter_energystored, input4);
}
void manual_window(Fl_Widget *, void *) {
	Fl_Window *win = new Fl_Window(400, 275, "Manual");
//	Fl_Button *enter3 = new Fl_Button(0, 120, 375, 30, parts[0]);
	Fl_Text_Buffer *buff = new Fl_Text_Buffer();
	Fl_Text_Display *disp = new Fl_Text_Display(20, 20, 350, 250, "Manual");
	disp->buffer(buff);
	win->resizable(*disp);
	win->show();
	buff->text("You may click the file button to open a dropdown\nmenu and you will get a button to exit the window\nor press CTRL + v\n"
		"You may click create and you get two options either\nto make a robot part or robot model\n"
		"Clicking on robot part that shows the parts you may\ncreate and their associated shortcuts\n"
		"If you have any questions click help then click on\nmanual to open the manual\n");
	win->show();
}
void create_robotmodel(Fl_Widget* , void*) {
	Fl_Window *win = new Fl_Window(600, 450 , "Create Robot Model");
	int x = 0;
	for (int i = 0; i < partname.size(); ++i) {
		
		if (parttype[i] == 1) {
			Fl_Button *enter = new Fl_Button(0 + (x), 0, 120, 30, partname[i]);
			x += 120;
		}
	}
	x = 0;
	for (int i = 0; i < partname.size(); ++i) {
		if (parttype[i] == 2) {
			Fl_Button *enter = new Fl_Button(0 + (x), 40, 120, 30, partname[i]);
			x += 120;
		}
	}
	x = 0;
	for (int i = 0; i < partname.size(); ++i) {
		if (parttype[i] == 3) {
			Fl_Button *enter = new Fl_Button(0 + (x), 80, 120, 30, partname[i]);
			x += 120;
		}
	}
	x = 0;
	for (int i = 0; i < partname.size(); ++i) {
		if (parttype[i] == 4) {
			Fl_Button *enter = new Fl_Button(0 + (x), 120, 120, 30, partname[i]);
			x += 120;
		}
	}
	x = 0;
	for (int i = 0; i < partname.size(); ++i) {
		if (parttype[i] == 5) {
			Fl_Button *enter = new Fl_Button(0 + (x), 160, 120, 30, partname[i]);
			x += 120;
		}
	}
	Fl_Box *box = new Fl_Box(210, 180, 200, 100, "Enter the name of the parts you want");
	box->labelfont(FL_BOLD + FL_ITALIC);
	Fl_Input *input5 = new Fl_Input(60, 240, 100, 30, "Name");
	Fl_Input *input= new Fl_Input(360, 240, 100, 30, "Head");
	Fl_Input *input1 = new Fl_Input(60, 300, 100, 30, "Torso");
	Fl_Input *input2 = new Fl_Input(60, 360, 100, 30, "Battery");
	Fl_Input *input3 = new Fl_Input(360, 300, 100, 30, "Locomotor");
	Fl_Input *input4 = new Fl_Input(360, 360, 100, 30, "Arm");
	Fl_Button *enter = new Fl_Button(480, 240, 100, 30, "Enter");
	Fl_Button *enter1 = new Fl_Button(180, 300, 100, 30, "Enter");
	Fl_Button *enter2 = new Fl_Button(180, 360, 100, 30, "Enter");
	Fl_Button *enter3 = new Fl_Button(480, 300, 100, 30, "Enter");
	Fl_Button *enter4 = new Fl_Button(480, 360, 100, 30, "Enter");
	Fl_Button *enter5 = new Fl_Button(180, 240, 100, 30, "Enter");
	enter->callback(head_part, input);
	enter1->callback(torso_part, input1);
	enter3->callback(locomotor_part, input3);
	enter4->callback(arm_part, input4);
	enter2->callback(battery_part, input2);
	enter5->callback(model_name, input5);
	win->show();
}
void view_orders(Fl_Widget*, void* inp) {
	Fl_Window *head = new Fl_Window(600, 600, "Orders");
	Fl_Button *enter = new Fl_Button(0, 0, 120, 30,"Order Name");
	Fl_Button *enter2 = new Fl_Button(130, 0, 120, 30,"Robot Model");
	Fl_Button *enter3 = new Fl_Button(260, 0, 120, 30,"Order Amount");
	int y = 0;
	for (int i = 0; i < ordername.size(); ++i) {
		Fl_Button *ordername22 = new Fl_Button(0, y+40, 120, 30, ordername[i]);
		Fl_Button *model = new Fl_Button(130, y+40, 120, 30, modelordername[i]);
		Fl_Button *modelamount = new Fl_Button(260, y+40, 120, 30, modelorderamount[i]);
		y += 100;
	}
	head->show();
}
void create_customer(Fl_Widget*,void*) {
	Fl_Window *head = new Fl_Window(400, 150, "Create Customer");
	Fl_Input *input = new Fl_Input(105, 0, 120, 30, "First Name");
	Fl_Button *enter = new Fl_Button(240,0 , 120, 30, "Enter");
	Fl_Input *input2 = new Fl_Input(105, 40, 120, 30, "Last Name");
	Fl_Button *enter2 = new Fl_Button(240, 40, 120, 30, "Enter");
	Fl_Input *input3 = new Fl_Input(105, 80, 120, 30, "Customer ID");
	Fl_Button *enter3 = new Fl_Button(240, 80, 120, 30, "Enter");
	enter->callback(first_name_customer, input);
	enter2->callback(last_name_customer, input2);
	enter3->callback(customer_ID, input3);
	head->show();
}
void create_employee(Fl_Widget*, void*) {
	Fl_Window *head = new Fl_Window(400, 150, "Create Employee");
	Fl_Input *input = new Fl_Input(105, 0, 120, 30, "First Name");
	Fl_Button *enter = new Fl_Button(240, 0, 120, 30, "Enter");
	Fl_Input *input2 = new Fl_Input(105, 40, 120, 30, "Last Name");
	Fl_Button *enter2 = new Fl_Button(240, 40, 120, 30, "Enter");
	Fl_Input *input3 = new Fl_Input(105, 80, 120, 30, "Employee ID");
	Fl_Button *enter3 = new Fl_Button(240, 80, 120, 30, "Enter");
	enter->callback(first_name_employee, input);
	enter2->callback(last_name_employee, input2);
	enter3->callback(employee_ID, input3);
	head->show();
}
int main() {
	Fl_Window *win = new Fl_Window(600, 300, "Robot Shop");
	Fl_Menu_Bar *menu = new Fl_Menu_Bar(0, 0, 600, 25);
	menu->add("File/Quit", FL_CTRL + 'v', Quit_CB);
	menu->add("Create/Robot Part/Head", FL_CTRL + 'h', head_window);
	menu->add("Create/Robot Part/Torso", FL_CTRL + 't', torso_window);
	menu->add("Create/Robot Part/Arm", FL_CTRL + 'a', arm_window);
	menu->add("Create/Robot Part/Battery", FL_CTRL + 'b', battery_window);
	menu->add("Create/Robot Part/Locomotor", FL_CTRL + 'l', locomotor_window);
	menu->add("Create/Robot Model", FL_CTRL + 'r' , create_robotmodel);
	menu->add("Create/Order", FL_CTRL + 'o', create_order);
	menu->add("Create/Customer", FL_CTRL + 'c', create_customer);
	menu->add("Create/Employee", FL_CTRL + 'e', create_employee);
	menu->add("View/View Robot Models",FL_CTRL + 'v', view_models);
	menu->add("View/View Orders", FL_CTRL + 'b', view_orders);
	menu->add("View/View Customers", FL_CTRL + 'z', view_customers);
	menu->add("View/View Employees", FL_CTRL + 'f', view_employees);
	menu->add("Help/Manual", FL_CTRL + 'm', manual_window);
	win->show();
	return(Fl::run());
}
