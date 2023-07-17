#include <iostream>
#include<ctime>
#include <cstring>
#include <cstdlib>
using namespace std;
class Player
{
	public:
	char name_of_player[26];
	int no_of_runs_scored;
	int no_of_runs_given,no_of_balls_played,no_of_balls_delivered;
	int extras;
	float over_played;
	int no_of_wicket_taken;
	int extra;
	float economy_rate_of_a_player;
	float strike_rate_of_a_player;

	Player()
	{
		strcpy(name_of_player,"");
		no_of_runs_scored = 0;
		no_of_runs_given = 0;
		no_of_balls_played = 0;
		no_of_balls_delivered = 0;
		extra = 0;
		over_played = 0;
		no_of_wicket_taken = 0;
		strike_rate_of_a_player = 0;
		economy_rate_of_a_player = 0;
	}
	void setname()
	{
		cout<<"enter the player name ";
		cin>>name_of_player;

	}

};
class Team
{
	public:
	char teamName[10];
	Player p[16];
	float over_played_by_team;
	int wicket_taken_by_Team;
	int total_runs_scored_by_team;
	bool toss_won_by_team;
	int fall_of_wickets[10];    // wickets vs runs

	int on_strike_batsman;
	int far_end_batsman;
	int on_strike_bowler;
	Team()
	{
		strcpy(teamName,"");
		over_played_by_team = 0;
		wicket_taken_by_Team = 0;
		total_runs_scored_by_team = 0;
		toss_won_by_team = 0;
		on_strike_batsman = 0;
		far_end_batsman=1;
		on_strike_bowler=0;// set ffall_of_wickets[10][2]irst player as default bowler  , later to give option to user to choose their bowler
		fall_of_wickets[10]={0};
	}
	void setTeamname()
	{
		cout<<"Enter the Team name ";
		cin>>teamName;

	}
	//return true if given team choose to bat
	bool isBatting(Team t)
	{
		char choice[4];
		cout<<t.teamName<<":Would you like to Bat/Bowl first\t:-(Bat/Bowl)";
		cin>>choice;
		if(strcmp(choice,"Bat")==0 ||strcmp(choice,"Bowl")==0)
		{
				if(strcmp(choice,"Bat")==0)
					return true;
				else
					return false;
		}
		else
		{
			cout<<"Invalid Input\nPlz re-enter your choice "<<endl;
			return isBatting(t);
		}
	}
	//return 0 for team 1 and 1 for team 2;
	int tossTime(Team t1, Team t2)
	{
		srand(time(NULL));
		int random;
		random=(rand()%2);
		cout<<"It toss time"<<endl;
		if(random==0)
		{

			cout<<t1.teamName<<"Will throw the coin"<<endl;
			random=(rand()%2);
			if(random ==0)
			{
				cout<<"Congratulations Team "<<t1.teamName<<" has won the toss";
				return 0;


			}
			else
			{
				cout<<"Congratulations Team "<<t2.teamName<<" has won the toss";
				return 1;
			}
		}
		else
		{
			cout<<t2.teamName<<"Will throw the coin"<<endl;
			random=(rand()%2);
			if(random ==0)
			{
				cout<<"Congratulations Team "<<t1.teamName<<" has won the toss";
				return 0;


			}
			else
			{
				cout<<"Congratulations Team "<<t2.teamName<<" has won the toss";
				return 1;
			}

		}
	}
	bool strike_changed(int runs)
	{
		switch(runs)
		{

			case 1:
			case 5:
			case 3:return true;
			case 0:
			case 2:
			case 4:
			case 6:return false;
			default:cout<<"Invalid Run";
		}
		return NULL;
	}
	void displayDataAtTheOverEnd(Team battingTeam , Team bowlingTeam/* arguments */)
	{
	  
	

	  cout << "Batsmen on Strike "<<battingTeam.p[battingTeam.on_strike_batsman].name_of_player << '\n';
	  cout << "Strike Rate "<< battingTeam.p[battingTeam.on_strike_batsman].strike_rate_of_a_player << "\n\n";
	  cout << "Batsmen far End " <<battingTeam.p[battingTeam.far_end_batsman].name_of_player << '\n';
	  cout << "Strike Rate "<< battingTeam.p[battingTeam.far_end_batsman].strike_rate_of_a_player << "\n\n";

	  cout << "Previous Bowler "<<bowlingTeam.p[bowlingTeam.on_strike_bowler].name_of_player << "\n";
	  cout << "Economy Rate " <<bowlingTeam.p[bowlingTeam.on_strike_bowler].economy_rate_of_a_player << "\n\n";

	  // Previous over runns

	}

	//func to display exclamatory message when 4 , 6 , w is entered
	void displayChowkaChakkaWicket(char run)
	{
		switch (run-48) {
			case 4:std::cout << "Thats Fantastic 4....." << '\n';break;
			case 6:std::cout << "Thats Hugeeeee  6....." << '\n';break;
			case 39:                                                                    // 39+48 =87 ('W')
			case 71:/*w*/cout << "Thats big blow to the Batting Team " << '\n';break;   // 71+48 =119 ('w')
			default:return;
		}
	}


	void inningsStarted(Team *battingTeam,Team *bowlingTeam,int num_Of_Over_Match)
	{

	  char result;
	  for(int i = 1;i <= num_Of_Over_Match * 6 ; i++)
	  {
		  cout << "\nNOTE: Enter runs formula for balls (NumberOfOvers x 6)\n" << endl;
	      cout<<"Enter the result(" << i << " to " << num_Of_Over_Match * 6 << ")(w for wickets and e for extras)\t:";
	      cin>>result;   //Change the w to lower
				// to update balls played by on strike batsmen
				battingTeam->p[battingTeam->on_strike_batsman].no_of_balls_played++;
				if(result!='e' || result != 'e')
					bowlingTeam->p[bowlingTeam->on_strike_bowler].no_of_balls_delivered++;
	      displayChowkaChakkaWicket(result);

				//extra=0;   //to update if extras 'e' is input
				//no_of_wicket_taken=0;  if input is 'w' then update the wickets taken in the bowlingTeam player

				if (result=='w' || result == 'W')
				{
					//first display the player details after fall of his wickets
					(bowlingTeam->p[bowlingTeam->on_strike_bowler].no_of_wicket_taken)++;
					battingTeam->fall_of_wickets[bowlingTeam->wicket_taken_by_Team++]=battingTeam->total_runs_scored_by_team;
					battingTeam->on_strike_batsman = (battingTeam->on_strike_batsman > battingTeam->far_end_batsman ) ? battingTeam->on_strike_batsman + 1 : battingTeam->far_end_batsman + 1;
				}
	      if(result>=48 && result<=57)
	      {
	        battingTeam->p[battingTeam->on_strike_batsman].no_of_runs_scored+=result-48;
	        bowlingTeam->p[bowlingTeam->on_strike_bowler].no_of_runs_given+=result-48;
	        
	        battingTeam->p[battingTeam->on_strike_batsman].no_of_balls_played++;
	        bowlingTeam->p[bowlingTeam->on_strike_bowler].no_of_balls_delivered++;

	          
	        battingTeam->total_runs_scored_by_team += (result - 48) ;
	        if(strike_changed(result-48)==true)
	        {
	          //to check strike change then increment run and wickets stats for team and player
	          //to swap the batsmen
	          battingTeam->on_strike_batsman=battingTeam->on_strike_batsman+battingTeam->far_end_batsman;
	          battingTeam->far_end_batsman=battingTeam->on_strike_batsman-battingTeam->far_end_batsman;
	          battingTeam->on_strike_batsman=battingTeam->on_strike_batsman-battingTeam->far_end_batsman;



	        }
	    	}
				if (i % 6 == 0 )
				{
					battingTeam->over_played_by_team++;
					battingTeam->p[battingTeam->on_strike_batsman].over_played=(battingTeam->p[on_strike_batsman].no_of_balls_played*1.0)/6;//over played by a batsmen
					bowlingTeam->p[bowlingTeam->on_strike_bowler].over_played++;//update the ball delivered
					//strike rate of batsmen after each delivery
					battingTeam->p[battingTeam->on_strike_batsman].strike_rate_of_a_player=(battingTeam->p[battingTeam->on_strike_batsman].no_of_runs_scored / (battingTeam->p[battingTeam->on_strike_batsman].no_of_balls_played ))*100;
					battingTeam->p[battingTeam->far_end_batsman].strike_rate_of_a_player=(battingTeam->p[battingTeam->far_end_batsman].no_of_runs_scored / (battingTeam->p[battingTeam->far_end_batsman].no_of_balls_played ))*100;
					//economy rate of bowler after each delivery
					bowlingTeam->p[bowlingTeam->on_strike_bowler].economy_rate_of_a_player=(bowlingTeam->p[bowlingTeam->on_strike_bowler].no_of_runs_given*1.0/bowlingTeam->p[bowlingTeam->on_strike_bowler].no_of_balls_delivered)*100;
					//to swap the batsmen at the end of over
					battingTeam->on_strike_batsman=battingTeam->on_strike_batsman+battingTeam->far_end_batsman;
					battingTeam->far_end_batsman=battingTeam->on_strike_batsman-battingTeam->far_end_batsman;
					battingTeam->on_strike_batsman=battingTeam->on_strike_batsman-battingTeam->far_end_batsman;
					displayDataAtTheOverEnd(*battingTeam,*bowlingTeam);
				}


	  
		}
	}
    void Club_match() {
    Team t[2];
	Team t0;
	int over;
	int innings_1_batting_team;
	int innings_2_batting_team;
	cout<<"Enter number of over the game should be played\t: ";
	cin>>over;
	t[0].setTeamname();
	t[1].setTeamname();
	int toss_won_by_team,toss_lost_by_team;
	bool tossWon_Team_Choose_Batting ;
	cout<<"Enter the playing  11 for team: "<<t[0].teamName<<endl;
	for(int i=0;i<11;i++)
	{
		cin>>t[0].p[i].name_of_player;
	}
	cout<<"Enter the playing  11 for team: "<<t[1].teamName<<endl;
	for(int i=0;i<11;i++)
	{
		cin>>t[1].p[i].name_of_player;
	}
	// toss_won_by_team=Team::tossTime(t[0],t[1]);//0 for team1 and 1 for team2
		//to do team selecting for batting first
	toss_won_by_team=t0.tossTime(t[0],t[1]);
	if(toss_won_by_team==0)
		toss_lost_by_team=1;
	else
		toss_lost_by_team=0;
	//Innings started by "toss won by team"
	tossWon_Team_Choose_Batting=t0.isBatting(t[toss_won_by_team]);
	if(tossWon_Team_Choose_Batting)
	{

		innings_1_batting_team=toss_won_by_team;
		t0.inningsStarted(&t[toss_won_by_team],&t[toss_lost_by_team],over);
	}
	else
	{
		innings_1_batting_team=toss_lost_by_team;
		t0.inningsStarted(&t[toss_lost_by_team], &t[toss_won_by_team],over);
	}
	//Innings 1 stores the 0 or 1 which mean we can get the no. of runs scored in innings 1
	cout<<"Total runs required to win the match \t: "<<t[innings_1_batting_team].total_runs_scored_by_team + 1<<endl;

	//After innnings is over we hv to display
    }

};

class LocalMatch {
	public:
	   int randomNumber;
	   int overs, players, toss;
	   int total_runs, target;
	   char fir_teamName[26];
	   char sec_teamName[26];
	   char fir_teamPlayer[26];
	   char sec_teamPlayer[26];
	   void set_over() {
		   cout << "Enter overs: ";
		   cin >> overs;
		   cout << "Enter number of players that should be play in this match: ";
		   cin >> players;
	   
		   cout << "Enter First Team Name: ";
		   cin >> fir_teamName;
		   cout << "Enter Second Team Name: ";
		   cin >> sec_teamName;
	  
		   cout << "Enter Team " << fir_teamName << " Players Name " << endl;
		   for (int i=0; i<players; i++) {
			   cin >> fir_teamPlayer;
		   }
	  
		   cout << "Enter Team " << sec_teamName << " Players Name " << endl;
		   for (int i=0; i<players; i++) {
			   cin >> sec_teamPlayer;
		   }
	   }
	   
	   void start_match() {
		   int score[overs];
		   cout << "\nToss Time \n" << endl;
		   cout << "Who win the toss " << endl;
		   cout << "1. " << fir_teamName << endl;
		   cout << "2. " << sec_teamName << endl;
		   cin >> toss;
		   switch(toss) {
			   case 1:
			         int choose;
			         cout << "Congratulations! Team " << fir_teamName << endl;
					 cout << fir_teamName << " Team choose any one " << endl;
					 cout << "1.Bat & 2.Bowl" << endl;
					 cin >> choose;
					 if (choose == 1) {
						 cout << "\nMatch Start Now!" << endl;
						 cout << "It will be an innings of " << overs << " overs." << endl;  
						 cout << "You can only add runs over by over" << endl;
						 cout << "If all players out then remaining overs you add 0 run" << endl;
						 cout << "Now start inning \nBatting Team is " << fir_teamName << "\nBowling Team is " << sec_teamName << "\n" << endl;
						 for (int i=0; i<overs; i++) {
							 cout << "Enter over " << i+1 << " runs: ";
							 cin >> score[i];
						 }
						 for (int j=0; j<overs; ++j) {
							 total_runs = total_runs + score[j];
						 }
						 target = total_runs+1;
						 cout << "\nTotal runs of Team " << fir_teamName << ": " << total_runs << endl;
						 cout << "\nTeam " << fir_teamName << " has set the " << target << " target to " << sec_teamName << endl;
						 cout << "Now start a second inning of this match \n" << endl;
						 for (int z=0; z<overs; z++) {
							 cout << "Enter over " << z+1 << " runs: ";
							 cin >> score[z];
						 }
						 for (int q=0; q<overs; q++) {
							 total_runs = total_runs + score[q];
						 }
						 if(total_runs >= target) {
							 cout << "Congratulations! Team " << sec_teamName << " win this match." << endl; 
						 }
						 else if (total_runs < total_runs){
							 cout << "Congratulations! Team " << fir_teamName << " win this match." << endl;
						 }
						 else if (total_runs == total_runs) {
							 cout << "Tie Match" << endl;
						 }
					 }
					 else if (choose == 2) {
						 cout << "Congratulations! Team " << fir_teamName << endl;
						 cout << "It will be an innings of " << overs << " overs." << endl;  
						 cout << "You can only add runs over by over" << endl;
						 cout << "If all players out then remaining overs you add 0 run" << endl;
						 cout << "Now start inning \nBatting Team is " << sec_teamName << "\nBowling Team is " << fir_teamName << "\n" << endl;
						 for (int i=0; i<overs; i++) {
							 cout << "Enter over " << i+1 << " runs: ";
							 cin >> score[i];
						 }
						 for (int j=0; j<overs; ++j) {
							 total_runs = total_runs + score[j];
						 }
						 target = total_runs+1;
						 cout << "\nTotal runs of Team " << sec_teamName << ": " << total_runs << endl;
						 cout << "\nTeam " << sec_teamName << " has set the " << target << " target to " << fir_teamName << endl;
						 cout << "Now start a second inning of this match \n" << endl;
						 for (int z=0; z<overs; z++) {
							 cout << "Enter over " << z+1 << " runs: ";
							 cin >> score[z];
						 }
						 for (int q=0; q<overs; q++) {
							 total_runs = total_runs + score[q];
						 }
						 if(total_runs >= target) {
							 cout << "Congratulations! Team " << fir_teamName << " win this match." << endl; 
						 }
						 else if (total_runs < total_runs) {
							 cout << "Congratulations! Team " << sec_teamName << " win this match." << endl;
						 }
						 else if(total_runs == total_runs) {
							 cout << "Tie Match" << endl;
						 }
					 }
					 else {
						 cout << "Invalid! Input\nTry Again" << endl;
					 }
					 break;
				case 2:
					 int choosee;
			         cout << "Congratulations! Team " << sec_teamName << endl;
					 cout << sec_teamName << " Team choose any one " << endl;
					 cout << "1.Bat & 2.Bowl" << endl;
					 cin >> choosee;
					 if (choosee == 1) {
						 cout << "\nMatch Start Now!" << endl;
						 cout << "It will be an innings of " << overs << " overs." << endl;  
						 cout << "You can only add runs over by over" << endl;
						 cout << "If all players out then remaining overs you add 0 run" << endl;
						 cout << "Now start inning \nBatting Team is " << sec_teamName << "\nBowling Team is " << fir_teamName << "\n" << endl;
						 for (int i=0; i<overs; i++) {
							 cout << "Enter over " << i+1 << " runs: ";
							 cin >> score[i];
						 }
						 for (int j=0; j<overs; ++j) {
							 total_runs = total_runs + score[j];
						 }
						 target = total_runs+1;
						 cout << "\nTotal runs of Team " << sec_teamName << ": " << total_runs << endl;
						 cout << "\nTeam " << sec_teamName << " has set the " << target << " target to " << fir_teamName << endl;
						 cout << "Now start a second inning of this match \n" << endl;
						 for (int z=0; z<overs; z++) {
							 cout << "Enter over " << z+1 << " runs: ";
							 cin >> score[z];
						 }
						 for (int q=0; q<overs; q++) {
							 total_runs = total_runs + score[q];
						 }
						 if(total_runs >= target) {
							 cout << "Congratulations! Team " << fir_teamName << " win this match." << endl; 
						 }
						 else if (total_runs < total_runs){
							 cout << "Congratulations! Team " << sec_teamName << " win this match." << endl;
						 }
						 else if (total_runs == total_runs) {
							 cout << "Tie Match" << endl;
						 }
					 }
					 else if (choosee == 2) {
						 cout << "Congratulations! Team " << sec_teamName << endl;
						 cout << "It will be an innings of " << overs << " overs." << endl;  
						 cout << "You can only add runs over by over" << endl;
						 cout << "If all players out then remaining overs you add 0 run" << endl;
						 cout << "Now start inning \nBatting Team is " << fir_teamName << "\nBowling Team is " << sec_teamName << "\n" << endl;
						 for (int i=0; i<overs; i++) {
							 cout << "Enter over " << i+1 << " runs: ";
							 cin >> score[i];
						 }
						 for (int j=0; j<overs; ++j) {
							 total_runs = total_runs + score[j];
						 }
						 target = total_runs+1;
						 cout << "\nTotal runs of Team " << fir_teamName << ": " << total_runs << endl;
						 cout << "\nTeam " << fir_teamName << " has set the " << target << " target to " << sec_teamName << endl;
						 cout << "Now start a second inning of this match \n" << endl;
						 for (int z=0; z<overs; z++) {
							 cout << "Enter over " << z+1 << " runs: ";
							 cin >> score[z];
						 }
						 for (int q=0; q<overs; q++) {
							 total_runs = total_runs + score[q];
						 }
						 if(total_runs >= target) {
							 cout << "Congratulations! Team " << sec_teamName << " win this match." << endl; 
						 }
						 else if (total_runs < total_runs) {
							 cout << "Congratulations! Team " << fir_teamName << " win this match." << endl;
						 }
						 else if(total_runs == total_runs) {
							 cout << "Tie Match" << endl;
						 }
					 }
					 else {
						 cout << "Invalid! Input\nTry Again" << endl;
					 }
					 break;
		   }
	   }
};

int main()
{
	system("cls");
    int select, select2;
    cout << "Enter 1 for Club Cricket Match Scorecard" << endl;
    cout << "Enter 2 for Next Local Cricket Match " << endl;
    cin >> select;
    switch(select) {
        case 1:
		system("cls");
              Team startMatch;
              startMatch.Club_match();
			  again:
			        int menu;
					cout << "\n" << endl;
					cout << "Enter 1 for again Club Cricket Scorecard " << endl;
					cin >> menu;
					switch(menu) {
						case 1:
						       system("cls");
						       Team again_match;
							   again_match.Club_match();
							   break;
					}
					goto again;
              break;
    }
    cout << "Local Cricket Match Scorecard\nEnter 1 for start match" << endl;
	cin >> select2;
	switch(select2) {
		case 1:
		system("cls");
            cout << endl;
          	LocalMatch localCricket;
	        localCricket.set_over();
        	localCricket.start_match();
			againn:
			      int menuu;
				  cout << "\n" << endl;
				  cout << "Enter 1 for again Local Cricket Scorecard" << endl;
				  cin >> menuu;
				  switch(menuu) {
					  case 1:
					         system("cls");
					         LocalMatch againLCM;
							 againLCM.set_over();
							 againLCM.start_match();
							 break;	  
				  }
				  goto againn;	
	break;
	}
return 0;
}
