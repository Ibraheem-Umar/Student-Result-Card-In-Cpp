#include <iostream>
using namespace std;
int main()
{  
	int eng,math,chem,phy,urd,isl,pakstd;
	
	cout<<"==================================="<<endl;
	cout<<"English:";
	cin>>eng;
	cout<<"Maths:";
	cin>>math;
	cout<<"Chemistry:";
	cin>>chem;
	cout<<"Physics:";
	cin>>phy;
	cout<<"Urdu:";
	cin>>urd;
	cout<<"Islamiate:";
	cin>>isl;
	cout<<"Pakstudies:";
	cin>>pakstd;
	
	float obtmarks=eng+math+chem+phy+urd+isl+pakstd;
	float percentage=((obtmarks*100)/1100);
	float avg=obtmarks/n;
	
	cout<<"==========================================================================="<<endl;
	cout<<"||                                 *RESULT*                              ||"<<endl;
	cout<<"==========================================================================="<<endl;
	cout<<"==========================================================================="<<endl;
	cout<<"||       English      ||     200     ||              "<<eng<< "          ||"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"||     Mathematics    ||     200     ||              "<<math<<"          ||"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"||      Chemistry     ||     200     ||              "<<chem<<"          ||"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"||       Physics      ||     200     ||              "<<phy<<"           ||"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"||        Urdu        ||     200     ||              "<<urd<<"           ||"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"||      Islamiate     ||      50     ||              "<<isl<<"           ||"<<endl;
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"||      Pakstudies    ||      50     ||             "<<pakstd<<"         ||"<<endl;
	cout<<"==========================================================================="<<endl;
	cout<<"||        TOTAL       ||     1100    ||             "<<obtmarks<<"       ||"<<endl;
	cout<<"==========================================================================="<<endl;

    cout<<"\tAverage:"<<"\t||  "<<avg<<"  ||\t\t"<<"Percentage:"<<"\t||  "<<percentage<<"%  ||"<<"\tGrade="<<"\t||  ";
           if(percentage>=92)
           {cout<<"A+";
		   }
		   else if(percentage>=79 & percentage<=91.9)
		   {cout<<"A";
		   }
		   else if(percentage>=71 & percentage<=78.9)
		   {cout<<"B";
		   }
		   else if(percentage>=65 & percentage<=70.9)
		   {cout<<"C";
		   }
		   else if(percentage>=55 & percentage<=64.9)
		   {cout<<"D";
		   }
		   else if(percentage>=40 & percentage<=55.9)
		   {cout<<"E";
		   }
		   else if(percentage>=0 & percentage<=39.9)
		   {cout<<"F";
		   } cout<<"  ||";
		   
return 0;
}                    


