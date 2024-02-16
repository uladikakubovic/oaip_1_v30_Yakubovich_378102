
#include <string>
#include <iostream>
#include <fstream>
#include "1.2.h"

struct student
{
	char full_name[40];
	int birth_date, attending_date, physics_grade, math_grade, IT_grade;
	
};
static student data[4];

extern void enter()
{	
	std::ofstream file("data.txt");
	setlocale(LC_ALL, "rus");
	file << "ФИО					Год рождения		Год поступления			Физика		Матем		Информатика\n";
	
	for (int a = 0; a < 4; a++)
	{
		std::cout << "Enter related data to a student #"<<a+1<<":\n";
		if (a != 0)
		{
			std::cin.ignore();
		}
		file << ' ';
		std::cout << "ФИО: ";
		std::cin.getline(data[a].full_name, 40);
		std::cout << "Год рождения: ";
		std::cin >> data[a].birth_date;
		std::cout << "Год поступления: ";
		std::cin >> data[a].attending_date;
		std::cout << "Оценка по физике: ";
		std::cin >> data[a].physics_grade;
		std::cout << "Оценка по математике: ";
		std::cin >> data[a].math_grade;
		std::cout << "Оценка по информатике: ";
		std::cin >> data[a].IT_grade;
		system("cls");
		file << data[a].full_name << "\t\t" << data[a].birth_date << "\t\t\t\t" << data[a].attending_date << "\t\t" << data[a].physics_grade << "\t\t" << data[a].math_grade << "\t\t" << data[a].IT_grade<< '\n';

		
	}
	file.close();
	
}
extern void print()
{
	std::ifstream file("data.txt");
	std::string console_visualizator_of_datatxt;
	if (file.is_open())
	{
		while (std::getline(file, console_visualizator_of_datatxt))
		{
			std::cout << console_visualizator_of_datatxt;
		}
	}
	file.close();
	
}

extern void find_names_starting_with_A() {
	std::cout << '\n';
	for (int i = 0; i < 4; i++) {
		if ((data[i].full_name)[0] == 'A') {
			std::cout << data[i].full_name << '\t' << data[i].birth_date << '\n';
		}
	}
}


