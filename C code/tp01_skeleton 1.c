#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define MAX_ROW 100
#define MAX_COL 100


struct Point {

};


struct Line {

};



// QUESTION 1
bool isPrime(int num) // returns true or false
{
    for (int i = 2; i<num; i++)
    {
        if (num%i==0)
        {
            return false;
        }
    }
    return true;
}

// QUESTION 2 
void findPrimesInRange(int start, int end) { //prints the prime numbers in the range
    for (int i = start; i<=end; i++)
    {
        if (isPrime(i)==true)
        {
            printf("%d", i);
        }
    }  
}

// QUESTION 3
int greatestCommonDivisor(int a, int b) {
    int greatestdiv;
    int biggestnum;
    if (a>=b){
        biggestnum=a;
    }
    else{
        biggestnum=b;
    }
    
     for (int i = 0; i<biggestnum; i++)
    {
        if (a%i==0 && b%i==0)
        {
            greatestdiv=i;
        }
    }
    return greatestdiv;
}

int leastCommonMultiple(int a, int b) {
    int biggestnum;
    int LCM;
    if (a>=b){
        biggestnum=a;
    }
    else{
        biggestnum=b;
    } // returns lcm
    for (int i = 0; i < biggestnum; i++)
    {
        LCM = (a * b) / greatestCommonDivisor(a, b);
    }
    
}
/*
int calculateOKEK(int num1, int num2, int num3) {
    int okek;
    okek = leastCommonMultiple(num1, leastCommonMultiple(num2, num3));
    return okek;
}
*/

// QUESTION 4

/*
int calculateOBEB(int num1, int num2, int num3) {
    int obeb;
    obeb = greatestCommonDivisor(num1, greatestCommonDivisor(num2, num3));
    return obeb;
}
*/

// QUESTION 5
void findPrimeFactors(int num) { // prints the prime factors of the given number
    int factors[100];
    while (num !=1)
    {
        for (int i = 0; i < 100; i++)
        {
            
        }
        
    }
    
}

// QUESTION 6
int isTriangle(int a, int b, int c) { // returns 1 (for true) or 0 (for false)
    if((a + b > c)&&(b + c > a)
            &&(c + a > b)) {  
        return 1;
    } else {  
        return 0;
    }  
}

//QUESTION 7
double calculateDistance(struct Point p1, struct Point p2) { // returns distance between two points
    
}

// QUESTION 8
int collatz(int num) { // returns steps (int)

}

// QUESTION 9
int searchInArray(int arr[], int size, int target) { // returns count of the target number in the array
                                                   // should print the following part


    //printf("The number %d is found %d times in the array.\n", target, count);

    //printf("Found as the %dth element of the array.\n", position + 1);


    //return count;
}


// QUESTION 10
// Print the matrix
void printMatrix(int mat[MAX_ROW][MAX_COL], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// Calculate the sum of two matrices
int matrixAddition(int A[MAX_ROW][MAX_COL], int B[MAX_ROW][MAX_COL], int result[MAX_ROW][MAX_COL], int rows, int cols) {
// returns 1 for succes

}

// Calculate the multiplication of two matrices
int matrixMultiplication(int A[MAX_ROW][MAX_COL], int B[MAX_ROW][MAX_COL], int result[MAX_ROW][MAX_COL], int m, int n, int p) {
// returns 1 for succes

}



// QUESTION 11
struct Line calculateLine(struct Point p1, struct Point p2) {
//returns the line structure

}

int main() {
    int choice;
    int exit_flag = 1;
    while (exit_flag) {
        printf("Select a case ");
        printf("1. Check if the number is prime\n");
        printf("2. Find prime numbers between 1-2000\n");
        printf("3. Calculate the LCM of three positive numbers\n");
        printf("4. Calculate the GCD of three positive numbers\n");
        printf("5. Find the prime factors of the number\n");
        printf("6. Check if a triangle can be formed with three numbers\n");
        printf("7. Calculate the distance between two points\n");
        printf("8. Reduce the number to 1 with Collatz array\n");
        printf("9. Searching for a number in an array\n");
        printf("10. Calculate the sum and product of matrices\n");
        printf("11. Calculate the equation of a line through two points\n");
        printf("0. Exit\n");

        scanf("%d", &choice);
        printf("Choice is %d", choice );

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                int num;
                scanf("%d", &num);
                if (isPrime(num)) {
                    printf("%d is prime.\n", num);
                } else {
                    printf("%d is not prime.\n", num);
                }
                break;
            case 2:
                printf("Prime numbers between 1-2000\n");
                findPrimesInRange(1, 2000);
                printf("\n");
                break;
            case 3:
                printf("Enter three positive numbers: ");
                int num1, num2, num3;
                scanf("%d %d %d", &num1, &num2, &num3);
                int okek = calculateOKEK(num1, num2, num3);
                printf("OKEK = %d\n", okek);
                break;
            case 4:
                printf("Enter three positive numbers: ");
                int num1, num2, num3;
                scanf("%d %d %d", &num1, &num2, &num3);
                int obeb = calculateOBEB(num1, num2, num3);
                printf("OBEB = %d\n", obeb);
                break;
            case 5:
                printf("Enter a number: ");
                int num2;
                scanf("%d", &num2);
                printf("Prime factors of %d is: ", num2);
                findPrimeFactors(num2);
                printf("\n");
                break;
            case 6:
                printf("Enter three numbers (a, b, c): ");
                int a, b, c;
                scanf("%d %d %d", &a, &b, &c);
                if (isTriangle(a, b, c)) {
                    printf("It is a triangle.\n");
                } else {
                    printf("It is not a triangle.\n");
                }
                break;
            case 7:
                printf("Enter the x and y coordinates of the first point: ");
                struct Point point1, point2;
                scanf("%lf %lf", &point1.x, &point1.y);

                printf("Enter the x and y coordinates of the second point:: ");
                scanf("%lf %lf", &point2.x, &point2.y);

                double distance = calculateDistance(point1, point2);

                printf("Distance between two points: %.2lf\n", distance);
                break;

            case 8:
                printf("Enter a number: ");
                int num3;
                scanf("%d", &num3);
                int steps = collatz(num3);
                printf("%d number is reduced to 1 in %d steps.\n", num3, steps);
                break;
            case 9:
                printf("Enter array size: ");
                
                int arr[100], size, target;
                
                scanf("%d", &size);
                printf("Enter array elements:\n");

                for (int i = 0; i < size; i++) {
                    scanf("%d", &arr[i]);
                }
                printf("Enter the number to search for: ");
                scanf("%d", &target);
                int count = searchInArray(arr, size, target);
                if (count > 0) {
                    printf("%d is found %d times in the array.\n", target, count);
                } else {
                    printf("%d is not found in the array.\n", target);
                }
                break;
            case 10:
                printf("Enter the number of rows and columns of Matrix A:");

                int matA[MAX_ROW][MAX_COL], matB[MAX_ROW][MAX_COL], matResult[MAX_ROW][MAX_COL];
                int m, n, p;

                scanf("%d %d", &m, &n);
                printf("Enter the elements of matrix A: \n");
                for (int i = 0; i < m; ++i) {
                    for (int j = 0; j < n; ++j) {
                        scanf("%d", &matA[i][j]);
                    }
                }
                printf("Enter the number of rows and columns of Matrix B: ");
                scanf("%d %d", &n, &p);
                printf("Enter the elements of matrix B: \n");
                for (int i = 0; i < n; ++i) {
                    for (int j = 0; j < p; ++j) {
                        scanf("%d", &matB[i][j]);
                    }
                }

                if (matrixAddition(matA, matB, matResult, m, n)) {
                    printf("Matris A + Matris B =\n");
                    printMatrix(matResult, m, n);
                }

                if (matrixMultiplication(matA, matB, matResult, m, n, p)) {
                    printf("Matris A * Matris B =\n");
                    printMatrix(matResult, m, p);
                }
                break;
            case 11:

                printf("Enter the coordinates of two points (x1, y1, x2, y2): ");
                
                double x1_line, y1_line, x2_line, y2_line;

                scanf("%lf %lf %lf %lf", &x1_line, &y1_line, &x2_line, &y2_line);
                double slope, intercept;
                if (x1_line == x2_line) {
                    printf("These two points form a vertical line, the slope is undefined.\n");
                } else {
                    slope = (y2_line - y1_line) / (x2_line - x1_line);
                    intercept = y1_line - slope * x1_line;
                    printf("Equation of a line passing through two points:: y = %.2lfx + %.2lf\n", slope, intercept);
                }
                break;
            case 0:
                printf("Exiting.\n");
                exit_flag = 0;
                return 0;
            default:
                printf("You made an invalid choice.\n");
                break;
            
        }
    }

    return 0;
}






