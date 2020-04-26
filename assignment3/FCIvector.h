#ifndef FCIVECTOR_H_INCLUDED
#define FCIVECTOR_H_INCLUDED
using namespace std;   /*Nourhan Amgad Morsey  20180319*/
template<typename T>
class FCIvector{
public:

    T* elements;

    int capacityy;


    int numberofelements;

    FCIvector()
    {
        elements = new T[1];
        capacityy = 1;
        numberofelements = 0;
    }

    void pushback(T data)
    {
        if (numberofelements == capacityy) {
            T* element = new T[2 * capacityy];


            for (int i = 0; i < capacityy; i++) {
                element[i] = elements[i];
            }

            delete[] elements;
            capacityy *= 2;
            elements = element;
        }
        elements[numberofelements] = data;
        numberofelements++;
    }

    void popback()
    {
        numberofelements--;
        capacityy--;
    }
    int sizee()
    {
        return numberofelements;
    }

    int capacity()
    {
        return capacityy;
    }
    void print()
    { if(numberofelements==0){
     cout<<"this vector is empty"<<endl;
    }
   else{
        for (int i = 0; i < numberofelements; i++) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
    }
    T& operator[](const int &sub)
   {
     return elements[sub];
   }
   bool emptyy()
    { if(numberofelements==0){
      return true;
      }
      else {
            return false;
      }

    }
     void clearr(){
    numberofelements=0;
    }
    T display(int index)
    {
       index--;
        // if index is within the range
        if (index > numberofelements)
        {
            cout<<"there is no element in this position"<<endl;

        }
          else  return elements[index];
    }

     T* beginn()
    {
     return *(&elements[0]);
    }

    T& frontt()
    {
      return (elements[0]);
    }

    T& backk()
    {
        return elements[numberofelements-1];
    }
    T insertt(int pos, T val){
        pos--;
      for(int i=0;i<numberofelements;i++){
        if(i==pos){
            elements[i]=val;
            break;
        }
      }
    }
    void erasee(int pos)
    { pos--;
        for(int i=pos;i<numberofelements;i++)
    {  T temp =elements[i];
       elements[i]=elements[i+1];
       elements[i+1]=temp;
    }
    numberofelements--;

    }

};


#endif // FCIVECTOR_H_INCLUDED
