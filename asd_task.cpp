#include <iostream>

using namespace std;

void view_arr(int arr[100]);

void exercise_1() {
    /**
     TODO:  Write an algorithm which will prints all
            such numbers which are divisible by 7
            but are not a multiple of 5,
            between 100 and 200 (both included)
    */

    // ===========================
    // YOUR CODE HERE

    int i;
    for (i=100; i<201; i++){
         if ((i%7==0)&&(i%5!=0)) {
             cout<<i <<", ";
        }
}




    // ===========================
}

void exercise_2(int n, int p) {
    /**
         TODO:  Write a procedure algorithm to
                raise any number to any power.
        */

    // ===========================
    // YOUR CODE HERE


     int hasil=1;
     int i;

     if (p==0) {
         cout<<hasil<<endl;
     }
     else {
         for (i=1; i<=p; i++) {
             hasil*=n;
         }
         cout<<hasil<<endl;
     }



    // ===========================
}

void exercise_3(int s1, int s2, int s3) {
    /**
         TODO:  Write a procedure algorithm that determines
                the type of a Triangle
                (isosceles, equilateral, or scalene)
                given the size of the three sides
        */

    // ===========================
    // YOUR CODE HERE

     if ((s1==s2)&&(s2==s3)) {
        cout<<"equilateral"<<endl;
         return;
     }
     if ((s1==s2)&&(s1!=s3)) {
         cout<<"isosceles"<<endl;
         return;
     }
     if ((s1==s3)&&(s1!=s2)) {
         cout<<"isosceles"<<endl;
         return;
     }
     if ((s2==s3)&&(s1!=s2)) {
         cout<<"isosceles"<<endl;
        return;
     }
     if ((s1!=s2)&&(s1!=s3)&&(s2!=s3)) {
         cout<<"scalene"<<endl;
         return;
     }




    // ===========================
}


void exercise_4() {
    /**
         TODO:  Write a procedure algorithm to continuously
                receive a numerical input from user
                and add it into an array of integer
                until user inputs number 0
        */
    int arr[100];
    // ===========================
    // YOUR CODE HERE


     int i, bil;
     i=0;
     do {
         cout<<"Masukan bilangan ke-"<<i+1<<" : ";
         cin>>bil;
         arr[i]=bil;
         i++;
     } while (bil!=0);



    // ===========================
    cout<<"array result: ";
    view_arr(arr);
}

int exercise_5(int arr[],int f) {
    /**
         TODO:  Write a function algorithm to find a number
                inside an unsorted array of integer,
                and outputs its index; algorithm will
                outputs -1 if such number is not found
        */

    // ===========================
    // YOUR CODE HERE

    int i=0;
     while ((f!=arr[i])&&(i<12)) {
         i++;
     }
     if (arr[i]==f) {
         return i;
     }
     else {
         return -1;
     }



    // ===========================
    return -1;
}

void exercise_6(int arr[],int x) {
    /**
         TODO:  Write a procedure algorithm to find a number
         inside an unsorted array of integer,
         then insert a negative one (-1) behind such found number
        */

    // ===========================
    // YOUR CODE HERE
    cout<<"your code here"<<endl;

     int i=0;
     int j;
     while ((x!=arr[i])&&(i<12)) {
         i++;
     }
     for (j=13; j>i; j--) {
         arr[j+1]=arr[j];
     }
     arr[i+1]=-1;



    // ===========================
}


void view_arr(int arr[100]) {
    /** Function Helper */
    int i=0;
    while(arr[i]!=0) {
        cout<<arr[i]<<", ";
        i++;
    }
}

