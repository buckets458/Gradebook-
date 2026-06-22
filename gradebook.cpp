#include <iostream>
using namespace std;
int decision;
string students[32];
int grades[32];
 int check = 0;
int student = 0;
string name;

int Gradebook()
{
    int choice;
    cout << "Hello Teacher what would you like to do? "<< endl;
    cout << "1. Add student" << endl;
    cout << "2. Add grades" << endl;
    cout << "3. calculate average " << endl;
    cout << "4. Find highest grade" << endl;
    cout << "5. Remove student " << endl;
    cout << "6. Display report " << endl;
    cin >> choice;
    decision = choice;
    
     return choice;
}
void addStudent()
{
   bool isFound = false;
   cout << "name please: ";
   cin >> name;
  for(int a = 0; a < student; a++)  
  {
   if(name==students[a])
   {
    cout << "Student already in gradebook! " << endl;
     isFound= true;
    break;
   }
  } 
   if(isFound == false)
   { 
       students[student] = name;
       student++;
      
 }
}
void gradesAdded()
{
   int grade;
   string bndg;
   cout << "Which student's grade would you like to change? " << endl;
   cin >> bndg;
   while(check<student)
   {
    if(bndg==students[check])
    {
    cout << "Grade: ";
     cin >> grade;
     grades[check] = grade;
     break;
    } else 
    check++;
   }
   check = 0;
}  
  

void displayclass()
{
int track = 0;
while(track<student)
{
cout << students[track] << ": " <<  grades[track] << endl;
track++;
}
cout << "Class Size: " << student << endl;
}
double classAverage()
{
int track = 0;
double average = 0;
   while(track<student)
   {
      average = average + grades[track];
      track++;
   }
   average = average/student;

   return average; 

}
void highGrade()
{
    int high = 0;
    

    for(int a = 0; a < student; a++)
    {
       if(high<grades[a])
       {
           high = grades[a];
       }
    }
if(high<=0)
{
 cout << "not a valid grade!" << endl;    
}else {
cout << "Highest Grade: " << high << endl;    
int b =0;
while(b<student)
{
if(high==grades[b])
{
cout << students[b] << endl;
}
b++;
}
}
}
void removeStudent()
{
    string name;
 cout << "Which student would you like to remove? " << endl;
 cin >> name;
 int b = 0;
 while(b< student)
 {
  if(name==students[b])
  {
     for(int a = b; a < student - 1;a++) 
     {
        students[a] = students[a+1];
        grades[a] = grades[a+1];
        
     }
     cout << "Student removed! " << endl;
     
     student = student - 1;
     break;
  }
  b++;
 }
}
int main()
{
   
    while(decision<7 )
    {
        Gradebook();
     if(decision == 1)
     {
        addStudent();
     }
     else if(decision == 2)
     {
      gradesAdded();
     }else if (decision == 3)
     {
     cout << "Class Average: " << classAverage() << endl;
     }
     else if(decision==4)
     {
        highGrade(); 
     }else if(decision== 6 )
     { 
      displayclass();
     }else if(decision == 5) 
     {
       removeStudent();  
     }
     else{
        decision = 9;
     }
      
    }

}