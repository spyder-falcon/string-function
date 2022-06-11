#include<iostream>
#include<cstring>             // strlen() , strcpy , strcat , strcmp , strcmpi 
using namespace std;
int main()
{
	char Username[50],ch;
	int Num_1;

	cout<<"Username ends with @"
	    <<"\nEnter The Username: "; 
	cin.getline(Username,50,'@');

    cout<<Username;

	// strlen No. of string element
    Num_1 = strlen(Username);
	cout<<"\n"<<Num_1;

    // strcpy copy a string to another string 
	char Second_NAME_Username[50];
	strcpy(Second_NAME_Username, Username);
	cout<<"\n"<<Second_NAME_Username;

	// strcat add two string together
	char intro_1[50]="Hello ";    
	strcat(intro_1,Username);
	cout<<"\n"<<intro_1;

	// strcmp compare the elements of two string not ignore cases (upper,lower)
	
	int n; //number of elements
	cout<<"\ninput string 2 (intro_1) for compare :";
	cin>>intro_1;
	n = strcmp(intro_1,Second_NAME_Username);
	if (n==0)
	{
		cout<<"\n String intro1 and Username are same"; //here the Second_NAME_Username is the copy of Username
	}
	else if (n<0)
	{
		cout<<"\n String intro1 < Username"; //here the Second_NAME_Username is the copy of Username
	}
	else
	{
		cout<<"\n String intro1 > Username"; //here the Second_NAME_Username is the copy of Username
	}
	
    // strcmp compare the elements of two string ignore cases
	n = strcmp(intro_1,Second_NAME_Username);
	if (n==0)
	{
		cout<<"\n String intro1 and Username are same"; //here the Second_NAME_Username is the copy of Username
	}
	else if (n<0)
	{
		cout<<"\n String intro1 < Username"; //here the Second_NAME_Username is the copy of Username
	}
	else
	{
		cout<<"\n String intro1 > Username"; //here the Second_NAME_Username is the copy of Username
	}   

	return 0;
	
}
