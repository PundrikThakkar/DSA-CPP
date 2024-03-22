#include<iostream>
using namespace std;

int main(){
    // cout << "Everything is fine";
    int n;
    cout << "Enter the negative number:";
    cin >> n;

    int temp = -n;
    int binary = 0;
    int i = 0;
    while(temp!=0){
        int bit = temp & 1;
        temp = temp >> 1;
        binary = bit * pow(10, i) + binary;
        i++;
    }

    int power = 0;
    int reversed_ones_complement = 0;
    
    
    while(binary!=0){
        int bit = binary % 10;
        reversed_ones_complement = (reversed_ones_complement * 10) + (!bit);
        binary /= 10;
    }

    int number_of_bits_available = 0;
    int check_number_of_bits = reversed_ones_complement;
    while (check_number_of_bits  != 0)
    {
        number_of_bits_available++;
        check_number_of_bits /= 10;
    }

    int total_bits = 32;
    int number_of_one_need = total_bits - number_of_bits_available-1;

    long ones = 0;
    int p = 0;
    while (number_of_one_need >= 0)
    {
        ones = pow(10,p) + ones;
        cout << ones << endl;
        p++;
        number_of_one_need--;
    }

    int straight_complement = 1;
    int temp_power = number_of_bits_available;

    while (number_of_bits_available != 0)
    {
        int bit = reversed_ones_complement % 10;
        straight_complement = straight_complement * 10 + bit;
        number_of_bits_available--;
        reversed_ones_complement /= 10;
    }

    cout << straight_complement << endl;
    cout << ones;
}