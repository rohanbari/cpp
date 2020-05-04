 #include <iostream>
        #include <fstream>
        #include <string>
        #include <sstream>
        #include <vector>
    
        using namespace std;
        
        struct Vehicle
        {
            string licensePlate;
            string vehicleType;
            string damageType;
            int estFixDays;
        
        }v;
        
        struct DailyCustomers
        {
            int day;
            int month;
            int year;
            void PrintDate()
            {
                cout << "Date: " << day << "/" << month << "/" << year << endl;
            }
        }d;
        
        
        
        int main (int argc,char* argv[])
    
    {
        if (argc < 1)
        {
            cout << "Did not input any files..." << endl;
            return 0 ;
        }
        vector <Vehicle> vehicleList;
        string line;
        string _day,_month,_year;
        string Temp_estFD;
        ifstream myFile(argv[1]);
        if(!myFile.is_open())
        {
            cerr << "Failed to open File... " << endl;
        }
        while(getline(myFile,line))
        {
            stringstream ss(line);
            getline(ss,_day,'-');
            istringstream storeday(_day);
            storeday >> d.day;
            getline(ss,_month,'-');
            istringstream storemonth(_month);
            storemonth >> d.month;
            getline(ss,_year,'\n');
            istringstream storeyear(_year);
            storeyear >> d.year;
    
            getline(ss,v.licensePlate, ',');
            getline(ss,v.vehicleType, ',');
            getline(ss,v.damageType, ',');
            getline(ss,Temp_estFD, ',');
            stringstream store_FixDays(Temp_estFD);
            store_FixDays >> v.estFixDays;
        }
        d.PrintDate();
    }