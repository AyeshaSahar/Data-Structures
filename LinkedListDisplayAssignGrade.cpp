#include<iostream>
#include <cstdlib>

using namespace std;

struct node
{
     char *name;
     int marks;
     node *next;
};

struct node *head=NULL;

//Function to insert a node
void insertNode(char *name,int marks){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->name = name;
    newNode->marks = marks;
    newNode->next = head;
    head=newNode;
}

//Function to display all data and assign grades
void SummaryReport(){
    struct node *temp=head;
    int a=0,b=0,c=0,d=0,e=0,j=0,k=0,l=0,m=0,f=0, pass;
    while(temp!=NULL){
        if(temp->marks>=90){
            cout<<"Name: "<< temp->name<<"\t"<<"Marks: "<<temp->marks<<"\t"<<"Grade: A"<<endl;
            a++;
        }
        else if(temp->marks>=85 && temp->marks<90){
            cout<<"Name: "<< temp->name<<"\t"<<"Marks: "<<temp->marks<<"\t"<<"Grade: A-"<<endl;
            b++;
        }
        else if(temp->marks>=80 && temp->marks<85){
            cout<<"Name: "<< temp->name<<"\t"<<"Marks: "<<temp->marks<<"\t"<<"Grade: B+"<<endl;
            c++;
        }
        else if(temp->marks>=75 && temp->marks<80){
            cout<<"Name: "<< temp->name<<"\t"<<"Marks: "<<temp->marks<<"\t"<<"Grade: B"<<endl;
            d++;
        }
        else if(temp->marks>=70 && temp->marks<75){
            cout<<"Name: "<< temp->name<<"\t"<<"Marks: "<<temp->marks<<"\t"<<"Grade: B-"<<endl;
            e++;
        }
        else if(temp->marks>=65 && temp->marks<70){
            cout<<"Name: "<< temp->name<<"\t"<<"Marks: "<<temp->marks<<"\t"<<"Grade: C+"<<endl;
            j++;
        }
        else if(temp->marks>=60 && temp->marks<65){
            cout<<"Name: "<< temp->name<<"\t"<<"Marks: "<<temp->marks<<"\t"<<"Grade: C"<<endl;
            k++;
        }
        else if(temp->marks>=55 && temp->marks<60){
            cout<<"Name: "<< temp->name<<"\t"<<"Marks: "<<temp->marks<<"\t"<<"Grade: C-"<<endl;
            l++;
        }
         else if(temp->marks>=50 && temp->marks<55){
            cout<<"Name: "<< temp->name<<"\t"<<"Marks: "<<temp->marks<<"\t"<<"Grade: D"<<endl;
            m++;
        }
        else{
            cout<<"Name: "<< temp->name<<"\t"<<"Marks: "<<temp->marks<<"\t"<<"Grade: F"<<endl;
            f++;
        }
        temp=temp->next;
    }

    cout<<"\n\n\t\tSummary Report"<<endl;

    cout<<"Number of students with A grade:  "<<a<<endl;
    cout<<"Number of students with A- grade: "<<b<<endl;
    cout<<"Number of students with B+ grade: "<<c<<endl;
    cout<<"Number of students with B grade:  "<<d<<endl;
    cout<<"Number of students with B- grade: "<<e<<endl;
    cout<<"Number of students with C+ grade: "<<j<<endl;
    cout<<"Number of students with C grade:  "<<k<<endl;
    cout<<"Number of students with C- grade: "<<l<<endl;
    cout<<"Number of students with D grade:  "<<m<<endl;
    cout<<"Number of students with F grade:  "<<f<<endl;

    pass = a+b+c+d+e+j+k+l+m;
    cout<<"\nNumber of students who passed Data Structures: "<<pass<<endl;
    cout<<"Number of students who failed Data Structures:  "<<f;

}

int main(){
    insertNode("Alia",94);
    insertNode("Hamid",80);
    insertNode("Ayesha",75);
    insertNode("Dua",89);
    insertNode("Warda",78);
    insertNode("Fiza",59);
    insertNode("Fatima",87);
    insertNode("Haris",37);
    insertNode("Ali",54);
    insertNode("Waleed",63);
    insertNode("Sahar",80);
    insertNode("Ashina",85);
    insertNode("Hafsa",70);
    insertNode("Noor",43);
    insertNode("Sana",56);

    cout<<"\t\tStudent Data"<<endl;
    SummaryReport();

    return 0;
}


