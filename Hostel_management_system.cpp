#include<iostream>
#include<string>
using namespace std;

class Person{

    public:
    string person_name;
    int person_id;

    Person(string name,int n){
        person_name=name;
    }


};

class HostelRoom:public Person{

    protected:
    int room_no;
    string room_type;
    double rent;
    public:
    HostelRoom(string name,int n,int no,string type,double fee):Person(name,n){

        room_no=no;
        room_type=type;
        rent=fee;

    }

    double getRoomRent(){

        return rent;
    }
};

    class StudentResidence:public HostelRoom{

        public:
        int hostel_meal;
        double regular_mealpayment=0.0;
          
        public:
        StudentResidence(string name,int n,int no,string type,double fee,int meals):HostelRoom(name,n,no,type,fee){

          hostel_meal=meals;
        
    
        }

        double meal_payment(double payment){

            regular_mealpayment=payment;
            return regular_mealpayment;
        }

        double calculate_bill(double pay,int j){

            
            

            double rentdues= HostelRoom::getRoomRent();
            double  mealresult= meal_payment(pay);
            double total_extramealpayment=0.0;

            int extra_meals=j;
            
            if(extra_meals>0)  {

                total_extramealpayment=extra_meals*150;

            }

            
            double TotalDues=total_extramealpayment+ rentdues +mealresult ;

            return TotalDues; 
        }


    };

    class HostelManager:public StudentResidence{
        private :
        string position;
        public:

       HostelManager(string name,int n,int no,string type,double fee,int meals,string pos ): StudentResidence(name,n,no,type,fee,meals){
           
          position=pos;

        }

     void display(double pay,int j){
             
     double processTotalDues= StudentResidence::calculate_bill(pay,j);
          cout<<"student_name: "<<person_name<<endl;
          cout<<"student_id: "<<person_id<<endl;
         cout<<"hostel_meal: "<< hostel_meal<<endl;
          cout<<"position: "<<position<<endl;
           cout<<"room_no: "<<room_no<<endl;
           cout<<"room_type: "<<room_type<<endl;
           cout<<"rent: "<<rent<<endl;
                   cout<<"regular_mealpayment: "<<regular_mealpayment<<endl;

          cout<<"hostel_processTotalDues: "<<processTotalDues<<endl;


        }
   };



    

    int main(){

        HostelManager h1("iqra",7594,13,"ug",19000,2,"student");
        h1.display(500,3);//regular meal payment,extrameal
        return 0;
    }

