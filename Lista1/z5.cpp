#include <iostream>

void max_min(int a[], int n)
{
    int min=a[0];
    int max=a[0];

    for(int i=0; i<n; i+=2){
        if(a[i] > a[i+1])
           {
               if(a[i] > max) 
                    max = a[i];

               if(a[i+1] < min)
                    min = a[i+1];
           }
        else
        {
            if(a[i] < min) 
                min = a[i];

            if(a[i+1] > max) 
                max = a[i+1];
        }
    }
    std::cout <<"Min: "<< min << std::endl;
    std::cout <<"Max: "<< max << std::endl;

}
int main()
{
    int a[] = {3, 7, -5, 6, 12, -9, 8, 0, -1};
    int n = sizeof(a)/sizeof(a[0]);
    max_min(a, n);
    return 0;
}