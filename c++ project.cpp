#include<iostream>
#include<string>
using namespace std;
class Student
{
   private:
   string name;
   int age;
   string major;
   float mathGrade;
   float scienceGrade;
   float languageGrade;
   
   public:
   		Student(){
		name="Unknown";
		age=0;
		major="Unknown";
		mathGrade=0.0;
		scienceGrade=0.0;
		languageGrade=0.0;
	}
	
   	void inputData(){
   		cout<<"Enter your name\n";
   		cin>>name;
   		
   		cout<<"Enter your age\n";
   		cin>>age;
   		
   		cout<<"Enter your major\n";
   		cin>>major;
   		
   		cout<<"Enter your math grade\n";
   		cin>>mathGrade;
   		
   		cout<<"Enter your science grade\n";
   		cin>>scienceGrade;
   		
   		cout<<"Enter your language grade\n";
   		cin>>languageGrade;
   		
	   }
	   
	float calculateAverage(){
		return (mathGrade+scienceGrade+languageGrade)/3.0;
	}
	
	void display(){
		cout<<"Name: "<<name<<endl;
		cout<<"Age: "<<age<<endl;
		cout<<"Math Grade: "<<mathGrade<<endl;
		cout<<"Major: "<<major<<endl;
		cout<<"Science Grade: "<<scienceGrade<<endl;
		cout<<"Language Grade: "<<languageGrade<<endl;
		cout<<"Average: "<<calculateAverage();
	}
	string getName(){
		return name;
	}
	
};
int main()
{
  const int MAX_STUDENTS=100;
  Student student[MAX_STUDENTS];
  int studentCount=0;
  int choice;
  do{
  	cout<<"\n===Student Management System===\n";
  	cout<<"1. Add Student\n";
  	cout<<"2. Display All Students\n";
  	cout<<"3. Search Student\n";
  	cout<<"4. Delete Student\n";
  	cout<<"5. Exit\n";
  	
  	cout<<"Enter your choice\n";
  	cin>>choice;
  	
  	switch (choice)
  	{
  		case 1:{
  			if(studentCount < MAX_STUDENTS){
  				student[studentCount].inputData();
  				studentCount++;
  				cout<<"Student added successfully! \n";}
  				else
  					cout<<"Cannot add more students! Maximum limit reached. \n";
			break;
		  }
  		case 2:{
  			 if(studentCount==0)
  			 	cout<<"No students to display!\n";
			   else{
			   	for(int i=0; i<studentCount; i++){
			   		cout<<"\n---Student "<<i+1<<"---\n";
			   		student[i].display();}	
				    }
			break;
		  }
  		case 3:{
		
  			if(studentCount==0)
  			cout<<"No students to search!\n";
  			else{
  				string searchName;
                cout<<"\n Enter name to search:  ";
                cin>>searchName;
                
                bool found=false;
                for (int i=0;i<studentCount;i++){
   	            if(student[i].getName()==searchName){
   	         	cout<<"\n Student found!\n";
   	        	student[i].display();
   	        	found=true;
   	        	break;} }
   
               if(!found)
             	cout<<"Student not found!\n";
  	         	break;}
  	         	
  	         		break;
		  }
		  case 4:{
		     if(studentCount==0)
		     cout<<"No student to delete \n";
		     
		     else{
		     	string searchName;
                cout<<"\n Enter name to search:  ";
                cin>>searchName;
                
                bool found=false;
                for (int i=0;i<studentCount;i++){
   	            if(student[i].getName()==searchName){
   	            	student[i].display();
   	            	cout<<"---Are you sure to delete?(y/n): \n";
   	            	char confirm;
   	            	cin>>confirm;
   	            	if(confirm=='y'|| confirm=='Y'){
   	            		for(int j=i; j<studentCount-1;j++){
   	            			
   	            			student[j]=student[j+1];
						   }
						   studentCount--;
						   cout<<"Student deleted successfully! \n";
					   }
					   else{
					   	cout<<"Deletion Cancelled. \n";
					   }
					   found=true;
					   break;
				   }
			}
			if(!found){
				cout<<"Student not found! \n";
			}
			
			 }
		  	
			break;
		  }
  		case 5:
  			cout<<"Exiting... \n";
  		break;
  		default:
  			cout<<"Invalid choice!\n";
   }
  }while(choice!=5);
  
   
   
   
return 0;	
}
