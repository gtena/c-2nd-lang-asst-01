//
//C Assignment 1 Gabriel Tena 2/24/19
//

#include <stdio.h>
#include <stdlib.h>


int num = 10;
int num2 = 20;
int * p;

float f1 = 1.5;
float f2 = 4.7;
float * f;

char c1 = 'a';
char c2 = 'b';
char * c;

int i = 9;
int j = 12;

void wont_change(char c1) {
    c1 = 'f';
}
void change_inside(char *c1) {
    *c1 = 'f'; // dereference and assign a new value
}

//void changevar(int j) {
    //j = j;
    //*j =  24;

//}

int will_return_it_changed(int i) {
    return i + 1;
}

int iarray[10];
float farray[] = { 0.5, 8.6, 9.1, 4.7, 5.2, 3.21 };
char cstring[] = "abracadabra";

void swap_ends(int iarr[], int size) {
    // standard safe swap code
    int tmp = iarr[0];          // remember that iarr is of type int*, but iarr[n] is int
    iarr[0] = iarr[size - 1];
    iarr[size - 1] = tmp;
}

struct collector_cars {
    char make [10];
    char model [10];
    int year;
    float price;
};

struct movies {
    char name [30];
    int run_time;
    float star_rating;
    int year_made;

};

int main() {

    //printf("%d\n", &num);
    //printf("%d\n", &num2);

    //p = &num;
    //*p = 12;
    //printf("%d\n", num);

    //p = &num2;
    //*p = 26;
    //printf("%d\n", num2);

    //num2 = num;
    //printf("%d\n", num2);
    //printf("%f\n", f1);

    //f = &f1;
    //*f = 2.4;
    //printf("%f\n", f1);

    //f = &f2;
    //f1 = *f;
    //printf("%f\n", f1);

    //c = &c1;
    //*c = 'd';
    //printf("%c\n", c1);
    //printf("%d\n", &c);
//*************
    //printf("%c\n", c1);
    //wont_change(c1);
    //printf("%c\n", c1);
    //change_inside(&c1);
    //printf("%c\n", c1);

    //printf("%d\n", j);
    //changevar(j);
    //printf("%d\n", j);

    //printf("%d\n", i);
    //i = will_return_it_changed(i);
    //printf("%d\n", i);
//*************

    //for (int i = 0; i < 10; i ++) {
    //iarray[i] = 1 + i;
    //printf("%d\n", iarray[i]);
    //}

    //iarray[5] = 6;
    //int *jarr = iarray;//pointer to array
    //jarr[5] = jarr[5] + 1;//change value of element
    //jarr[4] = jarr[4] + 4;
    //printf("The 5th element in the array is %d\n", iarray[4]);
    //printf("The 6th element in the array is %d\n", iarray[5]);
    //printf("The 7th element in the array is %d\n", iarray[6]);

    //printf("The element at index 7 is: %d\n", iarray[6]);
    //int arr_size = sizeof(iarray) / sizeof(iarray[0]);
    //int arr_size = sizeof(iarray);
    //printf("Number of elements in the array is %d\n", arr_size);
    //printf("Number of bytes in the array is %d\n", arr_size);
    //for (int i = 0; i < 11; i ++) {
    //printf("%c,", cstring[i]);

    //}

    //for (int i = 0; i < 6; i++) {
    //printf("%f,\n", farray[i]);
    //}
//*********************

    //int iarray[] = { 3, 4, 7, 1, 23 };

    //printf("Start: %d; End: %d\n", iarray[0], iarray[2]);
    //swap_ends(iarray, 3);
    //printf("Start: %d; End: %d\n", iarray[0], iarray[2]);
    //printf("Start: %d; End: %d\n", iarray[0], iarray[4]);
    //swap_ends(iarray, 5);
    //printf("Start: %d; End: %d\n", iarray[0], iarray[4]);

//*********************

    //struct collector_cars mustang = {"Ford", "Mustang", 1964 , 30000};
    //struct collector_cars porsche = {"Dodge", "Charger", 1969, 50000};
    //struct collector_cars camaro = {"Chevy", "Camaro", 1970, 45000};
    //printf("%s %s %d %f\n", mustang.make, mustang.model, mustang.year, mustang.price);
    //printf("%s %s %d %f\n", porsche.make, porsche.model, porsche.year, porsche.price);
    //printf("%s %s %d %f\n\n", camaro.make, camaro.model, camaro.year, camaro.price);
    //struct collector_cars *collector_car_pointer = &mustang; //pointer to struct mustang
    //printf("%s %s %d %f\n", (*collector_car_pointer).make,
    //                        (*collector_car_pointer).model,
    //                        (*collector_car_pointer).year,
    //                        (*collector_car_pointer).price);


    //typedef struct movies movies_t;
    //movies_t godfather = {"The Godfather", 3, 5, 1972};
    //struct movies Forrest = {"Forrest Gump", 2, 4.5, 1994};
    //struct movies mib = {"Men in Black", 2, 3.75, 1997};
    //struct movies rocky = {"Rocky", 2, 4, 1979};
    //printf("%s %d %f %d\n", Forrest.name, Forrest.run_time, Forrest.star_rating, Forrest.year_made);
    //printf("%s %d %f %d\n", mib.name, mib.run_time, mib.star_rating, mib.year_made);
    //printf("%s %d %f %d\n", godfather.name, godfather.run_time, godfather.star_rating, godfather.year_made);

//**********************
    /*
    // explicit allocation of an integer on the heap
    int *array_size = (int *) malloc(sizeof(int));
    int size = 8;

    // check if the allocation was successful
    // if it was, the pointer will be non-NULL
    if (array_size == NULL) {
        printf("ERROR: Memory allocation failed!\n");
        return 1;
    } else {
        *array_size = 20;
    }

    // explicit allocation of an integer array on the heap
    int *int_array = (int *) malloc(*array_size * sizeof(int));

    // check if the allocation was successful
    // if it was, the pointer will be non-NULL
    if (int_array == NULL) {
        printf("ERROR: Memory allocation failed!\n");
        return 0;
    } else {
        for (int i = 0; i < *array_size; i ++) {
            int_array[i] = i * 15;  //5 gives an error?
            printf("Array element %d holds %d\n", i, int_array[i]);
        }
    }

    // free the allocated memory:
    // dynamically allocated memory
    // has to be released explicitly
    free(array_size);
    array_size = NULL; // this is good practice in case
    // the pointer might get reused

    free(int_array);
    int_array == NULL;
    */

//************************

    /*float *data = (float *) malloc(sizeof(float) * 1000); // primitive
    if (data != NULL) {
        printf("Allocation a success\n");
        // use data...
    }
    free(data);
    data = NULL;

    double **square_table;  // the type of square_table is double **,
    // that is, a double pointer to double (LOL!)
    square_table = (double **) malloc(sizeof(double *) * 100);    // allocate the 1st dimension
    // notice the cast and base size!!
    if (square_table != NULL) {
        for (int i=0; i<100; i++)
            square_table[i] = (double *) malloc(sizeof(double) * 100); // allocate the 2nd dimension
                                                                       // use the 2D array
                                                            // technically, you should check if the allocations worked
    }
    else {
        printf("Oops, something went wrong!");
    }
// for the second dimension, you need to call free() in a loop!!
    for (int i=0; i<1000; i++) {
        free(square_table[i]);
        square_table[i] = NULL;
    }
// now you can free the first dimension
    free(square_table);
    square_table = NULL;

    //student_p roster = (student_p) malloc(sizeof(student_t) * 35); // notice the base type
    // and the pointer (array) type
    //if (roster) {  // notice that "if (roster) {}" is equivalent to "if (roster != NULL) {}"
        // use student roster...
    //}
    //free (roster);
     */

//***************************

    double ***data_cube;

// allocate 1st dimension
    data_cube = (double ***) malloc(sizeof(double **) * 1000);

// allocate 2nd dimension
    for (int i = 0; i < 1000; i++)
        data_cube[i] = (double **) malloc(sizeof(double *) * 1000);

// allocate 3rd dimension
    for (int i = 0; i < 1000; i++)
        for (int j = 0; j < 1000; j++)
            data_cube[i][j] = (double *) malloc(sizeof(double) * 1000);

// use the data cube...
    for (double **i = 0; i < data_cube[j]; i++) {
        data_cube[j] = i + 1;
        printf("CUBE HOLDS %d\n", data_cube[j]);
    }

// free 3rd dimension
    for (int i = 0; i < 1000; i++)
        for (int j = 0; j < 1000; j++)
            free(data_cube[i][j]);

// free 2nd dimension
    for (int i = 0; i < 1000; i++)
        free(data_cube[i]);

// free 1st dimension
    free(data_cube);
    return 0;
}
