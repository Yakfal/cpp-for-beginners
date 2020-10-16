/*
Write a program that will create an array of size 10.
The program will ask the user to enter the TestScores for a exam administered to 10 student.
Determine which day has the highest score, which day has the lowest score.

Also determine the average score for the exam.

Also, display the score and letter grade for each element in the array of test scores.
Grade assignment is given below.
********

If final grade is  >= 95 : course grade is A

else if final grade is <95  and >=90: course grade is A-

else if final grade is < 90 and >= 85 : course grade is B+

else if final grade is  < 85 and >=80 : course grade is B

else if final grade is <80 and >=75 : course grade is B-

else if final grade is < 75 and >=70: course grade is C+

else if final grade is < 70 and >=65: course grade is C

else if final grade is<65 and >=60: course grade is C-

else if final grade is <60 and >=55: course grade is D

else if final grade is < 55: course grade is F

*/

//Yamil Kas-Danouche
//10/5/2020
//This program was made with the purpose for the user to enter the score of 10 students, calculate with an outer function, and describe with the letter scales from A to F
// and display the letter grade for each one of the grades.
#include<iostream>
#include<iomanip>

void calculateLetterGrade(double Score[]);

using namespace std;
int main()
{
char letterGrade;
double Score[10];
for(int i=0; i<10; i++){


cout<<"Enter The per students "<<(i+1)<<" scores: ";

cin>>Score[i];


}


double HighestScore = Score[0], LowestScore = Score[0],AverageScore = 0.0;

int HighScoreNumber = 0, LowScoreNumber= 0;
for(int i=0; i<10; i++){

if(HighestScore<Score[i]){
HighestScore = Score[i];
HighScoreNumber = i;

}

if(LowestScore > Score[i]){
LowestScore = Score[i];
LowScoreNumber= i;

}
AverageScore += Score[i];

}

AverageScore /= 10;



cout<<setprecision(2)<<fixed;

cout<<"Highest Score: "<<HighestScore<<", score: "<<(HighScoreNumber+1)<<endl;

cout<<"Lowest Score: "<<LowestScore<<", score: "<<(LowScoreNumber+1)<<endl;


calculateLetterGrade (Score);


return 0;

}
void calculateLetterGrade (double Score[])
{
	for (int n = 0; n < 10; n++) {
		if(Score[n] >=95)
		cout<<n+1<<" score letter: A"<<endl;
		else if(Score[n]>=90 && Score[n]<95)
		cout<<n+1<<" score letter: A-"<<endl;
		else if(Score[n]>=85 && Score[n]< 90)
		cout<<n+1<<" score letter: B+ "<<endl;
		else if(Score[n]>=80 && Score[n]< 85)
		cout<<n+1<<" score letter: B"<<endl;
		else if(Score[n]>= 75 && Score[n]< 80)
		cout<<n+1<<" score letter: B-"<<endl;
		else if(Score[n]>= 70 && Score[n]< 75)
		cout<<n+1<<" score letter: C+"<<endl;
		else if(Score[n]>=65 && Score[n]< 70)
		cout<<n+1<<" score letter: C"<<endl;
		else if(Score[n]>=60 && Score[n]< 65)
		cout<<n+1<<" score letter: C-"<<endl;
		else if(Score[n]>=55 && Score[n]< 60)
		cout<<n+1<<" score letter: D "<<endl;
		else
		cout<<n+1<<" score letter: F"<<endl;
	
	}
}










