 #include <iostream>

 using namespace std;

 class Student

 {
   public:
    Student() {
    cout << "\n\n Print a welcome text in a separate line :\n";
    cout << "----------------------------------------------\n";
    cout << " Welcome to \n"<<endl ;


    }



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


    class  Subject
    {
         public:
       string subject;


    };
 };
    class Collage:public Student
    {
        public:
        static string nameofcollage;
        int numofstudent;

         };
     class Engineering:public Student,public Collage
     {
         public:
         int numofdepartment;
        string name1;
     };
     class Computing:public Student,public Collage
     {
     public:
         string name2;


     };
     class Media:public Student,public Collage
     {
         public:
         string name3;


     };



int main()
{
Student myObj;

string name ;
int id ;
Student s[100];

for(size_t i=0;i<100;i++){
    cout<<"please enter id :"<<endl;
    cin>>id;
    s[i].setid(id);
    cout<<"please enter name:"<<endl;
    cin>>name;
    s[i].setname(name);


}
Engineering eng;
eng.name1="collage of engineering";
eng.numofstudent= 40;

Computing com;
com.name2 ="collage of computing";
com.numofstudent =30;

Media med;
med.name3 = "collage of Media";



return 0;

}
