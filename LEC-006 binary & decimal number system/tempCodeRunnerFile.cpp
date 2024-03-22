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
    int total_bits = 32;
    
    while(binary!=0){
        int bit = binary % 10;
        reverse_ones_complement = (reversed_ones_complement * 10) + (!bit);
        binary /= 10;
    }

    cout << reversed_ones_complement;