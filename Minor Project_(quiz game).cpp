#include<iostream>
#include<string>

using namespace std;

int warmup_round(void);
int main_round(void);
void registration(void);

int main()
{
	string respond;
	int yourresult=0;
	int finalresult=0;
	char playagain;
    	cout<<endl;
		cout<<"\t\t *-*  Welcome to the Quiz Game  *-*  " <<endl;
		cout<<"\t\t  ^-^  let's start the game ^-^ "<<endl;
		registration();
		cout<<"Are you ready to take the quiz ?   yes/no"<<endl;
		cin>>respond;
    	if (respond == "yes")
	    {
		    cout<<"\t *********WELCOME TO THE QUIZ GAME*********"<<endl;
			cout<<endl;
	   	}
    	else 
	    { 
	    	return 0;
	    }
		warm_up:
			yourresult=warmup_round();
			cout<<"Your Total Score:-- "<<yourresult<<endl;
			if(yourresult>=3)
			{
				cout<<"\t $$$$$$$$$$$$*****You Are Pass*****$$$$$$$$$$$"<<endl;
				cout<<"\t *******^_^*****congratulation*****^-^*******"<<endl;
				goto main_round;
			}
			else
			{
				cout<<"\t **********-_-****OOPS****-_-********"<<endl;
				cout<<"\t !!!!!!!!*****you are fail*****!!!!!!"<<endl;			
				cout<<"Do you want to play the warm up round again ?\nif yes then press: y \nif no then press : n"<<endl;
				cin>>playagain;
				if(playagain=='y'||playagain=='Y')
				{
					goto warm_up;
				}
				else
				{
					return 0;
				}
			}
		main_round:
			finalresult=main_round();
			cout<<"Your Total Score:-- "<<finalresult<<endl;
			if(finalresult>=6)
			{
				cout<<"\t $$$$$$$$$$$$*****You Are Pass*****$$$$$$$$$$$"<<endl;
				cout<<"\t *******^_^*****congratulation*****^-^*******"<<endl;
				cout<<"\t\t >>>>>>YOU WIN THE GAME<<<<<<"<<endl;
			}
			else
			{
				cout<<"\t **********-_-****OOPS****-_-********"<<endl;
				cout<<"\t !!!!!!!!*****you are fail*****!!!!!!"<<endl;	
				cout<<"\t\t >>>>>>YOU LOSS THE GAME<<<<<<"<<endl;
			}
  		cout<<"\t!!!!!!!!!!Thank you to play quiz!!!!!!!!!"<<endl;
}

void registration()
{
    string name;
    string respond;
		cout<<"what is your name?"<<endl;
	    getline(cin,name);
	    cout<<endl;
}

int warmup_round()
{
	char c;
	char option;
	int score=0;
	cout<<"\t <<<<<<<<<FOLLOW THESE INSTRUCTIONS>>>>>>>>>>"<<endl;
	cout<<"step 1 : There are total two rounds to play a game.\n\t A warm up round\n \t A challenging or main round"<<endl;
	cout<<"step 2 : In warm up round you have given total five questions.\n\t you have to give atleast three correct answer to enter in a challenging round"<<endl;
	cout<<"Step 3 : Main round contains 15 questions. you have to give six correct answers to win the game. "<<endl;
	cout<<endl;
	
	cout<<"\n\t --------SOME RULES TO PLAY THE QUIZ---------"<<endl;
	cout<<"Rule 1 : You will be given 1 mark for each right answer"<<endl;
	cout<<"Rule 2 : There will be no negative marking"<<endl;
	cout<<"Rule 3 : Press s to start the quiz"<<endl;
	end:
		cin>>c;
		if(c=='s'||c=='S')
		{
			cout<<"\t *****************WARM UP ROUND******************"<<endl;
			cout<<"Q.1 Identify the correct extension of user defined header file in c++..."<<endl;
			cout<<"(a) .cpp		(b) .hf		(c) .h		(d) .hg"<<endl;
			cin>>option;
			if(option=='c'||option=='C')
			{
				cout<<"correct!!!"<<endl;
				score = score+1;
			}
			else
			{
				cout<<"oops! wrong..."<<endl; 
				score = score+0;
			}
			cout<<"Q.2 which of the following is used for comment in c++?"<<endl;
			cout<<"(a) /*comment*/		(b) //comment*/		(c) //comment		(d) both a and c"<<endl;
			cin>>option;
			if(option=='d'||option=='D')
			{
				cout<<"correct!!!"<<endl;
				score = score+1;
			}
			else
			{
				cout<<"oops! wrong..."<<endl; 
				score = score+0;
			}
			cout<<"Q.3 Which of the following data type is supported in c++ but not in c?"<<endl;
			cout<<"(a) int		(b) bool		(c) char		(d) float"<<endl;
			cin>>option;
			if(option=='b'||option=='B')
			{
				cout<<"correct!!!"<<endl;
				score = score+1;
			}
			else
			{
				cout<<"oops! wrong..."<<endl; 
				score = score+0;
			}
			cout<<"Q.4 Identify scope resolution operator..."<<endl;
			cout<<"(a) :		(b) ?		(c) ::		(d) none"<<endl;
			cin>>option;
			if(option=='c'||option=='C')
			{
				cout<<"correct!!!"<<endl;
				score = score+1;
			}
			else
			{
				cout<<"oops! wrong..."<<endl; 
				score = score+0;
			}
			cout<<"Q.5 Identify incorrect constructor type..."<<endl;
			cout<<"(a) default constructor		(b) parameterized constructor		(c) copy constructor		(d) friend constuctor"<<endl;
			cin>>option;
			if(option=='d'||option=='D')
			{
				cout<<"correct!!!"<<endl;
				score = score+1;
			}
			else
			{
				cout<<"oops! wrong..."<<endl; 
				score = score+0;
			}
		}
		else
		{
			cout<<"you have entered wrong value, please enter s"<<endl;
			goto end;
		}
    	return score;
}

int main_round()
{
	char c;
	char option;
	int points=0;
	cout<<"\t *******************CHALLENGING ROUND*************************"<<endl;
	cout<<endl;
    cout<<"Q.1 Choose the correct default return value of function->"<<endl;
	cout<<"(a) int		(b) char		(c) double		(d) float"<<endl;
	cin>>option;
	if(option=='a'||option=='A')
	{
		cout<<"correct!!!"<<endl;
		points = points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points = points+0;
	}
	cout<<"Q.2 The constants in c++ is also known as..."<<endl;
	cout<<"(a) pre-processor		(b) literals		(c) const		(d) none"<<endl;
	cin>>option;
	if(option=='b'||option=='B')
	{
		cout<<"correct!!!"<<endl;
		points =points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points =points+0;
	}
	cout<<"Q.3 Which of the following types is the language c++?"<<endl;
	cout<<"(a) procedual		(b) dynamic type language		(c) static type language		(d) none"<<endl;
	cin>>option;
	if(option=='c'||option=='C')
	{
		cout<<"correct!!!"<<endl;
		points = points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points = points+0;
	}
	cout<<"Q.4 What is the ASCII value of null character?"<<endl;
	cout<<"(a) 32		(b) 0		(c) 48		(d) 64"<<endl;
	cin>>option;
	if(option=='b'||option=='B')
	{
		cout<<"correct!!!"<<endl;
		points = points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points = points+0;
	}
	cout<<"Q.5 What is an object in c++?"<<endl;
	cout<<"(a) It is function of class		(b) It is instance of class		(c) It is datatype of class		(d) It is syntax of class"<<endl;
	cin>>option;
	if(option=='b'||option=='B')
	{
		cout<<"correct!!!"<<endl;
		points = points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points = points+0;
	}
	cout<<"Q.6 Which of the following statement is correct?"<<endl;
	cout<<"(a) structure can have function as members		(b) class members are public by default  	(c) structure members are private by default	(d) none"<<endl;
	cin>>option;
	if(option=='a'||option=='A')
	{
		cout<<"correct!!!"<<endl;
		points = points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points = points+0;
	}
	cout<<"Q.7 Which of the following loop is best when we know the number of iterations?"<<endl;
	cout<<"(a) while loop		(b) do while loop	(c) for loop	(d) all of above"<<endl;
	cin>>option;
	if(option=='c'||option=='C')
	{
		cout<<"correct!!!"<<endl;
		points = points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points = points+0;
	}
	cout<<"Q.8 Goto can be classified into: "<<endl;
	cout<<"(a) label		(b) variable		(c) operator		(d) function"<<endl;
	cin>>option;
	if(option=='a'||option=='A')
	{
		cout<<"correct!!!"<<endl;
	    points = points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points = points+0;
	}
	cout<<"Q.9 Identify the correct defination of '*' operator in pointer?  "<<endl;
	cout<<"(a) address of operator		(b) value of address operator		(c) multiplication operator		(d) all of them"<<endl;
	cin>>option;
	if(option=='b'||option=='B')
	{
		cout<<"correct!!!"<<endl;
        points = points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points = points+0;
	}
	cout<<"Q.10 By which of the following can the if-else statement be replaced?"<<endl;
	cout<<"(a) bit-wise operator	(b) logical operator		(c) conditional operator		(d) arithmatic operator"<<endl;
	cin>>option;
	if(option=='c'||option=='C')
	{
		cout<<"correct!!!"<<endl;
		points = points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points = points+0;
	}
	cout<<"Q.11 Identify the size of int data type in c++...."<<endl;
	cout<<"(a) 1 byte	(b) 2 bytes 		(c) 4 bytes		(d)depend on compiler"<<endl;
	cin>>option;
	if(option=='d'||option=='D')
	{
		cout<<"correct!!!"<<endl;
		points = points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points = points+0;
	}
	cout<<"Q.12 What is do-while loop also known as"<<endl;
	cout<<"(a) exit control		(b) entry control	(c) per tested		(d) all of them"<<endl;
	cin>>option;
	if(option=='a'||option=='A')
	{
		cout<<"correct!!!"<<endl;
		points = points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points = points+0;
	}
	cout<<"Q.13 What does a c++ class hold?"<<endl;
	cout<<"(a) function 	(b) data		(c) arrays		(d) Both a and b "<<endl;
	cin>>option;
	if(option=='d'||option=='D')
	{
		cout<<"correct!!!"<<endl;
	    points = points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points = points+0;
	}
	cout<<"Q.14 which of the following is the correct identifier?"<<endl;
	cout<<"(a)2var_name 		(b)2VAR_NAME 		(c)$varname 		(d)var_name12  "<<endl;
	cin>>option;
	if(option=='d'||option=='D')
	{
		cout<<"correct!!!"<<endl;
		points = points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points = points+0;
	}
	cout<<"Q.15 Which of the following is not a type of inheritance?"<<endl;
	cout<<"(a) multiple		(b) multilevel		(c) distributed 	(d) heirarchical"<<endl;
	cin>>option;
	if(option=='c'||option=='C')
	{
		cout<<"correct!!!"<<endl;
		points = points+1;
	}
	else
	{
		cout<<"oops! wrong..."<<endl; 
		points = points+0;
	}
	return points;
}