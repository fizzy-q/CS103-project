#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;


void menu();                         // function for displaying menu of contents            
int table();                         // function for displaying table of exits
int summary(int);                    // function for displaying the whole program


//  function for displaying the menu with options 


void menu()
{
	cout << "\t---------------------------------";
	cout << "\n\t\tMOTORWAY SIMULATOR " << endl;
	cout << "\t---------------------------------";
	cout << endl;
	
	cout << endl;
	cout << "\tMENU\t" << endl;
	
    cout << "Press 1 to see table." << endl;
    cout << "Press 2 to see summary statistics." << endl;
    
}


// function for displaying the table of exits 


int table()
{
	
	int returnto;
	int n;                       // variable of the summary function
	    
/*  exits = interchanges
    interchange_1 = Burma Bhatar ; interchange_2 = Bhurhan ; interchange_3 = Hazara ;
    interchange_4 = Ghazi ; interchange_5 = Rashakai ; interchange_6 = Charsadda       */
	
	do 
	{
	
		cout << "\tTABLE\t" << endl;
 	
    	cout <<"________________________________________________" << endl;
    
		cout << setw(3) << "Exits:" << setw(10) << "\t\tToll:" << setw(10) << "\t\tHours:" << endl;
		cout << "----------------------------------------------" << endl;
		cout << setw(7) << "Burma Bahtar" << setw(10) << "\t\tRs.30" << setw(10) <<"\t0.5" << endl;
		cout << setw(3) << "Burhan" << setw(10) << "\t\tRs.50" << setw(10) << "\t1"<< endl;
		cout << setw(3) << "Hazara"<< setw(10) << "\t\tRs.70" << setw(10) << "\t1.5"<< endl;
		cout << setw(3) << "Ghazi" << setw(10) << "\t\t\tRs.90" << setw(10) << "\t2" << endl;
		cout << setw(7) << "Rashakai" << setw(10) << "\t\tRs.110" << setw(10) << "\t2.5" << endl;
		cout << setw(7) << "Charsadda" << setw(10) << "\t\tRs.130" << setw(10) << "\t3" << endl;
		cout <<"________________________________________________\n" << endl;
		
		cout << endl; 
	
		cout << "Full trip without exiting at other exits: Rs. 150 - 3.5 hours" << endl;
	
		cout << endl; 
	
    	cout << "Enter 1 to see day statistics. " << endl;
    	cin >> returnto;
    	
      	break;
	
	} 
	while (returnto == 1 );  
	                           
		summary (n);                              // call for the summary function

	
return 0;
}


//  main function for showing options of menu
 

int main()
{
	int n;                                   // variable for the summary function
	
	int x;                                   // choice variable for menu function
	
    menu();                                 // function call to display menu
    
    cout << "Enter your choice : " << endl;
    cin >> x;

    switch(x)
    {
        case 1:
        	table();
        	break;
        	
        case 2:
        	summary (n);
        	break;
        	
        default:
        	cout << "invalid";
        	break;
    }
    
    
    return 0;
    
	
}


// function for the summary statistics


int summary (int n )	
{
	
	int c;  	                                   // clock variable
	c = 24;                                        // if one hour intervals are taken 
	int totalcars = 0;
	int a;                                        // variable for random number
	int half;                                     // variable to divide the total number of cars in into 2
	
	const int size = 1000;
	int onRoad[size]; 

    //int entry;                                  // entry_1 = Islamabad ; entry_2 = Peshawar

    int exit;                                     //	int exit_3 , exit_4 , exit_5 , exit_6 , exit_7 , exit_8;
    int exit1;
    int exit2;
    
    int error;                                    // for the cars exiting through the same entry point
	int error_1;
	int error_2;
    
    int max = 130;                               //  maximum number of cars that can enter
    int min = 30;                                // minimum number of cars that can enter
    
    int returnto;                               // choice variable for reseting or ending program



//--------------------------TOTAL NUMBER OF CARS ENTERED-----------------------------


	cout << endl;
	cout << " Number of cars entered during 24 hours : \n" <<endl;
	  
   
   do                                         // loop to reset or end the summary function
   {
	srand(time(0));
	
	for ( int i = 0 ; i < c ; i++ )
      {
	  	// range for the number of cars : 30-130
	  	
      	a = rand() % 100 + min;                          
      	cout << " " << i << ":00-" << i+1 <<":00 = " << a << endl;
      	
      	totalcars = totalcars + a;
      	onRoad[i]=a;
      	
	  }  
	  	cout <<endl;
	  
	// for displaying the array of on road cars
	
 	for ( int i = 0 ; i < c ; i++)                        
 	
	   { 
	  		cout << " " << onRoad[i] << " ";
	   }
	   

	cout <<endl;
	cout <<endl;
	cout << " Total number of cars entered = " << totalcars <<endl;
	  


cout << "__________________________________________________________________________________________________________" <<endl;



//-----------------------------------------NUMBER OF TRIPS------------------------------------------

	
	// for error exits
	
	int counter1 , counter2 , counter3 , counter4 , counter5 , counter6 , counter7;
	
	// for exits in forward direction
	
	int counter1_1 , counter2_1 , counter3_1 , counter4_1 , counter5_1 , counter6_1 , counter7_1;
	
	// for exits in backward direction	           
	
	int counter1_2 , counter2_2 , counter3_2 , counter4_2 , counter5_2 , counter6_2 , counter7_2 ;
	
	
	int totaltrips;
	int totaltrips_1;                  // for forward direction
	int totaltrips_2;                  // for backward direction
	
		counter1_1 = 0;
		counter2_1 = 0;
		counter3_1 = 0;
		counter4_1 = 0;
		counter5_1 = 0;
		counter6_1 = 0;
		counter7_1 = 0;
		
		counter1_2 = 0;
		counter2_2 = 0;
		counter3_2 = 0;
		counter4_2 = 0;
		counter5_2 = 0;
		counter6_2 = 0;
		counter7_2 = 0;
		
		counter1 = 0;
		counter2 = 0;
		counter3 = 0;
		counter4 = 0;
		counter5 = 0;
		counter6 = 0;
		counter7 = 0;
	
	half = totalcars / 2;                                // total no. of cars divided into two for both directions
	
	
	// for forward direction
		  
	for ( int i = 0 ; i < half ; i++ )
	{
		// mod of 8 is taken because 6 exits, 1 full trip and 1 for generating error
		
		exit1 = rand() % 8;                          

		if ( exit1 == 1 )                                 // if exit=1 ; exiting from interchange one and similarly
			counter1_1 = counter1_1 + 1;
		else if ( exit1 == 2 )
			counter2_1 = counter2_1 + 1 ;
		else if ( exit1 == 3 )
			counter3_1 = counter3_1 + 1;
		else if ( exit1 == 4 )
			counter4_1 = counter4_1 + 1;
		else if ( exit1 == 5 )
			counter5_1 = counter5_1 + 1;
		else if ( exit1 == 6 )
			counter6_1 = counter6_1 + 1;
		else if ( exit1 == 7)                            // full trip without exiting at other interchanges
			counter7_1 = counter7_1 + 1;
		else                                             // when 8 generated it represents the entry points
			error_1 = error_1 + 1;
			
	}
	
	
	// for backward direction
		
	for ( int i = 0 ; i < half ; i++ )
	{
		// mod of 8 is taken because 6 exits, 1 full trip and 1 for generating error
		
		exit2 = rand() % 8;                              

		if ( exit2 == 1 )                                 // if exit=1 ; exiting from interchange one and similarly
			counter1_2 = counter1_2 + 1;
		else if ( exit2 == 2 )
			counter2_2 = counter2_2 + 1 ;
		else if ( exit2 == 3 )
			counter3_2 = counter3_2 + 1;
		else if ( exit2 == 4 )
			counter4_2 = counter4_2 + 1;
		else if ( exit2 == 5 )
			counter5_2 = counter5_2 + 1;
		else if ( exit2 == 6 )
			counter6_2 = counter6_2 + 1;
		else if ( exit2 == 7)                            // full trip without exiting at other interchanges
			counter7_2 = counter7_2 + 1;
		else                                             // when 8 generated it represents the entry points
			error_2 = error_2 + 1;
			
	}
	 
	// to not count the cars exited from entry point
	  
	error = (error_1 + error_2) ;               


/*
		
// to exit the cars that generated error while exiting from the same entry point
	

	for ( int i = 0 ; i < error ; i++)                  
	
	{
		exit = exit1 + exit2;
		exit = rand () % 7;
		
		if ( exit == 1 )                               // if exit=1 ; exiting from interchange one and similarly
			counter1 = counter1 + 1;
		else if ( exit == 2 )
			counter2 = counter2 + 1 ;
		else if ( exit == 3 )
			counter3 = counter3 + 1;
		else if ( exit == 4 )
			counter4 = counter4 + 1;
		else if ( exit == 5 )
			counter5 = counter5 + 1;
		else if ( exit == 6 )
			counter6 = counter6 + 1;
		else                                       // full trip without exiting at other interchanges
			counter7 = counter7 + 1;  
	} 
	 
 */
	
	// forward direction for total trips
	
	totaltrips_1 = counter1_1 + counter2_1 + counter3_1 + counter4_1 + counter5_1 + counter6_1 + counter7_1;
	
	// backward direction for total trips
	
	totaltrips_2 = counter1_2 + counter2_2 + counter3_2 + counter4_2 + counter5_2 + counter6_2 + counter7_2;


//	totaltrips = counter1 + counter2 + counter3 + counter4 + counter5 + counter6 + counter7;	
//	totaltrips_final = totaltrips_1 + totaltrips_2 - totaltrips;
	
	
	cout << endl;
	cout << " For forward direction: \n" << endl;
	cout << " Cars from first exit ( Burma Bahtar ) = " << counter1_1 << endl;
	cout << " Cars from second exit ( Bhurhan ) = " << counter2_1 << endl;
	cout << " Cars from third exit ( Hazara ) = " << counter3_1 << endl;
	cout << " Cars from fourth exit ( Ghazi ) = " << counter4_1 << endl;
	cout << " Cars from fifth exit ( Rashakai ) = " << counter5_1 << endl;
	cout << " Cars from sixth exit ( Charsadda ) = " << counter6_1 << endl;
	cout << " Cars completing a full trip = " << counter7_1 << endl;
	
	
	cout << endl;
	cout << " For backward direction: \n" << endl;
	cout << " Cars from first exit ( Charsadda ) = " << counter1_2 << endl;
	cout << " Cars from second exit ( Rashakai ) = " << counter2_2 << endl;
	cout << " Cars from third exit ( Ghazi ) = " << counter3_2 << endl;
	cout << " Cars from fourth exit ( Hazara ) = " << counter4_2 << endl;
	cout << " Cars from fifth exit ( Bhurhan ) = " << counter5_2 << endl;
	cout << " Cars from sixth exit ( Burma Bahtar ) = " << counter6_2 << endl;
	cout << " Cars completing a full trip = " << counter7_2 << endl;
	
	
	// for not counting the cars exiting from the same entry point
	
	cout << "\n System showed error by exiting cars from the same entry point = " << error <<endl;
	
	
	cout << "\n Total number of trips of the cars in forward direction = " << totaltrips_1 <<endl;
	cout << "\n Total number of trips of the cars in backward direction = " << totaltrips_2 <<endl;
	
   	
   	
cout <<"___________________________________________________________________________________________________________" <<endl;   	



//------------------------------------MONEY GENERATED------------------------------------------------

	
    // for forward direction

	int toll1_1 , toll2_1 , toll3_1 , toll4_1 , toll5_1 , toll6_1 , toll7_1;
	
	// for backward direction

	int toll1_2 , toll2_2 , toll3_2 , toll4_2 , toll5_2 , toll6_2 , toll7_2;

	// variable for the total toll generated in forward direction
	
	int totaltoll;              
	
	// variable for the total toll generated in backward direction
	
	int toll_1 , toll_2;         
	
	
	// toll multiplied for each exit
	 
	    toll1_1 = counter1_1 * 30;                 
		toll2_1 = counter2_1 * 50;                     
		toll3_1 = counter3_1 * 70;
		toll4_1 = counter4_1 * 90;
		toll5_1 = counter5_1 * 110;
		toll6_1 = counter6_1 * 130;  
		toll7_1 = counter7_1 * 150;                    // toll for full trip in forward direction   
		
		toll_1 = toll1_1 + toll2_1 + toll3_1 + toll4_1 + toll5_1 + toll6_1 + toll7_1 ;
		
	    toll1_2 = counter1_2 * 30;                 
		toll2_2 = counter2_2 * 50;                     
		toll3_2 = counter3_2 * 70;
		toll4_2 = counter4_2 * 90;
		toll5_2 = counter5_2 * 110;
		toll6_2 = counter6_2 * 130;  
		toll7_2 = counter7_2 * 150;                    // toll for full trip in backward direction 
		
		toll_2 = toll1_2 + toll2_2 + toll3_2 + toll4_2 + toll5_2 + toll6_2 + toll7_2;
		
	totaltoll = toll_1 + toll_2; 
	
	cout << endl;
	
	//Toll generated for cars in forward direction
	
	cout << " Toll generated for cars in forward direction: \n" << endl;	 
    cout << " Toll generated from exit 1 = " << toll1_1 << endl;
    cout << " Toll generated from exit 2 = " << toll2_1 << endl;
	cout << " Toll generated from exit 3 = " << toll3_1 << endl;
	cout << " Toll generated from exit 4 = " << toll4_1 << endl;
	cout << " Toll generated from exit 5 = " << toll5_1 << endl;
	cout << " Toll generated from exit 6 = " << toll6_1 << endl;
	cout << " Toll generated for full trip = " << toll7_1 << endl;
	
	cout << endl;
	
	//Toll generated for cars in backward direction
	
	cout << " Toll generated for cars in backward direction: \n" << endl;	 
    cout << " Toll generated from exit 1 = " << toll1_2 << endl;
    cout << " Toll generated from exit 2 = " << toll2_2 << endl;
	cout << " Toll generated from exit 3 = " << toll3_2 << endl;
	cout << " Toll generated from exit 4 = " << toll4_2 << endl;
	cout << " Toll generated from exit 5 = " << toll5_2 << endl;
	cout << " Toll generated from exit 6 = " << toll6_2 << endl;
	cout << " Toll generated for full trip = " << toll7_2 << endl;
	
	cout << "\n Total money generated in Rupees = " << totaltoll << endl;
   	
   	
cout <<"___________________________________________________________________________________________________________" <<endl;




// ----------------------------------------HOURS TRAVELLED----------------------------------------------------------



	double time_1;                    // variable for the total time in forward direction
	double time_2;                    // variable for the total time in backward direction
	
	
	// for forward direction
	
	double time1_1, time2_1, time3_1, time4_1, time5_1, time6_1, time7_1;
	
	// for backward direction
	
	double time1_2, time2_2, time3_2, time4_2, time5_2, time6_2, time7_2;
	
	// variable for the total hours travelled
	
	double totalhours;                        
	

	// time interval of half hour is taken and is multiplied to each variable to exit cars
	
	    time1_1 = counter1_1 * 0.5;           
		time2_1 = counter2_1 * 1;                     
		time3_1 = counter3_1 * 1.5;
		time4_1 = counter4_1 * 2;
		time5_1 = counter5_1 * 2.5;
		time6_1 = counter6_1 * 3;  
		time7_1 = counter7_1 * 3.5;                       // time for full trip in forward direction   
		
		time_1 = time1_1 + time2_1 + time3_1 + time4_1 + time5_1 + time6_1 + time7_1 ;
		
	    time1_2 = counter1_2 * 0.5;                 
		time2_2 = counter2_2 * 1;                     
		time3_2 = counter3_2 * 1.5;
		time4_2 = counter4_2 * 2;
		time5_2 = counter5_2 * 2.5;
		time6_2 = counter6_2 * 3;  
		time7_2 = counter7_2 * 3.5;                      // time for full trip in backward direction 
		  
		
		time_2 = time1_2 + time2_2 + time3_2 + time4_2 + time5_2 + time6_2 + time7_2;
		
	
	totalhours = time_1 + time_2;

		
	cout << endl;	

	//Hours travelled by cars in forward direction

	cout << " Hours travelled by cars in forward direction: \n" << endl;
	cout << " Hours travelled by cars to exit 1 = " << time1_1 << endl;
	cout << " Hours travelled by cars to exit 2 = " << time2_1 << endl;
	cout << " Hours travelled by cars to exit 3 = " << time3_1 << endl;
	cout << " Hours travelled by cars to exit 4 = " << time4_1 << endl;
	cout << " Hours travelled by cars to exit 5 = " << time5_1 << endl;	
	cout << " Hours travelled by cars to exit 6 = " << time6_1 << endl;
	cout << " Hours travelled by cars for full trip = " << time7_1 << endl;
	
	cout << endl;
	
	//Hours travelled by cars in backward direction

	cout << " Hours travelled by cars in backward direction: \n" << endl;
	cout << " Hours travelled by cars to exit 1 = " << time1_2 << endl;
	cout << " Hours travelled by cars to exit 2 = " << time2_2 << endl;
	cout << " Hours travelled by cars to exit 3 = " << time3_2 << endl;
	cout << " Hours travelled by cars to exit 4 = " << time4_2 << endl;
	cout << " Hours travelled by cars to exit 5 = " << time5_2 << endl;	
	cout << " Hours travelled by cars to exit 6 = " << time6_2 << endl;
	cout << " Hours travelled by cars for full trip = " << time7_2 << endl;
	
	
	cout << "\n Total hours travelled = " << totalhours << endl;
  
  
     
cout << "__________________________________________________________________________________________________________" << endl;
  
  
  
    cout << endl; 
    cout << "Enter 1 to reset day or enter 2 to end program: " << endl ;
    cin >> returnto;
	 
	// summary(n);
	//break;  
      
   } 
    while(returnto == 1);                            // condition for the do loop to reset day
    
   	    if (returnto == 2);	                         // condition to end program
		
		
return 0;

		
}

   

