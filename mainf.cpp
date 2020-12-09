 #include <iostream>

 using namespace std;

 class Student

 {

  private:

    string name;
    int id;
    int term;

    public:
    void setid(int ids)
    {
        id = ids;
    }
    void setname(string names)
    {
         name=names;
    }
    void setterm (int terms )
    {
        term = terms;
    }

    int getid()
    {
        return id;
    }
    string getname ()
    {
        return name;
    }
    int getterm()
    {

        return term;
    }



 };
  class  Subject
    {
      private :
  int subject;

public:
    void setsubject(int subjects){
      subject=subjects;
    }
    int getsubject(){
    return subject;
    }
};

    class College
    {
        public:
         string nameofcollege;
        int numofstudent;
   College (){
     nameofcollege= "Alex";
     numofstudent = 4;
   }
   };
     class Engineering:public College
     {
      private:
        int numofdepartment;
      public:
        void setnumofdepartment(int numofdepartments){
     numofdepartment=numofdepartments;
    }
     int getnumofdepartment(){
  return  numofdepartment;
  }

     };


     class Computing:public College

     {
       private:
        int numofdepartment1;
      public:
        void setnumofdepartment1(int numofdepartments1){
     numofdepartment1=numofdepartments1;
    }
     int getnumofdepartment1 (){
  return  numofdepartment1;
  }




     };
     class Media:public College
     {
         private:
        int numofdepartment2;
      public:
        void setnumofdepartment2(int numofdepartments2){
     numofdepartment2=numofdepartments2;
    }
     int getnumofdepartment2 (){
  return  numofdepartment2;
  }



     };



int main()
{


string name ;
int id ;
int term;
string result;
College College;
cout << College.nameofcollege << endl << College.numofstudent<<endl;

Student s[100];
 for(int i =0; i<100; i++){
        cout<<"Please Enter Id :"<<endl;
        cin>>id;
        s[i].setid(id);

        cout<<"Please Enter Name:"<<endl;
        cin>> name;
        s[i].setname(name);




      cout<<"Please Enter term:"<<endl;
        cin>> term;
        s[i].setterm(term);

            cout<<"result:"<<id <<name<<term<<endl;
      }

    Engineering  Engineering ;
     Engineering.nameofcollege ="College of Engineering";
     Engineering.numofstudent = 30;

    Computing Computing ;
    Computing.nameofcollege = "college of computing ";
    Computing.numofstudent = 30;

    Media Media;
    Media.nameofcollege = "College of  media";
    Media.numofstudent = 40;



return 0;

}








