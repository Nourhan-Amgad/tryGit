#include <bits/stdc++.h>
#include "FCIvector.h"
using namespace std;  /*Nourhan Amgad Morsey  20180319*/
class Student
{
public:
    class course
    {
    public:
        string courseName;
        string courseCode;
        char courseGrade;
        float coursePoint;
        int courseYear;
        int courseSemester;
        int numberOfCourses;
        cousre()
        {
        }

        friend ostream & operator << (ostream &out,  course &c)
        {

            out << c.courseName<<endl;
            out << c.courseCode<< endl;
            out<<c.courseGrade<<endl;
            out<<c.coursePoint<<endl;
            out<<c.courseYear<<endl;
            out<<c.courseSemester<<endl;
            return out;
        }
        friend istream & operator >>(istream &in, course &c)
        {
            cout<<"Course Name: ";
            in>>c.courseName;
            cout<<"Course Code: ";
            in>>c.courseCode;
            cout<<"course Grade : ";
            in>>c.courseGrade;
            cout<<"Course point: ";
            in>>c.coursePoint;
            cout<<"Course year: ";
            in>>c.courseYear;
            cout<<"Course Semester : ";
            in>>c.courseSemester;
            return in;

        }

    };

    string sName;
    int sID;
    string sDepartment;
    int numberOfStudents;
    FCIvector<Student::course>co;
    course obj;
    Student()
    {
    }

    friend ostream & operator << (ostream &out,  Student &s)
{
    out<<"--------------"<<endl;

    int y =0;
    out << s.sName<<endl;
    out << s.sID<< endl;
    out<<s.sDepartment<<endl;
    while (y<s.co.sizee())
    {
        out << s.co[y];
        y++;
    }
    out<<"----------"<<endl;

    return out;
}
    friend istream & operator >>(istream&in, Student&s)
    {
        int sum ;
        int y =1 ;
        course cooo ;
        cout<< "enter name\n";
        in>>s.sName;
        cout<< "enter id \n";
        in>>s.sID;
        cout<< "enter department\n";
        in>>s.sDepartment;
        cout<< "enter the number of courses\n";
        in>>sum;
        while(y<=sum)
        {
            in>>cooo;
            s.co.pushback(cooo);
            y++;
        }
        return in;
    }
};

int main()
{
 string flag="true";
    string fl="true";
    int num=0;
    int pos,eras;
    int choice;
    int c;
    while(flag =="true")
    {
        cout<<"Insert type of vector you would like to create: \n"
            "\n1. list of integer"
            "\n2. list of character"
            "\n3. list of string"
            "\n4. list of float"
            "\n5. list of students"
            "\n6. Exit  "<<endl;
        cin>>choice;
        if(choice==1)
        {
            FCIvector<int>v;
            int in;
            cout<<"A vector of Integer was created successfully."<<endl;
            while(fl=="true")
            {
                cout<<"What kind of operation would you like to perform?"
                    "\n1. Add element."
                    "\n2. Remove last element."
                    "\n3. Insert element at certain position."
                    "\n4. Erase element from a certain position."
                    "\n5. Clear."
                    "\n6. Display first element."
                    "\n7. Display last element."
                    "\n8. Display element at certain position."
                    "\n9. Display vector size."
                    "\n10. Display vector capacity."
                    "\n11. Is empty?"
                    "\n12. go back to the previous menu"<<endl;
                cin>>c;
                if(c==1)
                {
                    cout<<"how many elements you want to add"<<endl;
                    cin>>num;
                    for(int i =0 ; i<num; i++)
                    {
                        cin>>in;
                        v.pushback(in);
                    }


                }
                else if(c==2)
                {
                    v.popback();
                    v.print();

                }
                else if(c==3)
                {
                    int val;
                    cout<<"enter the position you want to insert in please"<<endl;
                    cin>>pos;
                    cout<<"enter the value you want to add"<<endl;
                    cin>>val;
                    v.insertt(pos,val);
                    v.print();

                }
                else if(c==4)
                {
                    cout<<"Enter the position of the element to be erased : ";
                    cin>>eras;
                    v.erasee(eras);
                    v.print();

                }
                else if(c==5)
                {
                    v.clearr();
                    v.print();
                }
                else if (c==6)
                {
                    cout<<v.frontt()<<endl;
                }
                else if(c==7)
                {
                    cout<<v.backk()<<endl;
                }
                else if(c==8)
                {
                    int number;
                    cout<<"enter the number of the element you want to display"<<endl;
                    cin>>number;
                    cout<<v.display(number)<<endl;

                }
                else if(c==9)
                {
                    cout<<v.sizee()<<endl;
                }
                else if(c==10)
                {
                    cout<<v.capacity()<<endl;
                }
                else if(c==11)
                {
                    bool x;
                    x=v.emptyy();
                    if(x==true)
                    {
                        cout<<"the vector is empty"<<endl;
                    }
                    else if (x==false)
                    {
                        cout<<"the vector is not empty"<<endl;
                    }
                }
                else if(c==12)
                {
                    break;
                }
            }
        }


        else if(choice==2)
        {
            FCIvector<char>v;
            char ch;
            cout<<"A vector of Characters was created successfully."<<endl;
            while(fl=="true")
            {
                cout<<"What kind of operation would you like to perform?"
                    "\n1. Add element."
                    "\n2. Remove last element."
                    "\n3. Insert element at certain position."
                    "\n4. Erase element from a certain position."
                    "\n5. Clear."
                    "\n6. Display first element."
                    "\n7. Display last element."
                    "\n8. Display element at certain position."
                    "\n9. Display vector size."
                    "\n10. Display vector capacity."
                    "\n11. Is empty?"
                    "\n12. go back to the previous menu"<<endl;
                cin>>c;
                if(c==1)
                {
                    cout<<"how many elements you want to add"<<endl;
                    cin>>num;
                    for(int i =0 ; i<num; i++)
                    {
                        cin>>ch;
                        v.pushback(ch);
                    }
                    v.print();

                }
                else if(c==2)
                {
                    v.popback();
                    v.print();

                }
                else if(c==3)
                {  char val;
                    cout<<"enter the position you want to insert in please"<<endl;
                    cin>>pos;
                    cout<<"enter the value you want to add"<<endl;
                    cin>>val;
                    v.insertt(pos,val);
                    v.print();


                }
                else if(c==4)
                {   cout<<"Enter the position of the element to be erased : ";
                    cin>>eras;
                    v.erasee(eras);
                    v.print();


                }
                else if(c==5)
                {
                    v.clearr();
                    v.print();
                }
                else if (c==6)
                {
                   cout<<v.frontt()<<endl;
                }
                else if(c==7)
                {
                 cout<<v.backk()<<endl;
                }
                else if(c==8)
                {
                    int number;
                    cout<<"enter the number of the element you want to display"<<endl;
                    cin>>number;
                    cout<<v.display(number)<<endl;
                }
                else if(c==9)
                {
                    cout<<v.sizee()<<endl;
                }
                else if(c==10)
                {
                    cout<<v.capacity()<<endl;
                }
                else if(c==11)
                {
                    bool x;
                    x=v.emptyy();
                    if(x==true)
                    {
                        cout<<"the vector is empty"<<endl;
                    }
                    else if (x==false)
                    {
                        cout<<"the vector is not empty"<<endl;
                    }
                }
                else if(c==12)
                {
                    break;
                }
            }

        }
        else if(choice==3)
        {
            FCIvector<string>v;
            string s;
            cout<<"A vector of Strings was created successfully."<<endl;
            while(fl=="true")
            {
                cout<<"What kind of operation would you like to perform?"
                    "\n1. Add element."
                    "\n2. Remove last element."
                    "\n3. Insert element at certain position."
                    "\n4. Erase element from a certain position."
                    "\n5. Clear."
                    "\n6. Display first element."
                    "\n7. Display last element."
                    "\n8. Display element at certain position."
                    "\n9. Display vector size."
                    "\n10. Display vector capacity."
                    "\n11. Is empty?"
                    "\n12. go back to the previous menu"<<endl;
                cin>>c;
                if(c==1)
                {
                    cout<<"how many elements you want to add"<<endl;
                    cin>>num;
                    for(int i =0 ; i<num; i++)
                    {
                        cin>>s;
                        v.pushback(s);
                    }
                    v.print();

                }
                else if(c==2)
                {
                    v.popback();
                    v.print();

                }
                else if(c==3)
                {  string val;
                    cout<<"enter the position you want to insert in please"<<endl;
                    cin>>pos;
                    cout<<"enter the value you want to add"<<endl;
                    cin>>val;
                    v.insertt(pos,val);
                    v.print();


                }
                else if(c==4)
                {  cout<<"Enter the position of the element to be erased : ";
                    cin>>eras;
                    v.erasee(eras);
                    v.print();


                }
                else if(c==5)
                {
                    v.clearr();
                    v.print();
                }
                else if (c==6)
                {
                      cout<<v.frontt()<<endl;
                }
                else if(c==7)
                {
                     cout<<v.backk()<<endl;
                }
                else if(c==8)
                {
                    int number;
                    cout<<"enter the number of the element you want to display"<<endl;
                    cin>>number;
                    cout<<v.display(number)<<endl;
                }
                else if(c==9)
                {
                    cout<<v.sizee()<<endl;
                }
                else if(c==10)
                {
                    cout<<v.capacity()<<endl;
                }
                else if(c==11)
                {
                    bool x;
                    x=v.emptyy();
                    if(x==true)
                    {
                        cout<<"the vector is empty"<<endl;
                    }
                    else if (x==false)
                    {
                        cout<<"the vector is not empty"<<endl;
                    }
                }
                else if(c==12)
                {
                    break;
                }

            }
        }
        else if(choice==4)
        {
            FCIvector<float>v;
            float f;
            cout<<"A vector of Float was created successfully."<<endl;
            while(fl=="true")
            {
                cout<<"What kind of operation would you like to perform?"
                    "\n1. Add element."
                    "\n2. Remove last element."
                    "\n3. Insert element at certain position."
                    "\n4. Erase element from a certain position."
                    "\n5. Clear."
                    "\n6. Display first element."
                    "\n7. Display last element."
                    "\n8. Display element at certain position."
                    "\n9. Display vector size."
                    "\n10. Display vector capacity."
                    "\n11. Is empty?"
                    "\n12. go back to the previous menu"<<endl;
                cin>>c;
                if(c==1)
                {
                    cout<<"how many elements you want to add"<<endl;
                    cin>>num;
                    for(int i =0 ; i<num; i++)
                    {
                        cin>>f;
                        v.pushback(f);
                    }
                    v.print();

                }
                else if(c==2)
                {
                    v.popback();
                    v.print();

                }
                else if(c==3)
                { float val;
                    cout<<"enter the position you want to insert in please"<<endl;
                    cin>>pos;
                    cout<<"enter the value you want to add"<<endl;
                    cin>>val;
                    v.insertt(pos,val);
                    v.print();


                }
                else if(c==4)
                {
                      cout<<"Enter the position of the element to be erased : ";
                    cin>>eras;
                    v.erasee(eras);
                    v.print();

                }
                else if(c==5)
                {
                    v.clearr();
                    v.print();
                }
                else if (c==6)
                {
                      cout<<v.frontt()<<endl;
                }
                else if(c==7)
                {
                   cout<<v.backk()<<endl;
                }
                else if(c==8)
                {
                    int number;
                           cout<<"enter the number of the element you want to display"<<endl;
                    cin>>number;
                    cout<<v.display(number)<<endl;
                }
                else if(c==9)
                {
                    cout<<v.sizee()<<endl;
                }
                else if(c==10)
                {
                    cout<<v.capacity()<<endl;
                }
                else if(c==11)
                {
                    bool x;
                    x=v.emptyy();
                    if(x==true)
                    {
                        cout<<"the vector is empty"<<endl;
                    }
                    else if (x==false)
                    {
                        cout<<"the vector is not empty"<<endl;
                    }
                }
                else if(c==12)
                {
                    break;
                }
            }
        }
        else if(choice==5)
        {  Student obj;
    FCIvector<Student>obj1;
            cout<<"A vector of students was created successfully."<<endl;
            while(fl=="true")
            {
              cout<<"\n What kind of operation would you like to perform?"
                    "\n1. Add element."
                    "\n2. Remove last element."
                    "\n3. Insert element at certain position."
                    "\n4. Erase element from a certain position."
                    "\n5. Clear."
                    "\n6. Display first element."
                    "\n7. Display last element."
                    "\n8. Display element at certain position."
                    "\n9. Display vector size."
                    "\n10. Display vector capacity."
                    "\n11. Is empty?"
                    "\n12. go back to the previous menu"<<endl;
                cin>>c;
                if(c==1)
                {

                cin>>obj;
                obj1.pushback(obj);
                }
                else if(c==2)
                {
                    obj1.popback();
                    obj1.print();

                }
                else if(c==3)
                {
                       Student val;
                    cout<<"enter the position you want to insert in please"<<endl;
                    cin>>pos;
                    cout<<"enter the value you want to add"<<endl;
                    cin>>val;
                    obj1.insertt(pos,val);
                    obj1.print();
                }
                else if(c==4)
                {  cout<<"Enter the position of the element to be erased : ";
                    cin>>eras;
                    obj1.erasee(eras);
                    obj1.print();


                }
                else if(c==5)
                {
                    obj1.clearr();
                    obj1.print();

                }
                else if (c==6)
                {
                   cout<<obj1.frontt()<<endl;

                }
                else if(c==7)
                {
                    cout<<obj1.backk()<<endl;
                }
                else if(c==8)
                {
                    int number;
                           cout<<"enter the number of the element you want to display"<<endl;
                    cin>>number;
                    //cout<<obj1.display(number)<<endl;

                }
                else if(c==9)
                {
                     cout<<obj1.sizee()<<endl;

                }
                else if(c==10)
                {
                     cout<<obj1.capacity()<<endl;

                }
                else if(c==11)
                {
                      bool x;
                    x=obj1.emptyy();
                    if(x==true){
                    cout<<"the student vector is empty"<<endl;
                    }
                    else if (x==false){
                    cout<<"the student vector is not empty"<<endl;
                    }


                }
                else if(c==12)
                {
                    break;
                }
                }
               }
        else if(choice==6)
        {
            flag="false";
            break;
        }
        }
    return 0;
}
