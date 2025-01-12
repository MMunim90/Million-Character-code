//unsolved program in 662 and 686 no. line.

/*#include<stdio.h>
int main()
{
    double a;

    a = 1000;
    printf("value of a is %.lf\n", a);


    a = - 21000;
    printf("value of a is %.lf\n", a);


    a = 10000000;
    printf("value of a is %.lf\n", a);


    a = - 10000000;
    printf("value of a is %.lf\n", a);


    a = 100020004000503;
    printf("value of a is %.lf\n", a);


    a = - 4325987632;
    printf("value of a is %.lf\n", a);

    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    int num1, num2, value;
    char sign;

    printf("please enter a number: ");
    scanf("%d", &num1);
    printf("please enter another number: ");
    scanf("%d", &num2);

    value = num1 + num2;
    sign = '+';
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    value = num1 - num2;
    sign = '-';
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    value = num1 * num2;
    sign = '*';
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    value = num1 / num2;
    sign = '/';
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    getch();
}*/

/*#include<stdio.h>
int main()
{
    int n = 1;
    while(n <= 10)
    {
        printf("%d\n",n);
        //n++;
        break;
    }
    n++;

    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int n = 1;

    while(n <= 100)
    {
        printf("%d\n", n);
        n++;
        if(n > 10)
        {
            break;
        }
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n = 0;

    while(n<10)
    {
        n = n + 1;
        if(n % 2 == 0)
        {
            continue;
        }
        printf("%d\n", n);
    }
    return 0;
}*/

// multiplication a number using while loop

/*#include<stdio.h>
int main()
{
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i <= 10)
    {
        printf("%d X %d = %d\n", i, n, n*i);
        i = i + 1;
    }
    return 0;
}*/

//multiplication a number using for loop

/*#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n", i, n, i*n);
    }
    return 0;
}*/

//we can also write this program in another way
/*#include<stdio.h>
int main()
{
    int n, i=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for( ; ; )
    {
        printf("%d X %d = %d\n", i, n, i*n);
        i = i + 1;
        if(i > 10)
        {
            break;
        }
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int m=0, n=9, i=1;

    for( ; i<=10;i=i+1)
    {
        m = m + n;
        printf("%d X %d = %d\n", i, n, m);
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int n, i;

    for(n=1; n<=20; n=n+1)
    {
        for(i=1; i<=10; i=i+1)
        {
            printf("%d X %d = %d\n", n, i, n*i);
        }
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int m, i, j;

    for(j=1; j<=20; j++)
    {
        for(i=1; i<=10; i++)
        {
            m = m + j;
            printf("%d X %d = %d\n", j, i, m);
        }
        m = 0;
    }
    return 0;
}*/

//permutation
/*/#include<stdio.h>
int main()
{
    int a, b, c;

    for(a=1; a<=3; a++)
    {
        for(b=1; b<=3; b++)
        {
            if(b!=a)
            {
                for(c=1; c<=3; c++)
                {
                    if(c!=a && c!=b)
                    {
                        printf("%d %d %d\n", a, b, c);
                    }
                }
            }
        }
    }
    return 0;
}*/

// we can also write this program in this way
/*#include<stdio.h>
int main()
{
    int a, b, c;

    for(a=1; a<=3; a++)
    {
        for(b=1; b<=3; b++)
        {
            for(c=1; c<=3; c++)
            {
                if(a!=b && a!=c && b!=c)
                {
                    printf("%d %d %d\n", a, b, c);
                }
            }
        }
    }
    return 0;
}*/


//when 4x + 5y = 14, 5x + 6y = 17, what is the value of x and y

/*#include<stdio.h>
int main()
{
    double x, y, a1, a2, b1, b2, c1, c2;

    printf("Enter the  value of a1: ");
    scanf("%lf", &a1);
    printf("Enter the  value of b1: ");
    scanf("%lf", &b1);
    printf("Enter the  value of c1: ");
    scanf("%lf", &c1);
    printf("Enter the  value of a2: ");
    scanf("%lf", &a2);
    printf("Enter the  value of b2: ");
    scanf("%lf", &b2);
    printf("Enter the  value of c2: ");
    scanf("%lf", &c2);

    x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
    y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);

    printf("The value of x is: %.3lf\n", x);
    printf("The value of y is: %.3lf\n", y);

    return 0;
}*/

/*we can calculate this (a1 * b2 ­ a2 * b1) only one time instead of two time
 and if (a1 * b2 ­ a2 * b1) value is zero the the program gonna show an error
 for that reason we rewrite the program*/
/*#include<stdio.h>
int main()
{
    double a1, b1, c1, a2, b2, c2, x, y, d;

    printf("Enter the value of a1: ");
    scanf("%lf", &a1);
    printf("Enter the value of b1: ");
    scanf("%lf", &b1);
    printf("Enter the value of c1: ");
    scanf("%lf", &c1);
    printf("Enter the value of a2: ");
    scanf("%lf", &a2);
    printf("Enter the value of b2: ");
    scanf("%lf", &b2);
    printf("Enter the value of c2: ");
    scanf("%lf", &c2);

    d = (a1 * b2 - a2 * b1);
    if((int) d == 0)
    {
        printf("Value of x and y can not be determined.\n");
    }
    else
    {
        x = (b2 * c1 - b1 * c2) / d;
        y = (a1 * c2 - a2 * c1) / d;

        printf("The value of x is: %.3lf\n", x);
        printf("The value of y is: %.3lf\n", y);
    }

    return 0;
}*/

//we can solve it by another way (
// when x + y = 15, x y = 5, what is the value of x and y

/*#include<stdio.h>
int main()
{
    double x, y, x_plus_y, x_minus_y;

    printf("Enter the value of x+y: ");
    scanf("%lf", &x_plus_y);
    printf("Enter the value of x-y: ");
    scanf("%lf", &x_minus_y);

    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;

    printf("The value of x is: %.3lf\n", x);
    printf("The value of y is: %.3lf\n", y);

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    double loan_amount, interest_rate, number_of_years, total_amount, monthly_amount;

    printf("Enter the loan_amount: ");
    scanf("%lf", &loan_amount);
    printf("Enter the interest_rate: ");
    scanf("%lf", &interest_rate);
    printf("Enter the number_of_years: ");
    scanf("%lf", &number_of_years);

    total_amount = loan_amount + loan_amount * interest_rate * number_of_years / 100;
    monthly_amount = total_amount / (number_of_years * 12);

    printf("The total amount is: %.3lf\n", total_amount);
    printf("The monthly amount is: %.3lf\n", monthly_amount);

    return 0;
}*/

// now we solve a physics problem
/*#include<stdio.h>
int main()
{
    double initial_velocity, acceleration, time, velocity, distance;

    printf("Enter the initial_velocity of the matter: ");
    scanf("%lf", &initial_velocity);
    //printf("Enter the acceleration of the matter: ");
    //scanf("%lf", &acceleration);
    //when acceleration is constant and didnot mention any value of acceleration.
    printf("Enter the time: ");
    scanf("%lf", &time);

    // when acceleration is constant.
    velocity = initial_velocity + time;
    //when acceleration is`nt constant.
    //velocity = initial_velocity + acceleration * time;
    distance = 2 * time * velocity;

    printf("The distance is: %.2lf meter", distance);

    return 0;
}*/

//sum of a series
/*#include<stdio.h>
int main()
{
    float a, x;

    printf("Enter the last value of the series: ");
    scanf("%f", &a);

    x = (a * (a + 1)) / 2;

    printf("The sum of the series is: %.2f", x);

    return 0;
}*/

//this problem can be solve by using loop
/*#include<stdio.h>
int main()
{
    int a, x, i;

    printf("Enter the last valur of the series: ");
    scanf("%d", &a);

    for(i=1; i<=a; i++)
    {
        //x = (a * (a + 1)) /2;
        x = x + i;
    }
    printf("The sum of the series is: %d", x);

    return 0;
}*/

//sum of n number`s positive odd number`s
/*#include<stdio.h>
int main()
{
    int a, x=0, k;

    printf("Enter the last number of the series: ");
    scanf("%d", &a);

    for(k=1; k<=a; k+=2)
    {
        x = x + k;
    }

    printf("The sum of the positive odd number`s is: %d", x);

    return 0;
}*/

//celsius to farenheit
/*#include<stdio.h>
int main()
{
    float celsius, farenheit;

    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);

    farenheit = (celsius * 1.8) + 32;

    printf("The temperature in farenheit is: %f", farenheit);

    return 0;
}*/

//farenheit to celsius
/*#include<stdio.h>
int main()
{
    float farenheit, celsius;

    printf("Enter the temperature in farenheit: ");
    scanf("%f", &farenheit);

    celsius = (farenheit - 32) / 1.8;

    printf("The termperature in celsius is: %f", celsius);

    return 0;
}*/

//GCD
/*#include<stdio.h>
int main()
{
    int a, b, x, gcd;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if(a>b)
    {
        x = b;
    }
    else if(b>a)
    {
        x = a;
    }

    for( ; x>=1; x--)
    {
        if(a%x == 0 && b%x == 0)
        {
            gcd = x;
            break;
        }
    }
    printf("The GCD is: %d\n", gcd);

    return 0;
}*/

//we can write this program also this way
/*#include<stdio.h>
int main()
{
    int a,b,t,gcd;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    if(a == 0)
    {
        gcd = a;
    }
    else if(b == 0)
    {
        gcd = b;
    }
    else
    {
        while(b != 0)
        {
            t = b;
            b = a%b;
            a = t;
        }
        gcd = a;
    }
    printf("GCD is %d\n", gcd);

    return 0;
}*/

//LCM
/*#include<stdio.h>
int main()
{
    int a, b, t, multiply, gcd, lcm;

    printf("Enter first and second number: ");
    scanf("%d %d", &a, &b);

    multiply = (a * b);

    if(a>b)
    {
        t = b;
    }
    else
    {
        t = a;
    }
    for( ; t>=1; t--)
    {
        if(a%t == 0 && b%t == 0)
        {
            gcd = t;
            break;
        }
    }

    printf("The GCD is: %d\n", gcd);
    lcm = (multiply / gcd);
    printf("The LCM is: %d\n", lcm);

    return 0;
}*/

//Array
/*#include<stdio.h>
int main()
{
    int ft_marks, st_marks, final_marks;
    double total_marks;

    printf("Enter first term exam marks: ");
    scanf("%d", &ft_marks);
    printf("Enter second term exam marks: ");
    scanf("%d", &st_marks);
    printf("Enter final exam marks: ");
    scanf("%d", &final_marks);

    total_marks = ((ft_marks * 0.25) + (st_marks * 0.25) + (final_marks * 0.50)); //output = 87
    //total_marks = ((ft_marks / 4.0) + (st_marks / 4.0) + (final_marks / 2.0)); //output = 87
    //total_marks = ((ft_marks / 4) + (st_marks / 4) + (final_marks / 2)); //output = 86

    printf("The total marks is: %.lf\n", total_marks);

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    printf("First element: %d\n", arr[0]);
    printf("Third element: %d\n", arr[2]);

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int arr[5] = {6, 7, 4, 6, 9};

    printf("%d\n", arr[-1]);
    printf("%d\n", arr[5]);
    printf("%d\n", arr[100]);

    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int arr[9] = {5, 6, 9, 2, 5, 6, 9, 3, 9};
    int i;

    for(i=8; i>=0; i--)
    {
        printf("%d th element is: %d\n", i+1, arr[i]);
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[9];
    int i, j;

    for(i=0, j=8; i<=8; i++, j--)
    {
        arr2[j] = arr[i];
        printf("%d\n", arr[j]);
    }
    for(i=0; i<=8; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}*/

//unsolved
/*#include<stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    //int arr2[9];
    int i, j;

    for(i=0, j=8; i<9; i++, j--)
    {
        arr2[j] = arr[i];
    }
    for(i=0; i<9; i++)
    {
        arr[i] = arr[i];
    }
    for(i=8; i>=0; i--)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}*/

//we can write this program without declare second array
//also unsolved
/*#include<stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;

    for(i=0, j=9; i<10; i++, j--)
    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    for(i=0; i<10; i++)//i=0; i<10; i++
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}*/

//print 40 student`s total marks using array,
/*#include<Stdio.h>
int main()
{
    int ft_marks[40] =
    {
        83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90,
        59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82,
        82, 58, 69, 67, 53, 56, 71, 62
    },
    st_marks[40] =
    {
        86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63,
        86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58,
        69, 67, 53, 56, 71, 62, 49
    },
    final_marks[40] =
    {
        87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55,
        69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64,
        55, 69, 85, 81, 80, 67, 88, 71
    };
    int i;
    double total_marks[40];

    for(i=0; i<40; i++)
    {
        total_marks[i] = ft_marks[i] * 0.25 + st_marks[i] * 0.25 + final_marks[i] * 0.50;
    }
    for(i=1; i<=40; i++)
    {
        printf("Roll NO: %d\t Total Marks: %.lf\n", i, total_marks[i-1]);
    }
    int marks, count = 0;
    for(marks=50; marks<=100; marks++)
    {
        for(i=0; i<40; i++)
        {
            if(total_marks[i] == marks)
            {
                count = count + 1;
            }
        }
        printf("Marks: %d Count: %d\n", marks, count);
    }
    return 0;
}*/

//now we can write this program in another way
/*#include<stdio.h>
int main()
{
    int total_marks[] =
    {
        86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
        65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
        62, 66, 76, 70, 67, 65, 77, 63
    };
    int i;
    int marks_count[101];

    for(i=0; i<101; i++)
    {
        marks_count[i] = 0;
    }
    for(i=0; i<40; i++)
    {
        marks_count[total_marks[i]]++;
    }
    for(i=50; i<=100; i++)
    {
        printf("Marks: %d Count: %d\n", i, marks_count[i]);
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int i, j;
    int total_marks[] = {6, 7, 4, 6, 9, 7, 6, 2, 4, 3, 4, 1};
    int marks_count[11];

    for(i=0; i<11; i++)
    {
        marks_count[i] = 0;
    }
    for(i=0; i<12; i++)
    {
        marks_count[total_marks[i]]++;
        for(j=0; j<=10; j++)
        {
            printf("%d  ", marks_count[j]);
        }
        printf("\n");
    }
    return 0;
}*/

//https://www.simplilearn.com/tutorials/cpp-tutorial/polymorphism-in-cpp


/*#include<Stdio.h>
int main()
{
    int ft_marks[40], st_marks[40], final_marks[40], i;

    printf("Enter first term exam marks: \n");
    for(i=0; i<40; i++)
    {
        scanf("%d", &ft_marks[i]);
    }

    printf("Enter second term exam marks: \n");
    for(i=0; i<40; i++)
    {
        scanf("%d", &st_marks[i]);
    }

    printf("Enter final exam marks: \n");
    for(i=0; i<40; i++)
    {
        scanf("%d", &final_marks[i]);
    }

    double  total_marks[40];
    for(i=0; i<40; i++)
    {
        total_marks[i] = ft_marks[i] * 0.25 + st_marks[i] * 0.25 + final_marks[i] * 0.50;
    }

    for(i=1; i<=40; i++)
    {
        printf("Roll NO: %d\tTotal Marks: %.lf\n", i, total_marks[i-1]);
    }

    int marks_count[101];
    for(i=0; i<101; i++)
    {
        marks_count[i] = 0;
    }

    for(i=0; i<40; i++)
    {
        marks_count[(int)total_marks[i]]++;
    }
    for(i=50; i<=100; i++)
    {
        printf("Marks: %d Count: %d\n", i, marks_count[i]);
    }
    return 0;
}*/


//function
/*#include<stdio.h>
double add(double num1, double num2)
{
    double sum = num1 + num2;
    return sum;
}
int main()
{
    double a, b, c;
    a = 2.8;
    b = 2.7;
    c = add(a, b);
    printf("%lf\n", c);

    return 0;
}*/

/*#include<stdio.h>
double add(double a, double b);
int main()
{
    double a = 2.8, b = 2.7, c;

    c = add(a, b);
    printf("%lf\n", c);

    return 0;
}
double add(double a, double b)
{
    double sum = a + b;
    return sum;
}*/


//using global variable.
/*#include<stdio.h>
int x = 10, y = 20, z = 30;
int test_function()
{
    y = x;
    x = 2 * y;
    return (x * y);
}
int main()
{
    //int x = 10, y = 20, z = 30;
    z = test_function(x);
    printf("%d %d %d\n", x, y, z);

    return 0;
}*/

/*#include<stdio.h>
double pi = 3.14;
void my_func()
{
    //double pi;
    pi = 3.1416;
}
int main()
{
    printf("The value of pi is: %lf\n", pi);
    my_func();
    printf("The value of pi is: %lf\n", pi);

    return 0;
}*/


//function parameter array
//find max number
/*#include<stdio.h>
int find_max(int arr[], int n)
{
    int max = arr[0];
    int i;

    for(i=0; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[100];
    int n;

    printf("How many numbers do you want to compare?\n");
    scanf("%d", &n);

    printf("Enter %d numbers: \n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = find_max(arr, n);
    printf("The max value is: %d\n", max);

    return 0;
}*/


//find max number
/*#include<stdio.h>

int find_max(int arr[], int n);

int main()
{
    int arr[] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
    int n = 11;
    int max = find_max(arr, n);
    printf("%d\n", max);

    return 0;
}
int find_max(int arr[], int n)
{
    int max = arr[0];
    int i;
    for(i=1; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}*/


//find min number
/*#include<stdio.h>
int find_min(int arr[], int n)
{
    int min = arr[0];
    int i;
    for(i=0; i<n; i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[100];
    int n;
    printf("How many numbers do you want to compare? \n");
    scanf("%d", &n);
    printf("Enter %d numbers: \n", n);
    for(int i=1; i<n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    int min = find_min(arr, n);
    printf("The minimum number is: %d\n", min);

    return 0;
}*/


//find average
/*#include<stdio.h>
int find_avg(int arr[], int n);
int main()
{
    int arr[100];
    int n;
    printf("How many numbers you want to average: \n");
    scanf("%d", &n);
    printf("Enter %d numbers: \n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    float avg = (float)find_avg(arr, n);
    printf("The average is: %.2f\n", avg);

    return 0;
}
int find_avg(int arr[], int n)
{
    int avg = 0, i;
    int sum = arr[i];

    for(i=0; i<n; i++)
    {
        sum = (sum + arr[i]);
    }
    avg = sum / n;
    return avg;
}*/

/*#include<stdio.h>
void test_function(int arr[])
{
    arr[0] = 100;
    return;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("%d\n", arr[0]);
    test_function(arr);
    printf("%d\n", arr[0]);
    return 0;
}*/


//area of a circle
/*#include<stdio.h>
double total_area(double area, double n)
{
    double pi = 3.1416;
    area = pi * n * n;
    return area;
}
int main()
{
    double n;
    printf("Enter the value of a radious of the circle: ");
    scanf("%lf", &n);
    double area = total_area(area, n);
    printf("The area  of the circle is: %.3lf\n", area);

    return 0;
}*/

//find sum
/*#include<stdio.h>
int find_sum(int arr[], int n);
int main()
{
    int arr[100];
    int n;
    printf("Enter how many numbers you want to sum: ");
    scanf("%d", &n);
    printf("Enter %d numbers: \n", n);
    for(int i=0; i<n; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    int sum = find_sum(arr, n);
    printf("The sum of the all numbers are: %d\n", sum-1);

    return 0;
}
int find_sum(int arr[], int n)
{
    int i;
    int sum = arr[i];
    for(i=0; i<n; i++)
    {
        sum = (sum + arr[i]);
    }
    return sum;
}*/

//binary search
/*#include<stdio.h>
int main()
{
    int arr[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_indx = 0;
    int high_indx = 15;
    int mid_indx;
    int num = 97;

    while(low_indx <= high_indx)
    {
        mid_indx = (low_indx + high_indx) / 2;
        if(num == arr[mid_indx])
        {
            break;
        }
        if(num < arr[mid_indx])
        {
            high_indx = mid_indx - 1;
        }
        else
        {
            low_indx = mid_indx + 1;
        }
    }
    if(low_indx > high_indx)
    {
        printf("%d is not in the array\n", num);
    }
    else
    {
        printf("%d is found in the array. It is th %dth element of the array.\n", arr[mid_indx], mid_indx);
    }
    return 0;
}*/

//binary search using function
/*#include <stdio.h>

int binary_search(int array[], int size, int num) {
    int low_indx = 0;
    int high_indx = size - 1;
    int mid_indx;

    while (low_indx <= high_indx) {
        mid_indx = (low_indx + high_indx) / 2;

        if (num == array[mid_indx]) {
            return mid_indx;
        }
        if (num < array[mid_indx]) {
            high_indx = mid_indx - 1;
        } else {
            low_indx = mid_indx + 1;
        }
    }
    return -1;
}

int main() {
    int num, p;
    int array[100];
    printf("Enter a number: ");
    scanf("%d", &p);

    printf("Enter %d numbers in array: \n", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &array[i]);
            }

    for (int i = 0; i < p - 1; i++) {
        for (int j = 0; j < p - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: \n");
    for (int i = 0; i < p; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("Enter a number to search: ");
    scanf("%d", &num);

    int result = binary_search(array, p, num);
    if (result != -1) {
        printf("Number %d found at index %d.\n", num, result);
    } else {
        printf("Number %d not found in the array.\n", num);
    }

    return 0;
}*/


//string
/*#include<stdio.h>
int main()
{
    char country[] = {'B','a','n','g','l','a','d','e','s','h','\0'};
    char country2[] = {'B','a','n','g','l','a','d','e','s','h',' ','i','s',' ','m','y',' ','c','o','u','n','t','r','y',' '};
    printf("%s\n", country);
    printf("%s\n", country2);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    char country[] = {'B','a','n','g','l','a','d','e','s','h',' '};
    int i, length;
    printf("%s\n", country);
    length = 10;
    for(i=0; i<length; i++)
    {
        if(country[i] >= 97 && country[i] <=122)
        {
            country[i] = 'A' + (country[i] - 'a');
        }
    }
    printf("%s\n", country);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    char country[] = {'B','A','N','G','L','A','D','E','S','H',' '};
    int i, length;
    printf("%s\n", country);
    length = 10;
    for(i=0; i<length; i++)
    {
        if(country[i] >= 65 && country[i] <= 90)
        {
            country[i] =  'a' + (country[i] - 'A');
        }
    }
    printf("%s\n", country);
    return 0;
}*/

/*#include<stdio.h>
int string_length(char str[])
{
    int i, length = 0;
    for(i=0; str[i]!='\0'; i++)
    {
        length++;
    }
    return length;
}
int main()
{
    char country[100];
    int length;

    while(1 == scanf("%s", country))
    {
        length = string_length(country);
        printf("length: %d\n", length);
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    char arr[100];
    while(NULL != gets(arr))
    {
        printf("%s\n", arr);
    }
    return 0;
}*/


/*#include<stdio.h>
int string_length(char str[])
{
    int i=0, length=0;

    while(str[i] != '\0')
    {
        i++;
        length++;
    }
    return length;
}
int main()
{
    char country[100];
    int length;

    while(1 == scanf("%s", country))
    {
        length = string_length(country);
        printf("length: %d\n", length);
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    char str1[] = "bangla", str2[] = "desh", str3[12];

    int i, j, length1 = 6, length2 = 4;

    for(i=0, j=0; i<=length1; i++, j++)
    {
        str3[j] = str1[i];
    }
    for(i=0, j=6; i<=length2; i++, j++)
    {
        str3[j] = str2[i];
    }
    str3[j] = '\0';
    //str3[j] = str1[i] + str2[i];
    printf("%s\n", str3);

    return 0;
}*/


//unsolved
/*#include<stdio.h>
int main()
{
    char str1[] = "bangla", str2[] = "desh", str3[12];
    int i, j, length1 = 6, length2 = 4;
    for(i=0; i<=length1; i++)
    {
        for(j=0; ;j++)
        {
            str3[j] = str1[i];
        }
    }
    for(i=6; i<=length2; i++)
    {
        for(j=6; ;j++)
        {
            str3[j] = str2[i];
        }
    }
    str3[j] = '\0';
    printf("%s\n", str3);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int x = printf("MUNIM");
    printf("%d", x);
    return 0;
}*/


/*#include <stdio.h>
#include <string.h>

int string_compare(char a[], char b[])
{
    int i;

    for (i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if (a[i] < b[i])
        {
            return -1;
        }
        if (a[i] > b[i])
        {
            return 1;
        }
    }
    if (strlen(a) == strlen(b))
    {
        return 0;
    }
    if (strlen(a) < strlen(b))
    {
        return -1;
    }
    if (strlen(a) > strlen(b))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char a[100], b[100];
    int compare;
    printf("Enter string 1: ");
    scanf("%s", a);
    printf("Enter string 2: ");
    scanf("%s", b);
    compare = string_compare(a, b);
    printf("compare: %d\n", compare);
    return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
    char s[1002], word[100];
    int i, j, length, is_word_started;

    gets(s);

    length = strlen(s);
    is_word_started = 0;

    for(i=0, j=0; i<=length; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            if(is_word_started == 0)
            {
                is_word_started = 1;
                word[j] = 'A' + s[i] - 'a';
                j++;
            }
            else
            {
                word[j] = s[i];
                j++;
            }
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            if(is_word_started == 0)
            {
                is_word_started = 1;
            }
            word[j] = s[i];
            j++;
        }
        else if(s[i] >= '0' && s[i] <= '9')
        {
            if(is_word_started == 0)
            {
                is_word_started = 1;
            }
            word[j] = s[i];
            j++;
        }
        else
        {
            if(is_word_started == 1)
            {
                is_word_started = 0;
                word[j] = '\0';
                printf("%s\n", word);
                j = 0;
            }
        }
    }
    return 0;
}*/


/*#include<stdio.h>
#include<string.h>

int main()
{
    char s[1002], ch;
    int i, length, is_word_started;

    gets(s);
    length = strlen(s);
    is_word_started = 0;

    for(i=0; i<length; i++)
    {
        if(s[i]>= 'a' && s[i] <='z')
        {
            if(is_word_started == 0)
            {
                is_word_started = 1;
                ch = 'A' + s[i] - 'a';
                printf("%c", ch);
            }
            else
            {
                printf("%c", s[i]);
            }
        }
        else if((s[i] >= 'A' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            if(is_word_started == 0)
            {
                is_word_started = 1;
            }
            printf("%c", s[i]);
        }
        else
        {
            if(is_word_started == 1)
            {
                is_word_started = 0;
                printf("\n");
            }
        }
    }
    printf("\n");
    return 0;
}*/


/*#include<stdio.h>
int is_prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }

    for(i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    while(1)
    {
        printf("Please enter a number (enter 0 to exit): ");
        scanf("%d", &n);
        if(n==0)
        {
            break;
        }
        if(1==is_prime(n))
        {
            printf("%d is a prime number. \n", n);
        }
        else
        {
            printf("%d is not a prime number. \n", n);
        }
    }
    return 0;
}*/

/*#include<stdio.h>
int is_prime(int n)
{
    int i;

    if(n<2)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    if(n%2==0)
    {
        return 0;
    }
    for(i=3; i<=n/2; i+=2)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;

    while(1)
    {
        printf("Please enter a number (enter 0 to exit): ");
        scanf("%d", &n);
        if(n==0)
        {
            break;
        }
        if(1 == is_prime(n))
        {
            printf("%d is a prime number.\n", n);
        }
        else
        {
            printf("%d is not a prime number.\n", n);
        }
    }
    return 0;
}*/


/*#include<stdio.h>
#include<math.h>

int is_prime(int n)
{
    int i, root;

    if(n == 2)
    {
        return 1;
    }

    if(n % 2 == 0)
    {
        return 0;
    }

    root = sqrt(n);

    for(i=3; i<=root; i=i+2)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n, m;
    while(1)
    {
        printf("please enter a number (enter 0 to exit): ");
        scanf("%d", &n);

        if(n == 0)
        {
            break;
        }
        if(1 == is_prime(n))
        {
            printf("%d is a prime number.\n", n);
        }
        else
        {
            printf("%d is not a prime number. \n", n);
        }
    }

    return 0;
}*/

/*#include<stdio.h>
#include<math.h>

const int size = 40;
int ara[];

void print_ara()
{
    int i;
    for(i=2; i<size; i++)
    {
        printf("%4d", ara[i]);
    }
    printf("\n");
    for(i=2; i<size; i++)
    {
        printf("----");
    }
    printf("\n");
    for(i=2; i<size; i++)
    {
        printf("%4d", i);
    }
    printf("\n\n\n");
}

void sieve()
{
    int i, j, root;

    for(i=2; i<size; i++)
    {
        ara[i] = 1;
    }

    root = sqrt(size);
    print_ara();
    for(i=2; i<=root; i++)
    {
        if(ara[i] == 1)
        {
            for(j=2; i * j <= size; j++)
            {
                ara[i * j] = 0;
            }
            print_ara();
        }
    }
}

int is_prime(int n)
{
    int i;

    if(n<2)
    {
        return 0;
    }
    return ara[n];
}

int main()
{
    int n, m;

    sieve();

    while(1)
    {
        printf("please enter a number (enter 0 to exit): ");
        scanf("%d", &n);

        if(n==0)
        {
            break;
        }
        if(n>=size)
        {
            printf("the number should be less then %d\n", size);
            continue;
        }
        if(1 == is_prime(n))
        {
            printf("%d is a prime number. \n", n);
        }
        else
        {
            printf("%d is not a prime number. \n", n);
        }
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int marks[4][10] = {{80, 70, 92, 78, 58, 83, 85, 66, 99, 81}, {75, 67,
55, 100, 91, 84, 79, 61, 90, 97}, {98, 67, 75, 89, 81, 83, 80, 90, 88, 77},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    int col;
    for(col = 0; col < 10; col++)
    {
        marks[3][col] = marks[0][col] / 4 + marks[1][col] / 4 + marks[2][col] / 2;
        printf("Roll No: %d  Total marks: %d\n", col+1, marks[3][col]);
    }
    return 0;
}*/


/*#include<stdio.h>

int main()
{
    int marks[4][10];
    //int i, j;
    printf("Enter exam number one by one: ");
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<10; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }

    int col;
    for(col=0; col<10; col++)
    {
        marks[3][col] = marks[0][col] / 4 + marks[1][col] / 4 + marks[2][col] / 2;
        printf("Roll No: %d  Total Marks: %d\n", col + 1, marks[3][col]);
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int row[10];
    int col[10];

    for(int row=1; row<=10; row++)
    {
        for(int col=1; col<=10; col++)
        {
            printf("%d X %d = %d  ",  row, col, row*col);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int namta[10][10];
    int row, col;

    for(row=0; row<10; row++)
    {
        for(col=0; col<10; col++)
        {
            namta[row][col] = (row+1) * (col+1);
            printf("%d X %d = %d\n", (row+1), (col+1), namta[row][col]);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int numta[10][10];
    int row;
    int col;

    for(row=0; row<10; row++)
    {
        for(col=0; col<10; col++)
        {
            numta[row][col] = (row + 1) * (col + 1);
        }
    }

    for(row=0; row<10; row++)
    {
        for(col=0; col<10; col++)
        {
            printf("%d X %d = %d\n", (row + 1), (col + 1), numta[row][col]);
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int namta[10][10];
    int row, col;
    int sum = 0;
    int even_count = 0;
    int odd_count = 0;

    for(row=0; row<10; row++)
    {
        for(col=0; col<10; col++)
        {
            namta[row][col] = (row + 1) * (col + 1);
            printf("%d X %d = %d\n", (row + 1), (col + 1), namta[row][col]);
            sum += namta[row][col];
            if(namta[row][col] % 2 == 0)
            {
                even_count++;
            }
            else
            {
                odd_count++;
            }
        }
        printf("\n");
    }
    printf("the sum of all numbers are: %d\n", sum);

    printf("Number of even elements: %d\n", even_count);

    printf("number of odd elements: %d\n", odd_count);

    return 0;
}*/


/*#include<stdio.h>
int main()
{
    char saarc[7][100] = {"Bnagladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};

    int row;
    for(row=0; row<7; row++)
    {
        printf("%s\n", saarc[row]);
    }
    return 0;
}*/


/*#include<stdio.h>
#include<string.h>
int main()
{
    char saarc[7][100] = {"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Butan", "Maldives"};

    int row, col, name_length;

    for(row=0; row<7; row++)
    {
        name_length = strlen(saarc[row]);
        for(col=0; col<name_length; col++)
        {
            printf("%c", saarc[row][col]);
        }
        printf("\n");
    }
    return 0;
}*/


/*#include<stdio.h>
#include<string.h>

int main()
{
    char saarc[7][100] = {"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};

    int row, col, name_length;

    for(row=0; row<7; row++)
    {
        name_length = strlen(saarc[row]);
        for(col=0; col<name_length; col++)
        {
            printf("(%d, %d) = %c, ", row, col, saarc[row][col]);
        }
        printf("\n");
    }
    return 0;
}*/

//calculating the sum of a 2D arrays row

/*#include<stdio.h>

int main()
{
    int number[5][5] = {{6, 4, 7, 8, 9}, {3, 7, 1, 9, 9}, {8, 6, 4, 2, 7}, {2, 4, 2, 5, 9}, {4, 1, 6, 7, 3}};

    int row, col, sum = 0;

    for(row=0; row<5; row++)
    {
        for(col=0; col<5; col++)
        {
            printf("%d  ", number[row][col]);
        }
        printf("\n");
    }

    printf("\n\n");
    for(row=0; row<5; row++)
    {
        sum = number[row][0] + number[row][1] + number[row][2] + number[row][3] + number[row][4];
        printf("Sum of row %d:  %d\n", (row+1), sum);
    }
    return 0;
}*/

//calculating the sum of 2D arrays columns

/*#include<stdio.h>

int main()
{
    int number[5][5] = {{6, 4, 7, 8, 9}, {3, 7, 1, 9, 9}, {8, 6, 4, 2, 7}, {2, 4, 2, 5, 9}, {4, 1, 6, 7, 3}};
    int row, col, sum=0;

    for(row=0; row<5; row++)
    {
        for(col=0; col<5; col++)
        {
            printf("%d  ", number[row][col]);
        }
        printf("\n");
    }

    printf("\n\n");

    for(col=0; col<5; col++)
    {
        sum = number[0][col] + number[1][col] + number[2][col] + number[3][col] + number[4][col];
        printf("Sum of column %d:  %d\n", (col+1), sum);
    }
    return 0;
}*/

/*#include<stdio.h>

int main()
{
    int number[5][5];
    int row, col;

    printf("Enter numbers(row by row): ");
    for(row=0; row<5; row++)
    {
        for(col=0; col<5; col++)
        {
            scanf("%d", &number[row][col]);
        }
    }

    printf("\n\n");

    for(row=0; row<5; row++)
    {
        for(col=0; col<5; col++)
        {
            printf("%d  ", number[row][col]);
        }
        printf("\n");
    }

    printf("\n\n");

    int sum = 0;

    for(row=0; row<5; row++)
    {
        sum = number[row][0] + number[row][1] + number[row][2] + number[row][3] + number[row][4];
        printf("Sum of row %d: %d\n", (row+1), sum);
    }

    printf("\n\n");

    for(col=0; col<5; col++)
    {
        sum = number[0][col] + number[1][col] + number[2][col] + number[3][col] + number[4][col];
        printf("Sum of column %d: %d\n", (col+1), sum);
    }

    return 0;
}*/


/*#include<stdio.h>
#include<string.h>

int main()
{
    int ara1[5][5] = {{1, 2, 3, 4, 5}, {10, 20, 30, 40, 50}, {100, 200, 300, 400, 500},
    {1000, 2000, 3000, 4000, 5000}, {10000, 20000, 30000, 40000, 50000}};

    int ara2[5][5];

    int row, col;

    printf("Content of first array (ara1): \n");
    for(row=0; row<5; row++)
    {
        for(col=0; col<5; col++)
        {
            printf("%d  ", ara1[row][col]);
        }
        printf("\n");
    }

    printf("\n");
    for(row=0; row<5; row++)
    {
        for(col=0; col<5; col++)
        {
            ara2[col][row] = ara1[row][col];
        }
    }

    printf("Content of second array (second) array (ara2): \n");
    for(row=0; row<5; row++)
    {
        for(col=0; col<5; col++)
        {
            printf("%d  ", ara2[row][col]);
        }
        printf("\n");
    }
    return 0;
}*/



/*#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char binary[] = "10110";

    int len = 5;
    int decimal;
    int power = 4;

    int index;
    for(index=0; index<len; index++)
    {
        decimal += (binary[index] - '0') * pow(2, power);
        power--;
    }
    printf("Converted decimal number is: %d", decimal);

    return 0;
}*/


/*#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char binary[65];
    int len, decimal, power, i;

    printf("Enter the binary number: ");
    scanf("%s", binary);

    decimal = 0;
    len = strlen(binary);
    power = len -1;

    for(i=0; i<len; i++)
    {
        decimal += (binary[i] - '0') * pow(2, power);
        power--;
    }
    printf("Decimal value is: %d\n", decimal);

    return 0;
}*/


/*#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char binary[65];
    int len, decimal, power, i;

    printf("Enter the decimal number: ");
    scanf("%d", decimal);

    binary = 0;
    len = strlen(decimal);
    power = pow();

    for(i=0; i<len; i++)
    {
        binary += (binary[i] -'0') * pow(2, power);
        power--;
    }
    printf("Binary value is %s\n", binary);

    return 0;
}*/


/*#include <stdio.h>

void decimalToBinaryUsingPower(int n) {
    int power = 1;
    int exponent = 0;

    while (power * 2 <= n) {
        power *= 2;
        exponent++;
    }

    printf("Decimal: %d\n", n);
    printf("Binary representation using 2's powers: ");

    while (power > 0) {
        if (n >= power) {
            printf("1");
            n -= power;
        } else {
            printf("0");
        }
        power /= 2;
    }

    printf("\n");
}

int main() {
    int number;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    decimalToBinaryUsingPower(number);

    return 0;
}*/


/*#include <stdio.h>

void Binary(int n) {
    int binary[32];
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary number is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter Decimal number: ");
    scanf("%d", &number);
    printf("Decimal: %d\n", number);
    Binary(number);
    return 0;
}*/


