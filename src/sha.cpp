#include<iostream>
#include "sha.h"
using namespace std;


//copy function utility  (suspicious:  Cleared)
void cstringcpy(char *src, char * dest)
{
        //cout<<"\n==========================================================";
        //cout<<"\n\nDEBUG cstingcpy: ";
        //int counter=0;
    while (*src) {
        *(dest++) = *(src++);
        //counter++;
        //cout<<endl<<counter;
    }
    *dest = '\0';
    //cout<<"\n=========================================";
    //cout<<"\nDEBUG @cstringcpy  dest = "<<*dest;
}



// hashvalue Setter implementaion
void hash160 :: setter(){
        cout<<"Enter sha: "<<endl;
        cin>> h;
}

void hash160 :: setter(char hash[40])
{
        //cout<<"\nDEBUG: @hash160 :: setter";
        
       cstringcpy(hash,this->h);
        //cout<<"\nafter copy h = "<<this->h;
}

// hashvalue Setter implementaion
char* hash160 :: getter(){
        //cout<<"\n====================================================";
        //cout<<"\nDEBUG: @HASH160:: getter";
        //cout<<"\n\th = "<<h;
        //cout<<"\n len(h) = "<<sizeof(h)/sizeof(h[0]);
        //cout<<"\n===================================================="<<endl; 
                return h;
}

//OPERATOR OVERLOADING IMPLEMENTAION
bool operator <= (hash160 const &obj1, hash160 const &obj2){
        unsigned short int index = 0;
        while(index < 40)
        {
                if(obj1.h[index] < obj2.h[index])       return true;
                else if(obj1.h[index]> obj2.h[index])   return false;
                else if(obj1.h[index] == obj2.h[index])
                        index++;
        }

        return 1;

}


/*
bool isHashSmallerThanOrEqualTo(char h1[40], char h2[40])
{
        unsigned short int index = 0;
        while(index < 40)
        {
                if(h1[index] < h2[index])       return true;
                else if(h1[index]> h2[index])   return false;
                else if(h1[index] == h2[index])
                        index++;
        }

        return 1;
}
*/
