#include <stdio.h>
#include <math.h>


int sum_kvadrat ();             //task 3 from arrays
float sred_arifmet ();          // task 6
void sum_znakov (int arr[]);    // task 4
void change_sign (int arr[]);   // task 5
void fibonachi ();              // task 7
void first_A(int m);             // task 1


int main()
{
    //int arr[16]={7,-2,3,-4,0,5,-6,7,0,8,-9,10,-11,0,12,-13};
    //sum_kvadrat();
    //sred_arifmet ();
    //sum_znakov(arr);
    //change_sign (arr);
    //fibonachi ();
    
    first_A(10);
    return 0;
}


void first_A(int m){                                  // task 1 (first variant)
    int arr[16]={-5,12,2,-25,-3,4,8,-7,1,3,45,11,-9,12,3,0};
    int cat [16]={0};
    int i=0;
    
    for (int a=0; a<16; a++) {
        if (arr[a] > m) {
            
            cat[i] = arr[a];
            i++;
        }
    }
    printf("first number more than m is %d\n", cat[0]);
}


void first_A(int m){                                  // task 1 (second variant)
    int arr[16]={-5,12,2,-25,-3,4,8,-7,1,3,45,11,-9,12,3,0};
    
    for (int a=0; a<16; a++) {
        if (arr[a] > m) {
            printf("first number more than m is %d\n", arr[a]);
            break;
        }
    }
}




    void fibonachi (){               // task 7
    int arr[15]={0};
    arr[0]=1;
    arr[1]=1;
    
    for (int a=2; a<15; a++) {
        arr[a]=arr[a-1] + arr[a-2];
 
    }
    
    for (int a=0; a<15; a++)
    {
        printf("%d ", arr[a]);
    }
    printf("\n");

}




void change_sign (int arr[]){    // task 5 arrays
    int t=0;
    
    for (int a=0; a<15; a++) {
        if ((arr[a]>=0 && arr[a+1]<0) || (arr[a]<0 && arr[a+1]>=0)) {
            t++;
        }
        
    }
    printf("%d\n", t);
}
    

void sum_znakov (int arr[]){       // task 4 arrays
    int x=0;
    int y=0;
    int z=0;
    for (int a=0; a<16; a++) {
        if (arr[a]>0) {
            x=x+1;
        }
        else if (arr[a]<0){
            y=y+1;
        }
        else {
            z=z+1;
        }
        
    }
    printf("sum polozhit is %d, sum otrisatel is %d, sum nuley is %d\n", x,y,z);
}



float sred_arifmet ()   // task 6 from arrays
{
    int arr[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    float sum=0;
    float sred=0;
    for (int a=0; a<16; a++)
    {
        sum = sum + arr[a];
    }
    sred = sum/16;
    printf("sred arifmet is %.2f\n", sred);
    return sred;
}


int sum_kvadrat ()       //task 3 from arrays
{
    int arr[16]={-5,12,2,-25,-3,4,8,-7,1,3,45,11,-9,12,3,0};
    int b=0;
    for (int a=0; a<16; a++)
    {
        if (abs(arr[a])<=5)
        {
            b=b + arr[a]*arr[a];
        }

    }
    printf("sum_kvadrat is %d\n", b);
    return b;
}