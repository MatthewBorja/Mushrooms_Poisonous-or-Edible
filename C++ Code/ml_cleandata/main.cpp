/* 
 * File:   main.cpp
 * Author: Matthew Borja
 * Created on April 19, 2023, 6:24 PM
 * Purpose: Remove all entries containing "?" in data set.
 */

#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

bool FindQMark(string);
string ReplaceClassifier(string);
bool CountClassifier(string);
string ReplaceAttributes(string);
void ReplaceAttribute1(string&, int);
void ReplaceAttribute2(string&, int);
void ReplaceAttribute3(string&, int);
void ReplaceAttribute4(string&, int);
void ReplaceAttribute5(string&, int);
void ReplaceAttribute6(string&, int);
void ReplaceAttribute7(string&, int);
void ReplaceAttribute8(string&, int);
void ReplaceAttribute9(string&, int&);
void ReplaceAttribute10(string&, int);
void ReplaceAttribute11(string&, int);
void ReplaceAttribute12(string&, int);
void ReplaceAttribute13(string&, int);
void ReplaceAttribute14(string&, int);
void ReplaceAttribute15(string&, int);
void ReplaceAttribute16(string&, int);
void ReplaceAttribute17(string&, int);
void ReplaceAttribute18(string&, int);
void ReplaceAttribute19(string&, int);
void ReplaceAttribute20(string&, int);
void ReplaceAttribute21(string&, int);
void ReplaceAttribute22(string&, int);

int main(int argc, char** argv) {
    int count = 0;
    int poisonous = 0;
    string dataPoint, newData;
    fstream dataFile1, dataFile2;
    dataFile1.open("clean.txt", ios::in);
    //dataFile2.open("clean.txt", ios::out);
    while(count<5644){
    //while (!dataFile1.eof()) {
        //Get one data point from data set.
        getline(dataFile1, dataPoint, '\n');
        //Remove data points that are uncertain. -DONE
        //if(FindQMark(dataPoint)==0)
        //Replace classifier with numeric data. - DONE
        //newData=ReplaceClassifier(dataPoint);
        //Replace attribute characters with numbers.
        //newData=ReplaceAttributes(dataPoint);
        //Count number of poisonous data points.
        if(CountClassifier(dataPoint))
            poisonous++;
        
        //Write to file.
        //dataFile2 << newData << "\n";
        count++;
    }
    dataFile1.close();
    //dataFile2.close();
    cout << "Number of Poisonous data points: " << poisonous;
    return 0;
}

/* FindQMark: Function that detects data points that are missing an attribute
 * and removes them from the data set. Returns 1 if ? is found, 0 if not found.
 */
bool FindQMark(string dataPoint){
    return (dataPoint.find("?",22) == 22) ? true : false;
}

/*ReplaceClassifier: Function that replaces the character that represents the 
 * classifier with a number. Returns modified string.
 */
string ReplaceClassifier(string dataPoint){
    string classifier;
    //classifier=(dataPoint.find("p",0))?1:0;.
    if(dataPoint[0]=='p')
        classifier = '1';
    else
        classifier = '0';
    dataPoint.replace(0,1,classifier);
    cout<<dataPoint<<endl;
    return dataPoint;
}

bool CountClassifier(string dataPoint){
    bool classifier;
    //classifier=(dataPoint.find("p",0))?1:0;.
    if(dataPoint[0]=='1')
        classifier = 1;
    else
        classifier = 0;
    return classifier;
}

string ReplaceAttributes(string dataPoint){
    int i = 2;
    //Replace Attribute 1
    ReplaceAttribute1(dataPoint, i);
    i+=2;
    //Replace Attribute 2
    ReplaceAttribute2(dataPoint, i);
    i+=2;
    //Replace Attribute 3
    ReplaceAttribute3(dataPoint, i);
    i+=2;
    //Replace Attribute 4
    ReplaceAttribute4(dataPoint, i);
    i+=2;
    //Replace Attribute 5
    ReplaceAttribute5(dataPoint, i);
    i+=2;
    //Replace Attribute 6
    ReplaceAttribute6(dataPoint, i);
    i+=2;
    //Replace Attribute 7
    ReplaceAttribute7(dataPoint, i);
    i+=2;
    //Replace Attribute 8
    ReplaceAttribute8(dataPoint, i);
    i+=2;
    //Replace Attribute 9
    ReplaceAttribute9(dataPoint, i);
    i+=2;
    //Replace Attribute 10
    ReplaceAttribute10(dataPoint, i);
    i+=2;
    //Replace Attribute 11
    ReplaceAttribute11(dataPoint, i);
    i+=2;
    //Replace Attribute 12
    ReplaceAttribute12(dataPoint, i);
    i+=2;
    //Replace Attribute 13
    ReplaceAttribute13(dataPoint, i);
    i+=2;
    //Replace Attribute 14
    ReplaceAttribute14(dataPoint, i);
    i+=2;
    //Replace Attribute 15
    ReplaceAttribute15(dataPoint, i);
    i+=2;
    //Replace Attribute 16
    ReplaceAttribute16(dataPoint, i);
    i+=2;
    //Replace Attribute 17
    ReplaceAttribute17(dataPoint, i);
    i+=2;
    //Replace Attribute 18
    ReplaceAttribute18(dataPoint, i);
    i+=2;
    //Replace Attribute 19
    ReplaceAttribute19(dataPoint, i);
    i+=2;
    //Replace Attribute 20
    ReplaceAttribute20(dataPoint, i);
    i+=2;
    //Replace Attribute 21
    ReplaceAttribute21(dataPoint, i);
    i+=2;
    //Replace Attribute 22
    ReplaceAttribute22(dataPoint, i);

    return dataPoint;
}

//Attribute 1: Cap Shape
void ReplaceAttribute1(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'b':   //Bell
            dataPoint.replace(i,1,"0");
            break;
        case 'c':   //Conical
            dataPoint.replace(i,1,"1");
            break;
        case 'x':   //Convex
            dataPoint.replace(i,1,"2");
            break;
        case 'f':   //Flat
            dataPoint.replace(i,1,"3");
            break;
        case 'k':   //Knobbed
            dataPoint.replace(i,1,"4");
            break;
        case 's':   //Sunken
            dataPoint.replace(i,1,"5");
            break;
        default: 
            cout << "Error! No matching attribute 1!\n";
    }
}

//Attribute 2: Cap Surface
void ReplaceAttribute2(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'f':   //Fibrous
            dataPoint.replace(i,1,"0");
            break;
        case 'g':   //Grooves
            dataPoint.replace(i,1,"1");
            break;
        case 'y':   //Scaly
            dataPoint.replace(i,1,"2");
            break;
        case 's':   //Smooth
            dataPoint.replace(i,1,"3");
            break;
        default: 
            cout << "Error! No matching attribute 2!\n";
    }
}

//Attribute 3: Cap Color
void ReplaceAttribute3(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'n':   //Brown
            dataPoint.replace(i,1,"0");
            break;
        case 'b':   //Buff
            dataPoint.replace(i,1,"1");
            break;
        case 'c':   //Cinnamon
            dataPoint.replace(i,1,"2");
            break;
        case 'g':   //Gray
            dataPoint.replace(i,1,"3");
            break;
        case 'r':   //Green
            dataPoint.replace(i,1,"4");
            break;
        case 'p':   //Pink
            dataPoint.replace(i,1,"5");
            break;
        case 'u':   //Purple
            dataPoint.replace(i,1,"6");
            break;
        case 'e':   //Red
            dataPoint.replace(i,1,"7");
            break;
        case 'w':   //White
            dataPoint.replace(i,1,"8");
            break;
        case 'y':   //Yellow
            dataPoint.replace(i,1,"9");
            break;
        default: 
            cout << "Error! No matching attribute 3!\n";
    }
}

//Attribute 4: Bruises
void ReplaceAttribute4(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 't':   //Bruises
            dataPoint.replace(i,1,"0");
            break;
        case 'f':   //No Bruises
            dataPoint.replace(i,1,"1");
            break;
        default: 
            cout << "Error! No matching attribute 4!\n";
    }
}

//Attribute 5: Odor
void ReplaceAttribute5(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'a':   //Almond
            dataPoint.replace(i,1,"0");
            break;
        case 'l':   //Anise
            dataPoint.replace(i,1,"1");
            break;
        case 'c':   //Creosote
            dataPoint.replace(i,1,"2");
            break;
        case 'y':   //Fishy
            dataPoint.replace(i,1,"3");
            break;
        case 'f':   //Foul
            dataPoint.replace(i,1,"4");
            break;
        case 'm':   //Musty
            dataPoint.replace(i,1,"5");
            break;
        case 'n':   //None
            dataPoint.replace(i,1,"6");
            break;
        case 'p':   //Pungent
            dataPoint.replace(i,1,"7");
            break;
        case 's':   //Spicy
            dataPoint.replace(i,1,"8");
            break;
        default: 
            cout << "Error! No matching attribute 5!\n";
    }
}

//Attribute 6: Gill Attachment
void ReplaceAttribute6(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'a':   //Attached
            dataPoint.replace(i,1,"0");
            break;
        case 'd':   //Descending
            dataPoint.replace(i,1,"1");
            break;
        case 'f':   //Free
            dataPoint.replace(i,1,"2");
            break;
        case 'n':   //Notched
            dataPoint.replace(i,1,"3");
            break;
        default: 
            cout << "Error! No matching attribute 6!\n";
    }
}

//Attribute 7: Gill Spacing
void ReplaceAttribute7(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'c':   //Close
            dataPoint.replace(i,1,"0");
            break;
        case 'w':   //Crowded
            dataPoint.replace(i,1,"1");
            break;
        case 'd':   //Distant
            dataPoint.replace(i,1,"2");
            break;
        default: 
            cout << "Error! No matching attribute 7!\n";
    }
}

//Attribute 8: Gill Size
void ReplaceAttribute8(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'b':   //Broad
            dataPoint.replace(i,1,"0");
            break;
        case 'n':   //Narrow
            dataPoint.replace(i,1,"1");
            break;
        default: 
            cout << "Error! No matching attribute 8!\n";
    }
}

//Attribute 9: Gill Color
void ReplaceAttribute9(string &dataPoint, int &i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'k':   //Black
            dataPoint.replace(i,1,"0");
            break;
        case 'n':   //Brown
            dataPoint.replace(i,1,"1");
            break;
        case 'b':   //Buff
            dataPoint.replace(i,1,"2");
            break;
        case 'h':   //Chocolate
            dataPoint.replace(i,1,"3");
            break;
        case 'g':   //Gray
            dataPoint.replace(i,1,"4");
            break;
        case 'r':   //Green
            dataPoint.replace(i,1,"5");
            break;
        case 'o':   //Orange
            dataPoint.replace(i,1,"6");
            break;
        case 'p':   //Pink
            dataPoint.replace(i,1,"7");
            break;
        case 'u':   //Purple
            dataPoint.replace(i,1,"8");
            break;
        case 'e':   //Red
            dataPoint.replace(i,1,"9");
            break;
        case 'w':   //White
            dataPoint.replace(i,1,"10");
            i++;
            break;
        case 'y':   //Yellow
            dataPoint.replace(i,1,"11");
            i++;
            break;
        default: 
            cout << "Error! No matching attribute 9!\n";
    }
}

//Attribute 10: Stalk Shape
void ReplaceAttribute10(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'e':   //Enlarging
            dataPoint.replace(i,1,"0");
            break;
        case 't':   //Tapering
            dataPoint.replace(i,1,"1");
            break;
        default: 
            cout << "Error! No matching attribute 10!\n";
    }
}

//Attribute 11: Stalk Root
void ReplaceAttribute11(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'b':   //Bulbous
            dataPoint.replace(i,1,"0");
            break;
        case 'c':   //Club
            dataPoint.replace(i,1,"1");
            break;
        case 'u':   //Cup
            dataPoint.replace(i,1,"2");
            break;
        case 'e':   //Equal
            dataPoint.replace(i,1,"3");
            break;
        case 'z':   //Rhizomorphs
            dataPoint.replace(i,1,"4");
            break;
        case 'r':   //Rooted
            dataPoint.replace(i,1,"5");
            break;
        default: 
            cout << "Error! No matching attribute 11!\n";
    }
}

//Attribute 12: Stalk Surface Above Ring
void ReplaceAttribute12(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'f':   //Fibrous
            dataPoint.replace(i,1,"0");
            break;
        case 'y':   //Scaly
            dataPoint.replace(i,1,"1");
            break;
        case 'k':   //Silky
            dataPoint.replace(i,1,"2");
            break;
        case 's':   //Smooth
            dataPoint.replace(i,1,"3");
            break;
        default: 
            cout << "Error! No matching attribute 12!\n";
    }
}

//Attribute 13: Stalk Surface Below Ring
void ReplaceAttribute13(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'f':   //Fibrous
            dataPoint.replace(i,1,"0");
            break;
        case 'y':   //Scaly
            dataPoint.replace(i,1,"1");
            break;
        case 'k':   //Silky
            dataPoint.replace(i,1,"2");
            break;
        case 's':   //Smooth
            dataPoint.replace(i,1,"3");
            break;
        default: 
            cout << "Error! No matching attribute 13!\n";
    }
}

//Attribute 14: Stalk Color Above Ring
void ReplaceAttribute14(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'n':   //Brown
            dataPoint.replace(i,1,"0");
            break;
        case 'b':   //Buff
            dataPoint.replace(i,1,"1");
            break;
        case 'c':   //Cinnamon
            dataPoint.replace(i,1,"2");
            break;
        case 'g':   //Gray
            dataPoint.replace(i,1,"3");
            break;
        case 'o':   //Orange
            dataPoint.replace(i,1,"4");
            break;
        case 'p':   //Pink
            dataPoint.replace(i,1,"5");
            break;
        case 'e':   //Red
            dataPoint.replace(i,1,"6");
            break;
        case 'w':   //White
            dataPoint.replace(i,1,"7");
            break;
        case 'y':   //Yellow
            dataPoint.replace(i,1,"8");
            break;
        default: 
            cout << "Error! No matching attribute 14!\n";
    }
}

//Attribute 15: Stalk Color Below Ring
void ReplaceAttribute15(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'n':   //Brown
            dataPoint.replace(i,1,"0");
            break;
        case 'b':   //Buff
            dataPoint.replace(i,1,"1");
            break;
        case 'c':   //Cinnamon
            dataPoint.replace(i,1,"2");
            break;
        case 'g':   //Gray
            dataPoint.replace(i,1,"3");
            break;
        case 'o':   //Orange
            dataPoint.replace(i,1,"4");
            break;
        case 'p':   //Pink
            dataPoint.replace(i,1,"5");
            break;
        case 'e':   //Red
            dataPoint.replace(i,1,"6");
            break;
        case 'w':   //White
            dataPoint.replace(i,1,"7");
            break;
        case 'y':   //Yellow
            dataPoint.replace(i,1,"8");
            break;
        default: 
            cout << "Error! No matching attribute 15!\n";
    }
}

//Attribute 16: Veil Type
void ReplaceAttribute16(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'p':   //Partial
            dataPoint.replace(i,1,"0");
            break;
        case 'u':   //Universal
            dataPoint.replace(i,1,"1");
            break;
        default: 
            cout << "Error! No matching attribute 16!\n";
    }
}

//Attribute 17: Veil Color
void ReplaceAttribute17(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'n':   //Brown
            dataPoint.replace(i,1,"0");
            break;
        case 'o':   //Orange
            dataPoint.replace(i,1,"1");
            break;
        case 'w':   //White
            dataPoint.replace(i,1,"2");
            break;
        case 'y':   //Yellow
            dataPoint.replace(i,1,"3");
            break;
        default: 
            cout << "Error! No matching attribute 17!\n";
    }
}

//Attribute 18: Ring Number
void ReplaceAttribute18(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'n':   //None
            dataPoint.replace(i,1,"0");
            break;
        case 'o':   //One
            dataPoint.replace(i,1,"1");
            break;
        case 't':   //Two
            dataPoint.replace(i,1,"2");
            break;
        default: 
            cout << "Error! No matching attribute 18!\n";
    }
}

//Attribute 19: Ring Type
void ReplaceAttribute19(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'c':   //Cobwebby
            dataPoint.replace(i,1,"0");
            break;
        case 'e':   //Evanescent
            dataPoint.replace(i,1,"1");
            break;
        case 'f':   //Flaring
            dataPoint.replace(i,1,"2");
            break;
        case 'l':   //Large
            dataPoint.replace(i,1,"3");
            break;
        case 'n':   //None
            dataPoint.replace(i,1,"4");
            break;
        case 'p':   //Pendant
            dataPoint.replace(i,1,"5");
            break;
        case 's':   //Sheathing
            dataPoint.replace(i,1,"6");
            break;
        case 'z':   //Zone
            dataPoint.replace(i,1,"7");
            break;
        default: 
            cout << "Error! No matching attribute 19!\n";
    }
}

//Attribute 20: Spore Print Color
void ReplaceAttribute20(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'k':   //Black
            dataPoint.replace(i,1,"0");
            break;
        case 'n':   //Brown
            dataPoint.replace(i,1,"1");
            break;
        case 'b':   //Buff
            dataPoint.replace(i,1,"2");
            break;
        case 'h':   //Chocolate
            dataPoint.replace(i,1,"3");
            break;
        case 'r':   //Green
            dataPoint.replace(i,1,"4");
            break;
        case 'o':   //Orange
            dataPoint.replace(i,1,"5");
            break;
        case 'u':   //Purple
            dataPoint.replace(i,1,"6");
            break;
        case 'w':   //White
            dataPoint.replace(i,1,"7");
            break;
        case 'y':   //Yellow
            dataPoint.replace(i,1,"8");
            break;
        default: 
            cout << "Error! No matching attribute 20!\n";
    }
}

//Attribute 21: Population
void ReplaceAttribute21(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'a':   //Abundant
            dataPoint.replace(i,1,"0");
            break;
        case 'c':   //Clustered
            dataPoint.replace(i,1,"1");
            break;
        case 'n':   //Numerous
            dataPoint.replace(i,1,"2");
            break;
        case 's':   //Scattered
            dataPoint.replace(i,1,"3");
            break;
        case 'v':   //Several
            dataPoint.replace(i,1,"4");
            break;
        case 'y':   //Solitary
            dataPoint.replace(i,1,"5");
            break;
        default: 
            cout << "Error! No matching attribute 21!\n";
    }
}

//Attribute 22: Habitat
void ReplaceAttribute22(string &dataPoint, int i){
    char attribute;
    attribute=dataPoint[i];
    switch(attribute){
        case 'g':   //Grasses
            dataPoint.replace(i,1,"0");
            break;
        case 'l':   //Leaves
            dataPoint.replace(i,1,"1");
            break;
        case 'm':   //Meadows
            dataPoint.replace(i,1,"2");
            break;
        case 'p':   //Paths
            dataPoint.replace(i,1,"3");
            break;
        case 'u':   //Urban
            dataPoint.replace(i,1,"4");
            break;
        case 'w':   //Waste
            dataPoint.replace(i,1,"5");
            break;
        case 'd':   //Woods
            dataPoint.replace(i,1,"6");
            break;
        default: 
            cout << "Error! No matching attribute 22!\n";
    }
}