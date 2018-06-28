#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>


using namespace std;
string Instruction();
string Randomjumbleword();
string Playername,jumble,answer,theWord,theHint;





int main()
{
	
	Instruction();//instruct players
  cout<<"HI !!!!!"<<" \t"<<Playername<<" \t"<<"Ready!!! LETS Start then"<<endl;
  label://return to here after giving correct answer
  Randomjumbleword();//create jumble word
  do
  {
  cout<<"\nyour word is : "<<" "<<jumble<<endl;
  cin>>answer;
  if (answer=="hint")
  {
	  cout<<theHint<<endl;

  }
  else if (answer!=theWord)
  {
	  cout <<"/nwrong one try again"<<endl;
  }

  }
  while(answer!=theWord && answer!="quit");
  if (answer==theWord)
  {
	cout<<"\nYou got it !!!SMARTBOY"<<" "<<"let's try next one"<<endl;
	
	goto label; 
  }
  else if (answer=="quit")
  {
	  cout<<"\ndont worry the answer is" <<theWord<<"\t\nGOOD BYE\n";

  }

  return 0;
	 
  
  
  
 
  
	  
  
  
  

  
  

}
  


string Instruction()//Take player name and instruct them game rules
{
	cout<<"\tWELCOME TO JUMBLE WORD GAME"<<"\nHere we are going to jumbled word of famous footballers\n"<<"\nYou need to tell the Right name!! OK\n";
	cout<<"\nIf you need a hint just type hint or if you want to quit then type quit\n";
	cout<<"\nNow some formal questions:- What is your Name\n??"<<endl;
	cin>>Playername;
	return Playername;
}
string Randomjumbleword()//make list of words and pick and jumble them randomly
{
	enum fields{Word,Hint,NUM_FIELDS};
	const int Max_Words=10;
	const string WORDS[Max_Words][NUM_FIELDS]=
	{
		{"ronaldo","PHENOMENAL"},
		{"messi","DRIBBLE KING"},
		{"pele","GOD OF FOOTBALL"},
		{"maradona","hand of god"},
		{"giggs","most assist in PL"},
		{"lampard","legend who Bleed in Blue"},
		{"cannavaro","Defender who won ballon d or"},
		{"lev yashin","GK WON BALLON D OR"},
		{"buffon","GK Legend who win everything but UCL"},
		{"davidbeckham","bend it like"}
	};
	srand(static_cast<unsigned int>(time (0)));
	int no=(rand()%Max_Words);
		 theWord=WORDS[no][Word];
		 theHint=WORDS[no][Hint];
       jumble=theWord;
       int length=jumble.size();
        for (int i=0;i<length;++i)
{
	int i1=(rand()%length);
	int i2=(rand()%length);
	char temp=jumble[i1];
	jumble[i1]=jumble[i2];
	jumble[i2]=temp;
}
return jumble,theWord,theHint;

}





