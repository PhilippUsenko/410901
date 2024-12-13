#include <iostream>
using namespace std;

int* sieveOfEratosthenes(int p, int &prime_count) 
{
    int* arr = new int[p + 1];
    for (int i = 0; i <= p; i++) arr[i] = i;

    for (int i = 2; i * i <= p; i++) 
    {
        if (arr[i]) 
        { 
            for (int j = i * i; j <= p; j += i) 
            {
                arr[j] = 0; 
            }
        }
    }
 
    for (int i = 2; i <= p; i++) 
    {
        if (arr[i]) prime_count++;
    }

    int* primes = new int[prime_count];
    int idx = 0;
    for (int i = 2; i <= p; i++) {
        if (arr[i]) primes[idx++] = arr[i];
    }

    delete[] arr; 
    return primes; 
}


int* findSemiprimes(int* primes, int prime_count, int p, int& semiprime_count) 
{
    int* semiprimes = new int[p + 1]; 
    for (int i = 0; i < prime_count; i++) 
    {
        for (int j = i; j < prime_count; j++) 
        { 
            int semiprime = primes[i] * primes[j];
            if (semiprime <= p) 
            {
                semiprimes[semiprime_count++] = semiprime;
            }
            else 
            {
                break; 
            }
        }
    }
    return semiprimes;
}


void sortAndRemoveDuplicates(int* arr, int& count) 
{
    for (int i = 0; i < count - 1; i++) 
    {
        for (int j = i + 1; j < count; j++) 
        {
            if (arr[i] > arr[j]) 
            {
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }

    int unique_count = 0;
    for (int i = 0; i < count; i++) 
    {
        if (i == 0 || arr[i] != arr[i - 1]) 
        {
            arr[unique_count++] = arr[i];
        }
    }
    count = unique_count; 
}


int main() 
{
    setlocale(LC_ALL, "ru");

    int p;
    cout << "Введите P:" << endl;
    cin >> p;
    cout << endl;


    int prime_count = 0;
    int* primes = sieveOfEratosthenes(p, prime_count);


    cout << "Все простые числа до P:" << endl;
    for (int i = 0; i < prime_count; i++) 
    {
        cout << primes[i] << " ";
    }
    cout << endl << endl;


    int semiprime_count = 0;
    int* semiprimes = findSemiprimes(primes, prime_count, p, semiprime_count);


    sortAndRemoveDuplicates(semiprimes, semiprime_count);


    cout << "Все полупростые числа до P:" << endl;
    for (int i = 0; i < semiprime_count; i++) 
    {
        cout << semiprimes[i] << " ";
    }
    cout << endl;

    delete[] primes;
    delete[] semiprimes;

    return 0;
}
