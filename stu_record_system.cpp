#include<iostream>
using namespace std;
struct Stud{
	string name;
    int age;
    int id;
    float gpa;
    Stud* next;
};
//there are global variables( we can access and use them anywhere in program)
Stud *start=NULL;
Stud *temp;
Stud *temp1;
void append(){
	int p;
	A:
	if(start==NULL)
	{ start=new Stud;
	   cout<<"PLZ ENTER RECORD.\n";
        cout<<"Enter name:";
        cin>>start->name;
           cout<<"Enter age:";
        cin>>start->age;
             cout<<"Enter id:";
        cin>>start->id;
          cout<<"Enter gpa:";
        cin>>start->gpa;
        start->next=NULL;
	}
	else
	{          temp=start;
          while(temp->next!=NULL)
          {
              temp=temp->next;
          }
          temp1=new Stud;
          cout<<"PLZ ENTER RECORD.\n";
          cout<<"Enter name:";
        cin>>temp1->name;
           cout<<"Enter age:";
        cin>>temp1->age;
             cout<<"Enter id:";
        cin>>temp1->id;
          cout<<"Enter gpa:";
        cin>>temp1->gpa;
        temp1->next=NULL;
        temp->next=temp1;
	}
	cout<<"Press 0 to add another student record = ";
	cin>>p;	
			    if(p==0)
				  {
				    goto A;
				   } 
				else
			   	{     
				     cout<<"\n\n\t\t\t*********";
               }
}
void display(){
	 if(start==NULL)
    {    
        cout<<"EMPTY"<<endl;
	}
	else
	{
		  temp=start;
          while(temp->next!=NULL)
          {
              cout<<"Nmae : "<<temp->name<<endl;
          cout<<"Age : "<<temp->age<<endl;
               cout<<"ID : "<<temp->id<<endl;
          cout<<"GPA : "<<temp->gpa<<endl;
              temp=temp->next;
          }
           cout<<"Nmae : "<<temp->name<<endl;
          cout<<"Age : "<<temp->age<<endl;
               cout<<"ID : "<<temp->id<<endl;
          cout<<"GPA : "<<temp->gpa<<endl;  
    }   
}
void searching(int id)
{        
	Stud*temp=start;
	while(temp!=NULL)
	{ if (temp->id==id)
	     {cout<<"STUDENT FOUND\n";
	          cout<<"Student Name : "<<temp->name<<endl;
	           cout<<"Student ID : "<<temp->id<<endl;
	            cout<<"Student Age : "<<temp->age<<endl;
	             cout<<"Student GPA: "<<temp->gpa<<endl;
		 }
		 temp= temp->next;
	}
	cout<<"STUDENT NOT FOUND\n";
}
void deletion(int id)
{
	 if(start==NULL)
        {    
        cout<<"EMPTY"<<endl;
     	}
    else
	    {
	    	
		  if(start->id==id)
	     {Stud*temp=start;
	     start=start->next;
	     delete temp;
	     cout<<"DELETED SUCCESSFULLY.\n";
		 }
		 else
		       {
				  Stud* current = start;
        while (current->next != NULL&&current->next->id!=id) 
		{
			current=current->next;
		}
		           if (current->next!=NULL ) 
			{
                Stud* temp = current->next;
                current->next = current->next->next;
                delete temp;
                cout << "deleted successfully." << endl;
                
            }  
	 else
		 {
		 	cout<<"NOT FOUND.\n";
		 }
	}
}
}
int main()
{
	    cout<<"\n\n\t\t\t****************************************************\n";
	    cout<<"\t\t\t**          STUDENT RECORD MANAGEMENT             **\n";
	    cout<<"\t\t\t****************************************************\n";
	    
	    cout<<"\n\n\n\t\t\t\t1. Append.\n";
	    cout<<"\t\t\t\t2. Display.\n";
	    cout<<"\t\t\t\t3. Searching.\n";
	    cout<<"\t\t\t\t4. Delete.\n";
	    cout<<"\t\t\t\t5. Exit.\n";
    A:
	int option,s,id;
	cout<<"\n\n\t\t\tWhich operation you want to perform = ";
	cin>>option;
	switch(option)
	{ case 1:
		   {
			 append();
		    	cout<<"\n\n";
       		    cout<<"Press 0 If you want any other operation = ";
       		    cin>>s;
       		    if(s==0)
				  {
				    goto A;
				   } 
				else
			   	{     
				     cout<<"\n\n\t\t\t*******YOUR PROGRAM IS EXIT*****";
	            }
		    break;
			}
	  case 2:
	  	    {
			  display();
	  	    	cout<<"\n\n";
       		    cout<<"Press 0 If you want any other operation = ";
       		    cin>>s;
       		    if(s==0)
				  {
				    goto A;
				   } 
				else
			   	{     
				     cout<<"\n\n\t\t\t*******YOUR PROGRAM IS EXIT*****";
	            }
	  	    break;
	     	}
	  case 3:
	    	{
	    	 cout<<"Enter ID to search = ";
	    	 cin>>id;
			 searching(id);
	    		cout<<"\n\n";
       		    cout<<"Press 0 If you want any other operation = ";
       		    cin>>s;
       		    if(s==0)
				  {
				    goto A;
				  } 
				else
			   	{     
				     cout<<"\n\n\t\t\t*******YOUR PROGRAM IS EXIT*****";
	            }
	    	break;
	        }   	    	
	  case 4:
	  	{   
		   cout<<"Enter ID to delete = ";
	    	 cin>>id; 
			deletion(id);
				cout<<"\n\n";
       		    cout<<"Press 0 If you want any other operation = ";
       		    cin>>s;
       		    if(s==0)
				  {
				    goto A;
				   } 
				else
			   	{     
				     cout<<"\n\n\t\t\t*******YOUR PROGRAM IS EXIT*****";
	            }
			break;
		}
	  case 5:
			cout<<"\t\t\tYour Program is Exit.\n";
			break;
	default:
		{
		cout<<"\t\t\tThis option is not available.\n";
		break;
	    }
	}
	return 0;
}
