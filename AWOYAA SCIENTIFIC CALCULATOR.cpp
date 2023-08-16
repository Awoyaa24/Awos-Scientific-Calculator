#include <iostream>
#include <cmath>

using namespace std;



int main() {

	int  choice, Num[2];
	double sum, num1, num2, lnum1, lnum2, base1, base2, figure1, figure2, log_answer;
    char opra;
    
    cout<<"############################################# AWO's' SCIENTIFIC CALCULATOR #############################################"<<endl<<endl;
    cout<<"Welcome. "<<endl;
    
    //Question to decide whether to do the calculation or& not.
    question:
    cout<<"\n\nDo you wish to do your calculations? Y/N: "<<endl;
    cin>>opra;
    
    //Code to take the answer of the question into action either Yes (Y), No (N) or enter different thing.
	switch (opra){
		case 'Y':
		case 'y':
			menu:
			//This code will enable you to select the type of calculation you.
			cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;                 
			cout<<"Select an option.... "<<endl<<endl;
			cout<<"1. Simple Calculation using '+', '-', '*', '/', and '%'"<<endl
				<<"2. Logarithm Calculation"<<endl
				<<"3. Exit"<<endl;
			cin>>choice;
		
			//Code to select the choice and take it's action, using Switch and Case 
			switch(choice){
				case 1: 
						sim_cal:
					cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;                 
					cout << "  SIMPLE CALCULATION " << endl;
					
					//This code uses the notion that, the code will run for 5 operations  then it will stop 
					for (int i = 0; i < 5; i++) {
						cout<<"\n(+, -, *, /, & %)"<<endl;
        				cout << " " << " " << " " << endl;
        				cin >> num1 >> opra >> num2; // Read input numbers and operator

        				switch (opra) {
            				case '+':
                				sum = num1 + num2;
                				cout << "\nAns. = " << sum << endl;
                				break;

            				case '*':
                				sum = num1 * num2;
                				cout << "\nAns. = " << sum << endl;
                				break;

            				case '/':
                				sum = num1 / num2;
               	 				cout << "\nAns. = " << sum << endl;
                	  	break;

            				case '-':
                				sum = num1 - num2;
                				cout << "\nAns. = " << sum << endl;
                				break;

            				case '%':
            					 Num[1]=static_cast<int>(round(num1));
            					 Num[2]=static_cast<int>(round(num2));
                				sum = Num[1] % Num[2];
                				
                				cout << "\nAns. = " << sum << endl;
                				break;
 
            				default:
                				cout << "\n\nInvalid inputs. " << endl
                     				 << "Try again. " << endl;
                				i--; // Decrement the counter to retry input
                				continue; // Skip the rest of the loop and start from the beginning
        				}
   					}
						Sloop_end:
						//This code will execute after it has reached the limit of the loop	
					cout<<"\n\nDo you wish to continue with simple calculation?  Y/N"<<endl;
					cin>>opra;
						switch (opra){
							case 'Y':
							case 'y':
								//This code will allow for another 5 set of calculation under simple calculation
								goto sim_cal;
								break;
								
							case 'N':
							case 'n':
								//This code will end and go to the menu to select either Simple Or Complex Calculation 
								goto menu;
								break;
								
							default:
								cout<<"\n\nInvalid input."<<endl
									<<"Try again..."<<endl;
								goto Sloop_end; 
						}
					break;
				
				case 2:
					log_cal:
					cout<<"\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;                 
					cout<<" COMPLEX CALCULATION (LOGARITHM)  "<<endl<<endl;
					cout<<"1. Logarithm operation 'log10(5)'."<<endl
						<<"2. Logarithm operation '2log10(5)'."<<endl
						<<"3. Logarithm operation 'log10(5) - 2log10(5)'."<<endl
						<<"4. Back"<<endl;
					cin>>choice;
						
						for (int i = 0; i < 2; i++) {
							switch (choice){
								case 1:
								
									cout<<"\n\n....log10(5)...."<<endl;
									cout<<"\nEnter the log(number): ";
									cin>>lnum1;
									cout<<"Enter the base of the log: ";
									cin>> base1;
								
									log_answer= log(lnum1) / log(base1);
								
									cout<<"\nAns. = "<<log_answer<<endl;  
									break;   						
							
								case 2:
									cout<<"\n\n....2log10(5)...."<<endl;
									cout<<"\nEnter the num: ";
									cin>>figure1;
									cout<<"Enter the base: ";
									cin>>base1;
									cout<<"Enter the (num): ";
									cin>>lnum1;
								
								
									log_answer= figure1 * log(lnum1) / log(base1);
								
									cout<<"\nAns. = "<<log_answer<<endl;
									break;
							
								case 3:
									log_choice_3:
									cout<<"\n\n.....log10(5) - 2log10(5)....."<<endl<<endl;
									cout<<"Enter 1st log base: ";
									cin>>base1;
									cout<<"Enter the 1st log(num): ";
									cin>>lnum1;
									cout<<"Enter the operator: ";
									cin>>opra;
									cout<<"Enter figure: ";
									cin>>figure2;
									cout<<"Enter 2nd base: ";
									cin>>base2;
									cout<<"Enter 2nd log(num): ";
									cin>>lnum2;
									
									switch(opra){
											case '+':
												log_answer = log(lnum1) / log(base1) + figure1 * log(lnum2) / log(base2);
												cout<<"\nAns. = "<<log_answer<<endl;
												break;
										
											case '-':
												log_answer= log(lnum1) / log(base1) - figure1 * log(lnum2) / log(base2);
												cout<<"\nAns. = "<<log_answer<<endl;
												break;
										
											case '*':
												log_answer= log(lnum1) / log(base1) * figure1 * log(lnum2) / log(base2);
												cout<<"\nAns. = "<<log_answer<<endl;
												break;
													
											default: 
												cout<<"\n\nInvalid input."<<endl
												<<"Try again..."<<endl;
									}
								
								
								break;
								
								case 4: 
									goto menu;
									break;
							
								default:
									cout<<"\n\nInvalid input."<<endl
									<<"Try again..."<<endl;
									i--; // Decrement the counter to retry input
                					continue; // Skip the rest of the loop and start from the beginning	
																	
							}
						}		goto log_cal;
						
					break;
				
				case 3:
					//Closing the calculator.
					goto exit;
					break;
					
				default:
					cout<<"\n\nInvalid input."<<endl
						<<"Try again...."<<endl;
						goto menu;
						
			 	
			}
			break;
			
		case 'N':
		case 'n':
			goto exit;
			break;
		
		default:
			cout<<"Invalid input."<<endl
				<<"Try again..."<<endl;
				goto question;
				
	
	}
         
           
         
         
         
     exit:
	 cout<<"\n\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;                 
     cout<<"\nThank you for using me. "<<endl 
	 	 <<"Byeee....."<<endl;
	 	 
    return 0;
}
