#include <stdio.h>
#include <string.h>
#include<stdbool.h>

int main() {
    char g[100], p[100], v[100];
    printf("  Please Login to Use this app :\n");
     int i = 1;
    while (i) {
        printf("  Enter Your Gmail : \n");
        scanf("%s", g);

        int a = strlen(g);
        int atFlag = 0, dotFlag = 0;

        for (int j = 0; j < a; j++) {
            if (g[j] == '@') {
                atFlag = 1;
            } else if (g[j] == '.') {
                dotFlag = 1;
            }
        }

        if (!atFlag || !dotFlag) {
            printf("Invalid email: Please enter a valid email.\n");
        } else {
            i = 0;
        }
    }
    
    i=1;
    while (i)
    {
       printf("  Enter Your Password: \n");
       scanf("%s", p);
      int a=strlen(p);
      if(a>=8&&a<=12){
         printf("  Verify Your Password: \n");
         scanf("%s", v);
      }else printf("enter a valid password:\n");

      if(strcmp(p,v)==0){
        i=0;
      }else printf("enter a valid password:\n");
    }

    if (strcmp(v, p) == 0) {
        printf("  *********Welcome to Transport App**************\n");
        printf("                                                        \n");

        int select, type, km, price = 0;
        printf("   Which Type Of Vehicle You Want To Select: \n");
        printf("   1. Car (Press 1) \n");
        printf("   2. Bike (Press 2) \n");
        printf("   3. Bus (Press 3) \n");
        printf("   4. Truck (Press 4) \n");
        scanf("%d", &select);

        if (select == 1) {
            printf(" **Which Type Of CAR You Want: \n");
            printf("  1. AC Car (press 1)\n");
            printf("  2. Without AC Car (press 2)\n");
            scanf("%d", &type);

            if (type == 1) {
                price = 500;
                printf("Thanks For Booking AC car. We are reaching soon** \n");
                printf("Price for this ride is 500 Rs Per Kilometer.\n");
                printf("*Select How many kilometers you want to travel*  ?\n");
                scanf("%d", &km);
            } else if (type == 2) {
                price = 350;
                printf("Thanks For Booking car. We are reaching soon  \n");
                printf("Price for this ride is 350 Rs Per Kilometer. Select How many kilometers you want to travel?\n");
                scanf("%d", &km);
            }
        } else if (select == 2) {
            price = 200; 
            printf("   Thanks For Booking a Bike. We are reaching soon** \n");
            printf("   Price for this ride is 200 Rs Per Kilometer.\n");
            printf("   *Select How many kilometers you want to travel*  ?\n");
            scanf("%d", &km);
        } else if (select == 3) {
            price = 1000; // Assuming a price for bus ride
            printf("   Thanks For Booking a Bus. We are reaching soon** \n");
            printf("   Price for this ride is 1000 Rs Per Kilometer.\n");
            printf("   *Select How many kilometers you want to travel*  ?\n");
            scanf("%d", &km);
        } else if (select == 4) {
            price = 800; 
            printf("   Thanks For Booking a Truck. We are reaching soon** \n");
            printf("   Price for this ride is 800 Rs Per Kilometer.\n");
            printf("   *Select How many kilometers you want to travel*  ?\n");
            scanf("%d", &km);
        } else {
            printf("  Invalid selection!\n");
            return 1; 
        }

        int totalPrice = price * km;
        printf("    Your total Cost for Ride is: %d Rs. We are Reaching in 5 mins\n", totalPrice);
        printf("    \n");
        printf("    \n");

        int i;
        printf("if you want this ride\n for yes press 1:\nfor no press 2: ");
        scanf("%d",&i);
        if(i==1){
            printf("ride is on the way: \n *********THANK YOU*********");
        }else printf("THANK YOU FOR USING THIS APP:");
    } else {
        printf("Password Does not Match. Please Restart the app \n");
    }

    return 0;
}
