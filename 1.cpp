/*
Example: WAP to VoterValidity checker Application and you have to find the total valid voter as well as you have to find ward wise valid voter 
you have to write two classes.
1. Voter : voter class contain info id, name , wardno , dob  write a setter and getter method
2. ValidateVoter: this class calculate the valid voters 
void acceptVoters(Voter v[]): this method can accept voter info in the form of array of object
void validVoter(int size): this method can validate all voters means if age of voter is greate than 18 then consider voter valid voter otherwise not
void calWardWiseValidVoter(int size): this method can filter ward wise data of valid voter.
Note: you have to find the system data and accept the voter birth date and calculate the age of voter by programmatically and if age is greater than 18 consider voter is valid 
*/
#include <iostream>  
#include <ctime>
#include <string.h>  
using namespace std; 
class VoterInfo{

    public:
    int id,wardNo;
    char name[100],dateOfBirth[100];
    void setInfo(int id,int wardNo,char name[],char dateOfBirth[])
    {
        this->id=id;
        this->wardNo=wardNo;
        strcpy(this->name,name);
        strcpy(this->dateOfBirth,dateOfBirth);
    }
    int getId(){
        return id;
    }
    int getWardNo(){
        return wardNo;
    }
    char *getName(){
        return name;
    }
    char *getDateOfBirth(){
        return dateOfBirth;
    }
};

int main()  
{  
    time_t now = time(0); // get current date and time 
    tm *ltm = localtime(&now);  
    // print various components of tm structure. 
    cout<<"tm Year:"<<ltm->tm_year; 
    cout << "Year:" << 1900 + ltm->tm_year << endl; // print the year  
    cout << "Month: " << 1 + ltm->tm_mon << endl; // print month number  
    cout << "Day: " << ltm->tm_mday << endl; // print the day  
    // Print time in hour:minute:second  
    cout << "Time: " << 5 + ltm->tm_hour << ":";  
    cout << 30 + ltm->tm_min << ":";  
    cout << ltm->tm_sec << endl; 
    //cout << "Number of seconds since January 1,2021 is:: " << now << endl;  
     VoterInfo voter;
    voter.setInfo(101,15,"Sammya","2008/04/05");// "year/month/date"
     //int no = stoi("2000");
   char *splitString = strtok(voter.getDateOfBirth(),"/");
   cout<<"---------------------------------------"<<endl;
    while(splitString !=NULL)
    {
        //cout<<"index value:"<<splitString ;
          int yr = stoi(splitString); 

            if(1900 + ltm->tm_year-yr>18){

                    cout<<"Yes Your Valid.....Age"  << 1900 + ltm->tm_year-yr<<endl;
                    break;
            }else{
                cout<<" Not Valid.....Age"  << 1900 + ltm->tm_year-yr;
            }

 splitString = strtok(NULL,"/");
    }
cout<<"\n---------------------------------------";
}