#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
void ListStudent(string name[100],int score[100],int round);
char Calgrade(int score);
int main()
{
	int score[100],i;
	string name[100];
	int round; 
	cout << "Input Number of Student : ";
	cin >> round;
	for(int i=1;i<=round;i++)
	{
		cout << "Input Name : ";
		cin >> name[i];
		cout << "Input Score "<< i <<" : ";
		cin >> score[i];
	}
	ListStudent(name,score,round);
}
void ListStudent(string name[100],int score[100],int round)
{
	for(int i=1;i<=round;i++){
		cout << "Student Name : "<<name[i] << "      " <<" Score "<< i << " = "<< score[i] <<"  "<<"You grade is : "<< Calgrade(score[i])<<endl;
	}
}
char Calgrade(int score)
{
	char grade=' ';
	if(score>=80 && score<=100)
		grade = 'A';
	else if (score>=70 && score<=79)
		grade = 'B';
	else if (score>=60 && score<=69)
		grade = 'C';
	else if (score>=50 && score<=59)
		grade = 'D';
	else
		grade = 'F';
	return grade;
}
