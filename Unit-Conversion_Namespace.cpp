#include<iostream>
using namespace std;

namespace unitconversion
{
    double mm_cm(double value)
    {
        return (value/=10);
    }

    double cm_mm(double value)
    {
        return (value*=10);
    }

    double cm_m(double value)
    {
        return (value/=100);
    }

    double m_cm(double value)
    {
        return (value*=100);
    }

    double km_m(double value)
    {
        return (value*=1000);
    }
    double m_km(double value)
    {
        return (value/=1000);
    }

}

using namespace unitconversion;
int main()
{
    double num,answer;
    int choice;
    cout<<"Enter a value to begin the Units Conversion : "<<endl;
    cin>>num;
    cout<<"Choose the type of conversion, do you need to perform : "<<endl;
    cout<<"\n1.Millimeters to Centimeters\n2.Centimeters to Millimeters"<<endl;
    cout<<"\n3.Centimeter to Meters\n4.Meter to Centimeter"<<endl;
    cout<<"\n5.Kilometers to Meters\n6.Meters to Kilometer"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            answer=mm_cm(num);
            break;
        case 2:
            answer=cm_mm(num);
            break;
        case 3:
             answer=cm_m(num);
            break;
        case 4:
             answer=m_cm(num);
            break;
        case 5:
            answer=km_m(num);
            break;
        case 6:
            answer=m_km(num);
            break;
        default:
            cout<<"Invalid Choise ... \nKindly give the appropiate data to proceed furthur !"<<endl;
    }
    cout<<"Based on the choice, the result of the conversion : "<<answer<<endl;
    
    return 0;
}