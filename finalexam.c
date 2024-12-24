//cat 2.
#include <stdio.h>
#include <stdlib.h>

struct students{
int studid[50];
char studname[50];
int studdpart;
char studfaculty;
};

int main(){
struct students St;
printf("Enter the student id");
scanf("%d",St.studid);
printf("Enter the student name");
scanf("%s",&St.studname);
printf("Enter the student department ");
scanf("%d",&St.studdpart);
printf("Enter the student faculty");
scanf("%s",&St.studfaculty);

printf("\nThe information of student are :\n");
printf(" Student ID: %d\n",St.studid);
printf(" Student Name: %s\n",St.studname);
printf("Student faculty:%d\n",St.studfaculty);

return 0;
}



//Question 2.

#include <stdio.h>

void selectionSort(int arr[], int n) {
int i, j, min_idx, temp;
for (i = 0; i < n-1; i++) {
min_idx = i;
for (j = i+1; j < n; j++)
if (arr[j] < arr[min_idx])
min_idx = j;
temp = arr[min_idx];
arr[min_idx] = arr[i];
arr[i] = temp;
}
}

int binarySearch(int arr[], int n, int x) {
int l = 0, r = n - 1;
while (l <= r) {
int m = l + (r - l) / 2;
if (arr[m] == x)
return m;
if (arr[m] < x)
l = m + 1;
else
r = m - 1;
}
return -1;
}

int main() {
int arr[] = {23, 45, 12, 5, 67, 100, 78};
int n = sizeof(arr)/sizeof(arr[0]);
int x = 67;

selectionSort(arr, n);
printf("Sorted array: ");
for (int i = 0; i < n; i++)
printf("%d ", arr[i]);
printf("\n");

int result = binarySearch(arr, n, x);
if(result != -1)
printf("Element %d is at index %d\n", x, result);
else
printf("Element %d not found\n", x);

    return 0;
}



//FAT.
#include <stdio.h>
#include<stdlib.h>
int main(){
int size;
printf("Enter the size of array:");
scanf("%d",&size);

int *array =(int *)malloc(size*sizeof(int));
if(array==NULL){
    printf("Memory allocation failed:\n");
    return 1;
}
printf("Enter %d integer numbers:\n ",size);
for(int i=0;i<size;i++){
    scanf("%d",&array[i]);

printf("The Elements of array is:\n");
for(int i=0;i<size;i++){
    printf("%d",array[i]);

}
}
printf("\n");

free(array);
return 0;

}




//2.
#include <stdio.h>
#include <stdlib.h>

int MAXSIZE =10;
int stack[8];
int top =-1;

int isfull(){
if(top==MAXSIZE)
return 1;
else
return 0;
}

int push(int data){
if(!isfull()){
top =top+1;
stack[top] =data;
}else{
printf("The stack is full.\n");
}
return 0;
}

int main(){
int i;
push(30);
push(85);
push(70);

printf("Stack Elements are:\n");
for(i=0;i<8;i++){
    printf("%d\n",stack[i]);
}
return 0;

}




//3.
#include <stdio.h>

void selectionsort(int arr[],int n){
int i,j,min_el,temp;

for(i=0;i<n-1;i++){
    min_el =i;

    for(j=i+1;j<n;j++){
        if(arr[j]<arr[min_el]){
            min_el =j;
        }
    }

    if(min_el !=i){
        temp =arr[i];
        arr[i] =arr[min_el ];
        arr[min_el] =temp;
    }
  }
}

int main(){
int arr[] ={13,35,2,15,47,90,68};
int n =sizeof(arr)/sizeof(arr[0]);

printf("Original array:\n");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
selectionsort(arr,n);
printf("\nSorted array:\n");
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
return 0;
}




//4
#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
if (n == 0 || n == 1) {
return 1;
} else {
return n * factorial(n - 1);
}
}

int main() {
int number;
printf("Enter a non-negative number: ");
scanf("%d", &number);

if (number < 0) {
printf("Invalid input! Please enter a non-negative number.\n");
} else {
int result = factorial(number);
printf("Factorial of %d is: %d\n", number, result);
}

    return 0;
}




//5.
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int data) {
if (rear == MAX - 1) {
printf("Queue overflow\n");
return;
}
if (front == -1) front = 0;
queue[++rear] = data;
}

int dequeue() {
if (front == -1 || front > rear) {
printf("Queue underflow\n");
return -1;
}
int data = queue[front++];
if (front > rear) front = rear = -1;
return data;
}

void displayQueue() {
if (front == -1) {
printf("Queue is empty\n");
return;
}
printf("Queue elements are: ");
for (int i = front; i <= rear; i++) {
printf("%d ", queue[i]);
}
printf("\nQueue size: %d\n", rear - front + 1);
}

int main() {
int choice, value;
do {
printf("\nQueue Operations:\n");
printf("1. Enqueue\n");
printf("2. Dequeue\n");
printf("3. Display\n");
printf("4. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);

switch (choice) {
case 1:
printf("Enter value to enqueue: ");
scanf("%d", &value);
enqueue(value);
break;
case 2:
value = dequeue();
if (value != -1) printf("Dequeued value: %d\n", value);
break;
case 3:
displayQueue();
break;
case 4:
printf("Exiting...\n");
break;
default:
printf("Invalid choice. Please try again.\n");
}
} while (choice != 4);

return 0;
}
