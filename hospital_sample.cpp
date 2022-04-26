#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class date
{
    private:
        int day;
        int month;
        int year;
    public:
        date(int, int, int);
        void printDate();
};
    date::date(int day, int month, int year):
            day(day),
            month(month),
            year(year) {}

    void date::printDate()
        {
            cout << day << " / " << month << " / " << year << endl;
        }

class Patient
{
    private:
        string name;
        int age;
        string disease;
        date date_admission;
        date date_discharge;
    public:
        Patient(const string &, int, const string &, const date, const date);
        void printInfo();
        string returnName();
        int returnAge();
};
    Patient::Patient(const string &name, int age, const string &illness, const date day_in, const date day_out):
            name(name),
            age(age),
            disease(illness),
            date_admission(day_in),
            date_discharge(day_out) {}

    void Patient::printInfo()
        {
            cout << " Patient's name: " << name << endl;
            cout << " Patient's age: " << age << endl;
            cout << " Patient's disease: " << disease << endl;
            cout << " Admission date: ";
            date_admission.printDate();
            cout << " Discharge date: ";
            date_discharge.printDate();
        }

    string Patient::returnName()
        {
            return name;
        }

    int Patient::returnAge()
        {
            return age;
        }

class Hospital
{
    private:
        string hospital_name;
        vector<Patient> patient_list;
    public:
        Hospital(const string &);
        void add_tolist(const Patient);
        void remove_fromlist(const string &);
        void print_list();
        void print_list_special();
};
    Hospital::Hospital(const string &name) : hospital_name(name) {};

    void Hospital::add_tolist(const Patient person)
    {
        patient_list.push_back(person);
    };

    void Hospital::remove_fromlist(const string &patient_name)
    {
        for (int i = 0; i < patient_list.capacity(); i++)
        {
            if (patient_list.at(i).returnName() == patient_name )
            {
                patient_list.erase(patient_list.begin()+i);
                break;
            }
        }
    };

    void Hospital::print_list()
    {
        cout << "List of total patient: " << endl;
        for (Patient i : patient_list)
        {
            i.printInfo();
            cout << endl;
        }
    };

    void Hospital::print_list_special()
    {
        cout << "List of patients under 12: " << endl;
        for (Patient i : patient_list)
        {
            if (i.returnAge() <= 12)
            {
                i.printInfo();
                cout << endl;
            }
        }
    };

int main()
{
    vector<string> names = {"John","Stewart","Mary"};
    vector<int> ages = {10,24,11};
    vector<string> disease = {"Fever","Cough","Sneeze"};
    date day_in_1(20,12,2017);
    date day_in_2(20,12,2016);
    date day_in_3(20,12,2015);
    date day_out_1(17,5,2018);
    date day_out_2(18,6,2019);
    date day_out_3(19,7,2020);
    vector<date> day_in = {day_in_1,day_in_2,day_in_3};
    vector<date> day_out = {day_out_1,day_out_2,day_out_3};
    Hospital Mercy_patient_list("Mercy Hospital");
    for (int i = 0; i < names.capacity() ; i++)
    {
        Patient p( names.at(i), ages.at(i), disease.at(i), day_in.at(i), day_out.at(i) );
        Mercy_patient_list.add_tolist(p);
    }
    Mercy_patient_list.print_list();
    cout << "Deleting patient Stewart" << endl;
    Mercy_patient_list.remove_fromlist("Stewart");
    Mercy_patient_list.print_list();
    Mercy_patient_list.print_list_special();
    return 0;
}