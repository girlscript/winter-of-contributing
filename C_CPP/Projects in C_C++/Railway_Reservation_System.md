# Railway Reservation System

## CODE:

```cpp
#include<iostream>

#include<cstring>

#include<string.h>

#include<stdlib.h>

#include<stdio.h>

using namespace std;

int main() {
  int l, a, i = 0, age[10], id[20], temp = 1000, x, tri;
  int g, j, non = 0, h;
  char b, s;
  float far[10], pay, heft, lew[100];
  string nam[100], ari[50], dep[50], ide[50], lst[100], tr[50];
  cout << "\n\t\t*** Indian Railway Reservation System (V7.0) ***\t\t";
  cout << "\n\t\t(Please Maximize the Screen for a better experience)\n\n";
  LOOP4:
    cout << "\nEnter the Choice :-\n" << "\t1.To Enter Record\n" << "\t2.To Display Records\n" << "\t3.To Search for Records\n" << "\t4.To Sort the details\n" << "\t5.To Delete a record\n";
    cin >> l;
  //Entering a record
  //Displaying a record
  //Search a record
  //Sorting the details
  //Deleting a record
  switch (l) {
  case 1: {
    LOOP3: {
      cout << "\n\t\tENTER THE DETAILS OF: " << i + 1 << " PASSENGER:\n";
      cout << "\n\nEnter Your First Name:\n";
      cin >> nam[i];
      cout << "\nEnter Your Last Name:\n";
      cin >> lst[i];
      cout << "\nEnter The Departure City:\n";
      cin >> dep[i];
      cout << "\nEnter The Arriving City:\n";
      cin >> ari[i];
      cout << "\nSelect the Train Name:\n";
      LOOP5: cout << "1. Rajdhani Express (Howrah)\n2. Rajdhani Express(Sealdah)\n3. Shatabdi Express (Howrah)\n4. Shatabdi Express (Sealdah)\n5. Garib Rath (Kolkata)\n6. Duronto Express (Kolkata)\n ";
      cin >> tri;
      //All these actions require your First & Last Name and your Departure & Arrival City. The code also inputs the Train Name the
      //passenger wants to travel in and shows the fare along with the class of train. The code also asks for the identity proof as well as age of the passenger!
      switch (tri) {
      case 1: {
        tr[i] = "Rajdhani Express (Howrah)";
      }
      break;
      case 2: {
        tr[i] = "Rajdhani Express(Sealdah)";
      }
      break;
      case 3: {
        tr[i] = "Shatabdi Express (Howrah)";
      }
      break;
      case 4: {
        tr[i] = "Shatabdi Express (Sealdah)";
      }
      break;
      case 5: {
        tr[i] = "Garib Rath (Kolkata)";
      }
      break;
      case 6: {
        tr[i] = "Duronto Express (Kolkata)";
      }
      break;
      default: {
        cout << "\nWrong Input.\n";
        cout << "\nTry Again ?(Y/N)";
        cin >> b;
        if (b == 'Y' || b == 'y')
          goto LOOP5;
        else {
          cout << "\a\nMANDATORY";
          goto LOOP5;
        }
      }
      }
      LOOP: cout << "\nEnter The Fare:\n";
      cout << "\n1. First Class.(Rs. 1075)\n2. Second Class.(Rs. 537.5)\n3. Third Class.(Rs. 215)\n\n";
      cin >> a;
      switch (a) {
      case 1: {
        pay = 1000 + ((7.5 * 1000) / 100);
        far[i] = pay;
      }
      break;

      case 2: {
        pay = 500 + ((7.5 * 500) / 100);
        far[i] = pay;
      }
      break;

      case 3: {
        pay = 200 + ((7.5 * 200) / 100);
        far[i] = pay;
      }
      break;

      default: {
        cout << "\nWrong Input.\n";
        cout << "\n\aTry Again ?(Y/N)";
        cin >> b;
        if (b == 'Y' || b == 'y')
          goto LOOP;
        else {
          cout << "\a\nMANDATORY";
          goto LOOP;
        }
      }
      }
      LOOP2: cout << "\nEnter The Identity Proof:\n";
      cout << "\nPress:\n1. Aadhar Card\n2. PAN Card\n3. Voter Card\n\n";
      cin >> x;
      switch (x) {
      case 1: {
        ide[i] = "Aadhar Card";
      }
      break;
      case 2: {
        ide[i] = "PAN Card";
      }
      break;
      case 3: {
        ide[i] = "Voter Card";
      }
      break;
      default: {
        cout << "\nWrong Input.\n";
        cout << "\n\aTry Again ?(Y/N)";
        cin >> b;
        if (b == 'Y' || b == 'y')
          goto LOOP2;
        else {
          cout << "\a\nMANDATORY";
          goto LOOP2;
        }
      }

      }
      cout << "\nEnter The Age:\n";
      cin >> age[i];
      id[i] = ++temp;
      i++;

    }
    cout << "\nDo you want to enter more details?(Y/N)";
    cin >> b;
    if (b == 'Y' || b == 'y') {
      goto LOOP3;
    } else {
      goto LOOP4;
    }
  }

  //It stores all the details of the passenger and displays the details along with an ID    
  case 2: {
    cout << "ID\t\tNAME\t\tDeparture\t\tArriving\t\tTrain_Name\t\t\tID_INFO\t\tAGE\t\tFARE\n\n";
    for (j = 0; j < i; j++)
      cout << id[j] << "\t\t" << nam[j] << " " << lst[j] << "\t" << dep[j] << "\t\t\t" << ari[j] << "\t\t" << tr[j] << "\t\t" << ide[j] << "\t\t" << age[j] << "\t\t" << far[j] << "\n\n";
    cout << "Do You Want to Exit? (Y/N)";
    cin >> b;
    if (b == 'N' || b == 'n') {
      goto LOOP4;
    } else
      cout << "\n\a\aThank You for Using this Application.\n\n";
  }
  break;
      
  //It searches a record Train-wise or checks the concession for below 18years passengers
  case 3: {
    cout << "\nSearch for:\n";
    cout << "\nPress:\n1. To Search the details of passengers Train-wise\n2. To Check The Concession of Below 18 years passengers\n";
    cin >> g;
    switch (g) {
    case 1: {
      cout << "\nSelect the Train Name: \n\n";
      cout << "1. Rajdhani Express (Howrah)\n2. Rajdhani Express(Sealdah)\n3. Shatabdi Express (Howrah)\n4. Shatabdi Express (Sealdah)\n5. Garib Rath (Kolkata)\n6. Duronto Express (Kolkata)\n ";
      cin >> h;
      switch (h) {
      case 1: {
        cout << "ID\t\tNAME\t\tDeparture\t\tArriving\t\tTrain_Name\t\t\tID_INFO\t\tAGE\t\tFARE\n\n";
        for (j = 0; j < i; j++) {
          if (tr[j] == "Rajdhani Express (Howrah)")
            cout << id[j] << "\t\t" << nam[j] << " " << lst[j] << "\t" << dep[j] << "\t\t\t" << ari[j] << "\t\t" << tr[j] << "\t\t" << ide[j] << "\t\t" << age[j] << "\t\t" << far[j] << "\n\n";
          else
            non++;
        }
        if (non == i)
          cout << "\a\aSorry! No record found !!";
        cout << "\nExit ? (Y/N)";
        cin >> s;
        if (s == 'N' || s == 'n') {
          goto LOOP4;
        } else
          cout << "\n\a\aThank You for Using this Application.\n\n";
      }
      break;
      case 2: {
        cout << "ID\t\tNAME\t\tDeparture\t\tArriving\t\tTrain_Name\t\t\tID_INFO\t\tAGE\t\tFARE\n\n";
        for (j = 0; j < i; j++) {
          if (tr[j] == "Rajdhani Express (Sealdah)")
            cout << id[j] << "\t\t" << nam[j] << " " << lst[j] << "\t" << dep[j] << "\t\t\t" << ari[j] << "\t\t" << tr[j] << "\t\t" << ide[j] << "\t\t" << age[j] << "\t\t" << far[j] << "\n\n";
          else
            non++;
        }
        if (non == i)
          cout << "\a\aSorry! No record found !!";
        cout << "\nExit ? (Y/N)";
        cin >> s;
        if (s == 'N' || s == 'n') {
          goto LOOP4;
        } else
          cout << "\n\a\aThank You for Using this Application.\n\n";
      }
      break;
      case 3: {
        cout << "ID\t\tNAME\t\tDeparture\t\tArriving\t\tTrain_Name\t\t\tID_INFO\t\tAGE\t\tFARE\n\n";
        for (j = 0; j < i; j++) {
          if (tr[j] == "Shatabdi Express (Howrah)")
            cout << id[j] << "\t\t" << nam[j] << " " << lst[j] << "\t" << dep[j] << "\t\t\t" << ari[j] << "\t\t" << tr[j] << "\t\t" << ide[j] << "\t\t" << age[j] << "\t\t" << far[j] << "\n\n";
          else
            non++;
        }
        if (non == i)
          cout << "\a\aSorry! No record found !!";
        cout << "\nExit ? (Y/N)";
        cin >> s;
        if (s == 'N' || s == 'n') {
          goto LOOP4;
        } else
          cout << "\n\a\aThank You for Using this Application.\n\n";
      }
      break; 
      case 4: {
        cout << "ID\t\tNAME\t\tDeparture\t\tArriving\t\tTrain_Name\t\t\tID_INFO\t\tAGE\t\tFARE\n\n";
        for (j = 0; j < i; j++) {
          if (tr[j] == "Shatabdi Express (Sealdah)")
            cout << id[j] << "\t\t" << nam[j] << " " << lst[j] << "\t" << dep[j] << "\t\t\t" << ari[j] << "\t\t" << tr[j] << "\t\t" << ide[j] << "\t\t" << age[j] << "\t\t" << far[j] << "\n\n";
          else
            non++;
        }
        if (non == i)
          cout << "\a\aSorry! No record found !!";
        cout << "\nExit ? (Y/N)";
        cin >> s;
        if (s == 'N' || s == 'n') {
          goto LOOP4;
        } else
          cout << "\n\a\aThank You for Using this Application.\n\n";
      }
      break;   
      case 5: {
        cout << "ID\t\tNAME\t\tDeparture\t\tArriving\t\tTrain_Name\t\t\tID_INFO\t\tAGE\t\tFARE\n\n";
        for (j = 0; j < i; j++) {
          if (tr[j] == "Garib Rath (Kolkata)")
            cout << id[j] << "\t\t" << nam[j] << " " << lst[j] << "\t" << dep[j] << "\t\t\t" << ari[j] << "\t\t" << tr[j] << "\t\t" << ide[j] << "\t\t" << age[j] << "\t\t" << far[j] << "\n\n";
          else
            non++;
        }
        if (non == i)
          cout << "\a\aSorry! No record found !!";
        cout << "\nExit ? (Y/N)";
        cin >> s;
        if (s == 'N' || s == 'n') {
          goto LOOP4;
        } else
          cout << "\n\a\aThank You for Using this Application.\n\n";
      }
      break;
      case 6: {
        cout << "ID\t\tNAME\t\tDeparture\t\tArriving\t\tTrain_Name\t\t\tID_INFO\t\tAGE\t\tFARE\n\n";
        for (j = 0; j < i; j++) {
          if (tr[i] == "Duronto Express (Kolkata)")
            cout << id[j] << "\t\t" << nam[j] << " " << lst[j] << "\t" << dep[j] << "\t\t\t" << ari[j] << "\t\t" << tr[j] << "\t\t" << ide[j] << "\t\t" << age[j] << "\t\t" << far[j] << "\n\n";
          else
            non++;
        }
        if (non == i)
          cout << "\a\aSorry! No record found !!";
        cout << "\nExit ? (Y/N)";
        cin >> s;
        if (s == 'N' || s == 'n') {
          goto LOOP4;
        } else if (s == 'Y' || s == 'y')
          cout << "\n\a\aThank You for Using this Application.\n\n";
      }
      }
      break;
      default: {
        cout << "\nWrong Input.\n";
      }
      break;

    } //Concession is 5% for 18 years, Individual name, Actual fare, Concession Amount, Final Amount

    case 2: {
      cout << "\nList of Passengers below 18 years:\n";
      cout << "ID\t\tNAME\t\tTrain_Name\t\t\tAGE\t\tFARE\t\tCONCESSION_AMT\t\tFINAL_AMT\n\n";

      for (j = 0; j < i; j++) {
        if (age[j] < 18) {
          heft = (5 * far[j]) / 100;
          lew[j] = far[j] - heft;
          cout << nam[j] << "\t\t" << lst[j] << "\t\t" << tr[j] << "\t\t" << age[j] << "\t\t" << far[j] << "\t" << heft << "\t" << lew[j] << "\n\n";
        } else
          non++;
        if (non == i)
          cout << "\a\aSorry! No record found !!";
        cout << "\nExit ? (Y/N)";
        cin >> s;
        if (s == 'N' || s == 'n') {
          goto LOOP4;
        } else if (s == 'Y' || s == 'y')
          cout << "\n\a\aThank You for Using this Application.\n\n";
        cout << "\nExit ? (Y/N)";
        cin >> s;
        if (s == 'N' || s == 'n') {
          goto LOOP4;
        } else
          cout << "\n\a\aThank You for Using this Application.\n\n";
        exit(0);

      }
    }
    }
    break;
    default: {
      cout << "\n\aWrong Input\nDo You Want To Continue ? (Y/N)";
      cin >> b;
      if (b == 'Y' || b == 'y') {
        goto LOOP4;
      } else
        cout << "\n\a\aThank You for Using this Application.\n\n";
    }
  }
 
  //It sorts detail on the basis of: Age or Fare       
  case 4: {
    cout << "\nSort By :-\n1. Age\n2. Fare\n";
    int help;
    cin >> help;
    switch (help) {
    case 1: {
      int v, t, temp;
      for (v = 0; v < i - 1; v++) {
        for (t = 0; t < i - 1; t++) {
          if (age[t] > age[t + 1]) {
            temp = age[t];
            age[t] = age[t + 1];
            age[t + 1] = temp;
          }
        }
      }
      for (j = 0; j < i; j++)
        cout << id[j] << "\t\t" << nam[j] << " " << lst[j] << "\t" << dep[j] << "\t\t\t" << ari[j] << "\t\t" << tr[j] << "\t\t" << ide[j] << "\t\t" << age[j] << "\t\t" << far[j] << "\n\n";
      cout << "Do You Want to Exit? (Y/N)";
      cin >> b;
      if (b == 'N' || b == 'n') {
        goto LOOP4;
      } else
        cout << "\n\a\aThank You for Using this Application.\n\n";
      exit(0);
    }
    break;

    case 2: {
      int v, t;
      float temp;
      for (v = 0; v < i - 1; v++) {
        for (t = 0; t < i - 1; t++) {
          if (far[t] > far[t + 1]) {
            temp = far[t];
            far[t] = far[t + 1];
            far[t + 1] = temp;
          }
        }
      }
      for (j = 0; j < i; j++)
        cout << id[j] << "\t\t" << nam[j] << " " << lst[j] << "\t" << dep[j] << "\t\t\t" << ari[j] << "\t\t" << tr[j] << "\t\t" << ide[j] << "\t\t" << age[j] << "\t\t" << far[j] << "\n\n";

      cout << "Do You Want to Exit? (Y/N)";
      cin >> b;
      if (b == 'N' || b == 'n') {
        goto LOOP4;
      } else
        cout << "\n\a\aThank You for Using this Application.\n\n";
      exit(0);
    }
    break;
    default: {
      cout << "\n\aWrong Input\nDo You Want To Continue ? (Y/N)";
      cin >> b;
      if (b == 'Y' || b == 'y') {
        goto LOOP4;
      } else
        cout << "\n\a\aThank You for Using this Application.\n\n";
      exit(0);
    }
    }
    break;
  }
  
  
  //It deletes a record on the basis of ID assigned by the Indian Railways Reservation System    
  case 5: {
    int pos, j;
    cout << "\nEnter ID :\n ";
    cin >> pos;

    if (pos <= 1000 || pos > (1000 + i)) {
      cout << "\nInvalid Position.\n\n";
    }
    for (j = pos + 1; j <= i; j++) {
      id[j - 1] = id[j];
    }
    i = i - 1;
    for (j = 0; j < i; j++)
      cout << id[j] << "\t\t" << nam[j] << " " << lst[j] << "\t" << dep[j] << "\t\t\t" << ari[j] << "\t\t" << tr[j] << "\t\t" << ide[j] << "\t\t" << age[j] << "\t\t" << far[j] << "\n\n";
    cout << "Do You Want to Exit? (Y/N)";
    cin >> b;
    if (b == 'N' || b == 'n') {
      goto LOOP4;
    } else if (b == 'Y' || b == 'y')
      cout << "\n\a\aThank You for Using this Application.\n\n";
  }
  break;
  }
}
```

## OUTPUT:
![picRail1](https://user-images.githubusercontent.com/89743157/140650256-8b943a65-64ce-4907-b5d1-09b09ad66d56.jpeg)
![picRail2](https://user-images.githubusercontent.com/89743157/140650272-05892d85-3c9a-4b9f-8942-b7b0d6ef9bbd.jpeg)
![picRail3](https://user-images.githubusercontent.com/89743157/140650274-d3a806ee-c51f-42cf-ab5b-b31be4e90246.jpeg)
![picRail4](https://user-images.githubusercontent.com/89743157/140650283-7c412cfb-a926-4bd8-9923-e35d1a64b6c1.jpeg)
![picRail5](https://user-images.githubusercontent.com/89743157/140650288-0b52b74a-78dd-488c-930f-f314bfc59844.jpeg)
